// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_InvertShader
#include <com/stencyl/graphics/shaders/InvertShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_PostProcess
#include <com/stencyl/graphics/shaders/PostProcess.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e49c370ab8db5c12_6_new,"com.stencyl.graphics.shaders.InvertShader","new",0x4f70e6c1,"com.stencyl.graphics.shaders.InvertShader.new","com/stencyl/graphics/shaders/InvertShader.hx",6,0xf73ba60f)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{

void InvertShader_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e49c370ab8db5c12_6_new)
HXLINE(   7)		super::__construct();
HXLINE(   9)		::String script = HX_("\n\t\t\t#ifdef GL_ES\n\t\t\t\tprecision mediump float;\n\t\t\t#endif\n\t\t\t\n\t\t\tvarying vec2 vTexCoord;\n\t\t\tuniform sampler2D uImage0;\n\t\t\t\n\t\t\tvoid main(void)\n\t\t\t{\n\t\t\t\tvec4 color = texture2D(uImage0, vTexCoord);\n\t\t\t\tgl_FragColor = vec4(vec3(1.0, 1.0, 1.0) - color.rgb, color.a);\n\t\t\t}\n\t\t",d2,d9,2d,78);
HXLINE(  24)		this->model =  ::com::stencyl::graphics::shaders::PostProcess_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),script,true);
            	}

Dynamic InvertShader_obj::__CreateEmpty() { return new InvertShader_obj; }

void *InvertShader_obj::_hx_vtable = 0;

Dynamic InvertShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InvertShader_obj > _hx_result = new InvertShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InvertShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3610c4ef) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3610c4ef;
	} else {
		return inClassId==(int)0x488ca67b;
	}
}


hx::ObjectPtr< InvertShader_obj > InvertShader_obj::__new() {
	hx::ObjectPtr< InvertShader_obj > __this = new InvertShader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< InvertShader_obj > InvertShader_obj::__alloc(hx::Ctx *_hx_ctx) {
	InvertShader_obj *__this = (InvertShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InvertShader_obj), true, "com.stencyl.graphics.shaders.InvertShader"));
	*(void **)__this = InvertShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InvertShader_obj::InvertShader_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *InvertShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *InvertShader_obj_sStaticStorageInfo = 0;
#endif

static void InvertShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InvertShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InvertShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InvertShader_obj::__mClass,"__mClass");
};

#endif

hx::Class InvertShader_obj::__mClass;

void InvertShader_obj::__register()
{
	hx::Object *dummy = new InvertShader_obj;
	InvertShader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.graphics.shaders.InvertShader","\x4f","\x72","\xec","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InvertShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InvertShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InvertShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InvertShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InvertShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
