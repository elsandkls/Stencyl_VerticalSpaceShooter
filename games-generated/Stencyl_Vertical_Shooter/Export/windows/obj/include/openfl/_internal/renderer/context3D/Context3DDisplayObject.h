// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DDisplayObject
#define INCLUDED_openfl__internal_renderer_context3D_Context3DDisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,renderer,context3D,Context3DDisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{


class HXCPP_CLASS_ATTRIBUTES Context3DDisplayObject_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Context3DDisplayObject_obj OBJ_;
		Context3DDisplayObject_obj();

	public:
		enum { _hx_ClassId = 0x575f7016 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.context3D.Context3DDisplayObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.context3D.Context3DDisplayObject"); }

		hx::ObjectPtr< Context3DDisplayObject_obj > __new() {
			hx::ObjectPtr< Context3DDisplayObject_obj > __this = new Context3DDisplayObject_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Context3DDisplayObject_obj > __alloc(hx::Ctx *_hx_ctx) {
			Context3DDisplayObject_obj *__this = (Context3DDisplayObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Context3DDisplayObject_obj), false, "openfl._internal.renderer.context3D.Context3DDisplayObject"));
			*(void **)__this = Context3DDisplayObject_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DDisplayObject_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Context3DDisplayObject","\x41","\xa6","\x42","\x1b"); }

		static void render( ::openfl::display::DisplayObject displayObject, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderMask( ::openfl::display::DisplayObject displayObject, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderMask_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D

#endif /* INCLUDED_openfl__internal_renderer_context3D_Context3DDisplayObject */ 
