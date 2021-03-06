// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_utils_motion_BounceIn
#include <com/stencyl/utils/motion/BounceIn.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a9dea79694a270a6_285_new,"com.stencyl.utils.motion.BounceIn","new",0xdce8a12b,"com.stencyl.utils.motion.BounceIn.new","com/stencyl/utils/motion/EasingFunctions.hx",285,0xda1c1718)
HX_LOCAL_STACK_FRAME(_hx_pos_a9dea79694a270a6_287_apply,"com.stencyl.utils.motion.BounceIn","apply",0xec3e5ef9,"com.stencyl.utils.motion.BounceIn.apply","com/stencyl/utils/motion/EasingFunctions.hx",287,0xda1c1718)
namespace com{
namespace stencyl{
namespace utils{
namespace motion{

void BounceIn_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a9dea79694a270a6_285_new)
HXDLIN( 285)		super::__construct();
            	}

Dynamic BounceIn_obj::__CreateEmpty() { return new BounceIn_obj; }

void *BounceIn_obj::_hx_vtable = 0;

Dynamic BounceIn_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BounceIn_obj > _hx_result = new BounceIn_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BounceIn_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x047402bf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x047402bf;
	} else {
		return inClassId==(int)0x6ea2db85;
	}
}

Float BounceIn_obj::apply(Float t){
            	HX_STACKFRAME(&_hx_pos_a9dea79694a270a6_287_apply)
HXDLIN( 287)		t = ((int)1 - t);
HXDLIN( 287)		if ((t < ((Float)0.36363636363636365))) {
HXLINE( 288)			return ((int)1 - ((((Float)7.5625) * t) * t));
            		}
            		else {
HXLINE( 289)			if ((t < ((Float)0.72727272727272729))) {
HXLINE( 290)				t = (t - ((Float)0.54545454545454541));
HXDLIN( 290)				return ((int)1 - (((((Float)7.5625) * t) * t) + ((Float)0.75)));
            			}
            			else {
HXLINE( 291)				if ((t < ((Float)0.90909090909090906))) {
HXLINE( 292)					t = (t - ((Float)0.81818181818181823));
HXDLIN( 292)					return ((int)1 - (((((Float)7.5625) * t) * t) + ((Float)0.9375)));
            				}
            				else {
HXLINE( 294)					t = (t - ((Float)0.95454545454545459));
HXDLIN( 294)					return ((int)1 - (((((Float)7.5625) * t) * t) + ((Float)0.984375)));
            				}
            			}
            		}
HXLINE( 287)		return ((Float)0.);
            	}



BounceIn_obj::BounceIn_obj()
{
}

hx::Val BounceIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BounceIn_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BounceIn_obj_sStaticStorageInfo = 0;
#endif

static ::String BounceIn_obj_sMemberFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void BounceIn_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BounceIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BounceIn_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BounceIn_obj::__mClass,"__mClass");
};

#endif

hx::Class BounceIn_obj::__mClass;

void BounceIn_obj::__register()
{
	hx::Object *dummy = new BounceIn_obj;
	BounceIn_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.utils.motion.BounceIn","\xb9","\x2f","\xc8","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BounceIn_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BounceIn_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BounceIn_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BounceIn_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BounceIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BounceIn_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion
