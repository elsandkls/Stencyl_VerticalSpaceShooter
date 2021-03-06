// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_ActorScript
#include <com/stencyl/behavior/ActorScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_scripts_ActorEvents_13
#include <scripts/ActorEvents_13.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8f634ee6ee25b7cf_70_new,"scripts.ActorEvents_13","new",0xb2582d0b,"scripts.ActorEvents_13.new","scripts/ActorEvents_13.hx",70,0x5a5d6ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_8f634ee6ee25b7cf_75_init,"scripts.ActorEvents_13","init",0x5787f405,"scripts.ActorEvents_13.init","scripts/ActorEvents_13.hx",75,0x5a5d6ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_8f634ee6ee25b7cf_80_forwardMessage,"scripts.ActorEvents_13","forwardMessage",0x83b6cbb7,"scripts.ActorEvents_13.forwardMessage","scripts/ActorEvents_13.hx",80,0x5a5d6ba4)
namespace scripts{

void ActorEvents_13_obj::__construct(int dummy, ::com::stencyl::models::Actor actor, ::com::stencyl::Engine dummy2){
            	HX_STACKFRAME(&_hx_pos_8f634ee6ee25b7cf_70_new)
HXDLIN(  70)		super::__construct(actor);
            	}

Dynamic ActorEvents_13_obj::__CreateEmpty() { return new ActorEvents_13_obj; }

void *ActorEvents_13_obj::_hx_vtable = 0;

Dynamic ActorEvents_13_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ActorEvents_13_obj > _hx_result = new ActorEvents_13_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ActorEvents_13_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17cc67f4) {
		if (inClassId<=(int)0x0d0a64d7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0d0a64d7;
		} else {
			return inClassId==(int)0x17cc67f4;
		}
	} else {
		return inClassId==(int)0x1d343a03;
	}
}

void ActorEvents_13_obj::init(){
            	HX_STACKFRAME(&_hx_pos_8f634ee6ee25b7cf_75_init)
            	}


void ActorEvents_13_obj::forwardMessage(::String msg){
            	HX_STACKFRAME(&_hx_pos_8f634ee6ee25b7cf_80_forwardMessage)
            	}



hx::ObjectPtr< ActorEvents_13_obj > ActorEvents_13_obj::__new(int dummy, ::com::stencyl::models::Actor actor, ::com::stencyl::Engine dummy2) {
	hx::ObjectPtr< ActorEvents_13_obj > __this = new ActorEvents_13_obj();
	__this->__construct(dummy,actor,dummy2);
	return __this;
}

hx::ObjectPtr< ActorEvents_13_obj > ActorEvents_13_obj::__alloc(hx::Ctx *_hx_ctx,int dummy, ::com::stencyl::models::Actor actor, ::com::stencyl::Engine dummy2) {
	ActorEvents_13_obj *__this = (ActorEvents_13_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ActorEvents_13_obj), true, "scripts.ActorEvents_13"));
	*(void **)__this = ActorEvents_13_obj::_hx_vtable;
	__this->__construct(dummy,actor,dummy2);
	return __this;
}

ActorEvents_13_obj::ActorEvents_13_obj()
{
}

hx::Val ActorEvents_13_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return hx::Val( forwardMessage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ActorEvents_13_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ActorEvents_13_obj_sStaticStorageInfo = 0;
#endif

static ::String ActorEvents_13_obj_sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("forwardMessage","\x82","\x6e","\xf7","\x88"),
	::String(null()) };

static void ActorEvents_13_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActorEvents_13_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ActorEvents_13_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActorEvents_13_obj::__mClass,"__mClass");
};

#endif

hx::Class ActorEvents_13_obj::__mClass;

void ActorEvents_13_obj::__register()
{
	hx::Object *dummy = new ActorEvents_13_obj;
	ActorEvents_13_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("scripts.ActorEvents_13","\x99","\x4b","\xcc","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ActorEvents_13_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ActorEvents_13_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ActorEvents_13_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ActorEvents_13_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ActorEvents_13_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ActorEvents_13_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace scripts
