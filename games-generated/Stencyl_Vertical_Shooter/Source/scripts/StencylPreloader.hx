package scripts;

import openfl.Lib;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Loader;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.ProgressEvent;
import openfl.events.MouseEvent;
import openfl.geom.Rectangle;
import openfl.text.TextField;
import openfl.net.URLRequest;

import com.stencyl.Config;
import com.stencyl.Engine;
import com.stencyl.utils.Utils;

@:access(openfl.display.LoaderInfo)

class StencylPreloader extends Sprite
{
	#if(flash || js)
	
	private var barBorder:Sprite;
	private var bar:Sprite;
	private var barBackground:Sprite;
	private var background:Sprite;
	private var barWidth:Int;
	private var barHeight:Int;
	
	private var locked:Bool;
	
	#end
	
	public var onComplete = new lime.app.Event<Void->Void>();
	private var adPlaying:Bool;
	private var ready:Bool;
	
	public function new()
	{
		super();
		
		Lib.current.addChild(this);
		
		#if(flash || js)
		
		locked = false;
		
		var gameScale = Engine.SCALE;
	
		//Site Lock & URL
		var siteLock = false;
		var lockURL = "";
		var url = "";
	
		//Background Color && Image
		var showSplash = 1;
		var backgroundColor = -15592942;
	
		background = new Sprite();
		background.graphics.beginFill(backgroundColor, 1);
		background.graphics.drawRect(0, 0, getWidth(), getHeight());
		addChild(background);
		
		if(false)
		{
			Utils.getConfigBitmap("config/preloader-bg.png")
				.onComplete(function (bmp) {
					addChild(bmp);
			});
		}
		
		#if flash
		if(false)
		{
			adPlaying = true;
			
			
			return;
		}
		#end
		
		//Bar
		var barBorderColor = -12303292;
		var barBackgroundColor = -12303292;
		var barColor = -7829368;
	
		var borderThickness = gameScale * 2;
		barWidth = Std.int(gameScale * Engine.screenScaleX * 120);
		barHeight = Std.int(gameScale * Engine.screenScaleY * 8);
	
		var offsetX = gameScale * 0;
		var offsetY = gameScale * 0;
	
		var barX = getWidth() / 2 - barWidth / 2;
		var barY = getHeight() / 2 - barHeight / 2;
		
		barBorder = new Sprite();
		barBorder.graphics.beginFill(barBorderColor, 1);
		barBorder.graphics.drawRect(-borderThickness, -borderThickness, barWidth + borderThickness * 2, barHeight + borderThickness * 2);
		barBorder.x = barX + offsetX;
		barBorder.y = barY + offsetY;
		addChild(barBorder);
	
		barBackground = new Sprite();
		barBackground.graphics.beginFill(barBackgroundColor, 1);
		barBackground.graphics.drawRect(0, 0, barWidth, barHeight);
		barBackground.x = barX + offsetX;
		barBackground.y = barY + offsetY;
		barBackground.scaleX = 1;
		addChild(barBackground);
	
		bar = new Sprite();
		bar.graphics.beginFill(barColor, 1);
		bar.graphics.drawRect(0, 0, barWidth, barHeight);
		
		//Setting scaleX = 0 was buggy on HTML5, so we clip instead
		var r = new Rectangle(0, 0, 0, barHeight);
		bar.scrollRect = r;
		
		bar.x = barX + offsetX;
		bar.y = barY + offsetY;
		addChild(bar);
		
		#if(flash || html5)
		if(true)
		{
			Utils.getConfigBitmap("config/preloader-badge.png")
				.onComplete(function (bmp) {
					addChild(bmp);
					bmp.x = getWidth() - 114 - 5;
					bmp.y = getHeight() - 62 - 5;
			});
		}
		#end
	
		if(getURL() != "")
		{
			addEventListener(MouseEvent.MOUSE_DOWN, onMouseDown, false, 2);
		}
		
		//---
		
		var lockURL = getLockURL();
		
		if(isSiteLocked() && (lockURL != null && lockURL != ""))
		{
			var ok = false;
			var currURL = Lib.current.loaderInfo.url;
			
			if(currURL == null)
			{
				ok = true;
				//trace("Local - HTML5");
			}
			
			else if(currURL.indexOf("http://") < 0 && currURL.indexOf("https://") < 0)
			{
				ok = true;
				//trace("Local - Flash");
			}
			
			//TODO: What if the site's URL coincidentally contains localhost? Tricked.
			else if((currURL.indexOf("stencyl.com") > 0) || (currURL.indexOf("localhost") > 0))
			{
				ok = true;
				//trace("OK - Stencyl.com or localhost");
			}
			
			if(!ok)
			{
				//site lock value can be a comma delimited list of sites
				var siteArray = lockURL.split(",");	
				
				//check to see if we're playing from a valid site
				for(site in siteArray)
				{
					site = StringTools.trim(site);
					if(currURL != null && currURL.indexOf(site) >= 0)
					{
						ok = true;
					}
				}
				
				//no matches found, show the error message
				if(!ok)
				{
					showLockScreen(siteArray[0]);
					return;
				}
			}	
		}
		
		#end
	}
	
	#if(flash || js)
	
	public function getLockURL():String
	{
		return "";
	}
	
	public function isSiteLocked():Bool
	{
		return false;
	}
	
	public function showLockScreen(realURL:String)
	{
		//trace("Show Lock Screen");
		locked = true;
		
		com.stencyl.utils.Utils.removeAllChildren(this);
	
		var tmp = new Bitmap(new BitmapData(Std.int(getWidth()), Std.int(getHeight()), false, 0x565656));
		addChild(tmp);

		var txt = new TextField();
		txt.width = getWidth() - 16;
		txt.height = getHeight() - 16;
		txt.x = 8;
		txt.y = 8;
		txt.textColor = 0xffffff;
		txt.multiline = true;
		txt.wordWrap = true;
	
		var lockText = "Hi there!  It looks like somebody copied this game without my permission. Just click anywhere, or copy-paste this URL into your browser.\n\n"+realURL+"\n\nThanks, and have fun!";
		txt.text = lockText;
		addChild(txt);
		
		removeEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
		txt.addEventListener(MouseEvent.CLICK, goToLockURL);
		tmp.addEventListener(MouseEvent.CLICK, goToLockURL);
	}
	
	public function getURL():String
	{
		return "";
	}
	
	public function goToLockURL(e:MouseEvent):Void
	{
		Lib.getURL(new URLRequest(getLockURL()), "_parent");
	}
	
	public function onMouseDown(e:MouseEvent):Void
	{
		removeEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
		Lib.getURL(new URLRequest(getURL()), "_blank");
	}
	
	public function getBackgroundColor():Int
	{
		return 0x336699;
	}
	
	public function getWidth():Float
	{
		return Universal.windowWidth;
	}
	
	public function getHeight():Float
	{
		return Universal.windowHeight;
	}
	
	#if(flash)
	
	#end
	
	#end
	
	public function onUpdate(loaded:Int, total:Int)
	{
		#if !flash
		Lib.current.loaderInfo.__update (loaded, total);
		#end
		
		#if(flash || js)
		var percentLoaded = loaded / total;
	
		if(percentLoaded > 1)
		{
			percentLoaded == 1;
		}
	
		if(bar != null)
		{
			//This approach was buggy on HTML5
			//bar.scaleX = percentLoaded;
			
			var r = new Rectangle(0, 0, barWidth * percentLoaded, barHeight);
			bar.scrollRect = r;
		}
		#end
	}
	
	public function onLoaded()
	{
		#if !flash
		Lib.current.loaderInfo.__complete ();
		#end
		
		ready = true;
		if(!adPlaying)
		{
			unload();
		}
	}
	
	public function adFinished()
	{
		adPlaying = false;
		if(ready)
		{
			unload();
		}
	}
	
	public function unload()
	{
		new scripts.SplashBox();
		
		#if(flash || js)
		if(isSiteLocked() && locked)
		{
			return;
		}
		#end
		
		if(parent == Lib.current)
		{
			Lib.current.removeChild(this);
		}
		
		Lib.current.stage.focus = null;
		
		onComplete.dispatch();
	}
}