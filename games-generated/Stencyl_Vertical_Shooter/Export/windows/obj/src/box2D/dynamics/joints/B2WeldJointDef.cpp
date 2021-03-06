// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2WeldJointDef
#include <box2D/dynamics/joints/B2WeldJointDef.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_811e4bc43633dd36_35_new,"box2D.dynamics.joints.B2WeldJointDef","new",0xc60807bf,"box2D.dynamics.joints.B2WeldJointDef.new","box2D/dynamics/joints/B2WeldJointDef.hx",35,0x7b917b50)
HX_LOCAL_STACK_FRAME(_hx_pos_811e4bc43633dd36_50_initialize,"box2D.dynamics.joints.B2WeldJointDef","initialize",0x15c433d1,"box2D.dynamics.joints.B2WeldJointDef.initialize","box2D/dynamics/joints/B2WeldJointDef.hx",50,0x7b917b50)
namespace box2D{
namespace dynamics{
namespace joints{

void B2WeldJointDef_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_811e4bc43633dd36_35_new)
HXLINE(  36)		super::__construct();
HXLINE(  37)		this->localAnchorA =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  38)		this->localAnchorB =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  40)		this->type = (int)8;
HXLINE(  41)		this->referenceAngle = ((Float)0.0);
            	}

Dynamic B2WeldJointDef_obj::__CreateEmpty() { return new B2WeldJointDef_obj; }

void *B2WeldJointDef_obj::_hx_vtable = 0;

Dynamic B2WeldJointDef_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2WeldJointDef_obj > _hx_result = new B2WeldJointDef_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2WeldJointDef_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3e058eab) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3e058eab;
	} else {
		return inClassId==(int)0x45593985;
	}
}

void B2WeldJointDef_obj::initialize( ::box2D::dynamics::B2Body bA, ::box2D::dynamics::B2Body bB, ::box2D::common::math::B2Vec2 anchor){
            	HX_STACKFRAME(&_hx_pos_811e4bc43633dd36_50_initialize)
HXLINE(  51)		this->bodyA = bA;
HXLINE(  52)		this->bodyB = bB;
HXLINE(  53)		{
HXLINE(  53)			 ::box2D::common::math::B2Vec2 _this = this->localAnchorA;
HXDLIN(  53)			 ::box2D::common::math::B2Vec2 v = this->bodyA->getLocalPoint(anchor);
HXDLIN(  53)			_this->x = v->x;
HXDLIN(  53)			_this->y = v->y;
            		}
HXLINE(  54)		{
HXLINE(  54)			 ::box2D::common::math::B2Vec2 _this1 = this->localAnchorB;
HXDLIN(  54)			 ::box2D::common::math::B2Vec2 v1 = this->bodyB->getLocalPoint(anchor);
HXDLIN(  54)			_this1->x = v1->x;
HXDLIN(  54)			_this1->y = v1->y;
            		}
HXLINE(  55)		Float _hx_tmp = this->bodyB->getAngle();
HXDLIN(  55)		this->referenceAngle = (_hx_tmp - this->bodyA->getAngle());
            	}


HX_DEFINE_DYNAMIC_FUNC3(B2WeldJointDef_obj,initialize,(void))


hx::ObjectPtr< B2WeldJointDef_obj > B2WeldJointDef_obj::__new() {
	hx::ObjectPtr< B2WeldJointDef_obj > __this = new B2WeldJointDef_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< B2WeldJointDef_obj > B2WeldJointDef_obj::__alloc(hx::Ctx *_hx_ctx) {
	B2WeldJointDef_obj *__this = (B2WeldJointDef_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2WeldJointDef_obj), true, "box2D.dynamics.joints.B2WeldJointDef"));
	*(void **)__this = B2WeldJointDef_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

B2WeldJointDef_obj::B2WeldJointDef_obj()
{
}

void B2WeldJointDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2WeldJointDef);
	HX_MARK_MEMBER_NAME(localAnchorA,"localAnchorA");
	HX_MARK_MEMBER_NAME(localAnchorB,"localAnchorB");
	HX_MARK_MEMBER_NAME(referenceAngle,"referenceAngle");
	 ::box2D::dynamics::joints::B2JointDef_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2WeldJointDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(localAnchorA,"localAnchorA");
	HX_VISIT_MEMBER_NAME(localAnchorB,"localAnchorB");
	HX_VISIT_MEMBER_NAME(referenceAngle,"referenceAngle");
	 ::box2D::dynamics::joints::B2JointDef_obj::__Visit(HX_VISIT_ARG);
}

hx::Val B2WeldJointDef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return hx::Val( initialize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localAnchorA") ) { return hx::Val( localAnchorA ); }
		if (HX_FIELD_EQ(inName,"localAnchorB") ) { return hx::Val( localAnchorB ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"referenceAngle") ) { return hx::Val( referenceAngle ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val B2WeldJointDef_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"localAnchorA") ) { localAnchorA=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localAnchorB") ) { localAnchorB=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"referenceAngle") ) { referenceAngle=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2WeldJointDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("localAnchorA","\x01","\x1e","\xb3","\xd8"));
	outFields->push(HX_HCSTRING("localAnchorB","\x02","\x1e","\xb3","\xd8"));
	outFields->push(HX_HCSTRING("referenceAngle","\x08","\x8c","\x23","\xdb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2WeldJointDef_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2WeldJointDef_obj,localAnchorA),HX_HCSTRING("localAnchorA","\x01","\x1e","\xb3","\xd8")},
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2WeldJointDef_obj,localAnchorB),HX_HCSTRING("localAnchorB","\x02","\x1e","\xb3","\xd8")},
	{hx::fsFloat,(int)offsetof(B2WeldJointDef_obj,referenceAngle),HX_HCSTRING("referenceAngle","\x08","\x8c","\x23","\xdb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *B2WeldJointDef_obj_sStaticStorageInfo = 0;
#endif

static ::String B2WeldJointDef_obj_sMemberFields[] = {
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("localAnchorA","\x01","\x1e","\xb3","\xd8"),
	HX_HCSTRING("localAnchorB","\x02","\x1e","\xb3","\xd8"),
	HX_HCSTRING("referenceAngle","\x08","\x8c","\x23","\xdb"),
	::String(null()) };

static void B2WeldJointDef_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2WeldJointDef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2WeldJointDef_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2WeldJointDef_obj::__mClass,"__mClass");
};

#endif

hx::Class B2WeldJointDef_obj::__mClass;

void B2WeldJointDef_obj::__register()
{
	hx::Object *dummy = new B2WeldJointDef_obj;
	B2WeldJointDef_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.joints.B2WeldJointDef","\x4d","\xbc","\xe3","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = B2WeldJointDef_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2WeldJointDef_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2WeldJointDef_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2WeldJointDef_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2WeldJointDef_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2WeldJointDef_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
