// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_OverrideBlendModeView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_OverrideBlendModeView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,OverrideBlendModeView_Impl_)

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES OverrideBlendModeView_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef OverrideBlendModeView_Impl__obj OBJ_;
		OverrideBlendModeView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3a1123b3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.OverrideBlendModeView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer._DrawCommandReader.OverrideBlendModeView_Impl_"); }

		hx::ObjectPtr< OverrideBlendModeView_Impl__obj > __new() {
			hx::ObjectPtr< OverrideBlendModeView_Impl__obj > __this = new OverrideBlendModeView_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< OverrideBlendModeView_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			OverrideBlendModeView_Impl__obj *__this = (OverrideBlendModeView_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OverrideBlendModeView_Impl__obj), false, "openfl._internal.renderer._DrawCommandReader.OverrideBlendModeView_Impl_"));
			*(void **)__this = OverrideBlendModeView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OverrideBlendModeView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("OverrideBlendModeView_Impl_","\x2d","\xaf","\xc6","\x47"); }

		static  ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static  ::Dynamic get_blendMode( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_blendMode_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_OverrideBlendModeView_Impl_ */ 
