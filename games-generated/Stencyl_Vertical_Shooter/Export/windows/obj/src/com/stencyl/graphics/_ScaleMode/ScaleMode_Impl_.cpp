// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics__ScaleMode_ScaleMode_Impl_
#include <com/stencyl/graphics/_ScaleMode/ScaleMode_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ae6c1e6239b873af_12__new,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_","_new",0x4f77a7ce,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_._new","com/stencyl/graphics/ScaleMode.hx",12,0x8dcf2fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_ae6c1e6239b873af_16_fromString,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_","fromString",0x2929d008,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_.fromString","com/stencyl/graphics/ScaleMode.hx",16,0x8dcf2fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_ae6c1e6239b873af_30_toString,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_","toString",0x98259d99,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_.toString","com/stencyl/graphics/ScaleMode.hx",30,0x8dcf2fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_ae6c1e6239b873af_5_boot,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_","boot",0x5174169f,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_.boot","com/stencyl/graphics/ScaleMode.hx",5,0x8dcf2fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_ae6c1e6239b873af_6_boot,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_","boot",0x5174169f,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_.boot","com/stencyl/graphics/ScaleMode.hx",6,0x8dcf2fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_ae6c1e6239b873af_7_boot,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_","boot",0x5174169f,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_.boot","com/stencyl/graphics/ScaleMode.hx",7,0x8dcf2fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_ae6c1e6239b873af_8_boot,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_","boot",0x5174169f,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_.boot","com/stencyl/graphics/ScaleMode.hx",8,0x8dcf2fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_ae6c1e6239b873af_9_boot,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_","boot",0x5174169f,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_.boot","com/stencyl/graphics/ScaleMode.hx",9,0x8dcf2fc4)
HX_LOCAL_STACK_FRAME(_hx_pos_ae6c1e6239b873af_10_boot,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_","boot",0x5174169f,"com.stencyl.graphics._ScaleMode.ScaleMode_Impl_.boot","com/stencyl/graphics/ScaleMode.hx",10,0x8dcf2fc4)
namespace com{
namespace stencyl{
namespace graphics{
namespace _ScaleMode{

void ScaleMode_Impl__obj::__construct() { }

Dynamic ScaleMode_Impl__obj::__CreateEmpty() { return new ScaleMode_Impl__obj; }

void *ScaleMode_Impl__obj::_hx_vtable = 0;

Dynamic ScaleMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScaleMode_Impl__obj > _hx_result = new ScaleMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScaleMode_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x48dfbd89;
}

int ScaleMode_Impl__obj::NO_SCALING;

int ScaleMode_Impl__obj::FULLSCREEN;

int ScaleMode_Impl__obj::STRETCH_TO_FIT;

int ScaleMode_Impl__obj::SCALE_TO_FIT_LETTERBOX;

int ScaleMode_Impl__obj::SCALE_TO_FIT_FILL;

int ScaleMode_Impl__obj::SCALE_TO_FIT_FULLSCREEN;

int ScaleMode_Impl__obj::_new(int value){
            	HX_STACKFRAME(&_hx_pos_ae6c1e6239b873af_12__new)
HXDLIN(  12)		int this1 = value;
HXDLIN(  12)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScaleMode_Impl__obj,_new,return )

int ScaleMode_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_ae6c1e6239b873af_16_fromString)
HXDLIN(  16)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("FULLSCREEN",3b,ae,bd,eb)) ){
HXLINE(  19)			return (int)1;
HXDLIN(  19)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("NO_SCALING",e9,88,c6,cd)) ){
HXLINE(  18)			return (int)0;
HXDLIN(  18)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("SCALE_TO_FIT_FILL",00,e5,69,47)) ){
HXLINE(  22)			return (int)4;
HXDLIN(  22)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("SCALE_TO_FIT_FULLSCREEN",78,78,94,cc)) ){
HXLINE(  23)			return (int)5;
HXDLIN(  23)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("SCALE_TO_FIT_LETTERBOX",28,21,09,73)) ){
HXLINE(  21)			return (int)3;
HXDLIN(  21)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("STRETCH_TO_FIT",07,fc,86,f0)) ){
HXLINE(  20)			return (int)2;
HXDLIN(  20)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  24)			return (int)0;
            		}
            		_hx_goto_1:;
HXLINE(  16)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScaleMode_Impl__obj,fromString,return )

::String ScaleMode_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_ae6c1e6239b873af_30_toString)
HXDLIN(  30)		switch((int)(this1)){
            			case (int)0: {
HXLINE(  32)				return HX_("NO_SCALING",e9,88,c6,cd);
            			}
            			break;
            			case (int)1: {
HXLINE(  33)				return HX_("FULLSCREEN",3b,ae,bd,eb);
            			}
            			break;
            			case (int)2: {
HXLINE(  34)				return HX_("STRETCH_TO_FIT",07,fc,86,f0);
            			}
            			break;
            			case (int)3: {
HXLINE(  35)				return HX_("SCALE_TO_FIT_LETTERBOX",28,21,09,73);
            			}
            			break;
            			case (int)4: {
HXLINE(  36)				return HX_("SCALE_TO_FIT_FILL",00,e5,69,47);
            			}
            			break;
            			case (int)5: {
HXLINE(  37)				return HX_("SCALE_TO_FIT_FULLSCREEN",78,78,94,cc);
            			}
            			break;
            			default:{
HXLINE(  38)				return HX_("NO_SCALING",e9,88,c6,cd);
            			}
            		}
HXLINE(  30)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScaleMode_Impl__obj,toString,return )


ScaleMode_Impl__obj::ScaleMode_Impl__obj()
{
}

bool ScaleMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ScaleMode_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo ScaleMode_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ScaleMode_Impl__obj::NO_SCALING,HX_HCSTRING("NO_SCALING","\xe9","\x88","\xc6","\xcd")},
	{hx::fsInt,(void *) &ScaleMode_Impl__obj::FULLSCREEN,HX_HCSTRING("FULLSCREEN","\x3b","\xae","\xbd","\xeb")},
	{hx::fsInt,(void *) &ScaleMode_Impl__obj::STRETCH_TO_FIT,HX_HCSTRING("STRETCH_TO_FIT","\x07","\xfc","\x86","\xf0")},
	{hx::fsInt,(void *) &ScaleMode_Impl__obj::SCALE_TO_FIT_LETTERBOX,HX_HCSTRING("SCALE_TO_FIT_LETTERBOX","\x28","\x21","\x09","\x73")},
	{hx::fsInt,(void *) &ScaleMode_Impl__obj::SCALE_TO_FIT_FILL,HX_HCSTRING("SCALE_TO_FIT_FILL","\x00","\xe5","\x69","\x47")},
	{hx::fsInt,(void *) &ScaleMode_Impl__obj::SCALE_TO_FIT_FULLSCREEN,HX_HCSTRING("SCALE_TO_FIT_FULLSCREEN","\x78","\x78","\x94","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ScaleMode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScaleMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScaleMode_Impl__obj::NO_SCALING,"NO_SCALING");
	HX_MARK_MEMBER_NAME(ScaleMode_Impl__obj::FULLSCREEN,"FULLSCREEN");
	HX_MARK_MEMBER_NAME(ScaleMode_Impl__obj::STRETCH_TO_FIT,"STRETCH_TO_FIT");
	HX_MARK_MEMBER_NAME(ScaleMode_Impl__obj::SCALE_TO_FIT_LETTERBOX,"SCALE_TO_FIT_LETTERBOX");
	HX_MARK_MEMBER_NAME(ScaleMode_Impl__obj::SCALE_TO_FIT_FILL,"SCALE_TO_FIT_FILL");
	HX_MARK_MEMBER_NAME(ScaleMode_Impl__obj::SCALE_TO_FIT_FULLSCREEN,"SCALE_TO_FIT_FULLSCREEN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScaleMode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScaleMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScaleMode_Impl__obj::NO_SCALING,"NO_SCALING");
	HX_VISIT_MEMBER_NAME(ScaleMode_Impl__obj::FULLSCREEN,"FULLSCREEN");
	HX_VISIT_MEMBER_NAME(ScaleMode_Impl__obj::STRETCH_TO_FIT,"STRETCH_TO_FIT");
	HX_VISIT_MEMBER_NAME(ScaleMode_Impl__obj::SCALE_TO_FIT_LETTERBOX,"SCALE_TO_FIT_LETTERBOX");
	HX_VISIT_MEMBER_NAME(ScaleMode_Impl__obj::SCALE_TO_FIT_FILL,"SCALE_TO_FIT_FILL");
	HX_VISIT_MEMBER_NAME(ScaleMode_Impl__obj::SCALE_TO_FIT_FULLSCREEN,"SCALE_TO_FIT_FULLSCREEN");
};

#endif

hx::Class ScaleMode_Impl__obj::__mClass;

static ::String ScaleMode_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("NO_SCALING","\xe9","\x88","\xc6","\xcd"),
	HX_HCSTRING("FULLSCREEN","\x3b","\xae","\xbd","\xeb"),
	HX_HCSTRING("STRETCH_TO_FIT","\x07","\xfc","\x86","\xf0"),
	HX_HCSTRING("SCALE_TO_FIT_LETTERBOX","\x28","\x21","\x09","\x73"),
	HX_HCSTRING("SCALE_TO_FIT_FILL","\x00","\xe5","\x69","\x47"),
	HX_HCSTRING("SCALE_TO_FIT_FULLSCREEN","\x78","\x78","\x94","\xcc"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void ScaleMode_Impl__obj::__register()
{
	hx::Object *dummy = new ScaleMode_Impl__obj;
	ScaleMode_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.graphics._ScaleMode.ScaleMode_Impl_","\x21","\xe5","\xbe","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ScaleMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ScaleMode_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ScaleMode_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ScaleMode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScaleMode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScaleMode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScaleMode_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ScaleMode_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ae6c1e6239b873af_5_boot)
HXDLIN(   5)		NO_SCALING = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ae6c1e6239b873af_6_boot)
HXDLIN(   6)		FULLSCREEN = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ae6c1e6239b873af_7_boot)
HXDLIN(   7)		STRETCH_TO_FIT = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ae6c1e6239b873af_8_boot)
HXDLIN(   8)		SCALE_TO_FIT_LETTERBOX = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ae6c1e6239b873af_9_boot)
HXDLIN(   9)		SCALE_TO_FIT_FILL = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ae6c1e6239b873af_10_boot)
HXDLIN(  10)		SCALE_TO_FIT_FULLSCREEN = (int)5;
            	}
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace _ScaleMode
