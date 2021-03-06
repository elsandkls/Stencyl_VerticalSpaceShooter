// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_dynamics_B2ContactImpulse
#include <box2D/dynamics/B2ContactImpulse.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e2cd31b3a9f08f1_31_new,"box2D.dynamics.B2ContactImpulse","new",0x9fc1ea40,"box2D.dynamics.B2ContactImpulse.new","box2D/dynamics/B2ContactImpulse.hx",31,0x57681150)
namespace box2D{
namespace dynamics{

void B2ContactImpulse_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4e2cd31b3a9f08f1_31_new)
HXLINE(  33)		this->normalImpulses = ::Array_obj< Float >::__new();
HXLINE(  34)		this->tangentImpulses = ::Array_obj< Float >::__new();
            	}

Dynamic B2ContactImpulse_obj::__CreateEmpty() { return new B2ContactImpulse_obj; }

void *B2ContactImpulse_obj::_hx_vtable = 0;

Dynamic B2ContactImpulse_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2ContactImpulse_obj > _hx_result = new B2ContactImpulse_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2ContactImpulse_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04c15276;
}


B2ContactImpulse_obj::B2ContactImpulse_obj()
{
}

void B2ContactImpulse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2ContactImpulse);
	HX_MARK_MEMBER_NAME(normalImpulses,"normalImpulses");
	HX_MARK_MEMBER_NAME(tangentImpulses,"tangentImpulses");
	HX_MARK_END_CLASS();
}

void B2ContactImpulse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(normalImpulses,"normalImpulses");
	HX_VISIT_MEMBER_NAME(tangentImpulses,"tangentImpulses");
}

hx::Val B2ContactImpulse_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"normalImpulses") ) { return hx::Val( normalImpulses ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tangentImpulses") ) { return hx::Val( tangentImpulses ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val B2ContactImpulse_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"normalImpulses") ) { normalImpulses=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tangentImpulses") ) { tangentImpulses=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2ContactImpulse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("normalImpulses","\x65","\x7b","\x8d","\x56"));
	outFields->push(HX_HCSTRING("tangentImpulses","\x03","\x74","\x2a","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2ContactImpulse_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(B2ContactImpulse_obj,normalImpulses),HX_HCSTRING("normalImpulses","\x65","\x7b","\x8d","\x56")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(B2ContactImpulse_obj,tangentImpulses),HX_HCSTRING("tangentImpulses","\x03","\x74","\x2a","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *B2ContactImpulse_obj_sStaticStorageInfo = 0;
#endif

static ::String B2ContactImpulse_obj_sMemberFields[] = {
	HX_HCSTRING("normalImpulses","\x65","\x7b","\x8d","\x56"),
	HX_HCSTRING("tangentImpulses","\x03","\x74","\x2a","\x31"),
	::String(null()) };

static void B2ContactImpulse_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2ContactImpulse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2ContactImpulse_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2ContactImpulse_obj::__mClass,"__mClass");
};

#endif

hx::Class B2ContactImpulse_obj::__mClass;

void B2ContactImpulse_obj::__register()
{
	hx::Object *dummy = new B2ContactImpulse_obj;
	B2ContactImpulse_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.B2ContactImpulse","\x4e","\x0a","\xf8","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = B2ContactImpulse_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2ContactImpulse_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2ContactImpulse_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2ContactImpulse_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2ContactImpulse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2ContactImpulse_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace dynamics
