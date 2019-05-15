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
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJointDef
#include <box2D/dynamics/joints/B2RevoluteJointDef.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e120e2dd25f88036_44_new,"box2D.dynamics.joints.B2RevoluteJointDef","new",0x00de839f,"box2D.dynamics.joints.B2RevoluteJointDef.new","box2D/dynamics/joints/B2RevoluteJointDef.hx",44,0x982ae6f0)
HX_LOCAL_STACK_FRAME(_hx_pos_e120e2dd25f88036_65_initialize,"box2D.dynamics.joints.B2RevoluteJointDef","initialize",0xcaa6f3f1,"box2D.dynamics.joints.B2RevoluteJointDef.initialize","box2D/dynamics/joints/B2RevoluteJointDef.hx",65,0x982ae6f0)
namespace box2D{
namespace dynamics{
namespace joints{

void B2RevoluteJointDef_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e120e2dd25f88036_44_new)
HXLINE(  45)		super::__construct();
HXLINE(  46)		this->localAnchorA =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  47)		this->localAnchorB =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  49)		this->type = (int)1;
HXLINE(  50)		{
HXLINE(  50)			 ::box2D::common::math::B2Vec2 _this = this->localAnchorA;
HXDLIN(  50)			_this->x = ((Float)0.0);
HXDLIN(  50)			_this->y = ((Float)0.0);
            		}
HXLINE(  51)		{
HXLINE(  51)			 ::box2D::common::math::B2Vec2 _this1 = this->localAnchorB;
HXDLIN(  51)			_this1->x = ((Float)0.0);
HXDLIN(  51)			_this1->y = ((Float)0.0);
            		}
HXLINE(  52)		this->referenceAngle = ((Float)0.0);
HXLINE(  53)		this->lowerAngle = ((Float)0.0);
HXLINE(  54)		this->upperAngle = ((Float)0.0);
HXLINE(  55)		this->maxMotorTorque = ((Float)0.0);
HXLINE(  56)		this->motorSpeed = ((Float)0.0);
HXLINE(  57)		this->enableLimit = false;
HXLINE(  58)		this->enableMotor = false;
            	}

Dynamic B2RevoluteJointDef_obj::__CreateEmpty() { return new B2RevoluteJointDef_obj; }

void *B2RevoluteJointDef_obj::_hx_vtable = 0;

Dynamic B2RevoluteJointDef_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2RevoluteJointDef_obj > _hx_result = new B2RevoluteJointDef_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2RevoluteJointDef_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2b5da5c3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2b5da5c3;
	} else {
		return inClassId==(int)0x45593985;
	}
}

void B2RevoluteJointDef_obj::initialize( ::box2D::dynamics::B2Body bA, ::box2D::dynamics::B2Body bB, ::box2D::common::math::B2Vec2 anchor){
            	HX_STACKFRAME(&_hx_pos_e120e2dd25f88036_65_initialize)
HXLINE(  66)		this->bodyA = bA;
HXLINE(  67)		this->bodyB = bB;
HXLINE(  68)		this->localAnchorA = this->bodyA->getLocalPoint(anchor);
HXLINE(  69)		this->localAnchorB = this->bodyB->getLocalPoint(anchor);
HXLINE(  70)		Float _hx_tmp = this->bodyB->getAngle();
HXDLIN(  70)		this->referenceAngle = (_hx_tmp - this->bodyA->getAngle());
            	}


HX_DEFINE_DYNAMIC_FUNC3(B2RevoluteJointDef_obj,initialize,(void))


hx::ObjectPtr< B2RevoluteJointDef_obj > B2RevoluteJointDef_obj::__new() {
	hx::ObjectPtr< B2RevoluteJointDef_obj > __this = new B2RevoluteJointDef_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< B2RevoluteJointDef_obj > B2RevoluteJointDef_obj::__alloc(hx::Ctx *_hx_ctx) {
	B2RevoluteJointDef_obj *__this = (B2RevoluteJointDef_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2RevoluteJointDef_obj), true, "box2D.dynamics.joints.B2RevoluteJointDef"));
	*(void **)__this = B2RevoluteJointDef_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

B2RevoluteJointDef_obj::B2RevoluteJointDef_obj()
{
}

void B2RevoluteJointDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2RevoluteJointDef);
	HX_MARK_MEMBER_NAME(localAnchorA,"localAnchorA");
	HX_MARK_MEMBER_NAME(localAnchorB,"localAnchorB");
	HX_MARK_MEMBER_NAME(referenceAngle,"referenceAngle");
	HX_MARK_MEMBER_NAME(enableLimit,"enableLimit");
	HX_MARK_MEMBER_NAME(lowerAngle,"lowerAngle");
	HX_MARK_MEMBER_NAME(upperAngle,"upperAngle");
	HX_MARK_MEMBER_NAME(enableMotor,"enableMotor");
	HX_MARK_MEMBER_NAME(motorSpeed,"motorSpeed");
	HX_MARK_MEMBER_NAME(maxMotorTorque,"maxMotorTorque");
	 ::box2D::dynamics::joints::B2JointDef_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2RevoluteJointDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(localAnchorA,"localAnchorA");
	HX_VISIT_MEMBER_NAME(localAnchorB,"localAnchorB");
	HX_VISIT_MEMBER_NAME(referenceAngle,"referenceAngle");
	HX_VISIT_MEMBER_NAME(enableLimit,"enableLimit");
	HX_VISIT_MEMBER_NAME(lowerAngle,"lowerAngle");
	HX_VISIT_MEMBER_NAME(upperAngle,"upperAngle");
	HX_VISIT_MEMBER_NAME(enableMotor,"enableMotor");
	HX_VISIT_MEMBER_NAME(motorSpeed,"motorSpeed");
	HX_VISIT_MEMBER_NAME(maxMotorTorque,"maxMotorTorque");
	 ::box2D::dynamics::joints::B2JointDef_obj::__Visit(HX_VISIT_ARG);
}

hx::Val B2RevoluteJointDef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return hx::Val( initialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"lowerAngle") ) { return hx::Val( lowerAngle ); }
		if (HX_FIELD_EQ(inName,"upperAngle") ) { return hx::Val( upperAngle ); }
		if (HX_FIELD_EQ(inName,"motorSpeed") ) { return hx::Val( motorSpeed ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enableLimit") ) { return hx::Val( enableLimit ); }
		if (HX_FIELD_EQ(inName,"enableMotor") ) { return hx::Val( enableMotor ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localAnchorA") ) { return hx::Val( localAnchorA ); }
		if (HX_FIELD_EQ(inName,"localAnchorB") ) { return hx::Val( localAnchorB ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"referenceAngle") ) { return hx::Val( referenceAngle ); }
		if (HX_FIELD_EQ(inName,"maxMotorTorque") ) { return hx::Val( maxMotorTorque ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val B2RevoluteJointDef_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"lowerAngle") ) { lowerAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upperAngle") ) { upperAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"motorSpeed") ) { motorSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enableLimit") ) { enableLimit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enableMotor") ) { enableMotor=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"localAnchorA") ) { localAnchorA=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localAnchorB") ) { localAnchorB=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"referenceAngle") ) { referenceAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxMotorTorque") ) { maxMotorTorque=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2RevoluteJointDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("localAnchorA","\x01","\x1e","\xb3","\xd8"));
	outFields->push(HX_HCSTRING("localAnchorB","\x02","\x1e","\xb3","\xd8"));
	outFields->push(HX_HCSTRING("referenceAngle","\x08","\x8c","\x23","\xdb"));
	outFields->push(HX_HCSTRING("enableLimit","\xb8","\x65","\xd0","\x3f"));
	outFields->push(HX_HCSTRING("lowerAngle","\x12","\xd6","\x40","\xdf"));
	outFields->push(HX_HCSTRING("upperAngle","\x11","\x57","\x6f","\xe4"));
	outFields->push(HX_HCSTRING("enableMotor","\xf2","\x96","\x33","\xd7"));
	outFields->push(HX_HCSTRING("motorSpeed","\xd2","\xee","\x51","\xf2"));
	outFields->push(HX_HCSTRING("maxMotorTorque","\xdb","\xc8","\x9e","\xf8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2RevoluteJointDef_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2RevoluteJointDef_obj,localAnchorA),HX_HCSTRING("localAnchorA","\x01","\x1e","\xb3","\xd8")},
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2RevoluteJointDef_obj,localAnchorB),HX_HCSTRING("localAnchorB","\x02","\x1e","\xb3","\xd8")},
	{hx::fsFloat,(int)offsetof(B2RevoluteJointDef_obj,referenceAngle),HX_HCSTRING("referenceAngle","\x08","\x8c","\x23","\xdb")},
	{hx::fsBool,(int)offsetof(B2RevoluteJointDef_obj,enableLimit),HX_HCSTRING("enableLimit","\xb8","\x65","\xd0","\x3f")},
	{hx::fsFloat,(int)offsetof(B2RevoluteJointDef_obj,lowerAngle),HX_HCSTRING("lowerAngle","\x12","\xd6","\x40","\xdf")},
	{hx::fsFloat,(int)offsetof(B2RevoluteJointDef_obj,upperAngle),HX_HCSTRING("upperAngle","\x11","\x57","\x6f","\xe4")},
	{hx::fsBool,(int)offsetof(B2RevoluteJointDef_obj,enableMotor),HX_HCSTRING("enableMotor","\xf2","\x96","\x33","\xd7")},
	{hx::fsFloat,(int)offsetof(B2RevoluteJointDef_obj,motorSpeed),HX_HCSTRING("motorSpeed","\xd2","\xee","\x51","\xf2")},
	{hx::fsFloat,(int)offsetof(B2RevoluteJointDef_obj,maxMotorTorque),HX_HCSTRING("maxMotorTorque","\xdb","\xc8","\x9e","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *B2RevoluteJointDef_obj_sStaticStorageInfo = 0;
#endif

static ::String B2RevoluteJointDef_obj_sMemberFields[] = {
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("localAnchorA","\x01","\x1e","\xb3","\xd8"),
	HX_HCSTRING("localAnchorB","\x02","\x1e","\xb3","\xd8"),
	HX_HCSTRING("referenceAngle","\x08","\x8c","\x23","\xdb"),
	HX_HCSTRING("enableLimit","\xb8","\x65","\xd0","\x3f"),
	HX_HCSTRING("lowerAngle","\x12","\xd6","\x40","\xdf"),
	HX_HCSTRING("upperAngle","\x11","\x57","\x6f","\xe4"),
	HX_HCSTRING("enableMotor","\xf2","\x96","\x33","\xd7"),
	HX_HCSTRING("motorSpeed","\xd2","\xee","\x51","\xf2"),
	HX_HCSTRING("maxMotorTorque","\xdb","\xc8","\x9e","\xf8"),
	::String(null()) };

static void B2RevoluteJointDef_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2RevoluteJointDef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2RevoluteJointDef_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2RevoluteJointDef_obj::__mClass,"__mClass");
};

#endif

hx::Class B2RevoluteJointDef_obj::__mClass;

void B2RevoluteJointDef_obj::__register()
{
	hx::Object *dummy = new B2RevoluteJointDef_obj;
	B2RevoluteJointDef_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.joints.B2RevoluteJointDef","\x2d","\xc8","\x16","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = B2RevoluteJointDef_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2RevoluteJointDef_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2RevoluteJointDef_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2RevoluteJointDef_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2RevoluteJointDef_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2RevoluteJointDef_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints