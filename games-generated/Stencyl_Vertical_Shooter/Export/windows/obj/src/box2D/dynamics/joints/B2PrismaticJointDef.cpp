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
#ifndef INCLUDED_box2D_dynamics_joints_B2PrismaticJointDef
#include <box2D/dynamics/joints/B2PrismaticJointDef.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4d63a15a939cf8f6_38_new,"box2D.dynamics.joints.B2PrismaticJointDef","new",0x43a047af,"box2D.dynamics.joints.B2PrismaticJointDef.new","box2D/dynamics/joints/B2PrismaticJointDef.hx",38,0x5c9ba782)
HX_LOCAL_STACK_FRAME(_hx_pos_4d63a15a939cf8f6_58_initialize,"box2D.dynamics.joints.B2PrismaticJointDef","initialize",0x048cd1e1,"box2D.dynamics.joints.B2PrismaticJointDef.initialize","box2D/dynamics/joints/B2PrismaticJointDef.hx",58,0x5c9ba782)
namespace box2D{
namespace dynamics{
namespace joints{

void B2PrismaticJointDef_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4d63a15a939cf8f6_38_new)
HXLINE(  39)		super::__construct();
HXLINE(  40)		this->localAnchorA =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  41)		this->localAnchorB =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  42)		this->localAxisA =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  44)		this->type = (int)2;
HXLINE(  47)		{
HXLINE(  47)			 ::box2D::common::math::B2Vec2 _this = this->localAxisA;
HXDLIN(  47)			_this->x = ((Float)1.0);
HXDLIN(  47)			_this->y = ((Float)0.0);
            		}
HXLINE(  48)		this->referenceAngle = ((Float)0.0);
HXLINE(  49)		this->enableLimit = false;
HXLINE(  50)		this->lowerTranslation = ((Float)0.0);
HXLINE(  51)		this->upperTranslation = ((Float)0.0);
HXLINE(  52)		this->enableMotor = false;
HXLINE(  53)		this->maxMotorForce = ((Float)0.0);
HXLINE(  54)		this->motorSpeed = ((Float)0.0);
            	}

Dynamic B2PrismaticJointDef_obj::__CreateEmpty() { return new B2PrismaticJointDef_obj; }

void *B2PrismaticJointDef_obj::_hx_vtable = 0;

Dynamic B2PrismaticJointDef_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2PrismaticJointDef_obj > _hx_result = new B2PrismaticJointDef_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2PrismaticJointDef_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x04273383) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x04273383;
	} else {
		return inClassId==(int)0x45593985;
	}
}

void B2PrismaticJointDef_obj::initialize( ::box2D::dynamics::B2Body bA, ::box2D::dynamics::B2Body bB, ::box2D::common::math::B2Vec2 anchor, ::box2D::common::math::B2Vec2 axis){
            	HX_STACKFRAME(&_hx_pos_4d63a15a939cf8f6_58_initialize)
HXLINE(  59)		this->bodyA = bA;
HXLINE(  60)		this->bodyB = bB;
HXLINE(  61)		this->localAnchorA = this->bodyA->getLocalPoint(anchor);
HXLINE(  62)		this->localAnchorB = this->bodyB->getLocalPoint(anchor);
HXLINE(  63)		this->localAxisA = this->bodyA->getLocalVector(axis);
HXLINE(  64)		Float _hx_tmp = this->bodyB->getAngle();
HXDLIN(  64)		this->referenceAngle = (_hx_tmp - this->bodyA->getAngle());
            	}


HX_DEFINE_DYNAMIC_FUNC4(B2PrismaticJointDef_obj,initialize,(void))


hx::ObjectPtr< B2PrismaticJointDef_obj > B2PrismaticJointDef_obj::__new() {
	hx::ObjectPtr< B2PrismaticJointDef_obj > __this = new B2PrismaticJointDef_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< B2PrismaticJointDef_obj > B2PrismaticJointDef_obj::__alloc(hx::Ctx *_hx_ctx) {
	B2PrismaticJointDef_obj *__this = (B2PrismaticJointDef_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2PrismaticJointDef_obj), true, "box2D.dynamics.joints.B2PrismaticJointDef"));
	*(void **)__this = B2PrismaticJointDef_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

B2PrismaticJointDef_obj::B2PrismaticJointDef_obj()
{
}

void B2PrismaticJointDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2PrismaticJointDef);
	HX_MARK_MEMBER_NAME(localAnchorA,"localAnchorA");
	HX_MARK_MEMBER_NAME(localAnchorB,"localAnchorB");
	HX_MARK_MEMBER_NAME(localAxisA,"localAxisA");
	HX_MARK_MEMBER_NAME(referenceAngle,"referenceAngle");
	HX_MARK_MEMBER_NAME(enableLimit,"enableLimit");
	HX_MARK_MEMBER_NAME(lowerTranslation,"lowerTranslation");
	HX_MARK_MEMBER_NAME(upperTranslation,"upperTranslation");
	HX_MARK_MEMBER_NAME(enableMotor,"enableMotor");
	HX_MARK_MEMBER_NAME(maxMotorForce,"maxMotorForce");
	HX_MARK_MEMBER_NAME(motorSpeed,"motorSpeed");
	 ::box2D::dynamics::joints::B2JointDef_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2PrismaticJointDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(localAnchorA,"localAnchorA");
	HX_VISIT_MEMBER_NAME(localAnchorB,"localAnchorB");
	HX_VISIT_MEMBER_NAME(localAxisA,"localAxisA");
	HX_VISIT_MEMBER_NAME(referenceAngle,"referenceAngle");
	HX_VISIT_MEMBER_NAME(enableLimit,"enableLimit");
	HX_VISIT_MEMBER_NAME(lowerTranslation,"lowerTranslation");
	HX_VISIT_MEMBER_NAME(upperTranslation,"upperTranslation");
	HX_VISIT_MEMBER_NAME(enableMotor,"enableMotor");
	HX_VISIT_MEMBER_NAME(maxMotorForce,"maxMotorForce");
	HX_VISIT_MEMBER_NAME(motorSpeed,"motorSpeed");
	 ::box2D::dynamics::joints::B2JointDef_obj::__Visit(HX_VISIT_ARG);
}

hx::Val B2PrismaticJointDef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return hx::Val( initialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"localAxisA") ) { return hx::Val( localAxisA ); }
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
	case 13:
		if (HX_FIELD_EQ(inName,"maxMotorForce") ) { return hx::Val( maxMotorForce ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"referenceAngle") ) { return hx::Val( referenceAngle ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lowerTranslation") ) { return hx::Val( lowerTranslation ); }
		if (HX_FIELD_EQ(inName,"upperTranslation") ) { return hx::Val( upperTranslation ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val B2PrismaticJointDef_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"localAxisA") ) { localAxisA=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
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
	case 13:
		if (HX_FIELD_EQ(inName,"maxMotorForce") ) { maxMotorForce=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"referenceAngle") ) { referenceAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lowerTranslation") ) { lowerTranslation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upperTranslation") ) { upperTranslation=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2PrismaticJointDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("localAnchorA","\x01","\x1e","\xb3","\xd8"));
	outFields->push(HX_HCSTRING("localAnchorB","\x02","\x1e","\xb3","\xd8"));
	outFields->push(HX_HCSTRING("localAxisA","\x15","\x93","\x73","\x61"));
	outFields->push(HX_HCSTRING("referenceAngle","\x08","\x8c","\x23","\xdb"));
	outFields->push(HX_HCSTRING("enableLimit","\xb8","\x65","\xd0","\x3f"));
	outFields->push(HX_HCSTRING("lowerTranslation","\x70","\x7c","\x02","\x5b"));
	outFields->push(HX_HCSTRING("upperTranslation","\xaf","\x46","\xf2","\x9d"));
	outFields->push(HX_HCSTRING("enableMotor","\xf2","\x96","\x33","\xd7"));
	outFields->push(HX_HCSTRING("maxMotorForce","\xfa","\x4c","\xee","\x70"));
	outFields->push(HX_HCSTRING("motorSpeed","\xd2","\xee","\x51","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2PrismaticJointDef_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2PrismaticJointDef_obj,localAnchorA),HX_HCSTRING("localAnchorA","\x01","\x1e","\xb3","\xd8")},
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2PrismaticJointDef_obj,localAnchorB),HX_HCSTRING("localAnchorB","\x02","\x1e","\xb3","\xd8")},
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2PrismaticJointDef_obj,localAxisA),HX_HCSTRING("localAxisA","\x15","\x93","\x73","\x61")},
	{hx::fsFloat,(int)offsetof(B2PrismaticJointDef_obj,referenceAngle),HX_HCSTRING("referenceAngle","\x08","\x8c","\x23","\xdb")},
	{hx::fsBool,(int)offsetof(B2PrismaticJointDef_obj,enableLimit),HX_HCSTRING("enableLimit","\xb8","\x65","\xd0","\x3f")},
	{hx::fsFloat,(int)offsetof(B2PrismaticJointDef_obj,lowerTranslation),HX_HCSTRING("lowerTranslation","\x70","\x7c","\x02","\x5b")},
	{hx::fsFloat,(int)offsetof(B2PrismaticJointDef_obj,upperTranslation),HX_HCSTRING("upperTranslation","\xaf","\x46","\xf2","\x9d")},
	{hx::fsBool,(int)offsetof(B2PrismaticJointDef_obj,enableMotor),HX_HCSTRING("enableMotor","\xf2","\x96","\x33","\xd7")},
	{hx::fsFloat,(int)offsetof(B2PrismaticJointDef_obj,maxMotorForce),HX_HCSTRING("maxMotorForce","\xfa","\x4c","\xee","\x70")},
	{hx::fsFloat,(int)offsetof(B2PrismaticJointDef_obj,motorSpeed),HX_HCSTRING("motorSpeed","\xd2","\xee","\x51","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *B2PrismaticJointDef_obj_sStaticStorageInfo = 0;
#endif

static ::String B2PrismaticJointDef_obj_sMemberFields[] = {
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("localAnchorA","\x01","\x1e","\xb3","\xd8"),
	HX_HCSTRING("localAnchorB","\x02","\x1e","\xb3","\xd8"),
	HX_HCSTRING("localAxisA","\x15","\x93","\x73","\x61"),
	HX_HCSTRING("referenceAngle","\x08","\x8c","\x23","\xdb"),
	HX_HCSTRING("enableLimit","\xb8","\x65","\xd0","\x3f"),
	HX_HCSTRING("lowerTranslation","\x70","\x7c","\x02","\x5b"),
	HX_HCSTRING("upperTranslation","\xaf","\x46","\xf2","\x9d"),
	HX_HCSTRING("enableMotor","\xf2","\x96","\x33","\xd7"),
	HX_HCSTRING("maxMotorForce","\xfa","\x4c","\xee","\x70"),
	HX_HCSTRING("motorSpeed","\xd2","\xee","\x51","\xf2"),
	::String(null()) };

static void B2PrismaticJointDef_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2PrismaticJointDef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2PrismaticJointDef_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2PrismaticJointDef_obj::__mClass,"__mClass");
};

#endif

hx::Class B2PrismaticJointDef_obj::__mClass;

void B2PrismaticJointDef_obj::__register()
{
	hx::Object *dummy = new B2PrismaticJointDef_obj;
	B2PrismaticJointDef_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.joints.B2PrismaticJointDef","\x3d","\x44","\x81","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = B2PrismaticJointDef_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2PrismaticJointDef_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2PrismaticJointDef_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2PrismaticJointDef_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2PrismaticJointDef_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2PrismaticJointDef_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints