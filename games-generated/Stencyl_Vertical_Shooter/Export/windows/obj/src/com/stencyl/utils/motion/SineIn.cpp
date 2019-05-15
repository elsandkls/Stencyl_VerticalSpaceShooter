// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_motion_SineIn
#include <com/stencyl/utils/motion/SineIn.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_480777dc0a78b5c0_19_new,"com.stencyl.utils.motion.SineIn","new",0x0a20f0b0,"com.stencyl.utils.motion.SineIn.new","com/stencyl/utils/motion/EasingFunctions.hx",19,0xda1c1718)
HX_LOCAL_STACK_FRAME(_hx_pos_480777dc0a78b5c0_21_apply,"com.stencyl.utils.motion.SineIn","apply",0x13cd59be,"com.stencyl.utils.motion.SineIn.apply","com/stencyl/utils/motion/EasingFunctions.hx",21,0xda1c1718)
namespace com{
namespace stencyl{
namespace utils{
namespace motion{

void SineIn_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_480777dc0a78b5c0_19_new)
HXDLIN(  19)		super::__construct();
            	}

Dynamic SineIn_obj::__CreateEmpty() { return new SineIn_obj; }

void *SineIn_obj::_hx_vtable = 0;

Dynamic SineIn_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SineIn_obj > _hx_result = new SineIn_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SineIn_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x047402bf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x047402bf;
	} else {
		return inClassId==(int)0x245ef98a;
	}
}

Float SineIn_obj::apply(Float t){
            	HX_STACKFRAME(&_hx_pos_480777dc0a78b5c0_21_apply)
HXDLIN(  21)		if ((t == (int)0)) {
HXLINE(  22)			return (int)0;
            		}
            		else {
HXLINE(  23)			if ((t == (int)1)) {
HXLINE(  24)				return (int)1;
            			}
            			else {
HXLINE(  26)				return ((int)1 - ::Math_obj::cos((t * ((Float)1.5707963267948966))));
            			}
            		}
HXLINE(  21)		return ((Float)0.);
            	}



SineIn_obj::SineIn_obj()
{
}

hx::Val SineIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SineIn_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SineIn_obj_sStaticStorageInfo = 0;
#endif

static ::String SineIn_obj_sMemberFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void SineIn_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SineIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SineIn_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SineIn_obj::__mClass,"__mClass");
};

#endif

hx::Class SineIn_obj::__mClass;

void SineIn_obj::__register()
{
	hx::Object *dummy = new SineIn_obj;
	SineIn_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.utils.motion.SineIn","\xbe","\x18","\xd7","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SineIn_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SineIn_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SineIn_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SineIn_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SineIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SineIn_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion