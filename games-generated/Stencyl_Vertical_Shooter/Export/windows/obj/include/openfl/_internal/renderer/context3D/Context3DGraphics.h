// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DGraphics
#define INCLUDED_openfl__internal_renderer_context3D_Context3DGraphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,renderer,context3D,Context3DGraphics)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)

namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{


class HXCPP_CLASS_ATTRIBUTES Context3DGraphics_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Context3DGraphics_obj OBJ_;
		Context3DGraphics_obj();

	public:
		enum { _hx_ClassId = 0x7a96fc5a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.context3D.Context3DGraphics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.context3D.Context3DGraphics"); }

		hx::ObjectPtr< Context3DGraphics_obj > __new() {
			hx::ObjectPtr< Context3DGraphics_obj > __this = new Context3DGraphics_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Context3DGraphics_obj > __alloc(hx::Ctx *_hx_ctx) {
			Context3DGraphics_obj *__this = (Context3DGraphics_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Context3DGraphics_obj), false, "openfl._internal.renderer.context3D.Context3DGraphics"));
			*(void **)__this = Context3DGraphics_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DGraphics_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Context3DGraphics","\x2b","\x31","\xdf","\xdc"); }

		static void __boot();
		static  ::openfl::display::BitmapData blankBitmapData;
		static bool maskRender;
		static  ::openfl::geom::ColorTransform tempColorTransform;
		static void buildBuffer( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic buildBuffer_dyn();

		static bool isCompatible( ::openfl::display::Graphics graphics);
		static ::Dynamic isCompatible_dyn();

		static void render( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderMask( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderMask_dyn();

		static void resizeIndexBuffer( ::openfl::display::Graphics graphics,bool isQuad,int length);
		static ::Dynamic resizeIndexBuffer_dyn();

		static void resizeVertexBuffer( ::openfl::display::Graphics graphics,bool hasUVTData,int length);
		static ::Dynamic resizeVertexBuffer_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D

#endif /* INCLUDED_openfl__internal_renderer_context3D_Context3DGraphics */ 
