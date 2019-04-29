package scripts;

import com.stencyl.graphics.G;
import com.stencyl.graphics.BitmapWrapper;

import com.stencyl.behavior.Script;
import com.stencyl.behavior.Script.*;
import com.stencyl.behavior.ActorScript;
import com.stencyl.behavior.SceneScript;
import com.stencyl.behavior.TimedTask;

import com.stencyl.models.Actor;
import com.stencyl.models.GameModel;
import com.stencyl.models.actor.Animation;
import com.stencyl.models.actor.ActorType;
import com.stencyl.models.actor.Collision;
import com.stencyl.models.actor.Group;
import com.stencyl.models.Scene;
import com.stencyl.models.Sound;
import com.stencyl.models.Region;
import com.stencyl.models.Font;
import com.stencyl.models.Joystick;

import com.stencyl.Engine;
import com.stencyl.Input;
import com.stencyl.Key;
import com.stencyl.utils.Utils;

import openfl.ui.Mouse;
import openfl.display.Graphics;
import openfl.display.BlendMode;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import openfl.events.TouchEvent;
import openfl.net.URLLoader;

import box2D.common.math.B2Vec2;
import box2D.dynamics.B2Body;
import box2D.dynamics.B2Fixture;
import box2D.dynamics.joints.B2Joint;

import motion.Actuate;
import motion.easing.Back;
import motion.easing.Cubic;
import motion.easing.Elastic;
import motion.easing.Expo;
import motion.easing.Linear;
import motion.easing.Quad;
import motion.easing.Quart;
import motion.easing.Quint;
import motion.easing.Sine;

import com.stencyl.graphics.shaders.BasicShader;
import com.stencyl.graphics.shaders.GrayscaleShader;
import com.stencyl.graphics.shaders.SepiaShader;
import com.stencyl.graphics.shaders.InvertShader;
import com.stencyl.graphics.shaders.GrainShader;
import com.stencyl.graphics.shaders.ExternalShader;
import com.stencyl.graphics.shaders.InlineShader;
import com.stencyl.graphics.shaders.BlurShader;
import com.stencyl.graphics.shaders.SharpenShader;
import com.stencyl.graphics.shaders.ScanlineShader;
import com.stencyl.graphics.shaders.CSBShader;
import com.stencyl.graphics.shaders.HueShader;
import com.stencyl.graphics.shaders.TintShader;
import com.stencyl.graphics.shaders.BloomShader;



class Design_16_16_WaveMotion extends ActorScript
{
	public var _StartX:Float;
	public var _Wavelength:Float;
	public var _Amplitude:Float;
	public var _Direction:String;
	public var _StartY:Float;
	public var _StartingSpeed:Float;
	public var _Wavenumber:Float;
	
	
	public function new(dummy:Int, actor:Actor, dummy2:Engine)
	{
		super(actor);
		nameMap.set("Actor", "actor");
		nameMap.set("Start X", "_StartX");
		_StartX = 0.0;
		nameMap.set("Wavelength", "_Wavelength");
		_Wavelength = 128.0;
		nameMap.set("Amplitude", "_Amplitude");
		_Amplitude = 64.0;
		nameMap.set("Direction", "_Direction");
		_Direction = "Horizontal";
		nameMap.set("Start Y", "_StartY");
		_StartY = 0.0;
		nameMap.set("Starting Speed", "_StartingSpeed");
		_StartingSpeed = 5.0;
		nameMap.set("Wavenumber", "_Wavenumber");
		_Wavenumber = 0.0;
		
	}
	
	override public function init()
	{
		
		/* ======================== When Creating ========================= */
		actor.makeAlwaysSimulate();
		_Wavenumber = asNumber(((2 * Math.PI) / _Wavelength));
		propertyChanged("_Wavenumber", _Wavenumber);
		_StartX = asNumber(actor.getXCenter());
		propertyChanged("_StartX", _StartX);
		_StartY = asNumber(actor.getYCenter());
		propertyChanged("_StartY", _StartY);
		if((_Direction == "Horizontal"))
		{
			actor.setXVelocity(_StartingSpeed);
		}
		else
		{
			actor.setYVelocity(_StartingSpeed);
		}
		
		/* ======================== When Updating ========================= */
		addWhenUpdatedListener(null, function(elapsedTime:Float, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				if((_Direction == "Horizontal"))
				{
					actor.setY((_StartY + ((_Amplitude * Math.sin((_Wavenumber * (_StartX - actor.getXCenter())) )) - (actor.getHeight()/2))));
				}
				else if((_Direction == "Vertical"))
				{
					actor.setX((_StartX + ((_Amplitude * Math.sin((_Wavenumber * (_StartY - actor.getYCenter())) )) - (actor.getWidth()/2))));
				}
			}
		});
		
	}
	
	override public function forwardMessage(msg:String)
	{
		
	}
}