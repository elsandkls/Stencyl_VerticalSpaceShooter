// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_WindingNonZeroView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/WindingNonZeroView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3314eca9e5e9aad3_476__new,"openfl._internal.renderer._DrawCommandReader.WindingNonZeroView_Impl_","_new",0xb0a56387,"openfl._internal.renderer._DrawCommandReader.WindingNonZeroView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",476,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void WindingNonZeroView_Impl__obj::__construct() { }

Dynamic WindingNonZeroView_Impl__obj::__CreateEmpty() { return new WindingNonZeroView_Impl__obj; }

void *WindingNonZeroView_Impl__obj::_hx_vtable = 0;

Dynamic WindingNonZeroView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WindingNonZeroView_Impl__obj > _hx_result = new WindingNonZeroView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WindingNonZeroView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2caf595a;
}

 ::openfl::_internal::renderer::DrawCommandReader WindingNonZeroView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_3314eca9e5e9aad3_476__new)
HXDLIN( 476)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 476)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WindingNonZeroView_Impl__obj,_new,return )


WindingNonZeroView_Impl__obj::WindingNonZeroView_Impl__obj()
{
}

bool WindingNonZeroView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *WindingNonZeroView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *WindingNonZeroView_Impl__obj_sStaticStorageInfo = 0;
#endif

static void WindingNonZeroView_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindingNonZeroView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WindingNonZeroView_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindingNonZeroView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class WindingNonZeroView_Impl__obj::__mClass;

static ::String WindingNonZeroView_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null())
};

void WindingNonZeroView_Impl__obj::__register()
{
	hx::Object *dummy = new WindingNonZeroView_Impl__obj;
	WindingNonZeroView_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.WindingNonZeroView_Impl_","\x08","\xc4","\xfc","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WindingNonZeroView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WindingNonZeroView_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(WindingNonZeroView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< WindingNonZeroView_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WindingNonZeroView_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindingNonZeroView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindingNonZeroView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader