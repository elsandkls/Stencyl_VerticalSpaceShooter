// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_utils_motion_BackInOut
#include <com/stencyl/utils/motion/BackInOut.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_205117c5055b7582_401_new,"com.stencyl.utils.motion.BackInOut","new",0x05b0d448,"com.stencyl.utils.motion.BackInOut.new","com/stencyl/utils/motion/EasingFunctions.hx",401,0xda1c1718)
HX_LOCAL_STACK_FRAME(_hx_pos_205117c5055b7582_403_apply,"com.stencyl.utils.motion.BackInOut","apply",0xfdcf5356,"com.stencyl.utils.motion.BackInOut.apply","com/stencyl/utils/motion/EasingFunctions.hx",403,0xda1c1718)
namespace com{
namespace stencyl{
namespace utils{
namespace motion{

void BackInOut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_205117c5055b7582_401_new)
HXDLIN( 401)		super::__construct();
            	}

Dynamic BackInOut_obj::__CreateEmpty() { return new BackInOut_obj; }

void *BackInOut_obj::_hx_vtable = 0;

Dynamic BackInOut_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BackInOut_obj > _hx_result = new BackInOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BackInOut_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x047402bf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x047402bf;
	} else {
		return inClassId==(int)0x7d3883a6;
	}
}

Float BackInOut_obj::apply(Float t){
            	HX_STACKFRAME(&_hx_pos_205117c5055b7582_403_apply)
HXDLIN( 403)		if ((t == (int)0)) {
HXLINE( 404)			return (int)0;
            		}
            		else {
HXLINE( 405)			if ((t == (int)1)) {
HXLINE( 406)				return (int)1;
            			}
            			else {
HXLINE( 407)				t = (t * (int)2);
HXDLIN( 407)				if ((t < (int)1)) {
HXLINE( 408)					return (((Float)0.5) * ((t * t) * ((((Float)3.5949095) * t) - ((Float)2.5949095))));
            				}
            				else {
HXLINE( 410)					t = (t - (int)2);
HXDLIN( 410)					Float _hx_tmp = (t * t);
HXDLIN( 410)					return (((Float)0.5) * ((_hx_tmp * ((((Float)3.5949095) * t) + ((Float)2.5949095))) + (int)2));
            				}
            			}
            		}
HXLINE( 403)		return ((Float)0.);
            	}



BackInOut_obj::BackInOut_obj()
{
}

hx::Val BackInOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BackInOut_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BackInOut_obj_sStaticStorageInfo = 0;
#endif

static ::String BackInOut_obj_sMemberFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void BackInOut_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BackInOut_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackInOut_obj::__mClass,"__mClass");
};

#endif

hx::Class BackInOut_obj::__mClass;

void BackInOut_obj::__register()
{
	hx::Object *dummy = new BackInOut_obj;
	BackInOut_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.utils.motion.BackInOut","\x56","\x50","\x97","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BackInOut_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BackInOut_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BackInOut_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BackInOut_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackInOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackInOut_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion
