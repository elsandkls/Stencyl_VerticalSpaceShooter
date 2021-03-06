// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_models_scene_Autotile
#include <com/stencyl/models/scene/Autotile.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_01b51bb446e6285a_8_boot,"com.stencyl.models.scene.Autotile","boot",0x0fd88aec,"com.stencyl.models.scene.Autotile.boot","com/stencyl/models/scene/Autotile.hx",8,0x14de9aca)
HX_LOCAL_STACK_FRAME(_hx_pos_01b51bb446e6285a_10_boot,"com.stencyl.models.scene.Autotile","boot",0x0fd88aec,"com.stencyl.models.scene.Autotile.boot","com/stencyl/models/scene/Autotile.hx",10,0x14de9aca)
HX_LOCAL_STACK_FRAME(_hx_pos_01b51bb446e6285a_11_boot,"com.stencyl.models.scene.Autotile","boot",0x0fd88aec,"com.stencyl.models.scene.Autotile.boot","com/stencyl/models/scene/Autotile.hx",11,0x14de9aca)
HX_LOCAL_STACK_FRAME(_hx_pos_01b51bb446e6285a_12_boot,"com.stencyl.models.scene.Autotile","boot",0x0fd88aec,"com.stencyl.models.scene.Autotile.boot","com/stencyl/models/scene/Autotile.hx",12,0x14de9aca)
HX_LOCAL_STACK_FRAME(_hx_pos_01b51bb446e6285a_13_boot,"com.stencyl.models.scene.Autotile","boot",0x0fd88aec,"com.stencyl.models.scene.Autotile.boot","com/stencyl/models/scene/Autotile.hx",13,0x14de9aca)
HX_LOCAL_STACK_FRAME(_hx_pos_01b51bb446e6285a_14_boot,"com.stencyl.models.scene.Autotile","boot",0x0fd88aec,"com.stencyl.models.scene.Autotile.boot","com/stencyl/models/scene/Autotile.hx",14,0x14de9aca)
HX_LOCAL_STACK_FRAME(_hx_pos_01b51bb446e6285a_15_boot,"com.stencyl.models.scene.Autotile","boot",0x0fd88aec,"com.stencyl.models.scene.Autotile.boot","com/stencyl/models/scene/Autotile.hx",15,0x14de9aca)
HX_LOCAL_STACK_FRAME(_hx_pos_01b51bb446e6285a_16_boot,"com.stencyl.models.scene.Autotile","boot",0x0fd88aec,"com.stencyl.models.scene.Autotile.boot","com/stencyl/models/scene/Autotile.hx",16,0x14de9aca)
HX_LOCAL_STACK_FRAME(_hx_pos_01b51bb446e6285a_17_boot,"com.stencyl.models.scene.Autotile","boot",0x0fd88aec,"com.stencyl.models.scene.Autotile.boot","com/stencyl/models/scene/Autotile.hx",17,0x14de9aca)
namespace com{
namespace stencyl{
namespace models{
namespace scene{

void Autotile_obj::__construct() { }

Dynamic Autotile_obj::__CreateEmpty() { return new Autotile_obj; }

void *Autotile_obj::_hx_vtable = 0;

Dynamic Autotile_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Autotile_obj > _hx_result = new Autotile_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Autotile_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a402fb4;
}

int Autotile_obj::NO_AUTOTILE_DATA;

int Autotile_obj::CORNER_TL;

int Autotile_obj::CORNER_TR;

int Autotile_obj::CORNER_BR;

int Autotile_obj::CORNER_BL;

int Autotile_obj::SIDE_L;

int Autotile_obj::SIDE_T;

int Autotile_obj::SIDE_R;

int Autotile_obj::SIDE_B;


Autotile_obj::Autotile_obj()
{
}

bool Autotile_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"SIDE_L") ) { outValue = ( SIDE_L ); return true; }
		if (HX_FIELD_EQ(inName,"SIDE_T") ) { outValue = ( SIDE_T ); return true; }
		if (HX_FIELD_EQ(inName,"SIDE_R") ) { outValue = ( SIDE_R ); return true; }
		if (HX_FIELD_EQ(inName,"SIDE_B") ) { outValue = ( SIDE_B ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CORNER_TL") ) { outValue = ( CORNER_TL ); return true; }
		if (HX_FIELD_EQ(inName,"CORNER_TR") ) { outValue = ( CORNER_TR ); return true; }
		if (HX_FIELD_EQ(inName,"CORNER_BR") ) { outValue = ( CORNER_BR ); return true; }
		if (HX_FIELD_EQ(inName,"CORNER_BL") ) { outValue = ( CORNER_BL ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NO_AUTOTILE_DATA") ) { outValue = ( NO_AUTOTILE_DATA ); return true; }
	}
	return false;
}

bool Autotile_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"SIDE_L") ) { SIDE_L=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SIDE_T") ) { SIDE_T=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SIDE_R") ) { SIDE_R=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SIDE_B") ) { SIDE_B=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CORNER_TL") ) { CORNER_TL=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CORNER_TR") ) { CORNER_TR=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CORNER_BR") ) { CORNER_BR=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CORNER_BL") ) { CORNER_BL=ioValue.Cast< int >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NO_AUTOTILE_DATA") ) { NO_AUTOTILE_DATA=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Autotile_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Autotile_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Autotile_obj::NO_AUTOTILE_DATA,HX_HCSTRING("NO_AUTOTILE_DATA","\x0e","\x97","\xd7","\x68")},
	{hx::fsInt,(void *) &Autotile_obj::CORNER_TL,HX_HCSTRING("CORNER_TL","\xe2","\xc6","\x97","\x4e")},
	{hx::fsInt,(void *) &Autotile_obj::CORNER_TR,HX_HCSTRING("CORNER_TR","\xe8","\xc6","\x97","\x4e")},
	{hx::fsInt,(void *) &Autotile_obj::CORNER_BR,HX_HCSTRING("CORNER_BR","\x3a","\xb7","\x97","\x4e")},
	{hx::fsInt,(void *) &Autotile_obj::CORNER_BL,HX_HCSTRING("CORNER_BL","\x34","\xb7","\x97","\x4e")},
	{hx::fsInt,(void *) &Autotile_obj::SIDE_L,HX_HCSTRING("SIDE_L","\x64","\x7c","\x06","\x65")},
	{hx::fsInt,(void *) &Autotile_obj::SIDE_T,HX_HCSTRING("SIDE_T","\x6c","\x7c","\x06","\x65")},
	{hx::fsInt,(void *) &Autotile_obj::SIDE_R,HX_HCSTRING("SIDE_R","\x6a","\x7c","\x06","\x65")},
	{hx::fsInt,(void *) &Autotile_obj::SIDE_B,HX_HCSTRING("SIDE_B","\x5a","\x7c","\x06","\x65")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Autotile_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Autotile_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Autotile_obj::NO_AUTOTILE_DATA,"NO_AUTOTILE_DATA");
	HX_MARK_MEMBER_NAME(Autotile_obj::CORNER_TL,"CORNER_TL");
	HX_MARK_MEMBER_NAME(Autotile_obj::CORNER_TR,"CORNER_TR");
	HX_MARK_MEMBER_NAME(Autotile_obj::CORNER_BR,"CORNER_BR");
	HX_MARK_MEMBER_NAME(Autotile_obj::CORNER_BL,"CORNER_BL");
	HX_MARK_MEMBER_NAME(Autotile_obj::SIDE_L,"SIDE_L");
	HX_MARK_MEMBER_NAME(Autotile_obj::SIDE_T,"SIDE_T");
	HX_MARK_MEMBER_NAME(Autotile_obj::SIDE_R,"SIDE_R");
	HX_MARK_MEMBER_NAME(Autotile_obj::SIDE_B,"SIDE_B");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Autotile_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Autotile_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Autotile_obj::NO_AUTOTILE_DATA,"NO_AUTOTILE_DATA");
	HX_VISIT_MEMBER_NAME(Autotile_obj::CORNER_TL,"CORNER_TL");
	HX_VISIT_MEMBER_NAME(Autotile_obj::CORNER_TR,"CORNER_TR");
	HX_VISIT_MEMBER_NAME(Autotile_obj::CORNER_BR,"CORNER_BR");
	HX_VISIT_MEMBER_NAME(Autotile_obj::CORNER_BL,"CORNER_BL");
	HX_VISIT_MEMBER_NAME(Autotile_obj::SIDE_L,"SIDE_L");
	HX_VISIT_MEMBER_NAME(Autotile_obj::SIDE_T,"SIDE_T");
	HX_VISIT_MEMBER_NAME(Autotile_obj::SIDE_R,"SIDE_R");
	HX_VISIT_MEMBER_NAME(Autotile_obj::SIDE_B,"SIDE_B");
};

#endif

hx::Class Autotile_obj::__mClass;

static ::String Autotile_obj_sStaticFields[] = {
	HX_HCSTRING("NO_AUTOTILE_DATA","\x0e","\x97","\xd7","\x68"),
	HX_HCSTRING("CORNER_TL","\xe2","\xc6","\x97","\x4e"),
	HX_HCSTRING("CORNER_TR","\xe8","\xc6","\x97","\x4e"),
	HX_HCSTRING("CORNER_BR","\x3a","\xb7","\x97","\x4e"),
	HX_HCSTRING("CORNER_BL","\x34","\xb7","\x97","\x4e"),
	HX_HCSTRING("SIDE_L","\x64","\x7c","\x06","\x65"),
	HX_HCSTRING("SIDE_T","\x6c","\x7c","\x06","\x65"),
	HX_HCSTRING("SIDE_R","\x6a","\x7c","\x06","\x65"),
	HX_HCSTRING("SIDE_B","\x5a","\x7c","\x06","\x65"),
	::String(null())
};

void Autotile_obj::__register()
{
	hx::Object *dummy = new Autotile_obj;
	Autotile_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.models.scene.Autotile","\xf4","\xd3","\xe8","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Autotile_obj::__GetStatic;
	__mClass->mSetStaticField = &Autotile_obj::__SetStatic;
	__mClass->mMarkFunc = Autotile_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Autotile_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Autotile_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Autotile_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Autotile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Autotile_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Autotile_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_01b51bb446e6285a_8_boot)
HXDLIN(   8)		NO_AUTOTILE_DATA = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01b51bb446e6285a_10_boot)
HXDLIN(  10)		CORNER_TL = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01b51bb446e6285a_11_boot)
HXDLIN(  11)		CORNER_TR = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01b51bb446e6285a_12_boot)
HXDLIN(  12)		CORNER_BR = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01b51bb446e6285a_13_boot)
HXDLIN(  13)		CORNER_BL = (int)8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01b51bb446e6285a_14_boot)
HXDLIN(  14)		SIDE_L = (int)16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01b51bb446e6285a_15_boot)
HXDLIN(  15)		SIDE_T = (int)32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01b51bb446e6285a_16_boot)
HXDLIN(  16)		SIDE_R = (int)64;
            	}
{
            	HX_STACKFRAME(&_hx_pos_01b51bb446e6285a_17_boot)
HXDLIN(  17)		SIDE_B = (int)128;
            	}
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
