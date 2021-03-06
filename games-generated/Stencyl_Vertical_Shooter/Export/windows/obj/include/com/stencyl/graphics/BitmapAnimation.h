// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_graphics_BitmapAnimation
#define INCLUDED_com_stencyl_graphics_BitmapAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_AbstractAnimation
#include <com/stencyl/graphics/AbstractAnimation.h>
#endif
HX_DECLARE_CLASS3(com,stencyl,graphics,AbstractAnimation)
HX_DECLARE_CLASS3(com,stencyl,graphics,BitmapAnimation)
HX_DECLARE_CLASS3(com,stencyl,graphics,G)
HX_DECLARE_CLASS4(com,stencyl,models,actor,Animation)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)

namespace com{
namespace stencyl{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES BitmapAnimation_obj : public  ::openfl::display::Bitmap_obj
{
	public:
		typedef  ::openfl::display::Bitmap_obj super;
		typedef BitmapAnimation_obj OBJ_;
		BitmapAnimation_obj();

	public:
		enum { _hx_ClassId = 0x648de55f };

		void __construct( ::com::stencyl::models::actor::Animation model);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.graphics.BitmapAnimation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.graphics.BitmapAnimation"); }
		static hx::ObjectPtr< BitmapAnimation_obj > __new( ::com::stencyl::models::actor::Animation model);
		static hx::ObjectPtr< BitmapAnimation_obj > __alloc(hx::Ctx *_hx_ctx, ::com::stencyl::models::actor::Animation model);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapAnimation_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("BitmapAnimation","\xf5","\xd0","\x93","\xbd"); }

		 ::com::stencyl::models::actor::Animation model;
		int frameIndex;
		Float timer;
		bool finished;
		::Array< int > durations;
		bool individualDurations;
		::Array< ::Dynamic> frames;
		int numFrames;
		::Array< ::Dynamic> filter;
		::Array< bool > filteredFrames;
		void update(Float elapsedTime);
		::Dynamic update_dyn();

		int getCurrentFrame();
		::Dynamic getCurrentFrame_dyn();

		int getNumFrames();
		::Dynamic getNumFrames_dyn();

		void setFrame(int frame);
		::Dynamic setFrame_dyn();

		bool isFinished();
		::Dynamic isFinished_dyn();

		void reset();
		::Dynamic reset_dyn();

		void updateBitmap();
		::Dynamic updateBitmap_dyn();

		::Array< ::Dynamic> set_filter(::Array< ::Dynamic> filter);
		::Dynamic set_filter_dyn();

		 ::openfl::display::BitmapData applyFilters( ::openfl::display::BitmapData destBitmapData, ::openfl::display::BitmapData sourceBitmapData,::Array< ::Dynamic> filters);
		::Dynamic applyFilters_dyn();

		void draw( ::com::stencyl::graphics::G g,Float x,Float y,Float angle,Float alpha);
		::Dynamic draw_dyn();

		::Array< int > getFrameDurations();
		::Dynamic getFrameDurations_dyn();

		void setFrameDurations(int time);
		::Dynamic setFrameDurations_dyn();

		void setFrameDuration(int frame,int time);
		::Dynamic setFrameDuration_dyn();

		void framesUpdated();
		::Dynamic framesUpdated_dyn();

		 ::openfl::display::BitmapData getCurrentImage();
		::Dynamic getCurrentImage_dyn();

		void activate();
		::Dynamic activate_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics

#endif /* INCLUDED_com_stencyl_graphics_BitmapAnimation */ 
