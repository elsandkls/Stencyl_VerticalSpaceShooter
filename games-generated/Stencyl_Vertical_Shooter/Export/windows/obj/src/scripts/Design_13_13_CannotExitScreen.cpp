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
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
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
#ifndef INCLUDED_scripts_Design_13_13_CannotExitScreen
#include <scripts/Design_13_13_CannotExitScreen.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_71c8df95ccc53535_69_new,"scripts.Design_13_13_CannotExitScreen","new",0x90b37f5a,"scripts.Design_13_13_CannotExitScreen.new","scripts/Design_13_13_CannotExitScreen.hx",69,0x6800cd57)
HX_LOCAL_STACK_FRAME(_hx_pos_71c8df95ccc53535_84_init,"scripts.Design_13_13_CannotExitScreen","init",0x0914a6d6,"scripts.Design_13_13_CannotExitScreen.init","scripts/Design_13_13_CannotExitScreen.hx",84,0x6800cd57)
HX_LOCAL_STACK_FRAME(_hx_pos_71c8df95ccc53535_76_init,"scripts.Design_13_13_CannotExitScreen","init",0x0914a6d6,"scripts.Design_13_13_CannotExitScreen.init","scripts/Design_13_13_CannotExitScreen.hx",76,0x6800cd57)
HX_LOCAL_STACK_FRAME(_hx_pos_71c8df95ccc53535_112_forwardMessage,"scripts.Design_13_13_CannotExitScreen","forwardMessage",0xf86b8dc8,"scripts.Design_13_13_CannotExitScreen.forwardMessage","scripts/Design_13_13_CannotExitScreen.hx",112,0x6800cd57)
namespace scripts{

void Design_13_13_CannotExitScreen_obj::__construct(int dummy, ::com::stencyl::models::Actor actor, ::com::stencyl::Engine dummy2){
            	HX_STACKFRAME(&_hx_pos_71c8df95ccc53535_69_new)
HXLINE(  70)		super::__construct(actor);
HXLINE(  71)		this->nameMap->set(HX_("Actor",d5,3a,d4,ae),HX_("actor",f5,ca,a6,1b));
            	}

Dynamic Design_13_13_CannotExitScreen_obj::__CreateEmpty() { return new Design_13_13_CannotExitScreen_obj; }

void *Design_13_13_CannotExitScreen_obj::_hx_vtable = 0;

Dynamic Design_13_13_CannotExitScreen_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Design_13_13_CannotExitScreen_obj > _hx_result = new Design_13_13_CannotExitScreen_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Design_13_13_CannotExitScreen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1d343a03) {
		if (inClassId<=(int)0x17cc67f4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x17cc67f4;
		} else {
			return inClassId==(int)0x1d343a03;
		}
	} else {
		return inClassId==(int)0x2f941386;
	}
}

void Design_13_13_CannotExitScreen_obj::init(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::scripts::Design_13_13_CannotExitScreen,_gthis) HXARGC(2)
            		void _hx_run(Float elapsedTime,::cpp::VirtualArray list){
            			HX_STACKFRAME(&_hx_pos_71c8df95ccc53535_84_init)
HXLINE(  84)			if (_gthis->wrapper->enabled) {
HXLINE(  86)				if ((_gthis->actor->getScreenX() < (int)0)) {
HXLINE(  88)					 ::com::stencyl::models::Actor _gthis1 = _gthis->actor;
HXDLIN(  88)					_gthis1->setX(::com::stencyl::behavior::Script_obj::getScreenX(),null(),null());
HXLINE(  89)					_gthis->actor->setXVelocity((int)0);
            				}
HXLINE(  91)				if ((_gthis->actor->getScreenY() < (int)0)) {
HXLINE(  93)					 ::com::stencyl::models::Actor _gthis2 = _gthis->actor;
HXDLIN(  93)					_gthis2->setY(::com::stencyl::behavior::Script_obj::getScreenY(),null(),null());
HXLINE(  94)					_gthis->actor->setYVelocity((int)0);
            				}
HXLINE(  96)				Float _hx_tmp = _gthis->actor->getScreenX();
HXDLIN(  96)				Float _hx_tmp1 = (_hx_tmp + _gthis->actor->getWidth());
HXDLIN(  96)				if ((_hx_tmp1 > ::com::stencyl::behavior::Script_obj::getScreenWidth())) {
HXLINE(  98)					 ::com::stencyl::models::Actor _gthis3 = _gthis->actor;
HXDLIN(  98)					Float _hx_tmp2 = ::com::stencyl::behavior::Script_obj::getScreenX();
HXDLIN(  98)					int _hx_tmp3 = ::com::stencyl::behavior::Script_obj::getScreenWidth();
HXDLIN(  98)					_gthis3->setX((_hx_tmp2 + (_hx_tmp3 - _gthis->actor->getWidth())),null(),null());
HXLINE(  99)					_gthis->actor->setXVelocity((int)0);
            				}
HXLINE( 101)				Float _hx_tmp4 = _gthis->actor->getScreenY();
HXDLIN( 101)				Float _hx_tmp5 = (_hx_tmp4 + _gthis->actor->getHeight());
HXDLIN( 101)				if ((_hx_tmp5 > ::com::stencyl::behavior::Script_obj::getScreenHeight())) {
HXLINE( 103)					 ::com::stencyl::models::Actor _gthis4 = _gthis->actor;
HXDLIN( 103)					Float _hx_tmp6 = ::com::stencyl::behavior::Script_obj::getScreenY();
HXDLIN( 103)					int _hx_tmp7 = ::com::stencyl::behavior::Script_obj::getScreenHeight();
HXDLIN( 103)					_gthis4->setY((_hx_tmp6 + (_hx_tmp7 - _gthis->actor->getHeight())),null(),null());
HXLINE( 104)					_gthis->actor->setYVelocity((int)0);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_71c8df95ccc53535_76_init)
HXLINE(  75)		 ::scripts::Design_13_13_CannotExitScreen _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  79)		this->actor->makeAlwaysSimulate(null());
HXLINE(  82)		this->addWhenUpdatedListener(null(), ::Dynamic(new _hx_Closure_0(_gthis)));
            	}


void Design_13_13_CannotExitScreen_obj::forwardMessage(::String msg){
            	HX_STACKFRAME(&_hx_pos_71c8df95ccc53535_112_forwardMessage)
            	}



hx::ObjectPtr< Design_13_13_CannotExitScreen_obj > Design_13_13_CannotExitScreen_obj::__new(int dummy, ::com::stencyl::models::Actor actor, ::com::stencyl::Engine dummy2) {
	hx::ObjectPtr< Design_13_13_CannotExitScreen_obj > __this = new Design_13_13_CannotExitScreen_obj();
	__this->__construct(dummy,actor,dummy2);
	return __this;
}

hx::ObjectPtr< Design_13_13_CannotExitScreen_obj > Design_13_13_CannotExitScreen_obj::__alloc(hx::Ctx *_hx_ctx,int dummy, ::com::stencyl::models::Actor actor, ::com::stencyl::Engine dummy2) {
	Design_13_13_CannotExitScreen_obj *__this = (Design_13_13_CannotExitScreen_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Design_13_13_CannotExitScreen_obj), true, "scripts.Design_13_13_CannotExitScreen"));
	*(void **)__this = Design_13_13_CannotExitScreen_obj::_hx_vtable;
	__this->__construct(dummy,actor,dummy2);
	return __this;
}

Design_13_13_CannotExitScreen_obj::Design_13_13_CannotExitScreen_obj()
{
}

hx::Val Design_13_13_CannotExitScreen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *Design_13_13_CannotExitScreen_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Design_13_13_CannotExitScreen_obj_sStaticStorageInfo = 0;
#endif

static ::String Design_13_13_CannotExitScreen_obj_sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("forwardMessage","\x82","\x6e","\xf7","\x88"),
	::String(null()) };

static void Design_13_13_CannotExitScreen_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_13_13_CannotExitScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Design_13_13_CannotExitScreen_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_13_13_CannotExitScreen_obj::__mClass,"__mClass");
};

#endif

hx::Class Design_13_13_CannotExitScreen_obj::__mClass;

void Design_13_13_CannotExitScreen_obj::__register()
{
	hx::Object *dummy = new Design_13_13_CannotExitScreen_obj;
	Design_13_13_CannotExitScreen_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("scripts.Design_13_13_CannotExitScreen","\x68","\x8a","\x3e","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Design_13_13_CannotExitScreen_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Design_13_13_CannotExitScreen_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Design_13_13_CannotExitScreen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Design_13_13_CannotExitScreen_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Design_13_13_CannotExitScreen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Design_13_13_CannotExitScreen_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace scripts
