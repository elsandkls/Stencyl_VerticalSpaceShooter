// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2DynamicTreeNode
#include <box2D/collision/B2DynamicTreeNode.h>
#endif
#ifndef INCLUDED_box2D_collision_IBroadPhase
#include <box2D/collision/IBroadPhase.h>
#endif
#ifndef INCLUDED_box2D_collision_QueryCallback
#include <box2D/collision/QueryCallback.h>
#endif
#ifndef INCLUDED_box2D_dynamics_AABBQueryCallback
#include <box2D/dynamics/AABBQueryCallback.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9844ecde0cdc7611_1732_new,"box2D.dynamics.AABBQueryCallback","new",0xc15a3e76,"box2D.dynamics.AABBQueryCallback.new","box2D/dynamics/B2World.hx",1732,0xb09d3b25)
HX_LOCAL_STACK_FRAME(_hx_pos_9844ecde0cdc7611_1736_queryCallback,"box2D.dynamics.AABBQueryCallback","queryCallback",0x85ea4e83,"box2D.dynamics.AABBQueryCallback.queryCallback","box2D/dynamics/B2World.hx",1736,0xb09d3b25)
namespace box2D{
namespace dynamics{

void AABBQueryCallback_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9844ecde0cdc7611_1732_new)
            	}

Dynamic AABBQueryCallback_obj::__CreateEmpty() { return new AABBQueryCallback_obj; }

void *AABBQueryCallback_obj::_hx_vtable = 0;

Dynamic AABBQueryCallback_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AABBQueryCallback_obj > _hx_result = new AABBQueryCallback_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AABBQueryCallback_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x286e665c;
}

static ::box2D::collision::QueryCallback_obj _hx_box2D_dynamics_AABBQueryCallback__hx_box2D_collision_QueryCallback= {
	( bool (hx::Object::*)( ::box2D::collision::B2DynamicTreeNode))&::box2D::dynamics::AABBQueryCallback_obj::queryCallback,
};

void *AABBQueryCallback_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9f08fb78: return &_hx_box2D_dynamics_AABBQueryCallback__hx_box2D_collision_QueryCallback;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool AABBQueryCallback_obj::queryCallback( ::box2D::collision::B2DynamicTreeNode proxy){
            	HX_STACKFRAME(&_hx_pos_9844ecde0cdc7611_1736_queryCallback)
HXDLIN(1736)		 ::Dynamic _hx_tmp = this->callbackMethod;
HXDLIN(1736)		return ( (bool)(_hx_tmp(::box2D::collision::IBroadPhase_obj::getUserData(this->broadPhase,proxy))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(AABBQueryCallback_obj,queryCallback,return )


hx::ObjectPtr< AABBQueryCallback_obj > AABBQueryCallback_obj::__new() {
	hx::ObjectPtr< AABBQueryCallback_obj > __this = new AABBQueryCallback_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AABBQueryCallback_obj > AABBQueryCallback_obj::__alloc(hx::Ctx *_hx_ctx) {
	AABBQueryCallback_obj *__this = (AABBQueryCallback_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AABBQueryCallback_obj), true, "box2D.dynamics.AABBQueryCallback"));
	*(void **)__this = AABBQueryCallback_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AABBQueryCallback_obj::AABBQueryCallback_obj()
{
}

void AABBQueryCallback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AABBQueryCallback);
	HX_MARK_MEMBER_NAME(broadPhase,"broadPhase");
	HX_MARK_MEMBER_NAME(callbackMethod,"callbackMethod");
	HX_MARK_END_CLASS();
}

void AABBQueryCallback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broadPhase,"broadPhase");
	HX_VISIT_MEMBER_NAME(callbackMethod,"callbackMethod");
}

hx::Val AABBQueryCallback_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"broadPhase") ) { return hx::Val( broadPhase ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"queryCallback") ) { return hx::Val( queryCallback_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"callbackMethod") ) { return hx::Val( callbackMethod ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AABBQueryCallback_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"broadPhase") ) { broadPhase=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"callbackMethod") ) { callbackMethod=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AABBQueryCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("broadPhase","\x99","\xcd","\x4a","\x6b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AABBQueryCallback_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::box2D::collision::IBroadPhase*/ ,(int)offsetof(AABBQueryCallback_obj,broadPhase),HX_HCSTRING("broadPhase","\x99","\xcd","\x4a","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AABBQueryCallback_obj,callbackMethod),HX_HCSTRING("callbackMethod","\x86","\x26","\x73","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AABBQueryCallback_obj_sStaticStorageInfo = 0;
#endif

static ::String AABBQueryCallback_obj_sMemberFields[] = {
	HX_HCSTRING("broadPhase","\x99","\xcd","\x4a","\x6b"),
	HX_HCSTRING("callbackMethod","\x86","\x26","\x73","\x19"),
	HX_HCSTRING("queryCallback","\xed","\x28","\x31","\x5c"),
	::String(null()) };

static void AABBQueryCallback_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AABBQueryCallback_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AABBQueryCallback_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AABBQueryCallback_obj::__mClass,"__mClass");
};

#endif

hx::Class AABBQueryCallback_obj::__mClass;

void AABBQueryCallback_obj::__register()
{
	hx::Object *dummy = new AABBQueryCallback_obj;
	AABBQueryCallback_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.AABBQueryCallback","\x84","\x8b","\x18","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AABBQueryCallback_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AABBQueryCallback_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AABBQueryCallback_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AABBQueryCallback_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AABBQueryCallback_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AABBQueryCallback_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace dynamics
