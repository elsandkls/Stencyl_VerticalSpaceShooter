// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_behavior_TimedTask
#define INCLUDED_com_stencyl_behavior_TimedTask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,behavior,TimedTask)
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


class HXCPP_CLASS_ATTRIBUTES TimedTask_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TimedTask_obj OBJ_;
		TimedTask_obj();

	public:
		enum { _hx_ClassId = 0x060d021b };

		void __construct( ::Dynamic toExecute,int interval,bool repeats, ::com::stencyl::models::Actor actor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.behavior.TimedTask")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.behavior.TimedTask"); }
		static hx::ObjectPtr< TimedTask_obj > __new( ::Dynamic toExecute,int interval,bool repeats, ::com::stencyl::models::Actor actor);
		static hx::ObjectPtr< TimedTask_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic toExecute,int interval,bool repeats, ::com::stencyl::models::Actor actor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimedTask_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TimedTask","\x7c","\x32","\x78","\x8f"); }

		 ::Dynamic toExecute;
		Dynamic toExecute_dyn() { return toExecute;}
		int interval;
		bool repeats;
		 ::com::stencyl::models::Actor actor;
		int timer;
		bool done;
		Float actorCreateTime;
		void update(int timeElapsed);
		::Dynamic update_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace behavior

#endif /* INCLUDED_com_stencyl_behavior_TimedTask */ 