// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactConstraintPoint
#include <box2D/dynamics/contacts/B2ContactConstraintPoint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0cadd888c6598cbf_31_new,"box2D.dynamics.contacts.B2ContactConstraintPoint","new",0x9af9d487,"box2D.dynamics.contacts.B2ContactConstraintPoint.new","box2D/dynamics/contacts/B2ContactConstraintPoint.hx",31,0xd1309c48)
namespace box2D{
namespace dynamics{
namespace contacts{

void B2ContactConstraintPoint_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0cadd888c6598cbf_31_new)
HXLINE(  33)		this->localPoint =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  34)		this->rA =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  35)		this->rB =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
            	}

Dynamic B2ContactConstraintPoint_obj::__CreateEmpty() { return new B2ContactConstraintPoint_obj; }

void *B2ContactConstraintPoint_obj::_hx_vtable = 0;

Dynamic B2ContactConstraintPoint_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2ContactConstraintPoint_obj > _hx_result = new B2ContactConstraintPoint_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2ContactConstraintPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6058c13f;
}


hx::ObjectPtr< B2ContactConstraintPoint_obj > B2ContactConstraintPoint_obj::__new() {
	hx::ObjectPtr< B2ContactConstraintPoint_obj > __this = new B2ContactConstraintPoint_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< B2ContactConstraintPoint_obj > B2ContactConstraintPoint_obj::__alloc(hx::Ctx *_hx_ctx) {
	B2ContactConstraintPoint_obj *__this = (B2ContactConstraintPoint_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2ContactConstraintPoint_obj), true, "box2D.dynamics.contacts.B2ContactConstraintPoint"));
	*(void **)__this = B2ContactConstraintPoint_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

B2ContactConstraintPoint_obj::B2ContactConstraintPoint_obj()
{
}

void B2ContactConstraintPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2ContactConstraintPoint);
	HX_MARK_MEMBER_NAME(localPoint,"localPoint");
	HX_MARK_MEMBER_NAME(rA,"rA");
	HX_MARK_MEMBER_NAME(rB,"rB");
	HX_MARK_MEMBER_NAME(normalImpulse,"normalImpulse");
	HX_MARK_MEMBER_NAME(tangentImpulse,"tangentImpulse");
	HX_MARK_MEMBER_NAME(normalMass,"normalMass");
	HX_MARK_MEMBER_NAME(tangentMass,"tangentMass");
	HX_MARK_MEMBER_NAME(equalizedMass,"equalizedMass");
	HX_MARK_MEMBER_NAME(velocityBias,"velocityBias");
	HX_MARK_END_CLASS();
}

void B2ContactConstraintPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(localPoint,"localPoint");
	HX_VISIT_MEMBER_NAME(rA,"rA");
	HX_VISIT_MEMBER_NAME(rB,"rB");
	HX_VISIT_MEMBER_NAME(normalImpulse,"normalImpulse");
	HX_VISIT_MEMBER_NAME(tangentImpulse,"tangentImpulse");
	HX_VISIT_MEMBER_NAME(normalMass,"normalMass");
	HX_VISIT_MEMBER_NAME(tangentMass,"tangentMass");
	HX_VISIT_MEMBER_NAME(equalizedMass,"equalizedMass");
	HX_VISIT_MEMBER_NAME(velocityBias,"velocityBias");
}

hx::Val B2ContactConstraintPoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"rA") ) { return hx::Val( rA ); }
		if (HX_FIELD_EQ(inName,"rB") ) { return hx::Val( rB ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"localPoint") ) { return hx::Val( localPoint ); }
		if (HX_FIELD_EQ(inName,"normalMass") ) { return hx::Val( normalMass ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tangentMass") ) { return hx::Val( tangentMass ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"velocityBias") ) { return hx::Val( velocityBias ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { return hx::Val( normalImpulse ); }
		if (HX_FIELD_EQ(inName,"equalizedMass") ) { return hx::Val( equalizedMass ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { return hx::Val( tangentImpulse ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val B2ContactConstraintPoint_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"rA") ) { rA=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rB") ) { rB=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"localPoint") ) { localPoint=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normalMass") ) { normalMass=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tangentMass") ) { tangentMass=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"velocityBias") ) { velocityBias=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { normalImpulse=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"equalizedMass") ) { equalizedMass=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { tangentImpulse=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2ContactConstraintPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("localPoint","\xe5","\x56","\x83","\xfe"));
	outFields->push(HX_HCSTRING("rA","\x8f","\x63","\x00","\x00"));
	outFields->push(HX_HCSTRING("rB","\x90","\x63","\x00","\x00"));
	outFields->push(HX_HCSTRING("normalImpulse","\x4e","\xa9","\x46","\x07"));
	outFields->push(HX_HCSTRING("tangentImpulse","\x70","\x2e","\x3e","\x65"));
	outFields->push(HX_HCSTRING("normalMass","\xbb","\x7e","\xda","\x6e"));
	outFields->push(HX_HCSTRING("tangentMass","\x59","\x50","\xeb","\x48"));
	outFields->push(HX_HCSTRING("equalizedMass","\x58","\xeb","\x5f","\xba"));
	outFields->push(HX_HCSTRING("velocityBias","\x36","\xeb","\xb5","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2ContactConstraintPoint_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2ContactConstraintPoint_obj,localPoint),HX_HCSTRING("localPoint","\xe5","\x56","\x83","\xfe")},
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2ContactConstraintPoint_obj,rA),HX_HCSTRING("rA","\x8f","\x63","\x00","\x00")},
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2ContactConstraintPoint_obj,rB),HX_HCSTRING("rB","\x90","\x63","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(B2ContactConstraintPoint_obj,normalImpulse),HX_HCSTRING("normalImpulse","\x4e","\xa9","\x46","\x07")},
	{hx::fsFloat,(int)offsetof(B2ContactConstraintPoint_obj,tangentImpulse),HX_HCSTRING("tangentImpulse","\x70","\x2e","\x3e","\x65")},
	{hx::fsFloat,(int)offsetof(B2ContactConstraintPoint_obj,normalMass),HX_HCSTRING("normalMass","\xbb","\x7e","\xda","\x6e")},
	{hx::fsFloat,(int)offsetof(B2ContactConstraintPoint_obj,tangentMass),HX_HCSTRING("tangentMass","\x59","\x50","\xeb","\x48")},
	{hx::fsFloat,(int)offsetof(B2ContactConstraintPoint_obj,equalizedMass),HX_HCSTRING("equalizedMass","\x58","\xeb","\x5f","\xba")},
	{hx::fsFloat,(int)offsetof(B2ContactConstraintPoint_obj,velocityBias),HX_HCSTRING("velocityBias","\x36","\xeb","\xb5","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *B2ContactConstraintPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String B2ContactConstraintPoint_obj_sMemberFields[] = {
	HX_HCSTRING("localPoint","\xe5","\x56","\x83","\xfe"),
	HX_HCSTRING("rA","\x8f","\x63","\x00","\x00"),
	HX_HCSTRING("rB","\x90","\x63","\x00","\x00"),
	HX_HCSTRING("normalImpulse","\x4e","\xa9","\x46","\x07"),
	HX_HCSTRING("tangentImpulse","\x70","\x2e","\x3e","\x65"),
	HX_HCSTRING("normalMass","\xbb","\x7e","\xda","\x6e"),
	HX_HCSTRING("tangentMass","\x59","\x50","\xeb","\x48"),
	HX_HCSTRING("equalizedMass","\x58","\xeb","\x5f","\xba"),
	HX_HCSTRING("velocityBias","\x36","\xeb","\xb5","\x21"),
	::String(null()) };

static void B2ContactConstraintPoint_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2ContactConstraintPoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2ContactConstraintPoint_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2ContactConstraintPoint_obj::__mClass,"__mClass");
};

#endif

hx::Class B2ContactConstraintPoint_obj::__mClass;

void B2ContactConstraintPoint_obj::__register()
{
	hx::Object *dummy = new B2ContactConstraintPoint_obj;
	B2ContactConstraintPoint_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.contacts.B2ContactConstraintPoint","\x15","\x85","\x2d","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = B2ContactConstraintPoint_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2ContactConstraintPoint_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2ContactConstraintPoint_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2ContactConstraintPoint_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2ContactConstraintPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2ContactConstraintPoint_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts
