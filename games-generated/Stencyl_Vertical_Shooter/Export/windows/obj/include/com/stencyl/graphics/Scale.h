// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_graphics_Scale
#define INCLUDED_com_stencyl_graphics_Scale

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_81b4ed4463f2bf1b_15_new)
HX_DECLARE_CLASS3(com,stencyl,graphics,Scale)

namespace com{
namespace stencyl{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES Scale_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Scale_obj OBJ_;
		Scale_obj();

	public:
		enum { _hx_ClassId = 0x6e3c8a54 };

		void __construct(Float value);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.graphics.Scale")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.graphics.Scale"); }

		hx::ObjectPtr< Scale_obj > __new(Float value) {
			hx::ObjectPtr< Scale_obj > __this = new Scale_obj();
			__this->__construct(value);
			return __this;
		}

		static hx::ObjectPtr< Scale_obj > __alloc(hx::Ctx *_hx_ctx,Float value) {
			Scale_obj *__this = (Scale_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Scale_obj), false, "com.stencyl.graphics.Scale"));
			*(void **)__this = Scale_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_81b4ed4463f2bf1b_15_new)
HXDLIN(  15)		( ( ::com::stencyl::graphics::Scale)(__this) )->value = value;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scale_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Scale","\x6a","\x3e","\xfc","\x0b"); }

		static void __boot();
		static  ::com::stencyl::graphics::Scale _1X;
		static  ::com::stencyl::graphics::Scale _1_5X;
		static  ::com::stencyl::graphics::Scale _2X;
		static  ::com::stencyl::graphics::Scale _3X;
		static  ::com::stencyl::graphics::Scale _4X;
		static  ::com::stencyl::graphics::Scale fromString(::String value);
		static ::Dynamic fromString_dyn();

		Float value;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics

#endif /* INCLUDED_com_stencyl_graphics_Scale */ 