// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2BodyDef
#include <box2D/dynamics/B2BodyDef.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_BehaviorInstance
#include <com/stencyl/behavior/BehaviorInstance.h>
#endif
#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_ActorTypeReader
#include <com/stencyl/io/ActorTypeReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_AttributeValues
#include <com/stencyl/io/AttributeValues.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_MbsResource
#include <com/stencyl/io/mbs/MbsResource.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_actortype_MbsActorType
#include <com/stencyl/io/mbs/actortype/MbsActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models__PhysicsMode_PhysicsMode_Impl_
#include <com/stencyl/models/_PhysicsMode/PhysicsMode_Impl_.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_mbs_core_ComposedType
#include <mbs/core/ComposedType.h>
#endif
#ifndef INCLUDED_mbs_core_MbsObject
#include <mbs/core/MbsObject.h>
#endif
#ifndef INCLUDED_mbs_core_MbsType
#include <mbs/core/MbsType.h>
#endif
#ifndef INCLUDED_mbs_io_MbsList
#include <mbs/io/MbsList.h>
#endif
#ifndef INCLUDED_mbs_io_MbsListBase
#include <mbs/io/MbsListBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ae57c56cc530c12_18_new,"com.stencyl.io.ActorTypeReader","new",0xea5c5c0b,"com.stencyl.io.ActorTypeReader.new","com/stencyl/io/ActorTypeReader.hx",18,0x0769cdc4)
HX_LOCAL_STACK_FRAME(_hx_pos_0ae57c56cc530c12_23_accepts,"com.stencyl.io.ActorTypeReader","accepts",0x50e95196,"com.stencyl.io.ActorTypeReader.accepts","com/stencyl/io/ActorTypeReader.hx",23,0x0769cdc4)
HX_LOCAL_STACK_FRAME(_hx_pos_0ae57c56cc530c12_27_read,"com.stencyl.io.ActorTypeReader","read",0x2918f54b,"com.stencyl.io.ActorTypeReader.read","com/stencyl/io/ActorTypeReader.hx",27,0x0769cdc4)
namespace com{
namespace stencyl{
namespace io{

void ActorTypeReader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0ae57c56cc530c12_18_new)
            	}

Dynamic ActorTypeReader_obj::__CreateEmpty() { return new ActorTypeReader_obj; }

void *ActorTypeReader_obj::_hx_vtable = 0;

Dynamic ActorTypeReader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ActorTypeReader_obj > _hx_result = new ActorTypeReader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ActorTypeReader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1116d071;
}

static ::com::stencyl::io::AbstractReader_obj _hx_com_stencyl_io_ActorTypeReader__hx_com_stencyl_io_AbstractReader= {
	( bool (hx::Object::*)(::String))&::com::stencyl::io::ActorTypeReader_obj::accepts,
	(  ::com::stencyl::models::Resource (hx::Object::*)( ::Dynamic))&::com::stencyl::io::ActorTypeReader_obj::read,
};

void *ActorTypeReader_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xf08c5996: return &_hx_com_stencyl_io_ActorTypeReader__hx_com_stencyl_io_AbstractReader;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool ActorTypeReader_obj::accepts(::String type){
            	HX_STACKFRAME(&_hx_pos_0ae57c56cc530c12_23_accepts)
HXDLIN(  23)		return (type == ::com::stencyl::io::mbs::actortype::MbsActorType_obj::MBS_ACTOR_TYPE->getName());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ActorTypeReader_obj,accepts,return )

 ::com::stencyl::models::Resource ActorTypeReader_obj::read( ::Dynamic obj){
            	HX_GC_STACKFRAME(&_hx_pos_0ae57c56cc530c12_27_read)
HXLINE(  30)		 ::com::stencyl::io::mbs::actortype::MbsActorType r = ( ( ::com::stencyl::io::mbs::actortype::MbsActorType)(obj) );
HXLINE(  32)		int id = r->getId();
HXLINE(  33)		int atlasID = r->getAtlasID();
HXLINE(  34)		::String name = r->getName();
HXLINE(  36)		 ::box2D::dynamics::B2BodyDef bodyDef =  ::box2D::dynamics::B2BodyDef_obj::__alloc( HX_CTX );
HXLINE(  38)		bodyDef->fixedRotation = r->getFixedRotation();
HXLINE(  40)		int _g = r->getBodyType();
HXDLIN(  40)		int _hx_tmp;
HXDLIN(  40)		switch((int)(_g)){
            			case (int)0: {
HXLINE(  40)				_hx_tmp = ::box2D::dynamics::B2Body_obj::b2_staticBody;
            			}
            			break;
            			case (int)1: {
HXLINE(  40)				_hx_tmp = ::box2D::dynamics::B2Body_obj::b2_kinematicBody;
            			}
            			break;
            			default:{
HXLINE(  40)				_hx_tmp = ::box2D::dynamics::B2Body_obj::b2_dynamicBody;
            			}
            		}
HXDLIN(  40)		bodyDef->type = _hx_tmp;
HXLINE(  47)		bodyDef->linearDamping = r->getLinearDamping();
HXLINE(  48)		bodyDef->angularDamping = r->getAngularDamping();
HXLINE(  50)		bodyDef->friction = r->getFriction();
HXLINE(  51)		bodyDef->bounciness = r->getRestitution();
HXLINE(  52)		bodyDef->mass = r->getMass();
HXLINE(  53)		bodyDef->aMass = r->getInertia();
HXLINE(  55)		bodyDef->active = true;
HXLINE(  56)		bodyDef->bullet = false;
HXLINE(  57)		bodyDef->allowSleep = false;
HXLINE(  58)		bodyDef->awake = true;
HXLINE(  59)		bodyDef->ignoreGravity = r->getIgnoreGravity();
HXLINE(  60)		bodyDef->bullet = r->getContinuous();
HXLINE(  62)		int spriteID = r->getSprite();
HXLINE(  63)		int groupID = r->getGroupID();
HXLINE(  64)		int physicsMode = ::com::stencyl::models::_PhysicsMode::PhysicsMode_Impl__obj::fromInt(r->getPhysicsMode());
HXLINE(  65)		bool autoScale = r->getAutoScale();
HXLINE(  66)		bool pausable = r->getPausable();
HXLINE(  67)		bool ignoreGravity;
HXDLIN(  67)		bool ignoreGravity1;
HXDLIN(  67)		if (!(bodyDef->ignoreGravity)) {
HXLINE(  67)			ignoreGravity1 = (bodyDef->type == ::box2D::dynamics::B2Body_obj::b2_staticBody);
            		}
            		else {
HXLINE(  67)			ignoreGravity1 = true;
            		}
HXDLIN(  67)		if (!(ignoreGravity1)) {
HXLINE(  67)			ignoreGravity = (bodyDef->type == ::box2D::dynamics::B2Body_obj::b2_kinematicBody);
            		}
            		else {
HXLINE(  67)			ignoreGravity = true;
            		}
HXLINE(  71)		 ::haxe::ds::StringMap behaviorValues = ::com::stencyl::io::AttributeValues_obj::readBehaviors(r->getSnippets());
HXLINE(  73)		int eventID = r->getEventSnippetID();
HXLINE(  75)		if ((eventID > (int)-1)) {
HXLINE(  77)			behaviorValues->set((HX_("",00,00,00,00) + eventID), ::com::stencyl::behavior::BehaviorInstance_obj::__alloc( HX_CTX ,eventID, ::haxe::ds::StringMap_obj::__alloc( HX_CTX )));
            		}
HXLINE(  80)		return  ::com::stencyl::models::actor::ActorType_obj::__alloc( HX_CTX ,id,atlasID,name,groupID,spriteID,behaviorValues,bodyDef,physicsMode,autoScale,pausable,ignoreGravity);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ActorTypeReader_obj,read,return )


hx::ObjectPtr< ActorTypeReader_obj > ActorTypeReader_obj::__new() {
	hx::ObjectPtr< ActorTypeReader_obj > __this = new ActorTypeReader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ActorTypeReader_obj > ActorTypeReader_obj::__alloc(hx::Ctx *_hx_ctx) {
	ActorTypeReader_obj *__this = (ActorTypeReader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ActorTypeReader_obj), false, "com.stencyl.io.ActorTypeReader"));
	*(void **)__this = ActorTypeReader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ActorTypeReader_obj::ActorTypeReader_obj()
{
}

hx::Val ActorTypeReader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return hx::Val( read_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"accepts") ) { return hx::Val( accepts_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ActorTypeReader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ActorTypeReader_obj_sStaticStorageInfo = 0;
#endif

static ::String ActorTypeReader_obj_sMemberFields[] = {
	HX_HCSTRING("accepts","\x6b","\x14","\xba","\x9a"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	::String(null()) };

static void ActorTypeReader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActorTypeReader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ActorTypeReader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActorTypeReader_obj::__mClass,"__mClass");
};

#endif

hx::Class ActorTypeReader_obj::__mClass;

void ActorTypeReader_obj::__register()
{
	hx::Object *dummy = new ActorTypeReader_obj;
	ActorTypeReader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.io.ActorTypeReader","\x99","\xfa","\x4c","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ActorTypeReader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ActorTypeReader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ActorTypeReader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ActorTypeReader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ActorTypeReader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ActorTypeReader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace io