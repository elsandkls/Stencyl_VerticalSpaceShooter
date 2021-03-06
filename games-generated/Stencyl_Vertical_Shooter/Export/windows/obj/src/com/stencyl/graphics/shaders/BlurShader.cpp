// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_BlurShader
#include <com/stencyl/graphics/shaders/BlurShader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f8caeeebb74ca88c_6_new,"com.stencyl.graphics.shaders.BlurShader","new",0x07b9bc92,"com.stencyl.graphics.shaders.BlurShader.new","com/stencyl/graphics/shaders/BlurShader.hx",6,0x5541255e)
HX_LOCAL_STACK_FRAME(_hx_pos_f8caeeebb74ca88c_72_setRadius,"com.stencyl.graphics.shaders.BlurShader","setRadius",0x1a6e6346,"com.stencyl.graphics.shaders.BlurShader.setRadius","com/stencyl/graphics/shaders/BlurShader.hx",72,0x5541255e)
HX_LOCAL_STACK_FRAME(_hx_pos_f8caeeebb74ca88c_77_setDirectionX,"com.stencyl.graphics.shaders.BlurShader","setDirectionX",0x1783b22d,"com.stencyl.graphics.shaders.BlurShader.setDirectionX","com/stencyl/graphics/shaders/BlurShader.hx",77,0x5541255e)
HX_LOCAL_STACK_FRAME(_hx_pos_f8caeeebb74ca88c_82_setDirectionY,"com.stencyl.graphics.shaders.BlurShader","setDirectionY",0x1783b22e,"com.stencyl.graphics.shaders.BlurShader.setDirectionY","com/stencyl/graphics/shaders/BlurShader.hx",82,0x5541255e)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{

void BlurShader_obj::__construct(hx::Null< Float >  __o_radius,hx::Null< Float >  __o_dirX,hx::Null< Float >  __o_dirY){
Float radius = __o_radius.Default(((Float)2.0));
Float dirX = __o_dirX.Default(((Float)1.0));
Float dirY = __o_dirY.Default(((Float)1.0));
            	HX_GC_STACKFRAME(&_hx_pos_f8caeeebb74ca88c_6_new)
HXLINE(   7)		super::__construct();
HXLINE(   9)		::String script = HX_("\n\t\t\t#ifdef GL_ES\n\t\t\t\tprecision mediump float;\n\t\t\t#endif\n\t\t\t\n\t\t\t//in attributes from our vertex shader\n\t\t\tvarying vec2 vTexCoord;\n\t\t\t\n\t\t\t//declare uniforms\n\t\t\tuniform sampler2D uImage0;\n\t\t\tuniform vec2 uResolution;\n\t\t\t\n\t\t\tuniform float radius;\n\t\t\tuniform float dirx;\n\t\t\tuniform float diry;\n\t\t\t\n\t\t\tvoid main()\n\t\t\t{\n\t\t\t\t//this will be our RGBA sum\n\t\t\t\tvec4 sum = vec4(0.0);\n\t\t\t\n\t\t\t\t//our original texcoord for this fragment\n\t\t\t\tvec2 tc = vTexCoord;\n\t\t\t\n\t\t\t\t//the amount to blur, i.e. how far off center to sample from\n\t\t\t\t//1.0 -> blur by one pixel\n\t\t\t\t//2.0 -> blur by two pixels, etc.\n\t\t\t\tfloat blur = radius / uResolution.x;\n\t\t\t\n\t\t\t\t//the direction of our blur\n\t\t\t\t//(1.0, 0.0) -> x-axis blur\n\t\t\t\t//(0.0, 1.0) -> y-axis blur\n\t\t\t\tfloat hstep = dirx;\n\t\t\t\tfloat vstep = diry;\n\t\t\t\n\t\t\t\t//apply blurring, using a 9-tap filter with predefined gaussian weights\n\t\t\t\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x - 4.0*blur*hstep, tc.y - 4.0*blur*vstep)) * 0.0162162162;\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x - 3.0*blur*hstep, tc.y - 3.0*blur*vstep)) * 0.0540540541;\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x - 2.0*blur*hstep, tc.y - 2.0*blur*vstep)) * 0.1216216216;\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x - 1.0*blur*hstep, tc.y - 1.0*blur*vstep)) * 0.1945945946;\n\t\t\t\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x, tc.y)) * 0.2270270270;\n\t\t\t\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x + 1.0*blur*hstep, tc.y + 1.0*blur*vstep)) * 0.1945945946;\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x + 2.0*blur*hstep, tc.y + 2.0*blur*vstep)) * 0.1216216216;\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x + 3.0*blur*hstep, tc.y + 3.0*blur*vstep)) * 0.0540540541;\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x + 4.0*blur*hstep, tc.y + 4.0*blur*vstep)) * 0.0162162162;\n\t\t\t\n\t\t\t\t//discard alpha for our simple demo, multiply by vertex color and return\n\t\t\t\tgl_FragColor = vec4(sum.rgb, 1.0);\n\t\t\t}\n\t\t",12,d3,b1,77);
HXLINE(  63)		this->model =  ::com::stencyl::graphics::shaders::PostProcess_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),script,true);
HXLINE(  65)		this->setRadius(radius);
HXLINE(  66)		this->setDirectionX(dirX);
HXLINE(  67)		this->setDirectionY(dirY);
            	}

Dynamic BlurShader_obj::__CreateEmpty() { return new BlurShader_obj; }

void *BlurShader_obj::_hx_vtable = 0;

Dynamic BlurShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BlurShader_obj > _hx_result = new BlurShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BlurShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x488ca67b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x488ca67b;
	} else {
		return inClassId==(int)0x53c77424;
	}
}

void BlurShader_obj::setRadius(Float amount){
            	HX_STACKFRAME(&_hx_pos_f8caeeebb74ca88c_72_setRadius)
HXDLIN(  72)		this->setProperty(HX_("radius",52,d0,f6,b0),amount);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlurShader_obj,setRadius,(void))

void BlurShader_obj::setDirectionX(Float amount){
            	HX_STACKFRAME(&_hx_pos_f8caeeebb74ca88c_77_setDirectionX)
HXDLIN(  77)		this->setProperty(HX_("dirx",8b,66,69,42),amount);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlurShader_obj,setDirectionX,(void))

void BlurShader_obj::setDirectionY(Float amount){
            	HX_STACKFRAME(&_hx_pos_f8caeeebb74ca88c_82_setDirectionY)
HXDLIN(  82)		this->setProperty(HX_("diry",8c,66,69,42),amount);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlurShader_obj,setDirectionY,(void))


hx::ObjectPtr< BlurShader_obj > BlurShader_obj::__new(hx::Null< Float >  __o_radius,hx::Null< Float >  __o_dirX,hx::Null< Float >  __o_dirY) {
	hx::ObjectPtr< BlurShader_obj > __this = new BlurShader_obj();
	__this->__construct(__o_radius,__o_dirX,__o_dirY);
	return __this;
}

hx::ObjectPtr< BlurShader_obj > BlurShader_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_radius,hx::Null< Float >  __o_dirX,hx::Null< Float >  __o_dirY) {
	BlurShader_obj *__this = (BlurShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BlurShader_obj), true, "com.stencyl.graphics.shaders.BlurShader"));
	*(void **)__this = BlurShader_obj::_hx_vtable;
	__this->__construct(__o_radius,__o_dirX,__o_dirY);
	return __this;
}

BlurShader_obj::BlurShader_obj()
{
}

hx::Val BlurShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"setRadius") ) { return hx::Val( setRadius_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setDirectionX") ) { return hx::Val( setDirectionX_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDirectionY") ) { return hx::Val( setDirectionY_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BlurShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BlurShader_obj_sStaticStorageInfo = 0;
#endif

static ::String BlurShader_obj_sMemberFields[] = {
	HX_HCSTRING("setRadius","\x94","\x45","\x9e","\x10"),
	HX_HCSTRING("setDirectionX","\x7b","\xd3","\x8d","\xc9"),
	HX_HCSTRING("setDirectionY","\x7c","\xd3","\x8d","\xc9"),
	::String(null()) };

static void BlurShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlurShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BlurShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlurShader_obj::__mClass,"__mClass");
};

#endif

hx::Class BlurShader_obj::__mClass;

void BlurShader_obj::__register()
{
	hx::Object *dummy = new BlurShader_obj;
	BlurShader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.graphics.shaders.BlurShader","\xa0","\xcb","\x9f","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BlurShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BlurShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BlurShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BlurShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlurShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlurShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
