// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_ActorScript
#include <com/stencyl/behavior/ActorScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_TimedTask
#include <com/stencyl/behavior/TimedTask.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
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
#ifndef INCLUDED_scripts_Design_25_25_PowerUpHandler
#include <scripts/Design_25_25_PowerUpHandler.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_635e4f03a4d5acc1_69_new,"scripts.Design_25_25_PowerUpHandler","new",0x341e9e57,"scripts.Design_25_25_PowerUpHandler.new","scripts/Design_25_25_PowerUpHandler.hx",69,0x42e2aaba)
HX_LOCAL_STACK_FRAME(_hx_pos_635e4f03a4d5acc1_85_init,"scripts.Design_25_25_PowerUpHandler","init",0x6364a539,"scripts.Design_25_25_PowerUpHandler.init","scripts/Design_25_25_PowerUpHandler.hx",85,0x42e2aaba)
HX_LOCAL_STACK_FRAME(_hx_pos_635e4f03a4d5acc1_89_init,"scripts.Design_25_25_PowerUpHandler","init",0x6364a539,"scripts.Design_25_25_PowerUpHandler.init","scripts/Design_25_25_PowerUpHandler.hx",89,0x42e2aaba)
HX_LOCAL_STACK_FRAME(_hx_pos_635e4f03a4d5acc1_76_init,"scripts.Design_25_25_PowerUpHandler","init",0x6364a539,"scripts.Design_25_25_PowerUpHandler.init","scripts/Design_25_25_PowerUpHandler.hx",76,0x42e2aaba)
HX_LOCAL_STACK_FRAME(_hx_pos_635e4f03a4d5acc1_104_forwardMessage,"scripts.Design_25_25_PowerUpHandler","forwardMessage",0x6fe885eb,"scripts.Design_25_25_PowerUpHandler.forwardMessage","scripts/Design_25_25_PowerUpHandler.hx",104,0x42e2aaba)
namespace scripts{

void Design_25_25_PowerUpHandler_obj::__construct(int dummy, ::com::stencyl::models::Actor actor, ::com::stencyl::Engine dummy2){
            	HX_STACKFRAME(&_hx_pos_635e4f03a4d5acc1_69_new)
HXLINE(  70)		super::__construct(actor);
HXLINE(  71)		this->nameMap->set(HX_("Actor",d5,3a,d4,ae),HX_("actor",f5,ca,a6,1b));
            	}

Dynamic Design_25_25_PowerUpHandler_obj::__CreateEmpty() { return new Design_25_25_PowerUpHandler_obj; }

void *Design_25_25_PowerUpHandler_obj::_hx_vtable = 0;

Dynamic Design_25_25_PowerUpHandler_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Design_25_25_PowerUpHandler_obj > _hx_result = new Design_25_25_PowerUpHandler_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Design_25_25_PowerUpHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1d343a03) {
		if (inClassId<=(int)0x17cc67f4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x17cc67f4;
		} else {
			return inClassId==(int)0x1d343a03;
		}
	} else {
		return inClassId==(int)0x44cf8c83;
	}
}

void Design_25_25_PowerUpHandler_obj::init(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::scripts::Design_25_25_PowerUpHandler,_gthis) HXARGC(6)
            		void _hx_run( ::com::stencyl::models::Actor a,bool enteredScreen,bool exitedScreen,bool enteredScene,bool exitedScene,::cpp::VirtualArray list){
            			HX_STACKFRAME(&_hx_pos_635e4f03a4d5acc1_85_init)
HXLINE(  85)			bool _hx_tmp2;
HXDLIN(  85)			if (_gthis->wrapper->enabled) {
HXLINE(  85)				_hx_tmp2 = exitedScreen;
            			}
            			else {
HXLINE(  85)				_hx_tmp2 = false;
            			}
HXDLIN(  85)			if (_hx_tmp2) {
            				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::com::stencyl::models::Actor,a) HXARGC(1)
            				void _hx_run( ::com::stencyl::behavior::TimedTask timeTask){
            					HX_STACKFRAME(&_hx_pos_635e4f03a4d5acc1_89_init)
HXLINE(  89)					if (!(a->isOnScreen())) {
HXLINE(  95)						::com::stencyl::behavior::Script_obj::recycleActor(a);
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  87)				::com::stencyl::behavior::Script_obj::runLater((int)2000, ::Dynamic(new _hx_Closure_0(a)),_gthis->actor);
            			}
            		}
            		HX_END_LOCAL_FUNC6((void))

            	HX_STACKFRAME(&_hx_pos_635e4f03a4d5acc1_76_init)
HXLINE(  75)		 ::scripts::Design_25_25_PowerUpHandler _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  79)		this->actor->makeAlwaysSimulate(null());
HXLINE(  80)		 ::com::stencyl::models::Actor _hx_tmp = this->actor;
HXDLIN(  80)		int _hx_tmp1 = ::com::stencyl::behavior::Script_obj::randomInt((int)45,(int)135);
HXDLIN(  80)		_hx_tmp->setVelocity(_hx_tmp1,::com::stencyl::behavior::Script_obj::randomInt((int)5,(int)20));
HXLINE(  83)		this->addActorTypeGroupPositionListener(::com::stencyl::behavior::Script_obj::getActorType((int)5)->ID, ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


void Design_25_25_PowerUpHandler_obj::forwardMessage(::String msg){
            	HX_STACKFRAME(&_hx_pos_635e4f03a4d5acc1_104_forwardMessage)
            	}



hx::ObjectPtr< Design_25_25_PowerUpHandler_obj > Design_25_25_PowerUpHandler_obj::__new(int dummy, ::com::stencyl::models::Actor actor, ::com::stencyl::Engine dummy2) {
	hx::ObjectPtr< Design_25_25_PowerUpHandler_obj > __this = new Design_25_25_PowerUpHandler_obj();
	__this->__construct(dummy,actor,dummy2);
	return __this;
}

hx::ObjectPtr< Design_25_25_PowerUpHandler_obj > Design_25_25_PowerUpHandler_obj::__alloc(hx::Ctx *_hx_ctx,int dummy, ::com::stencyl::models::Actor actor, ::com::stencyl::Engine dummy2) {
	Design_25_25_PowerUpHandler_obj *__this = (Design_25_25_PowerUpHandler_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Design_25_25_PowerUpHandler_obj), true, "scripts.Design_25_25_PowerUpHandler"));
	*(void **)__this = Design_25_25_PowerUpHandler_obj::_hx_vtable;
	__this->__construct(dummy,actor,dummy2);
	return __this;
}

Design_25_25_PowerUpHandler_obj::Design_25_25_PowerUpHandler_obj()
{
}

hx::Val Design_25_25_PowerUpHandler_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *Design_25_25_PowerUpHandler_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Design_25_25_PowerUpHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String Design_25_25_PowerUpHandler_obj_sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("forwardMessage","\x82","\x6e","\xf7","\x88"),
	::String(null()) };

static void Design_25_25_PowerUpHandler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_25_25_PowerUpHandler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Design_25_25_PowerUpHandler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_25_25_PowerUpHandler_obj::__mClass,"__mClass");
};

#endif

hx::Class Design_25_25_PowerUpHandler_obj::__mClass;

void Design_25_25_PowerUpHandler_obj::__register()
{
	hx::Object *dummy = new Design_25_25_PowerUpHandler_obj;
	Design_25_25_PowerUpHandler_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("scripts.Design_25_25_PowerUpHandler","\xe5","\x26","\x15","\xd2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Design_25_25_PowerUpHandler_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Design_25_25_PowerUpHandler_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Design_25_25_PowerUpHandler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Design_25_25_PowerUpHandler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Design_25_25_PowerUpHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Design_25_25_PowerUpHandler_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace scripts