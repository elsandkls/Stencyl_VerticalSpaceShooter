// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_graphics_fonts_TextAlign
#define INCLUDED_com_stencyl_graphics_fonts_TextAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,graphics,fonts,TextAlign)

namespace com{
namespace stencyl{
namespace graphics{
namespace fonts{


class HXCPP_CLASS_ATTRIBUTES TextAlign_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextAlign_obj OBJ_;
		TextAlign_obj();

	public:
		enum { _hx_ClassId = 0x54689b0a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.graphics.fonts.TextAlign")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.graphics.fonts.TextAlign"); }

		hx::ObjectPtr< TextAlign_obj > __new() {
			hx::ObjectPtr< TextAlign_obj > __this = new TextAlign_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< TextAlign_obj > __alloc(hx::Ctx *_hx_ctx) {
			TextAlign_obj *__this = (TextAlign_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextAlign_obj), false, "com.stencyl.graphics.fonts.TextAlign"));
			*(void **)__this = TextAlign_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextAlign_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextAlign","\xb8","\xc6","\x51","\x5c"); }

		static void __boot();
		static int LEFT;
		static int RIGHT;
		static int CENTER;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace fonts

#endif /* INCLUDED_com_stencyl_graphics_fonts_TextAlign */ 
