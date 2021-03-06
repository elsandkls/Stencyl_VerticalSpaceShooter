// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_behavior_ActorScript
#define INCLUDED_com_stencyl_behavior_ActorScript

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif
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

namespace com{
namespace stencyl{
namespace behavior{


class HXCPP_CLASS_ATTRIBUTES ActorScript_obj : public  ::com::stencyl::behavior::Script_obj
{
	public:
		typedef  ::com::stencyl::behavior::Script_obj super;
		typedef ActorScript_obj OBJ_;
		ActorScript_obj();

	public:
		enum { _hx_ClassId = 0x1d343a03 };

		void __construct( ::com::stencyl::models::Actor actor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.behavior.ActorScript")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.behavior.ActorScript"); }
		static hx::ObjectPtr< ActorScript_obj > __new( ::com::stencyl::models::Actor actor);
		static hx::ObjectPtr< ActorScript_obj > __alloc(hx::Ctx *_hx_ctx, ::com::stencyl::models::Actor actor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ActorScript_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ActorScript","\xc0","\x4a","\x0c","\x78"); }

		 ::com::stencyl::models::Actor actor;
		 ::Dynamic getValue(::String behaviorName,::String attributeName);
		::Dynamic getValue_dyn();

		void setValue(::String behaviorName,::String attributeName, ::Dynamic value);
		::Dynamic setValue_dyn();

		 ::Dynamic shout(::String msg,::cpp::VirtualArray args);
		::Dynamic shout_dyn();

		void disableThisBehavior();

};

} // end namespace com
} // end namespace stencyl
} // end namespace behavior

#endif /* INCLUDED_com_stencyl_behavior_ActorScript */ 
