// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__CairoRenderContext_CairoRenderContext_Impl_
#include <lime/graphics/_CairoRenderContext/CairoRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8556288c3ba73522_28_fromRenderContext,"lime.graphics._CairoRenderContext.CairoRenderContext_Impl_","fromRenderContext",0x4c67089a,"lime.graphics._CairoRenderContext.CairoRenderContext_Impl_.fromRenderContext","lime/graphics/CairoRenderContext.hx",28,0x00243123)
namespace lime{
namespace graphics{
namespace _CairoRenderContext{

void CairoRenderContext_Impl__obj::__construct() { }

Dynamic CairoRenderContext_Impl__obj::__CreateEmpty() { return new CairoRenderContext_Impl__obj; }

void *CairoRenderContext_Impl__obj::_hx_vtable = 0;

Dynamic CairoRenderContext_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoRenderContext_Impl__obj > _hx_result = new CairoRenderContext_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoRenderContext_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13a40401;
}

 ::lime::graphics::cairo::Cairo CairoRenderContext_Impl__obj::fromRenderContext( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_8556288c3ba73522_28_fromRenderContext)
HXDLIN(  28)		return context->cairo;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoRenderContext_Impl__obj,fromRenderContext,return )


CairoRenderContext_Impl__obj::CairoRenderContext_Impl__obj()
{
}

bool CairoRenderContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"fromRenderContext") ) { outValue = fromRenderContext_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoRenderContext_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CairoRenderContext_Impl__obj_sStaticStorageInfo = 0;
#endif

static void CairoRenderContext_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoRenderContext_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoRenderContext_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoRenderContext_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CairoRenderContext_Impl__obj::__mClass;

static ::String CairoRenderContext_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromRenderContext","\x6f","\x19","\xd4","\xba"),
	::String(null())
};

void CairoRenderContext_Impl__obj::__register()
{
	hx::Object *dummy = new CairoRenderContext_Impl__obj;
	CairoRenderContext_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics._CairoRenderContext.CairoRenderContext_Impl_","\xd9","\xd8","\x31","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoRenderContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoRenderContext_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoRenderContext_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoRenderContext_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoRenderContext_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoRenderContext_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoRenderContext_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace _CairoRenderContext
