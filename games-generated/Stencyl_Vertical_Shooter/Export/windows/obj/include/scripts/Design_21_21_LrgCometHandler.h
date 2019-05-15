// Generated by Haxe 3.4.7
#ifndef INCLUDED_scripts_Design_21_21_LrgCometHandler
#define INCLUDED_scripts_Design_21_21_LrgCometHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_behavior_ActorScript
#include <com/stencyl/behavior/ActorScript.h>
#endif
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,ActorScript)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(scripts,Design_21_21_LrgCometHandler)

namespace scripts{


class HXCPP_CLASS_ATTRIBUTES Design_21_21_LrgCometHandler_obj : public  ::com::stencyl::behavior::ActorScript_obj
{
	public:
		typedef  ::com::stencyl::behavior::ActorScript_obj super;
		typedef Design_21_21_LrgCometHandler_obj OBJ_;
		Design_21_21_LrgCometHandler_obj();

	public:
		enum { _hx_ClassId = 0x250fd27a };

		void __construct(int dummy, ::com::stencyl::models::Actor actor, ::com::stencyl::Engine dummy2);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="scripts.Design_21_21_LrgCometHandler")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"scripts.Design_21_21_LrgCometHandler"); }
		static hx::ObjectPtr< Design_21_21_LrgCometHandler_obj > __new(int dummy, ::com::stencyl::models::Actor actor, ::com::stencyl::Engine dummy2);
		static hx::ObjectPtr< Design_21_21_LrgCometHandler_obj > __alloc(hx::Ctx *_hx_ctx,int dummy, ::com::stencyl::models::Actor actor, ::com::stencyl::Engine dummy2);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Design_21_21_LrgCometHandler_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Design_21_21_LrgCometHandler","\x7a","\x6b","\x44","\x6e"); }

		 ::com::stencyl::models::Actor _LastLrgComet;
		 ::com::stencyl::models::Actor _LastMetorLarge;
		void init();

		void forwardMessage(::String msg);

};

} // end namespace scripts

#endif /* INCLUDED_scripts_Design_21_21_LrgCometHandler */ 