// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_motion_ElasticOutIn
#include <com/stencyl/utils/motion/ElasticOutIn.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_70808b85732208f9_483_new,"com.stencyl.utils.motion.ElasticOutIn","new",0x6682c61c,"com.stencyl.utils.motion.ElasticOutIn.new","com/stencyl/utils/motion/EasingFunctions.hx",483,0xda1c1718)
HX_LOCAL_STACK_FRAME(_hx_pos_70808b85732208f9_485_apply,"com.stencyl.utils.motion.ElasticOutIn","apply",0xac60622a,"com.stencyl.utils.motion.ElasticOutIn.apply","com/stencyl/utils/motion/EasingFunctions.hx",485,0xda1c1718)
namespace com{
namespace stencyl{
namespace utils{
namespace motion{

void ElasticOutIn_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_70808b85732208f9_483_new)
HXDLIN( 483)		super::__construct();
            	}

Dynamic ElasticOutIn_obj::__CreateEmpty() { return new ElasticOutIn_obj; }

void *ElasticOutIn_obj::_hx_vtable = 0;

Dynamic ElasticOutIn_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ElasticOutIn_obj > _hx_result = new ElasticOutIn_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ElasticOutIn_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x047402bf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x047402bf;
	} else {
		return inClassId==(int)0x64b949f6;
	}
}

Float ElasticOutIn_obj::apply(Float t){
            	HX_STACKFRAME(&_hx_pos_70808b85732208f9_485_apply)
HXDLIN( 485)		if ((t < ((Float)0.5))) {
HXLINE( 486)			t = (t * (int)2);
HXDLIN( 486)			if ((t == (int)0)) {
HXLINE( 487)				return (int)0;
            			}
            			else {
HXLINE( 489)				Float s = ((Float)7.5e-005);
HXLINE( 490)				Float _hx_tmp = (((Float)0.5) * ::Math_obj::exp((((Float)-6.9314718055994531) * t)));
HXDLIN( 490)				return ((_hx_tmp * ::Math_obj::sin(((Float)(((t * ((Float)0.001)) - s) * ((Float)6.2831853071795862)) / (Float)((Float)0.0003)))) + ((Float)0.5));
            			}
            		}
            		else {
HXLINE( 493)			if ((t == ((Float)0.5))) {
HXLINE( 494)				return ((Float)0.5);
            			}
            			else {
HXLINE( 495)				if ((t == (int)1)) {
HXLINE( 496)					return (int)1;
            				}
            				else {
HXLINE( 498)					t = ((t * (int)2) - (int)1);
HXLINE( 499)					Float s1 = ((Float)7.5e-005);
HXLINE( 500)					t = (t - (int)1);
HXDLIN( 500)					Float _hx_tmp1 = (((Float)0.5) * ::Math_obj::exp((((Float)6.931471805599453) * t)));
HXDLIN( 500)					return (-((_hx_tmp1 * ::Math_obj::sin(((Float)(((t * ((Float)0.001)) - s1) * ((Float)6.2831853071795862)) / (Float)((Float)0.0003))))) + ((Float)0.5));
            				}
            			}
            		}
HXLINE( 485)		return ((Float)0.);
            	}



ElasticOutIn_obj::ElasticOutIn_obj()
{
}

hx::Val ElasticOutIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ElasticOutIn_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ElasticOutIn_obj_sStaticStorageInfo = 0;
#endif

static ::String ElasticOutIn_obj_sMemberFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void ElasticOutIn_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ElasticOutIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ElasticOutIn_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElasticOutIn_obj::__mClass,"__mClass");
};

#endif

hx::Class ElasticOutIn_obj::__mClass;

void ElasticOutIn_obj::__register()
{
	hx::Object *dummy = new ElasticOutIn_obj;
	ElasticOutIn_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.utils.motion.ElasticOutIn","\x2a","\xc8","\xee","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ElasticOutIn_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ElasticOutIn_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ElasticOutIn_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ElasticOutIn_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ElasticOutIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ElasticOutIn_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion
