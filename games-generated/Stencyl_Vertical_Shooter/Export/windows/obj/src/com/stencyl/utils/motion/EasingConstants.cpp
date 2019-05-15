// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_utils_motion_EasingConstants
#include <com/stencyl/utils/motion/EasingConstants.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_de9e93952ceb51a1_5_boot,"com.stencyl.utils.motion.EasingConstants","boot",0x29f0b6a8,"com.stencyl.utils.motion.EasingConstants.boot","com/stencyl/utils/motion/EasingConstants.hx",5,0x001e4364)
HX_LOCAL_STACK_FRAME(_hx_pos_de9e93952ceb51a1_6_boot,"com.stencyl.utils.motion.EasingConstants","boot",0x29f0b6a8,"com.stencyl.utils.motion.EasingConstants.boot","com/stencyl/utils/motion/EasingConstants.hx",6,0x001e4364)
HX_LOCAL_STACK_FRAME(_hx_pos_de9e93952ceb51a1_7_boot,"com.stencyl.utils.motion.EasingConstants","boot",0x29f0b6a8,"com.stencyl.utils.motion.EasingConstants.boot","com/stencyl/utils/motion/EasingConstants.hx",7,0x001e4364)
HX_LOCAL_STACK_FRAME(_hx_pos_de9e93952ceb51a1_8_boot,"com.stencyl.utils.motion.EasingConstants","boot",0x29f0b6a8,"com.stencyl.utils.motion.EasingConstants.boot","com/stencyl/utils/motion/EasingConstants.hx",8,0x001e4364)
HX_LOCAL_STACK_FRAME(_hx_pos_de9e93952ceb51a1_9_boot,"com.stencyl.utils.motion.EasingConstants","boot",0x29f0b6a8,"com.stencyl.utils.motion.EasingConstants.boot","com/stencyl/utils/motion/EasingConstants.hx",9,0x001e4364)
HX_LOCAL_STACK_FRAME(_hx_pos_de9e93952ceb51a1_10_boot,"com.stencyl.utils.motion.EasingConstants","boot",0x29f0b6a8,"com.stencyl.utils.motion.EasingConstants.boot","com/stencyl/utils/motion/EasingConstants.hx",10,0x001e4364)
HX_LOCAL_STACK_FRAME(_hx_pos_de9e93952ceb51a1_11_boot,"com.stencyl.utils.motion.EasingConstants","boot",0x29f0b6a8,"com.stencyl.utils.motion.EasingConstants.boot","com/stencyl/utils/motion/EasingConstants.hx",11,0x001e4364)
namespace com{
namespace stencyl{
namespace utils{
namespace motion{

void EasingConstants_obj::__construct() { }

Dynamic EasingConstants_obj::__CreateEmpty() { return new EasingConstants_obj; }

void *EasingConstants_obj::_hx_vtable = 0;

Dynamic EasingConstants_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EasingConstants_obj > _hx_result = new EasingConstants_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EasingConstants_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7176d108;
}

Float EasingConstants_obj::PI;

Float EasingConstants_obj::PI_H;

Float EasingConstants_obj::LN_2;

Float EasingConstants_obj::LN_2_10;

Float EasingConstants_obj::overshoot;

Float EasingConstants_obj::amplitude;

Float EasingConstants_obj::period;


EasingConstants_obj::EasingConstants_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *EasingConstants_obj_sMemberStorageInfo = 0;
static hx::StaticInfo EasingConstants_obj_sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &EasingConstants_obj::PI,HX_HCSTRING("PI","\xf9","\x45","\x00","\x00")},
	{hx::fsFloat,(void *) &EasingConstants_obj::PI_H,HX_HCSTRING("PI_H","\x42","\xc9","\x18","\x35")},
	{hx::fsFloat,(void *) &EasingConstants_obj::LN_2,HX_HCSTRING("LN_2","\xf5","\xb9","\x77","\x32")},
	{hx::fsFloat,(void *) &EasingConstants_obj::LN_2_10,HX_HCSTRING("LN_2_10","\x29","\x6e","\x9b","\x5c")},
	{hx::fsFloat,(void *) &EasingConstants_obj::overshoot,HX_HCSTRING("overshoot","\x0b","\xa0","\xbb","\x4c")},
	{hx::fsFloat,(void *) &EasingConstants_obj::amplitude,HX_HCSTRING("amplitude","\x43","\x15","\xfb","\x69")},
	{hx::fsFloat,(void *) &EasingConstants_obj::period,HX_HCSTRING("period","\x01","\x61","\x1b","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void EasingConstants_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EasingConstants_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EasingConstants_obj::PI,"PI");
	HX_MARK_MEMBER_NAME(EasingConstants_obj::PI_H,"PI_H");
	HX_MARK_MEMBER_NAME(EasingConstants_obj::LN_2,"LN_2");
	HX_MARK_MEMBER_NAME(EasingConstants_obj::LN_2_10,"LN_2_10");
	HX_MARK_MEMBER_NAME(EasingConstants_obj::overshoot,"overshoot");
	HX_MARK_MEMBER_NAME(EasingConstants_obj::amplitude,"amplitude");
	HX_MARK_MEMBER_NAME(EasingConstants_obj::period,"period");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EasingConstants_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EasingConstants_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EasingConstants_obj::PI,"PI");
	HX_VISIT_MEMBER_NAME(EasingConstants_obj::PI_H,"PI_H");
	HX_VISIT_MEMBER_NAME(EasingConstants_obj::LN_2,"LN_2");
	HX_VISIT_MEMBER_NAME(EasingConstants_obj::LN_2_10,"LN_2_10");
	HX_VISIT_MEMBER_NAME(EasingConstants_obj::overshoot,"overshoot");
	HX_VISIT_MEMBER_NAME(EasingConstants_obj::amplitude,"amplitude");
	HX_VISIT_MEMBER_NAME(EasingConstants_obj::period,"period");
};

#endif

hx::Class EasingConstants_obj::__mClass;

static ::String EasingConstants_obj_sStaticFields[] = {
	HX_HCSTRING("PI","\xf9","\x45","\x00","\x00"),
	HX_HCSTRING("PI_H","\x42","\xc9","\x18","\x35"),
	HX_HCSTRING("LN_2","\xf5","\xb9","\x77","\x32"),
	HX_HCSTRING("LN_2_10","\x29","\x6e","\x9b","\x5c"),
	HX_HCSTRING("overshoot","\x0b","\xa0","\xbb","\x4c"),
	HX_HCSTRING("amplitude","\x43","\x15","\xfb","\x69"),
	HX_HCSTRING("period","\x01","\x61","\x1b","\x3b"),
	::String(null())
};

void EasingConstants_obj::__register()
{
	hx::Object *dummy = new EasingConstants_obj;
	EasingConstants_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.utils.motion.EasingConstants","\xb8","\x41","\xb8","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EasingConstants_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(EasingConstants_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EasingConstants_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EasingConstants_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EasingConstants_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EasingConstants_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EasingConstants_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_de9e93952ceb51a1_5_boot)
HXDLIN(   5)		PI = ((Float)3.1415926535897932384626433832795);
            	}
{
            	HX_STACKFRAME(&_hx_pos_de9e93952ceb51a1_6_boot)
HXDLIN(   6)		PI_H = ((Float)1.5707963267948966);
            	}
{
            	HX_STACKFRAME(&_hx_pos_de9e93952ceb51a1_7_boot)
HXDLIN(   7)		LN_2 = ((Float)0.6931471805599453);
            	}
{
            	HX_STACKFRAME(&_hx_pos_de9e93952ceb51a1_8_boot)
HXDLIN(   8)		LN_2_10 = ((Float)6.931471805599453);
            	}
{
            	HX_STACKFRAME(&_hx_pos_de9e93952ceb51a1_9_boot)
HXDLIN(   9)		overshoot = ((Float)1.70158);
            	}
{
            	HX_STACKFRAME(&_hx_pos_de9e93952ceb51a1_10_boot)
HXDLIN(  10)		amplitude = ((Float)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_de9e93952ceb51a1_11_boot)
HXDLIN(  11)		period = ((Float)0.0003);
            	}
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion