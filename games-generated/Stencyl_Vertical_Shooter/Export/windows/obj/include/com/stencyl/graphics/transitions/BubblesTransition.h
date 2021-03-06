// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_graphics_transitions_BubblesTransition
#define INCLUDED_com_stencyl_graphics_transitions_BubblesTransition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#include <com/stencyl/graphics/transitions/Transition.h>
#endif
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,BubblesTransition)
HX_DECLARE_CLASS4(com,stencyl,graphics,transitions,Transition)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,TweenFloat)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,TweenObject)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace com{
namespace stencyl{
namespace graphics{
namespace transitions{


class HXCPP_CLASS_ATTRIBUTES BubblesTransition_obj : public  ::com::stencyl::graphics::transitions::Transition_obj
{
	public:
		typedef  ::com::stencyl::graphics::transitions::Transition_obj super;
		typedef BubblesTransition_obj OBJ_;
		BubblesTransition_obj();

	public:
		enum { _hx_ClassId = 0x7436c554 };

		void __construct(::String direction,Float duration,hx::Null< int >  __o_numBubbles,hx::Null< int >  __o_color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.graphics.transitions.BubblesTransition")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.graphics.transitions.BubblesTransition"); }
		static hx::ObjectPtr< BubblesTransition_obj > __new(::String direction,Float duration,hx::Null< int >  __o_numBubbles,hx::Null< int >  __o_color);
		static hx::ObjectPtr< BubblesTransition_obj > __alloc(hx::Ctx *_hx_ctx,::String direction,Float duration,hx::Null< int >  __o_numBubbles,hx::Null< int >  __o_color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BubblesTransition_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BubblesTransition","\xbc","\xf3","\x91","\xeb"); }

		int color;
		int numBubbles;
		 ::com::stencyl::utils::motion::TweenFloat radius;
		Float beginRadius;
		Float endRadius;
		 ::openfl::display::Shape rect;
		 ::openfl::display::Graphics graphics;
		 ::openfl::display::BitmapData drawBitmap;
		::Array< ::Dynamic> bubblePositions;
		 ::openfl::geom::Rectangle bubbleRect;
		int screenWidth;
		int screenHeight;
		void start();

		void draw( ::openfl::display::Graphics g);

		void cleanup();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace transitions

#endif /* INCLUDED_com_stencyl_graphics_transitions_BubblesTransition */ 
