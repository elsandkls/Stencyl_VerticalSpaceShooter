// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_utils_motion_BackOutIn
#include <com/stencyl/utils/motion/BackOutIn.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b69f8211e877f2c9_417_new,"com.stencyl.utils.motion.BackOutIn","new",0x7e3937b2,"com.stencyl.utils.motion.BackOutIn.new","com/stencyl/utils/motion/EasingFunctions.hx",417,0xda1c1718)
HX_LOCAL_STACK_FRAME(_hx_pos_b69f8211e877f2c9_419_apply,"com.stencyl.utils.motion.BackOutIn","apply",0xf3c6e540,"com.stencyl.utils.motion.BackOutIn.apply","com/stencyl/utils/motion/EasingFunctions.hx",419,0xda1c1718)
namespace com{
namespace stencyl{
namespace utils{
namespace motion{

void BackOutIn_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b69f8211e877f2c9_417_new)
HXDLIN( 417)		super::__construct();
            	}

Dynamic BackOutIn_obj::__CreateEmpty() { return new BackOutIn_obj; }

void *BackOutIn_obj::_hx_vtable = 0;

Dynamic BackOutIn_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BackOutIn_obj > _hx_result = new BackOutIn_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BackOutIn_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x047402bf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x047402bf;
	} else {
		return inClassId==(int)0x561150d8;
	}
}

Float BackOutIn_obj::apply(Float t){
            	HX_STACKFRAME(&_hx_pos_b69f8211e877f2c9_419_apply)
HXDLIN( 419)		if ((t == (int)0)) {
HXLINE( 420)			return (int)0;
            		}
            		else {
HXLINE( 421)			if ((t == (int)1)) {
HXLINE( 422)				return (int)1;
            			}
            			else {
HXLINE( 423)				if ((t < ((Float)0.5))) {
HXLINE( 424)					t = ((t * (int)2) - (int)1);
HXDLIN( 424)					Float _hx_tmp = (t * t);
HXDLIN( 424)					return (((Float)0.5) * ((_hx_tmp * ((((Float)2.70158) * t) + ((Float)1.70158))) + (int)1));
            				}
            				else {
HXLINE( 426)					t = ((t * (int)2) - (int)1);
HXDLIN( 426)					Float _hx_tmp1 = ((((Float)0.5) * t) * t);
HXDLIN( 426)					return ((_hx_tmp1 * ((((Float)2.70158) * t) - ((Float)1.70158))) + ((Float)0.5));
            				}
            			}
            		}
HXLINE( 419)		return ((Float)0.);
            	}



BackOutIn_obj::BackOutIn_obj()
{
}

hx::Val BackOutIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BackOutIn_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BackOutIn_obj_sStaticStorageInfo = 0;
#endif

static ::String BackOutIn_obj_sMemberFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void BackOutIn_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackOutIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BackOutIn_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackOutIn_obj::__mClass,"__mClass");
};

#endif

hx::Class BackOutIn_obj::__mClass;

void BackOutIn_obj::__register()
{
	hx::Object *dummy = new BackOutIn_obj;
	BackOutIn_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.utils.motion.BackOutIn","\xc0","\x36","\xbb","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BackOutIn_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BackOutIn_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BackOutIn_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BackOutIn_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackOutIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackOutIn_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion
