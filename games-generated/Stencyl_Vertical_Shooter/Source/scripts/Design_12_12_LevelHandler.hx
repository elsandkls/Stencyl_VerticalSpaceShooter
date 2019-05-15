package scripts;

import com.stencyl.graphics.G;
import com.stencyl.graphics.BitmapWrapper;
import com.stencyl.graphics.ScaleMode;

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

import com.stencyl.Config;
import com.stencyl.Engine;
import com.stencyl.Input;
import com.stencyl.Key;
import com.stencyl.utils.motion.*;
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
import box2D.collision.shapes.B2Shape;

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



class Design_12_12_LevelHandler extends SceneScript
{
	public var _LastMetorSmall:Actor;
	public var _LastMetorLarge:Actor;
	public var _LastPowerUp:Actor;
	public var _LastAlien:Actor;
	public var _activeCountofAlien:Float;
	public var _activeCountofPU:Float;
	public var _activeCountofLrgComet:Float;
	public var _activeCountofSmComet:Float;
	public var _PowerLevel_PC:Float;
	public var _LastAlienGun:Actor;
	public var _LastProjectile:Actor;
	public var _ProjectileSpeed:Float;
	public var _PCShip:Actor;
	public var _DefaultPCShipX:Float;
	public var _DefaultPCShipY:Float;
	public var _Speed:Float;
	public var _RayGunPositionX:Float;
	public var _RayGunPositionY:Float;
	public var _OffSetX:Float;
	public var _PowerLevel_Alienl:Float;
	public var _PCScore:Float;
	public var _FontSpacing:Float;
	public var _PtsLrgComet:Float;
	public var _PtsSmComet:Float;
	public var _PtsPowerUp:Float;
	public var _HUDShipScore:Actor;
	public var _HUDAlienScore:Actor;
	public var _HUDPowerLevel:Actor;
	public var _activeCountofActors:Float;
	public var _CountRedRay:Float;
	public var _CountedGreenRay:Float;
	public var _AlienScore:Float;
	public var _PtsPCShip:Float;
	public var _PtsAlienShip:Float;
	public var _HUDSmComet:Actor;
	public var _HUDLrgComet:Actor;
	public var _XofActor:Float;
	public var _YofActor:Float;
	public var _HUDRedRay:Actor;
	public var _HUDGreenRay:Actor;
	public var _AlienHealth:Float;
	public var _PCShipHealth:Float;
	public var _intDebug:Float;
	public var _PCLives:Float;
	
	
	public function new(dummy:Int, dummy2:Engine)
	{
		super();
		nameMap.set("Last Metor Small", "_LastMetorSmall");
		nameMap.set("Last Metor Large", "_LastMetorLarge");
		nameMap.set("Last Power Up", "_LastPowerUp");
		nameMap.set("Last Alien", "_LastAlien");
		nameMap.set("activeCountofAlien", "_activeCountofAlien");
		_activeCountofAlien = 0.0;
		nameMap.set("activeCountofPU", "_activeCountofPU");
		_activeCountofPU = 0.0;
		nameMap.set("activeCountofLrgComet", "_activeCountofLrgComet");
		_activeCountofLrgComet = 0.0;
		nameMap.set("activeCountofSmComet", "_activeCountofSmComet");
		_activeCountofSmComet = 0.0;
		nameMap.set("PowerLevel_PC", "_PowerLevel_PC");
		_PowerLevel_PC = 1.0;
		nameMap.set("Last Alien Gun", "_LastAlienGun");
		nameMap.set("Last Projectile", "_LastProjectile");
		nameMap.set("Projectile Speed", "_ProjectileSpeed");
		_ProjectileSpeed = 0.0;
		nameMap.set("PC_Ship", "_PCShip");
		nameMap.set("DefaultPCShipX", "_DefaultPCShipX");
		_DefaultPCShipX = 150.0;
		nameMap.set("DefaultPCShipY", "_DefaultPCShipY");
		_DefaultPCShipY = 368.0;
		nameMap.set("Speed", "_Speed");
		_Speed = 0.0;
		nameMap.set("RayGunPositionX", "_RayGunPositionX");
		_RayGunPositionX = 0.0;
		nameMap.set("RayGunPositionY", "_RayGunPositionY");
		_RayGunPositionY = 0.0;
		nameMap.set("OffSetX", "_OffSetX");
		_OffSetX = 0.0;
		nameMap.set("PowerLevel_Alien", "_PowerLevel_Alienl");
		_PowerLevel_Alienl = 1.0;
		nameMap.set("PCScore", "_PCScore");
		_PCScore = 0.0;
		nameMap.set("FontSpacing", "_FontSpacing");
		_FontSpacing = 0.0;
		nameMap.set("PtsLrgComet", "_PtsLrgComet");
		_PtsLrgComet = 5.0;
		nameMap.set("PtsSmComet", "_PtsSmComet");
		_PtsSmComet = 10.0;
		nameMap.set("PtsPowerUp", "_PtsPowerUp");
		_PtsPowerUp = 10.0;
		nameMap.set("HUDShipScore", "_HUDShipScore");
		nameMap.set("HUDAlienScore", "_HUDAlienScore");
		nameMap.set("HUDPowerLevel", "_HUDPowerLevel");
		nameMap.set("activeCountofActors", "_activeCountofActors");
		_activeCountofActors = 0.0;
		nameMap.set("CountRedRay", "_CountRedRay");
		_CountRedRay = 0.0;
		nameMap.set("CountedGreenRay", "_CountedGreenRay");
		_CountedGreenRay = 0.0;
		nameMap.set("AlienScore", "_AlienScore");
		_AlienScore = 0.0;
		nameMap.set("PtsPCShip", "_PtsPCShip");
		_PtsPCShip = 50.0;
		nameMap.set("PtsAlienShip", "_PtsAlienShip");
		_PtsAlienShip = 50.0;
		nameMap.set("HUDSmComet", "_HUDSmComet");
		nameMap.set("HUDLrgComet", "_HUDLrgComet");
		nameMap.set("XofActor", "_XofActor");
		_XofActor = 0.0;
		nameMap.set("YofActor", "_YofActor");
		_YofActor = 0.0;
		nameMap.set("HUDRedRay", "_HUDRedRay");
		nameMap.set("HUDGreenRay", "_HUDGreenRay");
		nameMap.set("AlienHealth", "_AlienHealth");
		_AlienHealth = 5.0;
		nameMap.set("PCShipHealth", "_PCShipHealth");
		_PCShipHealth = 5.0;
		nameMap.set("intDebug", "_intDebug");
		_intDebug = 0.0;
		nameMap.set("PCLives", "_PCLives");
		_PCLives = 5.0;
		
	}
	
	override public function init()
	{
		
		/* ======================= Every N seconds ======================== */
		runPeriodically(1000 * 20, function(timeTask:TimedTask):Void
		{
			if(wrapper.enabled)
			{
				if((_activeCountofAlien < 3))
				{
					_activeCountofAlien = (_activeCountofAlien + 1);
					createRecycledActor(getActorType(11), randomInt(0, (getScreenWidth() - 64)), -(64), Script.FRONT);
					_LastAlien = getLastCreatedActor();
					_LastAlien.bringToFront();
					_PowerLevel_Alienl = 0;
					_AlienHealth = 5;
				}
			}
		}, null);
		
		/* ======================= Every N seconds ======================== */
		runPeriodically(1000 * 5, function(timeTask:TimedTask):Void
		{
			if(wrapper.enabled)
			{
				if((_activeCountofLrgComet < 2))
				{
					_activeCountofLrgComet = (_activeCountofLrgComet + 1);
					createRecycledActor(getActorType(9), randomInt(0, (getScreenWidth() - 31)), -(randomInt(0, (getScreenHeight() - 31))), Script.FRONT);
					_LastMetorLarge = getLastCreatedActor();
				}
				if((_activeCountofLrgComet > 1))
				{
					if(_LastMetorLarge.isAlive())
					{
						recycleActor(_LastMetorLarge);
					}
					_activeCountofLrgComet = (_activeCountofLrgComet + 1);
					createRecycledActor(getActorType(9), randomInt(0, (getScreenWidth() - 31)), -(randomInt(0, (getScreenHeight() - 31))), Script.FRONT);
					_LastMetorLarge = getLastCreatedActor();
				}
				_LastMetorLarge.bringToFront();
			}
		}, null);
		
		/* ======================= Every N seconds ======================== */
		runPeriodically(1000 * 20, function(timeTask:TimedTask):Void
		{
			if(wrapper.enabled)
			{
				if((_activeCountofSmComet < 2))
				{
					_activeCountofSmComet = (_activeCountofSmComet + 1);
					createRecycledActor(getActorType(7), randomInt(0, (getScreenWidth() - 12)), -(randomInt(0, (getScreenHeight() - 12))), Script.FRONT);
					_LastMetorSmall = getLastCreatedActor();
				}
				if((_activeCountofSmComet > 1))
				{
					if(_LastMetorSmall.isAlive())
					{
						recycleActor(_LastMetorSmall);
					}
					_activeCountofSmComet = (_activeCountofSmComet + 1);
					createRecycledActor(getActorType(7), randomInt(0, (getScreenWidth() - 12)), -(randomInt(0, (getScreenHeight() - 12))), Script.FRONT);
					_LastMetorSmall = getLastCreatedActor();
				}
				_LastMetorSmall.bringToFront();
			}
		}, null);
		
		/* ======================= Every N seconds ======================== */
		runPeriodically(1000 * 15, function(timeTask:TimedTask):Void
		{
			if(wrapper.enabled)
			{
				if((_activeCountofPU < 2))
				{
					_activeCountofPU = (_activeCountofPU + 1);
					createRecycledActor(getActorType(5), randomInt(0, (getScreenWidth() - 64)), -(64), Script.FRONT);
					_LastPowerUp = getLastCreatedActor();
				}
				if((_activeCountofPU > 1))
				{
					if(_LastPowerUp.isAlive())
					{
						recycleActor(_LastPowerUp);
					}
					_activeCountofPU = (_activeCountofPU + 1);
					createRecycledActor(getActorType(5), randomInt(0, (getScreenWidth() - 64)), -(64), Script.FRONT);
					_LastPowerUp = getLastCreatedActor();
				}
				_LastPowerUp.bringToFront();
			}
		}, null);
		
		/* ======================== When Updating ========================= */
		addWhenUpdatedListener(null, function(elapsedTime:Float, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				if(isKeyDown("left"))
				{
					_PCShip.setX((_PCShip.getX() - 1));
				}
				else if(isKeyDown("right"))
				{
					_PCShip.setX((_PCShip.getX() + 1));
				}
				else if(isKeyDown("down"))
				{
					recycleActor(_PCShip);
				}
				else if(isKeyPressed("up"))
				{
					_RayGunPositionX = (_PCShip.getX() + (_PCShip.getWidth()/2));
					_RayGunPositionY = (_PCShip.getY() - 12);
					
					createRecycledActor(getActorType(17), _RayGunPositionX, _RayGunPositionY, Script.FRONT);
					_CountRedRay = (_CountRedRay + 1);
					_LastProjectile = getLastCreatedActor();
					_LastProjectile.setYVelocity(-(10));
					_OffSetX = 14;
					if((_PowerLevel_PC > 1))
					{
						for(index0 in 0...Std.int(_PowerLevel_PC))
						{
							_XofActor = (_OffSetX * index0);
							createRecycledActor(getActorType(17), (_RayGunPositionX + _XofActor), _RayGunPositionY, Script.FRONT);
							_CountRedRay = (_CountRedRay + 1);
							_LastProjectile = getLastCreatedActor();
							_LastProjectile.setYVelocity(-(10));
							createRecycledActor(getActorType(17), (_RayGunPositionX - _XofActor), _RayGunPositionY, Script.FRONT);
							_CountRedRay = (_CountRedRay + 1);
							_LastProjectile = getLastCreatedActor();
							_LastProjectile.setYVelocity(-(10));
						}
					}
				}
				else
				{
					
				}
			}
		});
		
		/* ======================== Actor of Type ========================= */
		addWhenTypeGroupKilledListener(getActorType(5), function(eventActor:Actor, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				_activeCountofPU = (_activeCountofPU - 1);
				if(eventActor.isOnScreen())
				{
					createRecycledActor(getActorType(21), ((eventActor.getX() + (eventActor.getWidth()/2)) - 32), ((eventActor.getY() + (eventActor.getHeight()/2)) - 32), Script.FRONT);
				}
			}
		});
		
		/* ======================== Actor of Type ========================= */
		addWhenTypeGroupKilledListener(getActorType(7), function(eventActor:Actor, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				_activeCountofSmComet = (_activeCountofSmComet - 1);
				if(eventActor.isOnScreen())
				{
					
					createRecycledActor(getActorType(19), ((eventActor.getX() + (eventActor.getWidth()/2)) - 32), ((eventActor.getY() + (eventActor.getHeight()/2)) - 32), Script.FRONT);
				}
			}
		});
		
		/* ======================== Actor of Type ========================= */
		addWhenTypeGroupKilledListener(getActorType(9), function(eventActor:Actor, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				_activeCountofLrgComet = (_activeCountofLrgComet - 1);
				if(eventActor.isOnScreen())
				{
					
					createRecycledActor(getActorType(19), ((eventActor.getX() + (eventActor.getWidth()/2)) - 32), ((eventActor.getY() + (eventActor.getHeight()/2)) - 32), Script.FRONT);
					for(index0 in 0...2)
					{
						_activeCountofSmComet = (_activeCountofSmComet + 1);
						createRecycledActor(getActorType(7), ((eventActor.getX() + (eventActor.getWidth()/2)) + (25 * index0)), ((eventActor.getY() + (eventActor.getHeight()/2)) - (25 * index0)), Script.FRONT);
						_LastMetorSmall = getLastCreatedActor();
						_LastMetorSmall.makeAlwaysSimulate();
						_LastMetorSmall.setVelocity(randomInt(85, 135), randomInt(5, 20));
						_LastMetorSmall.applyTorque(Utils.RAD * ((randomInt(-7, 7) * 1600)));
					}
				}
			}
		});
		
		/* ======================== Actor of Type ========================= */
		addWhenTypeGroupKilledListener(getActorType(3), function(eventActor:Actor, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				
				createRecycledActor(getActorType(19), ((eventActor.getX() + (eventActor.getWidth()/2)) - 32), ((eventActor.getY() + (eventActor.getHeight()/2)) - 32), Script.FRONT);
				_PCLives = (_PCLives - 1);
				_PowerLevel_PC = 0;
				_PCShipHealth = 5;
			}
		});
		
		/* ======================== Actor of Type ========================= */
		addWhenTypeGroupKilledListener(getActorType(11), function(eventActor:Actor, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				_activeCountofAlien = (_activeCountofAlien - 1);
				if(eventActor.isOnScreen())
				{
					
					createRecycledActor(getActorType(21), ((eventActor.getX() + (eventActor.getWidth()/2)) - 32), ((eventActor.getY() + (eventActor.getHeight()/2)) - 32), Script.FRONT);
				}
			}
		});
		
		/* ======================== Actor of Type ========================= */
		addWhenTypeGroupKilledListener(getActorType(17), function(eventActor:Actor, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				_CountRedRay = (_CountRedRay - 1);
			}
		});
		
		/* ======================== Actor of Type ========================= */
		addWhenTypeGroupKilledListener(getActorType(15), function(eventActor:Actor, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				_CountedGreenRay = (_CountedGreenRay - 1);
			}
		});
		
		/* ========================= Type & Type ========================== */
		addSceneCollisionListener(getActorType(7).ID, getActorType(17).ID, function(event:Collision, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				recycleActor(event.thisActor);
				recycleActor(event.otherActor);
				_PCScore = (_PCScore + _PtsSmComet);
			}
		});
		
		/* ========================= Type & Type ========================== */
		addSceneCollisionListener(getActorType(7).ID, getActorType(15).ID, function(event:Collision, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				recycleActor(event.thisActor);
				recycleActor(event.otherActor);
				_AlienScore = (_AlienScore + _PtsSmComet);
			}
		});
		
		/* ========================= Type & Type ========================== */
		addSceneCollisionListener(getActorType(9).ID, getActorType(17).ID, function(event:Collision, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				recycleActor(event.thisActor);
				recycleActor(event.otherActor);
				_PCScore = (_PCScore + _PtsLrgComet);
			}
		});
		
		/* ========================= Type & Type ========================== */
		addSceneCollisionListener(getActorType(9).ID, getActorType(15).ID, function(event:Collision, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				recycleActor(event.thisActor);
				recycleActor(event.otherActor);
				_AlienScore = (_AlienScore + _PtsLrgComet);
			}
		});
		
		/* ========================= Type & Type ========================== */
		addSceneCollisionListener(getActorType(9).ID, getActorType(9).ID, function(event:Collision, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				recycleActor(event.thisActor);
				recycleActor(event.otherActor);
			}
		});
		
		/* ========================= Type & Type ========================== */
		addSceneCollisionListener(getActorType(3).ID, getActorType(7).ID, function(event:Collision, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				recycleActor(event.otherActor);
				if((_PCShipHealth < 1))
				{
					recycleActor(event.thisActor);
				}
				else
				{
					_PCShipHealth = (_PCShipHealth - 1);
				}
			}
		});
		
		/* ========================= Type & Type ========================== */
		addSceneCollisionListener(getActorType(3).ID, getActorType(9).ID, function(event:Collision, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				recycleActor(event.otherActor);
				if((_PCShipHealth < 1))
				{
					recycleActor(event.thisActor);
				}
				else
				{
					_PCShipHealth = (_PCShipHealth - 1);
				}
			}
		});
		
		/* ========================= Type & Type ========================== */
		addSceneCollisionListener(getActorType(3).ID, getActorType(11).ID, function(event:Collision, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				recycleActor(event.otherActor);
				_AlienScore = (_AlienScore + _PtsPCShip);
				_PCScore = (_PCScore + _PtsPCShip);
				if((_PCShipHealth < 1))
				{
					recycleActor(event.thisActor);
				}
				else
				{
					_PCShipHealth = (_PCShipHealth - 1);
				}
			}
		});
		
		/* ========================= Type & Type ========================== */
		addSceneCollisionListener(getActorType(3).ID, getActorType(5).ID, function(event:Collision, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				_PowerLevel_PC = (_PowerLevel_PC + 1);
				_PCScore = (_PCScore + _PtsPowerUp);
				_PCShipHealth = (_PCShipHealth + 5);
				recycleActor(event.otherActor);
			}
		});
		
		/* ========================= Type & Type ========================== */
		addSceneCollisionListener(getActorType(3).ID, getActorType(15).ID, function(event:Collision, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				
				createRecycledActor(getActorType(21), ((event.otherActor.getX() + (event.otherActor.getWidth()/2)) - 32), ((event.otherActor.getY() + (event.otherActor.getHeight()/2)) - 32), Script.FRONT);
				recycleActor(event.otherActor);
				_AlienScore = (_AlienScore + _PtsPCShip);
				if((_PCShipHealth < 1))
				{
					recycleActor(event.thisActor);
				}
				else
				{
					_PCShipHealth = (_PCShipHealth - 1);
				}
			}
		});
		
		/* ========================= Type & Type ========================== */
		addSceneCollisionListener(getActorType(11).ID, getActorType(17).ID, function(event:Collision, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				
				createRecycledActor(getActorType(19), ((event.otherActor.getX() + (event.otherActor.getWidth()/2)) - 32), ((event.otherActor.getY() + (event.otherActor.getHeight()/2)) - 32), Script.FRONT);
				recycleActor(event.otherActor);
				_PCScore = (_PCScore + _PtsAlienShip);
				if((_AlienHealth < 1))
				{
					recycleActor(event.thisActor);
				}
				else
				{
					_AlienHealth = (_AlienHealth - 1);
				}
			}
		});
		
		/* ========================= Type & Type ========================== */
		addSceneCollisionListener(getActorType(11).ID, getActorType(5).ID, function(event:Collision, list:Array<Dynamic>):Void
		{
			if(wrapper.enabled)
			{
				_PowerLevel_Alienl = (_PowerLevel_Alienl + 1);
				_AlienScore = (_AlienScore + _PtsPowerUp);
				_AlienHealth = (_AlienHealth + 5);
				recycleActor(event.otherActor);
			}
		});
		
	}
	
	override public function forwardMessage(msg:String)
	{
		
	}
}