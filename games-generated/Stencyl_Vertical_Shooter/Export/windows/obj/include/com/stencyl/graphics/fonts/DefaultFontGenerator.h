// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_graphics_fonts_DefaultFontGenerator
#define INCLUDED_com_stencyl_graphics_fonts_DefaultFontGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,graphics,fonts,DefaultFontGenerator)

namespace com{
namespace stencyl{
namespace graphics{
namespace fonts{


class HXCPP_CLASS_ATTRIBUTES DefaultFontGenerator_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DefaultFontGenerator_obj OBJ_;
		DefaultFontGenerator_obj();

	public:
		enum { _hx_ClassId = 0x6ad48e2d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.graphics.fonts.DefaultFontGenerator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.graphics.fonts.DefaultFontGenerator"); }

		hx::ObjectPtr< DefaultFontGenerator_obj > __new() {
			hx::ObjectPtr< DefaultFontGenerator_obj > __this = new DefaultFontGenerator_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< DefaultFontGenerator_obj > __alloc(hx::Ctx *_hx_ctx) {
			DefaultFontGenerator_obj *__this = (DefaultFontGenerator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DefaultFontGenerator_obj), false, "com.stencyl.graphics.fonts.DefaultFontGenerator"));
			*(void **)__this = DefaultFontGenerator_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultFontGenerator_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DefaultFontGenerator","\x23","\x87","\x03","\x89"); }

		static void __boot();
		static ::String fontData;
		static void generateAndStoreDefaultFont();
		static ::Dynamic generateAndStoreDefaultFont_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace fonts

#endif /* INCLUDED_com_stencyl_graphics_fonts_DefaultFontGenerator */ 
