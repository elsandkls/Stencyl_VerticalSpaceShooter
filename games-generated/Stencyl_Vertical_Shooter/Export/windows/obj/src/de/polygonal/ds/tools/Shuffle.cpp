// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_de_polygonal_ds_tools_Shuffle
#include <de/polygonal/ds/tools/Shuffle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ce1c3ba3279be350_23___default__f,"de.polygonal.ds.tools.Shuffle","__default__f",0x44be2776,"de.polygonal.ds.tools.Shuffle.__default__f","de/polygonal/ds/tools/Shuffle.hx",23,0x6f1b3441)
HX_LOCAL_STACK_FRAME(_hx_pos_ce1c3ba3279be350_32_setRandom,"de.polygonal.ds.tools.Shuffle","setRandom",0xb65ef174,"de.polygonal.ds.tools.Shuffle.setRandom","de/polygonal/ds/tools/Shuffle.hx",32,0x6f1b3441)
HX_LOCAL_STACK_FRAME(_hx_pos_ce1c3ba3279be350_40_frand,"de.polygonal.ds.tools.Shuffle","frand",0x0be94fba,"de.polygonal.ds.tools.Shuffle.frand","de/polygonal/ds/tools/Shuffle.hx",40,0x6f1b3441)
namespace de{
namespace polygonal{
namespace ds{
namespace tools{

void Shuffle_obj::__construct() { }

Dynamic Shuffle_obj::__CreateEmpty() { return new Shuffle_obj; }

void *Shuffle_obj::_hx_vtable = 0;

Dynamic Shuffle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Shuffle_obj > _hx_result = new Shuffle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Shuffle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12e3a545;
}

HX_BEGIN_DEFAULT_FUNC(__default__f,Shuffle_obj)
Float _hx_run(){
            	HX_STACKFRAME(&_hx_pos_ce1c3ba3279be350_23___default__f)
HXDLIN(  23)		return ::Math_obj::random();
            	}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

::Dynamic Shuffle_obj::_f;

void Shuffle_obj::setRandom( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_ce1c3ba3279be350_32_setRandom)
HXDLIN(  32)		::de::polygonal::ds::tools::Shuffle_obj::_f = f;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Shuffle_obj,setRandom,(void))

Float Shuffle_obj::frand(){
            	HX_STACKFRAME(&_hx_pos_ce1c3ba3279be350_40_frand)
HXDLIN(  40)		return ( (Float)(::de::polygonal::ds::tools::Shuffle_obj::_f()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Shuffle_obj,frand,return )


Shuffle_obj::Shuffle_obj()
{
}

bool Shuffle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_f") ) { outValue = ( _f ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frand") ) { outValue = frand_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setRandom") ) { outValue = setRandom_dyn(); return true; }
	}
	return false;
}

bool Shuffle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_f") ) { _f=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Shuffle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Shuffle_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Shuffle_obj::_f,HX_HCSTRING("_f","\x27","\x53","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Shuffle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shuffle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Shuffle_obj::_f,"_f");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Shuffle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shuffle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Shuffle_obj::_f,"_f");
};

#endif

hx::Class Shuffle_obj::__mClass;

static ::String Shuffle_obj_sStaticFields[] = {
	HX_HCSTRING("_f","\x27","\x53","\x00","\x00"),
	HX_HCSTRING("setRandom","\x45","\x97","\x36","\x17"),
	HX_HCSTRING("frand","\x0b","\x79","\x83","\x06"),
	::String(null())
};

void Shuffle_obj::__register()
{
	hx::Object *dummy = new Shuffle_obj;
	Shuffle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("de.polygonal.ds.tools.Shuffle","\xdd","\xf9","\xf2","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Shuffle_obj::__GetStatic;
	__mClass->mSetStaticField = &Shuffle_obj::__SetStatic;
	__mClass->mMarkFunc = Shuffle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Shuffle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Shuffle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Shuffle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shuffle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shuffle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Shuffle_obj::__boot()
{
	_f = new __default__f;

}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
} // end namespace tools
