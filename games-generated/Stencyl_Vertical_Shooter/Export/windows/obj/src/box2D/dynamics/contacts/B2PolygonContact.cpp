// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2Collision
#include <box2D/collision/B2Collision.h>
#endif
#ifndef INCLUDED_box2D_collision_B2Manifold
#include <box2D/collision/B2Manifold.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2PolygonShape
#include <box2D/collision/shapes/B2PolygonShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2PolygonContact
#include <box2D/dynamics/contacts/B2PolygonContact.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8c25aa133bd99bc9_31_new,"box2D.dynamics.contacts.B2PolygonContact","new",0xe15e975a,"box2D.dynamics.contacts.B2PolygonContact.new","box2D/dynamics/contacts/B2PolygonContact.hx",31,0x9b1e3dd5)
HX_LOCAL_STACK_FRAME(_hx_pos_8c25aa133bd99bc9_43_reset,"box2D.dynamics.contacts.B2PolygonContact","reset",0x354e4349,"box2D.dynamics.contacts.B2PolygonContact.reset","box2D/dynamics/contacts/B2PolygonContact.hx",43,0x9b1e3dd5)
HX_LOCAL_STACK_FRAME(_hx_pos_8c25aa133bd99bc9_49_evaluate,"box2D.dynamics.contacts.B2PolygonContact","evaluate",0xbab00f1f,"box2D.dynamics.contacts.B2PolygonContact.evaluate","box2D/dynamics/contacts/B2PolygonContact.hx",49,0x9b1e3dd5)
HX_LOCAL_STACK_FRAME(_hx_pos_8c25aa133bd99bc9_35_create,"box2D.dynamics.contacts.B2PolygonContact","create",0xe2c3b842,"box2D.dynamics.contacts.B2PolygonContact.create","box2D/dynamics/contacts/B2PolygonContact.hx",35,0x9b1e3dd5)
HX_LOCAL_STACK_FRAME(_hx_pos_8c25aa133bd99bc9_37_destroy,"box2D.dynamics.contacts.B2PolygonContact","destroy",0x9b98f8f4,"box2D.dynamics.contacts.B2PolygonContact.destroy","box2D/dynamics/contacts/B2PolygonContact.hx",37,0x9b1e3dd5)
namespace box2D{
namespace dynamics{
namespace contacts{

void B2PolygonContact_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8c25aa133bd99bc9_31_new)
HXDLIN(  31)		super::__construct();
            	}

Dynamic B2PolygonContact_obj::__CreateEmpty() { return new B2PolygonContact_obj; }

void *B2PolygonContact_obj::_hx_vtable = 0;

Dynamic B2PolygonContact_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2PolygonContact_obj > _hx_result = new B2PolygonContact_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2PolygonContact_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4926e276) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4926e276;
	} else {
		return inClassId==(int)0x5f46c30c;
	}
}

void B2PolygonContact_obj::reset( ::box2D::dynamics::B2Fixture fixtureA, ::box2D::dynamics::B2Fixture fixtureB){
            	HX_STACKFRAME(&_hx_pos_8c25aa133bd99bc9_43_reset)
HXDLIN(  43)		this->super::reset(fixtureA,fixtureB);
            	}


void B2PolygonContact_obj::evaluate(){
            	HX_STACKFRAME(&_hx_pos_8c25aa133bd99bc9_49_evaluate)
HXLINE(  50)		 ::box2D::dynamics::B2Body bA = this->m_fixtureA->getBody();
HXLINE(  51)		 ::box2D::dynamics::B2Body bB = this->m_fixtureB->getBody();
HXLINE(  53)		 ::box2D::collision::B2Manifold _hx_tmp = this->m_manifold;
HXLINE(  54)		 ::box2D::collision::shapes::B2PolygonShape _hx_tmp1 = hx::TCast<  ::box2D::collision::shapes::B2PolygonShape >::cast(this->m_fixtureA->getShape());
HXDLIN(  54)		 ::box2D::common::math::B2Transform bA1 = bA->m_xf;
HXLINE(  53)		::box2D::collision::B2Collision_obj::collidePolygons(_hx_tmp,_hx_tmp1,bA1,hx::TCast<  ::box2D::collision::shapes::B2PolygonShape >::cast(this->m_fixtureB->getShape()),bB->m_xf);
            	}


 ::box2D::dynamics::contacts::B2Contact B2PolygonContact_obj::create( ::Dynamic allocator){
            	HX_GC_STACKFRAME(&_hx_pos_8c25aa133bd99bc9_35_create)
HXDLIN(  35)		return  ::box2D::dynamics::contacts::B2PolygonContact_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2PolygonContact_obj,create,return )

void B2PolygonContact_obj::destroy( ::box2D::dynamics::contacts::B2Contact contact, ::Dynamic allocator){
            	HX_STACKFRAME(&_hx_pos_8c25aa133bd99bc9_37_destroy)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2PolygonContact_obj,destroy,(void))


hx::ObjectPtr< B2PolygonContact_obj > B2PolygonContact_obj::__new() {
	hx::ObjectPtr< B2PolygonContact_obj > __this = new B2PolygonContact_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< B2PolygonContact_obj > B2PolygonContact_obj::__alloc(hx::Ctx *_hx_ctx) {
	B2PolygonContact_obj *__this = (B2PolygonContact_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2PolygonContact_obj), true, "box2D.dynamics.contacts.B2PolygonContact"));
	*(void **)__this = B2PolygonContact_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

B2PolygonContact_obj::B2PolygonContact_obj()
{
}

hx::Val B2PolygonContact_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"evaluate") ) { return hx::Val( evaluate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool B2PolygonContact_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { outValue = destroy_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *B2PolygonContact_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *B2PolygonContact_obj_sStaticStorageInfo = 0;
#endif

static ::String B2PolygonContact_obj_sMemberFields[] = {
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("evaluate","\x59","\x60","\x50","\x01"),
	::String(null()) };

static void B2PolygonContact_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2PolygonContact_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2PolygonContact_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2PolygonContact_obj::__mClass,"__mClass");
};

#endif

hx::Class B2PolygonContact_obj::__mClass;

static ::String B2PolygonContact_obj_sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null())
};

void B2PolygonContact_obj::__register()
{
	hx::Object *dummy = new B2PolygonContact_obj;
	B2PolygonContact_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.contacts.B2PolygonContact","\x68","\xa2","\x7d","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &B2PolygonContact_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = B2PolygonContact_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(B2PolygonContact_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2PolygonContact_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2PolygonContact_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2PolygonContact_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2PolygonContact_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2PolygonContact_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts