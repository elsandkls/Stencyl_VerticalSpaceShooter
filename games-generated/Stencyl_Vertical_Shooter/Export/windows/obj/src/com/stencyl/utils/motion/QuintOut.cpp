// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_motion_QuintOut
#include <com/stencyl/utils/motion/QuintOut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9b8cff59bd565041_183_new,"com.stencyl.utils.motion.QuintOut","new",0xfe75ad61,"com.stencyl.utils.motion.QuintOut.new","com/stencyl/utils/motion/EasingFunctions.hx",183,0xda1c1718)
HX_LOCAL_STACK_FRAME(_hx_pos_9b8cff59bd565041_185_apply,"com.stencyl.utils.motion.QuintOut","apply",0x544f64af,"com.stencyl.utils.motion.QuintOut.apply","com/stencyl/utils/motion/EasingFunctions.hx",185,0xda1c1718)
namespace com{
namespace stencyl{
namespace utils{
namespace motion{

void QuintOut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9b8cff59bd565041_183_new)
HXDLIN( 183)		super::__construct();
            	}

Dynamic QuintOut_obj::__CreateEmpty() { return new QuintOut_obj; }

void *QuintOut_obj::_hx_vtable = 0;

Dynamic QuintOut_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< QuintOut_obj > _hx_result = new QuintOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QuintOut_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x047402bf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x047402bf;
	} else {
		return inClassId==(int)0x64120f9f;
	}
}

Float QuintOut_obj::apply(Float t){
            	HX_STACKFRAME(&_hx_pos_9b8cff59bd565041_185_apply)
HXDLIN( 185)		t = (t - (int)1);
HXDLIN( 185)		Float _hx_tmp = t;
HXDLIN( 185)		t = (t * t);
HXDLIN( 185)		return (((_hx_tmp * t) * t) + (int)1);
            	}



QuintOut_obj::QuintOut_obj()
{
}

hx::Val QuintOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *QuintOut_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *QuintOut_obj_sStaticStorageInfo = 0;
#endif

static ::String QuintOut_obj_sMemberFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void QuintOut_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuintOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void QuintOut_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuintOut_obj::__mClass,"__mClass");
};

#endif

hx::Class QuintOut_obj::__mClass;

void QuintOut_obj::__register()
{
	hx::Object *dummy = new QuintOut_obj;
	QuintOut_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.utils.motion.QuintOut","\xef","\x68","\x21","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = QuintOut_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(QuintOut_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuintOut_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = QuintOut_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuintOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuintOut_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion
