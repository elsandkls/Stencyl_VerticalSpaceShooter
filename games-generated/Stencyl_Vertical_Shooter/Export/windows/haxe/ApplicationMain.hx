package;

import com.stencyl.Config;
import com.stencyl.Data;
import com.stencyl.Engine;
import com.stencyl.Input;
import com.stencyl.utils.motion.*;
import com.stencyl.utils.Utils;
#if stencyltools
import com.stencyl.utils.ToolsetInterface;
#end

import haxe.CallStack;
import haxe.Timer;

import lime.system.System;

import openfl.Lib;
import openfl.display.Application;
import openfl.display.Preloader;
import openfl.display.StageDisplayState;
import openfl.events.UncaughtErrorEvent;
import openfl.events.ErrorEvent;
import openfl.errors.Error;

import scripts.StencylPreloader;

using StringTools;

@:access(Universal)
@:access(lime.app.Application)
@:access(lime.system.System)
@:access(lime.utils.AssetLibrary)

@:dox(hide) class ApplicationMain
{
	private static var app:Application;
	private static var universal:Universal;
	
	public static function main ()
	{
		#if cppia
		if(StencylCppia.gamePath != null)
			Sys.setCwd(StencylCppia.gamePath);
		#end
		Universal.am = ApplicationMain;
		Universal.setupTracing(true);

		Config.load();
		Input.loadInputConfig();
		Universal.setupTracing();
		
		System.__registerEntryPoint ("Stencyl_Vertical_Shooter", create);
		
		Lib.current;

		#if stencyltools
		new ToolsetInterface();
		#end

		#if html5
		//application is started from html script with System.embed, which calls create(config)
		#else
		create (null);
		#end

	}

	public static var reloadListeners = new Array<Void->Void>();

	public static function reloadGame()
	{
		for(reloadListener in reloadListeners)
		{
			reloadListener();
		}

		com.stencyl.behavior.Script.resetStatics();
		com.stencyl.graphics.G.resetStatics();
		com.stencyl.models.Actor.resetStatics();
		com.stencyl.models.Font.resetStatics();
		com.stencyl.models.GameModel.resetStatics();
		com.stencyl.models.Joystick.resetStatics();
		com.stencyl.models.SoundChannel.resetStatics();
		com.stencyl.models.actor.Animation.resetStatics();
		com.stencyl.models.actor.Collision.resetStatics();
		com.stencyl.models.actor.CollisionPoint.resetStatics();
		com.stencyl.models.collision.CollisionInfo.resetStatics();
		com.stencyl.models.scene.TileLayer.resetStatics();
		#if flash com.stencyl.utils.Kongregate.resetStatics(); #end
		com.stencyl.utils.motion.TweenManager.resetStatics();
		com.stencyl.utils.Utils.resetStatics();
		#if stencyltools com.stencyl.utils.ToolsetInterface.resetStatics(); #end
		com.stencyl.Data.resetStatics();
		com.stencyl.Input.resetStatics();
		com.stencyl.Engine.resetStatics();
		Lib.current.removeChild(universal);

		Input.loadInputConfig();
		universal = new Universal();
		Lib.current.addChild(universal);
		universal.preloaderComplete();
	}

	public static function create (config):Void
	{
		#if stencyltools
		{
			var startTime = Timer.stamp();
			var tryTimeout = function() {
				if(!ToolsetInterface.connected && Timer.stamp() - startTime > #if flash 5 #else 2 #end)
				{
					ToolsetInterface.cancelConnection();
				}
			};

			#if (flash || html5)

			if(!ToolsetInterface.ready)
			{
				var timer = new Timer(10);
				timer.run = function()
				{
					#if !flash
					ToolsetInterface.preloadedUpdate();
					#end

					tryTimeout();
					if(ToolsetInterface.ready)
					{
						timer.stop();
						create (config);
					}
				}

				return;
			}

			#else

			while(!ToolsetInterface.ready)
			{
				ToolsetInterface.preloadedUpdate();
				tryTimeout();
			}

			#end
		}
		#end

		app = new Application ();
		
		ManifestResources.init (config);
		
		app.meta["build"] = "1";
		app.meta["company"] = "Stencyl";
		app.meta["file"] = "Stencyl_Vertical_Shooter";
		app.meta["name"] = "Stencyl_Vertical_Shooter";
		app.meta["packageName"] = "com.example.myapp";
		app.meta["version"] = "1.0.0";
		
		
		
		#if !flash
		
		var attributes:lime.ui.WindowAttributes = {
			
			allowHighDPI: false,
			alwaysOnTop: false,
			borderless: false,
			// display: 0,
			element: null,
			frameRate: 65,
			#if !web fullscreen: false, #end
			height: 480,
			hidden: false,
			maximized: false,
			minimized: false,
			parameters: {},
			resizable: false,
			title: "Stencyl_Vertical_Shooter",
			width: 640,
			x: null,
			y: null,
			
		};
		
		attributes.context = {
			
			antialiasing: Config.antialias ? 2 : 0,
			background: 0,
			colorDepth: 32,
			depth: true,
			hardware: true,
			stencil: true,
			type: null,
			vsync: true
			
		};
		
		if (app.window == null) {
			
			if (config != null) {
				
				for (field in Reflect.fields (config)) {
					
					if (Reflect.hasField (attributes, field)) {
						
						Reflect.setField (attributes, field, Reflect.field (config, field));
						
					} else if (Reflect.hasField (attributes.context, field)) {
						
						Reflect.setField (attributes.context, field, Reflect.field (config, field));
						
					}
					
				}
				
			}
			
		}
		
		app.createWindow (attributes);
		
		#else
		
		app.window.context.attributes.background = 0;
		app.window.frameRate = 65;
		
		#end
		
		if(!Config.releaseMode)
		{
			Lib.current.loaderInfo.uncaughtErrorEvents.addEventListener(UncaughtErrorEvent.UNCAUGHT_ERROR, uncaughtErrorHandler);
		}
		
		Universal.initWindow(app.window);
		universal = new Universal();
		Lib.current.addChild(universal);
		var imgBase = Engine.IMG_BASE;
		
		#if sys
		var preloadPaths = Utils.getConfigText("config/preloadPaths.txt");
		for(library in ManifestResources.preloadLibraries)
		{
			for(path in preloadPaths.split("\n"))
			{
				if(path.length == 0)
					continue;
				path = path.replace("IMG_BASE", imgBase);
				library.preload.set(path, true);
			}
		}
		#end
		
		#if actuate
		motion.actuators.SimpleActuator.getTime = function():Float {
			return Engine.totalElapsedTime / 1000;
		}
		#end

		var preloader = new StencylPreloader();
		preloader.onComplete.add(universal.preloaderComplete);
		app.preloader.onProgress.add(preloader.onUpdate);
		app.preloader.onComplete.add(preloader.onLoaded);
		
		for (library in ManifestResources.preloadLibraries)
		{
			app.preloader.addLibrary (library);
		}
		for (name in ManifestResources.preloadLibraryNames)
		{
			app.preloader.addLibraryName (name);
		}

		app.preloader.load ();
		
		var result = app.exec ();

		#if (sys && !ios)
		System.exit (result);
		#end
	}

	static function uncaughtErrorHandler(event:UncaughtErrorEvent):Void
	{
		#if (html5 && stencyltools)
		
		if(Config.useGciLogging && Reflect.hasField(event.error, "stack"))
		{
			trace(event.error.stack);
		}
		
		#else
		
		if (Std.is(event.error, Error))
		{
			trace(cast(event.error, Error).getStackTrace());
		}
		else if (Std.is(event.error, ErrorEvent))
		{
			trace(cast(event.error, ErrorEvent).text);
		}
		else
		{
			trace(event.error.toString());
		}
		
		#end
		
		#if (debug && stencyltools && cpp)
		
		trace(CallStack.toString(CallStack.exceptionStack()));
		ToolsetInterface.preloadedUpdate();
		
		#end
	}
}