// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#define INCLUDED_com_stencyl_graphics_transitions_Transition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,Transition)
HX_DECLARE_CLASS2(openfl,display,Graphics)

namespace com{
namespace stencyl{
namespace graphics{
namespace transitions{


class HXCPP_CLASS_ATTRIBUTES Transition_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Transition_obj OBJ_;
		Transition_obj();

	public:
		enum { _hx_ClassId = 0x10817dc5 };

		void __construct(Float duration);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.graphics.transitions.Transition")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.graphics.transitions.Transition"); }
		static hx::ObjectPtr< Transition_obj > __new(Float duration);
		static hx::ObjectPtr< Transition_obj > __alloc(hx::Ctx *_hx_ctx,Float duration);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Transition_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Transition","\xb5","\x91","\x60","\x4f"); }

		static void __boot();
		static ::String IN;
		static ::String OUT;
		static ::String THROUGH;
		Float duration;
		::String direction;
		bool active;
		bool complete;
		virtual void start();
		::Dynamic start_dyn();

		void reset();
		::Dynamic reset_dyn();

		void stop();
		::Dynamic stop_dyn();

		void deactivate();
		::Dynamic deactivate_dyn();

		virtual void cleanup();
		::Dynamic cleanup_dyn();

		bool isActive();
		::Dynamic isActive_dyn();

		bool isComplete();
		::Dynamic isComplete_dyn();

		virtual void update(Float elapsedTime);
		::Dynamic update_dyn();

		virtual void draw( ::openfl::display::Graphics g);
		::Dynamic draw_dyn();

		Float getDuration();
		::Dynamic getDuration_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions

#endif /* INCLUDED_com_stencyl_graphics_transitions_Transition */ 
