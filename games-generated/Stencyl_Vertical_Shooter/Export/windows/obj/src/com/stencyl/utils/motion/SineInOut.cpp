// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_motion_SineInOut
#include <com/stencyl/utils/motion/SineInOut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6f4e0d28c2227278_47_new,"com.stencyl.utils.motion.SineInOut","new",0xbd446362,"com.stencyl.utils.motion.SineInOut.new","com/stencyl/utils/motion/EasingFunctions.hx",47,0xda1c1718)
HX_LOCAL_STACK_FRAME(_hx_pos_6f4e0d28c2227278_49_apply,"com.stencyl.utils.motion.SineInOut","apply",0x6cb85cf0,"com.stencyl.utils.motion.SineInOut.apply","com/stencyl/utils/motion/EasingFunctions.hx",49,0xda1c1718)
namespace com{
namespace stencyl{
namespace utils{
namespace motion{

void SineInOut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6f4e0d28c2227278_47_new)
HXDLIN(  47)		super::__construct();
            	}

Dynamic SineInOut_obj::__CreateEmpty() { return new SineInOut_obj; }

void *SineInOut_obj::_hx_vtable = 0;

Dynamic SineInOut_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SineInOut_obj > _hx_result = new SineInOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SineInOut_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x047402bf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x047402bf;
	} else {
		return inClassId==(int)0x5bf67124;
	}
}

Float SineInOut_obj::apply(Float t){
            	HX_STACKFRAME(&_hx_pos_6f4e0d28c2227278_49_apply)
HXDLIN(  49)		if ((t == (int)0)) {
HXLINE(  50)			return (int)0;
            		}
            		else {
HXLINE(  51)			if ((t == (int)1)) {
HXLINE(  52)				return (int)1;
            			}
            			else {
HXLINE(  54)				return (((Float)-0.5) * (::Math_obj::cos((((Float)3.1415926535897932384626433832795) * t)) - (int)1));
            			}
            		}
HXLINE(  49)		return ((Float)0.);
            	}



SineInOut_obj::SineInOut_obj()
{
}

hx::Val SineInOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SineInOut_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SineInOut_obj_sStaticStorageInfo = 0;
#endif

static ::String SineInOut_obj_sMemberFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void SineInOut_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SineInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SineInOut_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SineInOut_obj::__mClass,"__mClass");
};

#endif

hx::Class SineInOut_obj::__mClass;

void SineInOut_obj::__register()
{
	hx::Object *dummy = new SineInOut_obj;
	SineInOut_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.utils.motion.SineInOut","\x70","\xca","\x7a","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SineInOut_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SineInOut_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SineInOut_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SineInOut_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SineInOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SineInOut_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion
