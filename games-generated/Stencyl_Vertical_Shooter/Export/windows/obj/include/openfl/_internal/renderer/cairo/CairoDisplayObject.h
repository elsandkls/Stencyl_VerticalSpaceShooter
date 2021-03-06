// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoDisplayObject
#define INCLUDED_openfl__internal_renderer_cairo_CairoDisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,renderer,cairo,CairoDisplayObject)
HX_DECLARE_CLASS2(openfl,display,CairoRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES CairoDisplayObject_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CairoDisplayObject_obj OBJ_;
		CairoDisplayObject_obj();

	public:
		enum { _hx_ClassId = 0x03db1e16 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.cairo.CairoDisplayObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.cairo.CairoDisplayObject"); }

		hx::ObjectPtr< CairoDisplayObject_obj > __new() {
			hx::ObjectPtr< CairoDisplayObject_obj > __this = new CairoDisplayObject_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< CairoDisplayObject_obj > __alloc(hx::Ctx *_hx_ctx) {
			CairoDisplayObject_obj *__this = (CairoDisplayObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CairoDisplayObject_obj), false, "openfl._internal.renderer.cairo.CairoDisplayObject"));
			*(void **)__this = CairoDisplayObject_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoDisplayObject_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CairoDisplayObject","\x19","\xc9","\x11","\x01"); }

		static void render( ::openfl::display::DisplayObject displayObject, ::openfl::display::CairoRenderer renderer);
		static ::Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

#endif /* INCLUDED_openfl__internal_renderer_cairo_CairoDisplayObject */ 
