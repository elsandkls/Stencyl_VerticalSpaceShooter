// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_behavior_SceneScript
#include <com/stencyl/behavior/SceneScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e05a4c9bbbe940c8_7_new,"com.stencyl.behavior.SceneScript","new",0x46216a7c,"com.stencyl.behavior.SceneScript.new","com/stencyl/behavior/SceneScript.hx",7,0x3d5d8f73)
namespace com{
namespace stencyl{
namespace behavior{

void SceneScript_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e05a4c9bbbe940c8_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic SceneScript_obj::__CreateEmpty() { return new SceneScript_obj; }

void *SceneScript_obj::_hx_vtable = 0;

Dynamic SceneScript_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SceneScript_obj > _hx_result = new SceneScript_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SceneScript_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17cc67f4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x17cc67f4;
	} else {
		return inClassId==(int)0x7ae9239a;
	}
}


hx::ObjectPtr< SceneScript_obj > SceneScript_obj::__new() {
	hx::ObjectPtr< SceneScript_obj > __this = new SceneScript_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< SceneScript_obj > SceneScript_obj::__alloc(hx::Ctx *_hx_ctx) {
	SceneScript_obj *__this = (SceneScript_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SceneScript_obj), true, "com.stencyl.behavior.SceneScript"));
	*(void **)__this = SceneScript_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SceneScript_obj::SceneScript_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SceneScript_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SceneScript_obj_sStaticStorageInfo = 0;
#endif

static void SceneScript_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SceneScript_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SceneScript_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SceneScript_obj::__mClass,"__mClass");
};

#endif

hx::Class SceneScript_obj::__mClass;

void SceneScript_obj::__register()
{
	hx::Object *dummy = new SceneScript_obj;
	SceneScript_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.behavior.SceneScript","\x8a","\xbc","\x8b","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SceneScript_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SceneScript_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SceneScript_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SceneScript_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SceneScript_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace behavior