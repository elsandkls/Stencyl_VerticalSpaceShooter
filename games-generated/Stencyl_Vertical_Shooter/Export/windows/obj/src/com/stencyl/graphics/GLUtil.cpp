// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_GLUtil
#include <com/stencyl/graphics/GLUtil.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_42451f4cf9bae7dc_26_initialize,"com.stencyl.graphics.GLUtil","initialize",0x29c99083,"com.stencyl.graphics.GLUtil.initialize","com/stencyl/graphics/GLUtil.hx",26,0x2c4718a4)
HX_LOCAL_STACK_FRAME(_hx_pos_42451f4cf9bae7dc_47_uploadTexture,"com.stencyl.graphics.GLUtil","uploadTexture",0xe0e4bb87,"com.stencyl.graphics.GLUtil.uploadTexture","com/stencyl/graphics/GLUtil.hx",47,0x2c4718a4)
HX_LOCAL_STACK_FRAME(_hx_pos_42451f4cf9bae7dc_57_disposeSoftwareBuffer,"com.stencyl.graphics.GLUtil","disposeSoftwareBuffer",0xee5ca933,"com.stencyl.graphics.GLUtil.disposeSoftwareBuffer","com/stencyl/graphics/GLUtil.hx",57,0x2c4718a4)
HX_LOCAL_STACK_FRAME(_hx_pos_42451f4cf9bae7dc_67_createNewTexture,"com.stencyl.graphics.GLUtil","createNewTexture",0x4c76b1ea,"com.stencyl.graphics.GLUtil.createNewTexture","com/stencyl/graphics/GLUtil.hx",67,0x2c4718a4)
HX_LOCAL_STACK_FRAME(_hx_pos_42451f4cf9bae7dc_85_clearTexture,"com.stencyl.graphics.GLUtil","clearTexture",0xdf2a4cc1,"com.stencyl.graphics.GLUtil.clearTexture","com/stencyl/graphics/GLUtil.hx",85,0x2c4718a4)
HX_LOCAL_STACK_FRAME(_hx_pos_42451f4cf9bae7dc_22_boot,"com.stencyl.graphics.GLUtil","boot",0xd729ab25,"com.stencyl.graphics.GLUtil.boot","com/stencyl/graphics/GLUtil.hx",22,0x2c4718a4)
HX_LOCAL_STACK_FRAME(_hx_pos_42451f4cf9bae7dc_23_boot,"com.stencyl.graphics.GLUtil","boot",0xd729ab25,"com.stencyl.graphics.GLUtil.boot","com/stencyl/graphics/GLUtil.hx",23,0x2c4718a4)
namespace com{
namespace stencyl{
namespace graphics{

void GLUtil_obj::__construct() { }

Dynamic GLUtil_obj::__CreateEmpty() { return new GLUtil_obj; }

void *GLUtil_obj::_hx_vtable = 0;

Dynamic GLUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLUtil_obj > _hx_result = new GLUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b5ac901;
}

 ::lime::_internal::backend::native::NativeOpenGLRenderContext GLUtil_obj::gl;

 ::openfl::display::OpenGLRenderer GLUtil_obj::renderer;

 ::lime::graphics::RenderContext GLUtil_obj::context;

 ::openfl::display3D::Context3D GLUtil_obj::context3D;

 ::Dynamic GLUtil_obj::textureMaxSize;

int GLUtil_obj::MAX_TEXTURE_CAP;

void GLUtil_obj::initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_42451f4cf9bae7dc_26_initialize)
HXLINE(  27)		if (hx::IsNotNull( ::com::stencyl::graphics::GLUtil_obj::gl )) {
HXLINE(  27)			return;
            		}
HXLINE(  28)		::com::stencyl::graphics::GLUtil_obj::context = ::com::stencyl::Engine_obj::stage->window->context;
HXLINE(  29)		::com::stencyl::graphics::GLUtil_obj::context3D = ::com::stencyl::Engine_obj::stage->context3D;
HXLINE(  30)		::com::stencyl::graphics::GLUtil_obj::gl = ::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::fromRenderContext(::com::stencyl::graphics::GLUtil_obj::context);
HXLINE(  31)		::com::stencyl::graphics::GLUtil_obj::renderer = ( ( ::openfl::display::OpenGLRenderer)(::com::stencyl::Engine_obj::stage->_hx___renderer) );
HXLINE(  33)		::com::stencyl::graphics::GLUtil_obj::textureMaxSize = ::com::stencyl::graphics::GLUtil_obj::gl->getParameter(::com::stencyl::graphics::GLUtil_obj::gl->MAX_TEXTURE_SIZE);
HXLINE(  34)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  34)		_hx_tmp((HX_("GL value of MAX_TEXTURE_SIZE: ",85,5f,ba,a3) + ::com::stencyl::graphics::GLUtil_obj::textureMaxSize),hx::SourceInfo(HX_("GLUtil.hx",57,80,8d,68),34,HX_("com.stencyl.graphics.GLUtil",5b,9e,bd,1e),HX_("initialize",50,31,bb,ec)));
HXLINE(  36)		::com::stencyl::graphics::GLUtil_obj::textureMaxSize = ::Std_obj::_hx_int(((Float)::com::stencyl::graphics::GLUtil_obj::textureMaxSize / (Float)(int)2));
HXLINE(  37)		if (hx::IsGreater( ::com::stencyl::graphics::GLUtil_obj::textureMaxSize,::com::stencyl::graphics::GLUtil_obj::MAX_TEXTURE_CAP )) {
HXLINE(  38)			::com::stencyl::graphics::GLUtil_obj::textureMaxSize = ::com::stencyl::graphics::GLUtil_obj::MAX_TEXTURE_CAP;
            		}
HXLINE(  40)		if (hx::IsNull( ::openfl::display::BitmapData_obj::_hx___supportsBGRA )) {
HXLINE(  42)			 ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,(int)1,(int)1,true,(int)0)->getTexture(::com::stencyl::graphics::GLUtil_obj::context3D);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GLUtil_obj,initialize,(void))

void GLUtil_obj::uploadTexture( ::openfl::display::BitmapData img,bool dispose){
            	HX_STACKFRAME(&_hx_pos_42451f4cf9bae7dc_47_uploadTexture)
HXLINE(  48)		img->getTexture(::com::stencyl::graphics::GLUtil_obj::context3D);
HXLINE(  50)		if (dispose) {
HXLINE(  52)			::com::stencyl::graphics::GLUtil_obj::disposeSoftwareBuffer(img);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtil_obj,uploadTexture,(void))

void GLUtil_obj::disposeSoftwareBuffer( ::openfl::display::BitmapData img){
            	HX_STACKFRAME(&_hx_pos_42451f4cf9bae7dc_57_disposeSoftwareBuffer)
HXLINE(  58)		img->image = null();
HXLINE(  59)		img->readable = false;
HXLINE(  60)		img->_hx___surface = null();
HXLINE(  61)		img->_hx___vertexBuffer = null();
HXLINE(  62)		img->_hx___framebuffer = null();
HXLINE(  63)		img->_hx___framebufferContext = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLUtil_obj,disposeSoftwareBuffer,(void))

 ::openfl::display::BitmapData GLUtil_obj::createNewTexture(int size){
            	HX_GC_STACKFRAME(&_hx_pos_42451f4cf9bae7dc_67_createNewTexture)
HXLINE(  68)		 ::openfl::display3D::textures::RectangleTexture texture = ::com::stencyl::graphics::GLUtil_obj::context3D->createRectangleTexture(size,size,(int)1,false);
HXLINE(  70)		texture->uploadFromTypedArray(null());
HXLINE(  72)		 ::openfl::display::BitmapData bitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,(int)0,(int)0,true,(int)0);
HXLINE(  73)		bitmapData->_hx___resize(size,size);
HXLINE(  74)		bitmapData->readable = false;
HXLINE(  75)		bitmapData->_hx___texture = texture;
HXLINE(  76)		bitmapData->_hx___textureContext = ::com::stencyl::graphics::GLUtil_obj::context;
HXLINE(  77)		bitmapData->_hx___isValid = true;
HXLINE(  78)		bitmapData->image = null();
HXLINE(  80)		return bitmapData;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLUtil_obj,createNewTexture,return )

void GLUtil_obj::clearTexture( ::openfl::display::BitmapData img){
            	HX_STACKFRAME(&_hx_pos_42451f4cf9bae7dc_85_clearTexture)
HXDLIN(  85)		img->_hx___texture->uploadFromTypedArray(null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLUtil_obj,clearTexture,(void))


GLUtil_obj::GLUtil_obj()
{
}

bool GLUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { outValue = ( gl ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { outValue = ( context ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { outValue = ( renderer ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { outValue = ( context3D ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearTexture") ) { outValue = clearTexture_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"uploadTexture") ) { outValue = uploadTexture_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"textureMaxSize") ) { outValue = ( textureMaxSize ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_CAP") ) { outValue = ( MAX_TEXTURE_CAP ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createNewTexture") ) { outValue = createNewTexture_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"disposeSoftwareBuffer") ) { outValue = disposeSoftwareBuffer_dyn(); return true; }
	}
	return false;
}

bool GLUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=ioValue.Cast<  ::lime::_internal::backend::native::NativeOpenGLRenderContext >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=ioValue.Cast<  ::lime::graphics::RenderContext >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=ioValue.Cast<  ::openfl::display::OpenGLRenderer >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { context3D=ioValue.Cast<  ::openfl::display3D::Context3D >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"textureMaxSize") ) { textureMaxSize=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_CAP") ) { MAX_TEXTURE_CAP=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GLUtil_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::_internal::backend::native::NativeOpenGLRenderContext*/ ,(void *) &GLUtil_obj::gl,HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::display::OpenGLRenderer*/ ,(void *) &GLUtil_obj::renderer,HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*::lime::graphics::RenderContext*/ ,(void *) &GLUtil_obj::context,HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(void *) &GLUtil_obj::context3D,HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GLUtil_obj::textureMaxSize,HX_HCSTRING("textureMaxSize","\xea","\xf9","\x44","\xee")},
	{hx::fsInt,(void *) &GLUtil_obj::MAX_TEXTURE_CAP,HX_HCSTRING("MAX_TEXTURE_CAP","\xb3","\x75","\x05","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GLUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLUtil_obj::gl,"gl");
	HX_MARK_MEMBER_NAME(GLUtil_obj::renderer,"renderer");
	HX_MARK_MEMBER_NAME(GLUtil_obj::context,"context");
	HX_MARK_MEMBER_NAME(GLUtil_obj::context3D,"context3D");
	HX_MARK_MEMBER_NAME(GLUtil_obj::textureMaxSize,"textureMaxSize");
	HX_MARK_MEMBER_NAME(GLUtil_obj::MAX_TEXTURE_CAP,"MAX_TEXTURE_CAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLUtil_obj::gl,"gl");
	HX_VISIT_MEMBER_NAME(GLUtil_obj::renderer,"renderer");
	HX_VISIT_MEMBER_NAME(GLUtil_obj::context,"context");
	HX_VISIT_MEMBER_NAME(GLUtil_obj::context3D,"context3D");
	HX_VISIT_MEMBER_NAME(GLUtil_obj::textureMaxSize,"textureMaxSize");
	HX_VISIT_MEMBER_NAME(GLUtil_obj::MAX_TEXTURE_CAP,"MAX_TEXTURE_CAP");
};

#endif

hx::Class GLUtil_obj::__mClass;

static ::String GLUtil_obj_sStaticFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16"),
	HX_HCSTRING("textureMaxSize","\xea","\xf9","\x44","\xee"),
	HX_HCSTRING("MAX_TEXTURE_CAP","\xb3","\x75","\x05","\x94"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("uploadTexture","\xda","\xd8","\x37","\x14"),
	HX_HCSTRING("disposeSoftwareBuffer","\x86","\xd1","\xd9","\xe9"),
	HX_HCSTRING("createNewTexture","\x77","\x6a","\x10","\x11"),
	HX_HCSTRING("clearTexture","\xce","\x7a","\x5f","\x7a"),
	::String(null())
};

void GLUtil_obj::__register()
{
	hx::Object *dummy = new GLUtil_obj;
	GLUtil_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.graphics.GLUtil","\x5b","\x9e","\xbd","\x1e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &GLUtil_obj::__SetStatic;
	__mClass->mMarkFunc = GLUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GLUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_42451f4cf9bae7dc_22_boot)
HXDLIN(  22)		textureMaxSize = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_42451f4cf9bae7dc_23_boot)
HXDLIN(  23)		MAX_TEXTURE_CAP = (int)4096;
            	}
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics