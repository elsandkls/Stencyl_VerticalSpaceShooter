// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e18280422777664c_35_new,"openfl.display.ShaderInput_openfl_display_BitmapData","new",0x3cac89f3,"openfl.display.ShaderInput_openfl_display_BitmapData.new","openfl/display/ShaderInput.hx",35,0xcc724ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_e18280422777664c_48___disableGL,"openfl.display.ShaderInput_openfl_display_BitmapData","__disableGL",0x1fba3f80,"openfl.display.ShaderInput_openfl_display_BitmapData.__disableGL","openfl/display/ShaderInput.hx",48,0xcc724ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_e18280422777664c_56___updateGL,"openfl.display.ShaderInput_openfl_display_BitmapData","__updateGL",0xe64a7a5b,"openfl.display.ShaderInput_openfl_display_BitmapData.__updateGL","openfl/display/ShaderInput.hx",56,0xcc724ba5)
namespace openfl{
namespace display{

void ShaderInput_openfl_display_BitmapData_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e18280422777664c_35_new)
HXLINE(  37)		this->channels = (int)0;
HXLINE(  38)		this->filter = (int)5;
HXLINE(  39)		this->height = (int)0;
HXLINE(  40)		this->index = (int)0;
HXLINE(  41)		this->mipFilter = (int)2;
HXLINE(  42)		this->width = (int)0;
HXLINE(  43)		this->wrap = (int)0;
            	}

Dynamic ShaderInput_openfl_display_BitmapData_obj::__CreateEmpty() { return new ShaderInput_openfl_display_BitmapData_obj; }

void *ShaderInput_openfl_display_BitmapData_obj::_hx_vtable = 0;

Dynamic ShaderInput_openfl_display_BitmapData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ShaderInput_openfl_display_BitmapData_obj > _hx_result = new ShaderInput_openfl_display_BitmapData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderInput_openfl_display_BitmapData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x15de7699;
}

void ShaderInput_openfl_display_BitmapData_obj::_hx___disableGL( ::openfl::display3D::Context3D context,int id){
            	HX_STACKFRAME(&_hx_pos_e18280422777664c_48___disableGL)
HXLINE(  50)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE(  51)		context->setTextureAt(id,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderInput_openfl_display_BitmapData_obj,_hx___disableGL,(void))

void ShaderInput_openfl_display_BitmapData_obj::_hx___updateGL( ::openfl::display3D::Context3D context,int id, ::openfl::display::BitmapData overrideInput, ::Dynamic overrideFilter, ::Dynamic overrideMipFilter, ::Dynamic overrideWrap){
            	HX_STACKFRAME(&_hx_pos_e18280422777664c_56___updateGL)
HXLINE(  58)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE(  59)		 ::openfl::display::BitmapData input;
HXDLIN(  59)		if (hx::IsNotNull( overrideInput )) {
HXLINE(  59)			input = overrideInput;
            		}
            		else {
HXLINE(  59)			input = this->input;
            		}
HXLINE(  60)		 ::Dynamic filter;
HXDLIN(  60)		if (hx::IsNotNull( overrideFilter )) {
HXLINE(  60)			filter = overrideFilter;
            		}
            		else {
HXLINE(  60)			filter = this->filter;
            		}
HXLINE(  61)		 ::Dynamic mipFilter;
HXDLIN(  61)		if (hx::IsNotNull( overrideMipFilter )) {
HXLINE(  61)			mipFilter = overrideMipFilter;
            		}
            		else {
HXLINE(  61)			mipFilter = this->mipFilter;
            		}
HXLINE(  62)		 ::Dynamic wrap;
HXDLIN(  62)		if (hx::IsNotNull( overrideWrap )) {
HXLINE(  62)			wrap = overrideWrap;
            		}
            		else {
HXLINE(  62)			wrap = this->wrap;
            		}
HXLINE(  64)		if (hx::IsNotNull( input )) {
HXLINE(  68)			 ::openfl::display::BitmapData bitmapData = input;
HXLINE(  69)			context->setTextureAt(id,bitmapData->getTexture(context));
HXLINE(  70)			context->setSamplerStateAt(id,wrap,filter,mipFilter);
            		}
            		else {
HXLINE(  74)			context->setTextureAt(id,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(ShaderInput_openfl_display_BitmapData_obj,_hx___updateGL,(void))


hx::ObjectPtr< ShaderInput_openfl_display_BitmapData_obj > ShaderInput_openfl_display_BitmapData_obj::__new() {
	hx::ObjectPtr< ShaderInput_openfl_display_BitmapData_obj > __this = new ShaderInput_openfl_display_BitmapData_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ShaderInput_openfl_display_BitmapData_obj > ShaderInput_openfl_display_BitmapData_obj::__alloc(hx::Ctx *_hx_ctx) {
	ShaderInput_openfl_display_BitmapData_obj *__this = (ShaderInput_openfl_display_BitmapData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ShaderInput_openfl_display_BitmapData_obj), true, "openfl.display.ShaderInput_openfl_display_BitmapData"));
	*(void **)__this = ShaderInput_openfl_display_BitmapData_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShaderInput_openfl_display_BitmapData_obj::ShaderInput_openfl_display_BitmapData_obj()
{
}

void ShaderInput_openfl_display_BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderInput_openfl_display_BitmapData);
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(mipFilter,"mipFilter");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_MEMBER_NAME(_hx___isUniform,"__isUniform");
	HX_MARK_END_CLASS();
}

void ShaderInput_openfl_display_BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(mipFilter,"mipFilter");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
	HX_VISIT_MEMBER_NAME(_hx___isUniform,"__isUniform");
}

hx::Val ShaderInput_openfl_display_BitmapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"wrap") ) { return hx::Val( wrap ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"input") ) { return hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return hx::Val( filter ); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return hx::Val( channels ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipFilter") ) { return hx::Val( mipFilter ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__updateGL") ) { return hx::Val( _hx___updateGL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__isUniform") ) { return hx::Val( _hx___isUniform ); }
		if (HX_FIELD_EQ(inName,"__disableGL") ) { return hx::Val( _hx___disableGL_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ShaderInput_openfl_display_BitmapData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap") ) { wrap=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipFilter") ) { mipFilter=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__isUniform") ) { _hx___isUniform=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderInput_openfl_display_BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("mipFilter","\x6c","\x0c","\xa8","\x31"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"));
	outFields->push(HX_HCSTRING("__isUniform","\x4a","\x07","\x8f","\xe7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ShaderInput_openfl_display_BitmapData_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,filter),HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")},
	{hx::fsInt,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,mipFilter),HX_HCSTRING("mipFilter","\x6c","\x0c","\xa8","\x31")},
	{hx::fsString,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,wrap),HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e")},
	{hx::fsBool,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,_hx___isUniform),HX_HCSTRING("__isUniform","\x4a","\x07","\x8f","\xe7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ShaderInput_openfl_display_BitmapData_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderInput_openfl_display_BitmapData_obj_sMemberFields[] = {
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("mipFilter","\x6c","\x0c","\xa8","\x31"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"),
	HX_HCSTRING("__isUniform","\x4a","\x07","\x8f","\xe7"),
	HX_HCSTRING("__disableGL","\xed","\x3a","\xe1","\x35"),
	HX_HCSTRING("__updateGL","\x8e","\x8b","\x32","\x1b"),
	::String(null()) };

static void ShaderInput_openfl_display_BitmapData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderInput_openfl_display_BitmapData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShaderInput_openfl_display_BitmapData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderInput_openfl_display_BitmapData_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderInput_openfl_display_BitmapData_obj::__mClass;

void ShaderInput_openfl_display_BitmapData_obj::__register()
{
	hx::Object *dummy = new ShaderInput_openfl_display_BitmapData_obj;
	ShaderInput_openfl_display_BitmapData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.ShaderInput_openfl_display_BitmapData","\x81","\x14","\xa6","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ShaderInput_openfl_display_BitmapData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ShaderInput_openfl_display_BitmapData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderInput_openfl_display_BitmapData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShaderInput_openfl_display_BitmapData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderInput_openfl_display_BitmapData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderInput_openfl_display_BitmapData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display