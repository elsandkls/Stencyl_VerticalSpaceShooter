// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Config
#include <com/stencyl/Config.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_BitmapWrapper
#include <com/stencyl/graphics/BitmapWrapper.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_EngineScaleUpdateListener
#include <com/stencyl/graphics/EngineScaleUpdateListener.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Scene
#include <com/stencyl/models/Scene.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Layer
#include <com/stencyl/models/scene/Layer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_TileLayer
#include <com/stencyl/models/scene/TileLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_layers_RegularLayer
#include <com/stencyl/models/scene/layers/RegularLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_90a09614a5dc1d2e_16_new,"com.stencyl.models.scene.Layer","new",0xa5cdb58c,"com.stencyl.models.scene.Layer.new","com/stencyl/models/scene/Layer.hx",16,0xb127d3e4)
HX_LOCAL_STACK_FRAME(_hx_pos_90a09614a5dc1d2e_53_updatePosition,"com.stencyl.models.scene.Layer","updatePosition",0xd541a626,"com.stencyl.models.scene.Layer.updatePosition","com/stencyl/models/scene/Layer.hx",53,0xb127d3e4)
HX_LOCAL_STACK_FRAME(_hx_pos_90a09614a5dc1d2e_77_clear,"com.stencyl.models.scene.Layer","clear",0xabf9f9b9,"com.stencyl.models.scene.Layer.clear","com/stencyl/models/scene/Layer.hx",77,0xb127d3e4)
namespace com{
namespace stencyl{
namespace models{
namespace scene{

void Layer_obj::__construct(int ID,::String name,int order,Float scrollFactorX,Float scrollFactorY,Float opacity, ::Dynamic blendMode, ::com::stencyl::models::scene::TileLayer tileLayer){
            	HX_GC_STACKFRAME(&_hx_pos_90a09614a5dc1d2e_16_new)
HXLINE(  29)		this->cameraOldY = (int)-1;
HXLINE(  28)		this->cameraOldX = (int)-1;
HXLINE(  27)		this->cameraMoved = true;
HXLINE(  33)		super::__construct(ID,name,order,scrollFactorX,scrollFactorY,opacity,blendMode);
HXLINE(  35)		this->tiles = tileLayer;
HXLINE(  36)		if (hx::IsNotNull( this->tiles )) {
HXLINE(  38)			this->tiles->set_blendMode(blendMode);
            		}
HXLINE(  41)		this->actorContainer =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  43)		this->overlay =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  45)		if (hx::IsNotNull( this->tiles )) {
HXLINE(  45)			this->addChild(this->tiles);
            		}
HXLINE(  46)		this->addChild(this->actorContainer);
HXLINE(  47)		this->addChild(this->overlay);
HXLINE(  49)		this->attachedImages = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic Layer_obj::__CreateEmpty() { return new Layer_obj; }

void *Layer_obj::_hx_vtable = 0;

Dynamic Layer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Layer_obj > _hx_result = new Layer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool Layer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19c29573) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x196afd3e || inClassId==(int)0x19c29573;
		}
	} else {
		if (inClassId<=(int)0x3f2b00af) {
			return inClassId==(int)0x1b123bf8 || inClassId==(int)0x3f2b00af;
		} else {
			return inClassId==(int)0x65f15fe6;
		}
	}
}

void Layer_obj::updatePosition(Float x,Float y,Float elapsedTime){
            	HX_STACKFRAME(&_hx_pos_90a09614a5dc1d2e_53_updatePosition)
HXLINE(  54)		int xScrolled = ::Std_obj::_hx_int((x * this->scrollFactorX));
HXLINE(  55)		int yScrolled = ::Std_obj::_hx_int((y * this->scrollFactorY));
HXLINE(  57)		if (::com::stencyl::Config_obj::pixelsnap) {
HXLINE(  57)			x = ::Math_obj::round(x);
            		}
            		else {
HXLINE(  57)			x = ::Std_obj::_hx_int(x);
            		}
HXLINE(  58)		if (::com::stencyl::Config_obj::pixelsnap) {
HXLINE(  58)			y = ::Math_obj::round(y);
            		}
            		else {
HXLINE(  58)			y = ::Std_obj::_hx_int(y);
            		}
HXLINE(  60)		this->overlay->set_x(x);
HXLINE(  61)		this->overlay->set_y(y);
HXLINE(  62)		this->tiles->setPosition(xScrolled,yScrolled);
HXLINE(  64)		this->set_x(-(::Std_obj::_hx_int((x * this->scrollFactorX))));
HXLINE(  65)		this->set_y(-(::Std_obj::_hx_int((y * this->scrollFactorY))));
HXLINE(  67)		int tempX = ::Std_obj::_hx_int(((Float)xScrolled / (Float)(::com::stencyl::Engine_obj::engine->scene->tileWidth * ::com::stencyl::Engine_obj::SCALE)));
HXLINE(  68)		int tempY = ::Std_obj::_hx_int(((Float)yScrolled / (Float)(::com::stencyl::Engine_obj::engine->scene->tileHeight * ::com::stencyl::Engine_obj::SCALE)));
HXLINE(  70)		bool _hx_tmp;
HXDLIN(  70)		bool _hx_tmp1;
HXDLIN(  70)		if (!(this->cameraMoved)) {
HXLINE(  70)			_hx_tmp1 = (this->cameraOldX != tempX);
            		}
            		else {
HXLINE(  70)			_hx_tmp1 = true;
            		}
HXDLIN(  70)		if (!(_hx_tmp1)) {
HXLINE(  70)			_hx_tmp = (this->cameraOldY != tempY);
            		}
            		else {
HXLINE(  70)			_hx_tmp = true;
            		}
HXDLIN(  70)		this->cameraMoved = _hx_tmp;
HXLINE(  72)		this->cameraOldX = tempX;
HXLINE(  73)		this->cameraOldY = tempY;
            	}


void Layer_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_90a09614a5dc1d2e_77_clear)
HXLINE(  78)		{
HXLINE(  78)			int _g = (int)0;
HXDLIN(  78)			::Array< ::Dynamic> _g1 = this->attachedImages;
HXDLIN(  78)			while((_g < _g1->length)){
HXLINE(  78)				 ::com::stencyl::graphics::BitmapWrapper b = _g1->__get(_g).StaticCast<  ::com::stencyl::graphics::BitmapWrapper >();
HXDLIN(  78)				_g = (_g + (int)1);
HXLINE(  80)				this->removeChild(b);
            			}
            		}
HXLINE(  82)		this->attachedImages = ::Array_obj< ::Dynamic>::__new();
HXLINE(  87)		::com::stencyl::utils::Utils_obj::removeAllChildren(this->actorContainer);
HXLINE(  90)		this->overlay->get_graphics()->clear();
HXLINE(  92)		if (hx::IsNotNull( this->tiles )) {
HXLINE(  94)			this->tiles->clear();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layer_obj,clear,(void))


hx::ObjectPtr< Layer_obj > Layer_obj::__new(int ID,::String name,int order,Float scrollFactorX,Float scrollFactorY,Float opacity, ::Dynamic blendMode, ::com::stencyl::models::scene::TileLayer tileLayer) {
	hx::ObjectPtr< Layer_obj > __this = new Layer_obj();
	__this->__construct(ID,name,order,scrollFactorX,scrollFactorY,opacity,blendMode,tileLayer);
	return __this;
}

hx::ObjectPtr< Layer_obj > Layer_obj::__alloc(hx::Ctx *_hx_ctx,int ID,::String name,int order,Float scrollFactorX,Float scrollFactorY,Float opacity, ::Dynamic blendMode, ::com::stencyl::models::scene::TileLayer tileLayer) {
	Layer_obj *__this = (Layer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Layer_obj), true, "com.stencyl.models.scene.Layer"));
	*(void **)__this = Layer_obj::_hx_vtable;
	__this->__construct(ID,name,order,scrollFactorX,scrollFactorY,opacity,blendMode,tileLayer);
	return __this;
}

Layer_obj::Layer_obj()
{
}

void Layer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Layer);
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_MEMBER_NAME(actorContainer,"actorContainer");
	HX_MARK_MEMBER_NAME(overlay,"overlay");
	HX_MARK_MEMBER_NAME(attachedImages,"attachedImages");
	HX_MARK_MEMBER_NAME(cameraMoved,"cameraMoved");
	HX_MARK_MEMBER_NAME(cameraOldX,"cameraOldX");
	HX_MARK_MEMBER_NAME(cameraOldY,"cameraOldY");
	 ::com::stencyl::models::scene::layers::RegularLayer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Layer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	HX_VISIT_MEMBER_NAME(actorContainer,"actorContainer");
	HX_VISIT_MEMBER_NAME(overlay,"overlay");
	HX_VISIT_MEMBER_NAME(attachedImages,"attachedImages");
	HX_VISIT_MEMBER_NAME(cameraMoved,"cameraMoved");
	HX_VISIT_MEMBER_NAME(cameraOldX,"cameraOldX");
	HX_VISIT_MEMBER_NAME(cameraOldY,"cameraOldY");
	 ::com::stencyl::models::scene::layers::RegularLayer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Layer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tiles") ) { return hx::Val( tiles ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlay") ) { return hx::Val( overlay ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cameraOldX") ) { return hx::Val( cameraOldX ); }
		if (HX_FIELD_EQ(inName,"cameraOldY") ) { return hx::Val( cameraOldY ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraMoved") ) { return hx::Val( cameraMoved ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"actorContainer") ) { return hx::Val( actorContainer ); }
		if (HX_FIELD_EQ(inName,"attachedImages") ) { return hx::Val( attachedImages ); }
		if (HX_FIELD_EQ(inName,"updatePosition") ) { return hx::Val( updatePosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Layer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast<  ::com::stencyl::models::scene::TileLayer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlay") ) { overlay=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cameraOldX") ) { cameraOldX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraOldY") ) { cameraOldY=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cameraMoved") ) { cameraMoved=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"actorContainer") ) { actorContainer=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attachedImages") ) { attachedImages=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Layer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"));
	outFields->push(HX_HCSTRING("actorContainer","\x8c","\x03","\xbb","\x6a"));
	outFields->push(HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"));
	outFields->push(HX_HCSTRING("attachedImages","\x3c","\xf7","\x38","\x0f"));
	outFields->push(HX_HCSTRING("cameraMoved","\x4e","\xbf","\xab","\x00"));
	outFields->push(HX_HCSTRING("cameraOldX","\x16","\x23","\xcf","\xaf"));
	outFields->push(HX_HCSTRING("cameraOldY","\x17","\x23","\xcf","\xaf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Layer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::com::stencyl::models::scene::TileLayer*/ ,(int)offsetof(Layer_obj,tiles),HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Layer_obj,actorContainer),HX_HCSTRING("actorContainer","\x8c","\x03","\xbb","\x6a")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Layer_obj,overlay),HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Layer_obj,attachedImages),HX_HCSTRING("attachedImages","\x3c","\xf7","\x38","\x0f")},
	{hx::fsBool,(int)offsetof(Layer_obj,cameraMoved),HX_HCSTRING("cameraMoved","\x4e","\xbf","\xab","\x00")},
	{hx::fsInt,(int)offsetof(Layer_obj,cameraOldX),HX_HCSTRING("cameraOldX","\x16","\x23","\xcf","\xaf")},
	{hx::fsInt,(int)offsetof(Layer_obj,cameraOldY),HX_HCSTRING("cameraOldY","\x17","\x23","\xcf","\xaf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Layer_obj_sStaticStorageInfo = 0;
#endif

static ::String Layer_obj_sMemberFields[] = {
	HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"),
	HX_HCSTRING("actorContainer","\x8c","\x03","\xbb","\x6a"),
	HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"),
	HX_HCSTRING("attachedImages","\x3c","\xf7","\x38","\x0f"),
	HX_HCSTRING("cameraMoved","\x4e","\xbf","\xab","\x00"),
	HX_HCSTRING("cameraOldX","\x16","\x23","\xcf","\xaf"),
	HX_HCSTRING("cameraOldY","\x17","\x23","\xcf","\xaf"),
	HX_HCSTRING("updatePosition","\xd2","\x93","\x24","\x00"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void Layer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Layer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layer_obj::__mClass,"__mClass");
};

#endif

hx::Class Layer_obj::__mClass;

void Layer_obj::__register()
{
	hx::Object *dummy = new Layer_obj;
	Layer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.models.scene.Layer","\x9a","\x3f","\x51","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Layer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Layer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Layer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Layer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Layer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Layer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene