// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_multisampled_render_to_texture
#include <lime/graphics/opengl/ext/IMG_multisampled_render_to_texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ebcce84ebca33b42_6_new,"lime.graphics.opengl.ext.IMG_multisampled_render_to_texture","new",0xa9dd9932,"lime.graphics.opengl.ext.IMG_multisampled_render_to_texture.new","lime/graphics/opengl/ext/IMG_multisampled_render_to_texture.hx",6,0x560a569c)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void IMG_multisampled_render_to_texture_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ebcce84ebca33b42_6_new)
HXLINE(  12)		this->TEXTURE_SAMPLES_IMG = (int)37174;
HXLINE(  11)		this->MAX_SAMPLES_IMG = (int)37173;
HXLINE(  10)		this->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG = (int)37172;
HXLINE(   9)		this->RENDERBUFFER_SAMPLES_IMG = (int)37171;
            	}

Dynamic IMG_multisampled_render_to_texture_obj::__CreateEmpty() { return new IMG_multisampled_render_to_texture_obj; }

void *IMG_multisampled_render_to_texture_obj::_hx_vtable = 0;

Dynamic IMG_multisampled_render_to_texture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IMG_multisampled_render_to_texture_obj > _hx_result = new IMG_multisampled_render_to_texture_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IMG_multisampled_render_to_texture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x432ebe50;
}


IMG_multisampled_render_to_texture_obj::IMG_multisampled_render_to_texture_obj()
{
}

hx::Val IMG_multisampled_render_to_texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_IMG") ) { return hx::Val( MAX_SAMPLES_IMG ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_SAMPLES_IMG") ) { return hx::Val( TEXTURE_SAMPLES_IMG ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_IMG") ) { return hx::Val( RENDERBUFFER_SAMPLES_IMG ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG") ) { return hx::Val( FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val IMG_multisampled_render_to_texture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_IMG") ) { MAX_SAMPLES_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TEXTURE_SAMPLES_IMG") ) { TEXTURE_SAMPLES_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_IMG") ) { RENDERBUFFER_SAMPLES_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG") ) { FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IMG_multisampled_render_to_texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("RENDERBUFFER_SAMPLES_IMG","\x24","\xea","\xa6","\x7a"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG","\x38","\x77","\x46","\x27"));
	outFields->push(HX_HCSTRING("MAX_SAMPLES_IMG","\xd2","\xb8","\x8f","\x83"));
	outFields->push(HX_HCSTRING("TEXTURE_SAMPLES_IMG","\x89","\xa5","\x7d","\xe8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo IMG_multisampled_render_to_texture_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IMG_multisampled_render_to_texture_obj,RENDERBUFFER_SAMPLES_IMG),HX_HCSTRING("RENDERBUFFER_SAMPLES_IMG","\x24","\xea","\xa6","\x7a")},
	{hx::fsInt,(int)offsetof(IMG_multisampled_render_to_texture_obj,FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG","\x38","\x77","\x46","\x27")},
	{hx::fsInt,(int)offsetof(IMG_multisampled_render_to_texture_obj,MAX_SAMPLES_IMG),HX_HCSTRING("MAX_SAMPLES_IMG","\xd2","\xb8","\x8f","\x83")},
	{hx::fsInt,(int)offsetof(IMG_multisampled_render_to_texture_obj,TEXTURE_SAMPLES_IMG),HX_HCSTRING("TEXTURE_SAMPLES_IMG","\x89","\xa5","\x7d","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IMG_multisampled_render_to_texture_obj_sStaticStorageInfo = 0;
#endif

static ::String IMG_multisampled_render_to_texture_obj_sMemberFields[] = {
	HX_HCSTRING("RENDERBUFFER_SAMPLES_IMG","\x24","\xea","\xa6","\x7a"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG","\x38","\x77","\x46","\x27"),
	HX_HCSTRING("MAX_SAMPLES_IMG","\xd2","\xb8","\x8f","\x83"),
	HX_HCSTRING("TEXTURE_SAMPLES_IMG","\x89","\xa5","\x7d","\xe8"),
	::String(null()) };

static void IMG_multisampled_render_to_texture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IMG_multisampled_render_to_texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IMG_multisampled_render_to_texture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IMG_multisampled_render_to_texture_obj::__mClass,"__mClass");
};

#endif

hx::Class IMG_multisampled_render_to_texture_obj::__mClass;

void IMG_multisampled_render_to_texture_obj::__register()
{
	hx::Object *dummy = new IMG_multisampled_render_to_texture_obj;
	IMG_multisampled_render_to_texture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.IMG_multisampled_render_to_texture","\x40","\xd8","\x30","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IMG_multisampled_render_to_texture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IMG_multisampled_render_to_texture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IMG_multisampled_render_to_texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IMG_multisampled_render_to_texture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IMG_multisampled_render_to_texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IMG_multisampled_render_to_texture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
