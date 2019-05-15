// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_motion_ExpoIn
#include <com/stencyl/utils/motion/ExpoIn.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c75b6e078600def1_207_new,"com.stencyl.utils.motion.ExpoIn","new",0xf46f1155,"com.stencyl.utils.motion.ExpoIn.new","com/stencyl/utils/motion/EasingFunctions.hx",207,0xda1c1718)
HX_LOCAL_STACK_FRAME(_hx_pos_c75b6e078600def1_209_apply,"com.stencyl.utils.motion.ExpoIn","apply",0xc660ada3,"com.stencyl.utils.motion.ExpoIn.apply","com/stencyl/utils/motion/EasingFunctions.hx",209,0xda1c1718)
namespace com{
namespace stencyl{
namespace utils{
namespace motion{

void ExpoIn_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c75b6e078600def1_207_new)
HXDLIN( 207)		super::__construct();
            	}

Dynamic ExpoIn_obj::__CreateEmpty() { return new ExpoIn_obj; }

void *ExpoIn_obj::_hx_vtable = 0;

Dynamic ExpoIn_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ExpoIn_obj > _hx_result = new ExpoIn_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ExpoIn_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x047402bf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x047402bf;
	} else {
		return inClassId==(int)0x2fbca3af;
	}
}

Float ExpoIn_obj::apply(Float t){
            	HX_STACKFRAME(&_hx_pos_c75b6e078600def1_209_apply)
HXDLIN( 209)		if ((t == (int)0)) {
HXDLIN( 209)			return (int)0;
            		}
            		else {
HXDLIN( 209)			return ::Math_obj::exp((((Float)6.931471805599453) * (t - (int)1)));
            		}
HXDLIN( 209)		return ((Float)0.);
            	}



ExpoIn_obj::ExpoIn_obj()
{
}

hx::Val ExpoIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ExpoIn_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ExpoIn_obj_sStaticStorageInfo = 0;
#endif

static ::String ExpoIn_obj_sMemberFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void ExpoIn_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExpoIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ExpoIn_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExpoIn_obj::__mClass,"__mClass");
};

#endif

hx::Class ExpoIn_obj::__mClass;

void ExpoIn_obj::__register()
{
	hx::Object *dummy = new ExpoIn_obj;
	ExpoIn_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.utils.motion.ExpoIn","\xe3","\xc2","\x34","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ExpoIn_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ExpoIn_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExpoIn_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ExpoIn_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExpoIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExpoIn_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion