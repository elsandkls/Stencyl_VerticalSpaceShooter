// Generated by Haxe 3.4.7
#ifndef INCLUDED_scripts_Design_12_12_LevelHandler
#define INCLUDED_scripts_Design_12_12_LevelHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_behavior_SceneScript
#include <com/stencyl/behavior/SceneScript.h>
#endif
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,SceneScript)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(scripts,Design_12_12_LevelHandler)

namespace scripts{


class HXCPP_CLASS_ATTRIBUTES Design_12_12_LevelHandler_obj : public  ::com::stencyl::behavior::SceneScript_obj
{
	public:
		typedef  ::com::stencyl::behavior::SceneScript_obj super;
		typedef Design_12_12_LevelHandler_obj OBJ_;
		Design_12_12_LevelHandler_obj();

	public:
		enum { _hx_ClassId = 0x29b17507 };

		void __construct(int dummy, ::com::stencyl::Engine dummy2);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="scripts.Design_12_12_LevelHandler")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"scripts.Design_12_12_LevelHandler"); }
		static hx::ObjectPtr< Design_12_12_LevelHandler_obj > __new(int dummy, ::com::stencyl::Engine dummy2);
		static hx::ObjectPtr< Design_12_12_LevelHandler_obj > __alloc(hx::Ctx *_hx_ctx,int dummy, ::com::stencyl::Engine dummy2);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Design_12_12_LevelHandler_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Design_12_12_LevelHandler","\x07","\x3c","\x93","\xac"); }

		 ::com::stencyl::models::Actor _LastMetorSmall;
		 ::com::stencyl::models::Actor _LastMetorLarge;
		 ::com::stencyl::models::Actor _LastPowerUp;
		 ::com::stencyl::models::Actor _LastAlien;
		Float _activeCountofAlien;
		Float _activeCountofPU;
		Float _activeCountofLrgComet;
		Float _activeCountofSmComet;
		Float _PowerLevel_PC;
		 ::com::stencyl::models::Actor _LastAlienGun;
		 ::com::stencyl::models::Actor _LastProjectile;
		Float _ProjectileSpeed;
		 ::com::stencyl::models::Actor _PCShip;
		Float _DefaultPCShipX;
		Float _DefaultPCShipY;
		Float _Speed;
		Float _RayGunPositionX;
		Float _RayGunPositionY;
		Float _OffSetX;
		Float _PowerLevel_Alienl;
		Float _PCScore;
		Float _FontSpacing;
		Float _PtsLrgComet;
		Float _PtsSmComet;
		Float _PtsPowerUp;
		 ::com::stencyl::models::Actor _HUDShipScore;
		 ::com::stencyl::models::Actor _HUDAlienScore;
		 ::com::stencyl::models::Actor _HUDPowerLevel;
		Float _activeCountofActors;
		Float _CountRedRay;
		Float _CountedGreenRay;
		Float _AlienScore;
		Float _PtsPCShip;
		Float _PtsAlienShip;
		 ::com::stencyl::models::Actor _HUDSmComet;
		 ::com::stencyl::models::Actor _HUDLrgComet;
		Float _XofActor;
		Float _YofActor;
		 ::com::stencyl::models::Actor _HUDRedRay;
		 ::com::stencyl::models::Actor _HUDGreenRay;
		Float _AlienHealth;
		Float _PCShipHealth;
		Float _intDebug;
		Float _PCLives;
		void init();

		void forwardMessage(::String msg);

};

} // end namespace scripts

#endif /* INCLUDED_scripts_Design_12_12_LevelHandler */ 