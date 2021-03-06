// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_CSBShader
#include <com/stencyl/graphics/shaders/CSBShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c4e447a1115ba9c4_22_new,"com.stencyl.graphics.shaders.CSBShader","new",0xc4ad36f5,"com.stencyl.graphics.shaders.CSBShader.new","com/stencyl/graphics/shaders/CSBShader.hx",22,0x81e8fbdb)
HX_LOCAL_STACK_FRAME(_hx_pos_c4e447a1115ba9c4_65_setContrast,"com.stencyl.graphics.shaders.CSBShader","setContrast",0xa3c43a59,"com.stencyl.graphics.shaders.CSBShader.setContrast","com/stencyl/graphics/shaders/CSBShader.hx",65,0x81e8fbdb)
HX_LOCAL_STACK_FRAME(_hx_pos_c4e447a1115ba9c4_70_setBrightness,"com.stencyl.graphics.shaders.CSBShader","setBrightness",0xb4b31ee8,"com.stencyl.graphics.shaders.CSBShader.setBrightness","com/stencyl/graphics/shaders/CSBShader.hx",70,0x81e8fbdb)
HX_LOCAL_STACK_FRAME(_hx_pos_c4e447a1115ba9c4_75_setSaturation,"com.stencyl.graphics.shaders.CSBShader","setSaturation",0x45e364e9,"com.stencyl.graphics.shaders.CSBShader.setSaturation","com/stencyl/graphics/shaders/CSBShader.hx",75,0x81e8fbdb)
HX_LOCAL_STACK_FRAME(_hx_pos_c4e447a1115ba9c4_7_create,"com.stencyl.graphics.shaders.CSBShader","create",0x03968b87,"com.stencyl.graphics.shaders.CSBShader.create","com/stencyl/graphics/shaders/CSBShader.hx",7,0x81e8fbdb)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{

void CSBShader_obj::__construct(hx::Null< Float >  __o_contrast,hx::Null< Float >  __o_brightness,hx::Null< Float >  __o_saturation){
Float contrast = __o_contrast.Default(((Float)1.0));
Float brightness = __o_brightness.Default(((Float)1.0));
Float saturation = __o_saturation.Default(((Float)1.0));
            	HX_GC_STACKFRAME(&_hx_pos_c4e447a1115ba9c4_22_new)
HXLINE(  23)		super::__construct();
HXLINE(  25)		::String script = HX_("\n\t\t\t#ifdef GL_ES\n\t\t\t\tprecision mediump float;\n\t\t\t#endif\n\n\t\t\tvarying vec2 vTexCoord;\n\t\t\tuniform sampler2D uImage0;\n\t\t\tuniform float contrast;\n\t\t\tuniform float brightness;\n\t\t\tuniform float saturation;\n\n\t\t\tvec3 _mix(vec3 a, vec3 b, float amount) \n\t\t\t{ \n\t\t\t\treturn vec3(a.x * (1.0 - amount) + b.x * amount, a.y * (1.0 - amount) + b.y * amount, a.z * (1.0 - amount) + b.z * amount); \n\t\t\t}\n\n\t\t\tvoid main() \n\t\t\t{\n\t\t\t\tvec3 color = texture2D(uImage0, vTexCoord).rgb;\n\t\t\t\tconst vec3 luminanceCoefficient = vec3(0.2125, 0.7154, 0.0721);\n\t\t\t\tvec3 avgLuminance = vec3(0.5, 0.5, 0.5);\n\t\t\n\t\t\t\tvec3 brtColor = vec3(color.x * brightness, color.y * brightness, color.z * brightness);\n\t\t\t\tvec3 intensity = vec3(dot(brtColor, luminanceCoefficient));\n\t\t\t\tvec3 satColor = _mix(intensity, brtColor, saturation);\n\t\t\t\tvec3 conColor = _mix(avgLuminance, satColor, contrast);\n\t\t\n\t\t\t\tgl_FragColor = vec4(conColor, 1);\n\t\t\t}\n\t\t",d6,88,ef,7c);
HXLINE(  56)		this->model =  ::com::stencyl::graphics::shaders::PostProcess_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),script,true);
HXLINE(  58)		this->setContrast(contrast);
HXLINE(  59)		this->setBrightness(brightness);
HXLINE(  60)		this->setSaturation(saturation);
            	}

Dynamic CSBShader_obj::__CreateEmpty() { return new CSBShader_obj; }

void *CSBShader_obj::_hx_vtable = 0;

Dynamic CSBShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CSBShader_obj > _hx_result = new CSBShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool CSBShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x06396c7f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x06396c7f;
	} else {
		return inClassId==(int)0x488ca67b;
	}
}

void CSBShader_obj::setContrast(Float amount){
            	HX_STACKFRAME(&_hx_pos_c4e447a1115ba9c4_65_setContrast)
HXDLIN(  65)		this->setProperty(HX_("contrast",02,ed,b1,37),amount);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSBShader_obj,setContrast,(void))

void CSBShader_obj::setBrightness(Float amount){
            	HX_STACKFRAME(&_hx_pos_c4e447a1115ba9c4_70_setBrightness)
HXDLIN(  70)		this->setProperty(HX_("brightness",d1,8d,71,65),amount);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSBShader_obj,setBrightness,(void))

void CSBShader_obj::setSaturation(Float amount){
            	HX_STACKFRAME(&_hx_pos_c4e447a1115ba9c4_75_setSaturation)
HXDLIN(  75)		this->setProperty(HX_("saturation",d2,d3,a1,f6),amount);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSBShader_obj,setSaturation,(void))

 ::com::stencyl::graphics::shaders::CSBShader CSBShader_obj::create(::String __o_type,hx::Null< Float >  __o_amount){
::String type = __o_type.Default(HX_HCSTRING("contrast","\x02","\xed","\xb1","\x37"));
Float amount = __o_amount.Default(((Float)1.0));
            	HX_GC_STACKFRAME(&_hx_pos_c4e447a1115ba9c4_7_create)
HXLINE(   8)		if ((type == HX_("contrast",02,ed,b1,37))) {
HXLINE(  10)			return  ::com::stencyl::graphics::shaders::CSBShader_obj::__alloc( HX_CTX ,amount,((Float)1.0),((Float)1.0));
            		}
            		else {
HXLINE(  13)			if ((type == HX_("saturation",d2,d3,a1,f6))) {
HXLINE(  15)				return  ::com::stencyl::graphics::shaders::CSBShader_obj::__alloc( HX_CTX ,((Float)1.0),((Float)1.0),amount);
            			}
            		}
HXLINE(  18)		return  ::com::stencyl::graphics::shaders::CSBShader_obj::__alloc( HX_CTX ,((Float)1.0),amount,((Float)1.0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CSBShader_obj,create,return )


hx::ObjectPtr< CSBShader_obj > CSBShader_obj::__new(hx::Null< Float >  __o_contrast,hx::Null< Float >  __o_brightness,hx::Null< Float >  __o_saturation) {
	hx::ObjectPtr< CSBShader_obj > __this = new CSBShader_obj();
	__this->__construct(__o_contrast,__o_brightness,__o_saturation);
	return __this;
}

hx::ObjectPtr< CSBShader_obj > CSBShader_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_contrast,hx::Null< Float >  __o_brightness,hx::Null< Float >  __o_saturation) {
	CSBShader_obj *__this = (CSBShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CSBShader_obj), true, "com.stencyl.graphics.shaders.CSBShader"));
	*(void **)__this = CSBShader_obj::_hx_vtable;
	__this->__construct(__o_contrast,__o_brightness,__o_saturation);
	return __this;
}

CSBShader_obj::CSBShader_obj()
{
}

hx::Val CSBShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"setContrast") ) { return hx::Val( setContrast_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setBrightness") ) { return hx::Val( setBrightness_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSaturation") ) { return hx::Val( setSaturation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CSBShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CSBShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CSBShader_obj_sStaticStorageInfo = 0;
#endif

static ::String CSBShader_obj_sMemberFields[] = {
	HX_HCSTRING("setContrast","\xc4","\xb6","\x12","\x68"),
	HX_HCSTRING("setBrightness","\x13","\xcc","\xe9","\x06"),
	HX_HCSTRING("setSaturation","\x14","\x12","\x1a","\x98"),
	::String(null()) };

static void CSBShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CSBShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CSBShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CSBShader_obj::__mClass,"__mClass");
};

#endif

hx::Class CSBShader_obj::__mClass;

static ::String CSBShader_obj_sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null())
};

void CSBShader_obj::__register()
{
	hx::Object *dummy = new CSBShader_obj;
	CSBShader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.graphics.shaders.CSBShader","\x83","\x98","\xc7","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CSBShader_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CSBShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CSBShader_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CSBShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CSBShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CSBShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CSBShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CSBShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
