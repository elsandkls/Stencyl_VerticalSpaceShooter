// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_dynamics_joints_B2GearJointDef
#include <box2D/dynamics/joints/B2GearJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d03e9f0475f2011b_32_new,"box2D.dynamics.joints.B2GearJointDef","new",0xc619bdc8,"box2D.dynamics.joints.B2GearJointDef.new","box2D/dynamics/joints/B2GearJointDef.hx",32,0xc50a1967)
namespace box2D{
namespace dynamics{
namespace joints{

void B2GearJointDef_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d03e9f0475f2011b_32_new)
HXLINE(  33)		super::__construct();
HXLINE(  34)		this->type = (int)6;
HXLINE(  35)		this->joint1 = null();
HXLINE(  36)		this->joint2 = null();
HXLINE(  37)		this->ratio = ((Float)1.0);
            	}

Dynamic B2GearJointDef_obj::__CreateEmpty() { return new B2GearJointDef_obj; }

void *B2GearJointDef_obj::_hx_vtable = 0;

Dynamic B2GearJointDef_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2GearJointDef_obj > _hx_result = new B2GearJointDef_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2GearJointDef_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x45593985) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x45593985;
	} else {
		return inClassId==(int)0x680f4c34;
	}
}


hx::ObjectPtr< B2GearJointDef_obj > B2GearJointDef_obj::__new() {
	hx::ObjectPtr< B2GearJointDef_obj > __this = new B2GearJointDef_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< B2GearJointDef_obj > B2GearJointDef_obj::__alloc(hx::Ctx *_hx_ctx) {
	B2GearJointDef_obj *__this = (B2GearJointDef_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2GearJointDef_obj), true, "box2D.dynamics.joints.B2GearJointDef"));
	*(void **)__this = B2GearJointDef_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

B2GearJointDef_obj::B2GearJointDef_obj()
{
}

void B2GearJointDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2GearJointDef);
	HX_MARK_MEMBER_NAME(joint1,"joint1");
	HX_MARK_MEMBER_NAME(joint2,"joint2");
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	 ::box2D::dynamics::joints::B2JointDef_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2GearJointDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(joint1,"joint1");
	HX_VISIT_MEMBER_NAME(joint2,"joint2");
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	 ::box2D::dynamics::joints::B2JointDef_obj::__Visit(HX_VISIT_ARG);
}

hx::Val B2GearJointDef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { return hx::Val( ratio ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joint1") ) { return hx::Val( joint1 ); }
		if (HX_FIELD_EQ(inName,"joint2") ) { return hx::Val( joint2 ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val B2GearJointDef_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joint1") ) { joint1=inValue.Cast<  ::box2D::dynamics::joints::B2Joint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"joint2") ) { joint2=inValue.Cast<  ::box2D::dynamics::joints::B2Joint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2GearJointDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("joint1","\xa7","\xe7","\x09","\x91"));
	outFields->push(HX_HCSTRING("joint2","\xa8","\xe7","\x09","\x91"));
	outFields->push(HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2GearJointDef_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::box2D::dynamics::joints::B2Joint*/ ,(int)offsetof(B2GearJointDef_obj,joint1),HX_HCSTRING("joint1","\xa7","\xe7","\x09","\x91")},
	{hx::fsObject /*::box2D::dynamics::joints::B2Joint*/ ,(int)offsetof(B2GearJointDef_obj,joint2),HX_HCSTRING("joint2","\xa8","\xe7","\x09","\x91")},
	{hx::fsFloat,(int)offsetof(B2GearJointDef_obj,ratio),HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *B2GearJointDef_obj_sStaticStorageInfo = 0;
#endif

static ::String B2GearJointDef_obj_sMemberFields[] = {
	HX_HCSTRING("joint1","\xa7","\xe7","\x09","\x91"),
	HX_HCSTRING("joint2","\xa8","\xe7","\x09","\x91"),
	HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"),
	::String(null()) };

static void B2GearJointDef_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2GearJointDef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2GearJointDef_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2GearJointDef_obj::__mClass,"__mClass");
};

#endif

hx::Class B2GearJointDef_obj::__mClass;

void B2GearJointDef_obj::__register()
{
	hx::Object *dummy = new B2GearJointDef_obj;
	B2GearJointDef_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.joints.B2GearJointDef","\xd6","\x79","\xed","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = B2GearJointDef_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2GearJointDef_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2GearJointDef_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2GearJointDef_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2GearJointDef_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2GearJointDef_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
