// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Background
#include <com/stencyl/models/Background.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ImageBackground
#include <com/stencyl/models/background/ImageBackground.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_layers_BackgroundLayer
#include <com/stencyl/models/scene/layers/BackgroundLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_layers_RegularLayer
#include <com/stencyl/models/scene/layers/RegularLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Assets
#include <com/stencyl/utils/Assets.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7dc35281368897fd_41_new,"com.stencyl.models.background.ImageBackground","new",0x1fc1b450,"com.stencyl.models.background.ImageBackground.new","com/stencyl/models/background/ImageBackground.hx",41,0x05f0f4c2)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc35281368897fd_61_update,"com.stencyl.models.background.ImageBackground","update",0xb3cab819,"com.stencyl.models.background.ImageBackground.update","com/stencyl/models/background/ImageBackground.hx",61,0x05f0f4c2)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc35281368897fd_65_draw,"com.stencyl.models.background.ImageBackground","draw",0xa329ba14,"com.stencyl.models.background.ImageBackground.draw","com/stencyl/models/background/ImageBackground.hx",65,0x05f0f4c2)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc35281368897fd_70_drawRepeated,"com.stencyl.models.background.ImageBackground","drawRepeated",0x3f5766ae,"com.stencyl.models.background.ImageBackground.drawRepeated","com/stencyl/models/background/ImageBackground.hx",70,0x05f0f4c2)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc35281368897fd_111_loadGraphics,"com.stencyl.models.background.ImageBackground","loadGraphics",0x24df0321,"com.stencyl.models.background.ImageBackground.loadGraphics","com/stencyl/models/background/ImageBackground.hx",111,0x05f0f4c2)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc35281368897fd_170_unloadGraphics,"com.stencyl.models.background.ImageBackground","unloadGraphics",0x0d1baefa,"com.stencyl.models.background.ImageBackground.unloadGraphics","com/stencyl/models/background/ImageBackground.hx",170,0x05f0f4c2)
HX_LOCAL_STACK_FRAME(_hx_pos_7dc35281368897fd_193_reloadGraphics,"com.stencyl.models.background.ImageBackground","reloadGraphics",0x514f4b54,"com.stencyl.models.background.ImageBackground.reloadGraphics","com/stencyl/models/background/ImageBackground.hx",193,0x05f0f4c2)
namespace com{
namespace stencyl{
namespace models{
namespace background{

void ImageBackground_obj::__construct(int ID,int atlasID,::String name,::Array< int > durations,Float parallaxX,Float parallaxY,bool repeats){
            	HX_STACKFRAME(&_hx_pos_7dc35281368897fd_41_new)
HXLINE(  42)		super::__construct(ID,name,atlasID);
HXLINE(  44)		this->parallaxX = parallaxX;
HXLINE(  45)		this->parallaxY = parallaxY;
HXLINE(  46)		this->durations = durations;
HXLINE(  47)		this->repeats = repeats;
HXLINE(  49)		this->currTime = (int)0;
HXLINE(  50)		this->currFrame = (int)0;
HXLINE(  52)		if (this->isAtlasActive()) {
HXLINE(  54)			this->loadGraphics();
            		}
HXLINE(  57)		this->repeated = false;
            	}

Dynamic ImageBackground_obj::__CreateEmpty() { return new ImageBackground_obj; }

void *ImageBackground_obj::_hx_vtable = 0;

Dynamic ImageBackground_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ImageBackground_obj > _hx_result = new ImageBackground_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool ImageBackground_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x170dc54f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x170dc54f;
	} else {
		return inClassId==(int)0x412d1b86;
	}
}

static ::com::stencyl::models::Background_obj _hx_com_stencyl_models_background_ImageBackground__hx_com_stencyl_models_Background= {
	( void (hx::Object::*)())&::com::stencyl::models::background::ImageBackground_obj::update,
	( void (hx::Object::*)( ::openfl::display::Graphics,int,int,int,int))&::com::stencyl::models::background::ImageBackground_obj::draw,
};

void *ImageBackground_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd3f2ad83: return &_hx_com_stencyl_models_background_ImageBackground__hx_com_stencyl_models_Background;
	}
	return super::_hx_getInterface(inHash);
}

void ImageBackground_obj::update(){
            	HX_STACKFRAME(&_hx_pos_7dc35281368897fd_61_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageBackground_obj,update,(void))

void ImageBackground_obj::draw( ::openfl::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight){
            	HX_STACKFRAME(&_hx_pos_7dc35281368897fd_65_draw)
            	}


HX_DEFINE_DYNAMIC_FUNC5(ImageBackground_obj,draw,(void))

void ImageBackground_obj::drawRepeated( ::com::stencyl::models::scene::layers::BackgroundLayer bitmap,int screenWidth,int screenHeight){
            	HX_GC_STACKFRAME(&_hx_pos_7dc35281368897fd_70_drawRepeated)
HXLINE(  71)		Float tw = this->img->width;
HXLINE(  72)		Float th = this->img->height;
HXLINE(  73)		 ::openfl::geom::Rectangle rect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,(int)0,(int)0,tw,th);
HXLINE(  75)		bool _hx_tmp;
HXDLIN(  75)		if ((tw >= screenWidth)) {
HXLINE(  75)			_hx_tmp = (th >= screenHeight);
            		}
            		else {
HXLINE(  75)			_hx_tmp = false;
            		}
HXDLIN(  75)		if (_hx_tmp) {
HXLINE(  77)			this->repeated = true;
HXLINE(  78)			return;
            		}
HXLINE(  82)		if ((tw < screenWidth)) {
HXLINE(  84)			int screenWidth1 = ::Std_obj::_hx_int(tw);
HXDLIN(  84)			screenWidth = (screenWidth + (screenWidth1 - hx::Mod(screenWidth,::Std_obj::_hx_int(tw))));
            		}
HXLINE(  87)		if ((th < screenHeight)) {
HXLINE(  89)			int screenHeight1 = ::Std_obj::_hx_int(th);
HXDLIN(  89)			screenHeight = (screenHeight + (screenHeight1 - hx::Mod(screenHeight,::Std_obj::_hx_int(th))));
            		}
HXLINE(  92)		int texture = ::Std_obj::_hx_int(::Math_obj::max(screenWidth,tw));
HXDLIN(  92)		 ::openfl::display::BitmapData texture1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,texture,::Std_obj::_hx_int(::Math_obj::max(screenHeight,th)),null(),null());
HXLINE(  94)		{
HXLINE(  94)			int _g1 = (int)0;
HXDLIN(  94)			int _g = (::Std_obj::_hx_int(((Float)screenHeight / (Float)th)) + (int)1);
HXDLIN(  94)			while((_g1 < _g)){
HXLINE(  94)				_g1 = (_g1 + (int)1);
HXDLIN(  94)				int yPos = (_g1 - (int)1);
HXLINE(  96)				{
HXLINE(  96)					int _g3 = (int)0;
HXDLIN(  96)					int _g2 = (::Std_obj::_hx_int(((Float)screenWidth / (Float)tw)) + (int)1);
HXDLIN(  96)					while((_g3 < _g2)){
HXLINE(  96)						_g3 = (_g3 + (int)1);
HXDLIN(  96)						int xPos = (_g3 - (int)1);
HXLINE(  98)						 ::openfl::display::BitmapData _hx_tmp1 = this->img;
HXDLIN(  98)						texture1->copyPixels(_hx_tmp1,rect, ::openfl::geom::Point_obj::__alloc( HX_CTX ,(xPos * tw),(yPos * th)),null(),null(),null());
            					}
            				}
            			}
            		}
HXLINE( 103)		this->img = texture1;
HXLINE( 105)		this->repeated = true;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ImageBackground_obj,drawRepeated,(void))

void ImageBackground_obj::loadGraphics(){
            	HX_STACKFRAME(&_hx_pos_7dc35281368897fd_111_loadGraphics)
HXLINE( 112)		if (this->graphicsLoaded) {
HXLINE( 113)			return;
            		}
HXLINE( 115)		::cpp::VirtualArray frameData = ::cpp::VirtualArray_obj::__new();
HXLINE( 116)		int numFrames = this->durations->length;
HXLINE( 118)		if ((numFrames > (int)0)) {
HXLINE( 120)			int _g1 = (int)0;
HXDLIN( 120)			int _g = numFrames;
HXDLIN( 120)			while((_g1 < _g)){
HXLINE( 120)				_g1 = (_g1 + (int)1);
HXDLIN( 120)				int i = (_g1 - (int)1);
HXLINE( 122)				frameData->push(::com::stencyl::utils::Assets_obj::getBitmapData(((((((HX_("assets/graphics/",38,e5,fb,63) + ::com::stencyl::Engine_obj::IMG_BASE) + HX_("/background-",b0,fc,e8,45)) + this->ID) + HX_("-",2d,00,00,00)) + i) + HX_(".png",3b,2d,bd,1e)),false));
            			}
            		}
            		else {
HXLINE( 135)			frameData->push(::com::stencyl::utils::Assets_obj::getBitmapData(((((HX_("assets/graphics/",38,e5,fb,63) + ::com::stencyl::Engine_obj::IMG_BASE) + HX_("/background-",b0,fc,e8,45)) + this->ID) + HX_("-0.png",1e,42,08,c0)),false));
            		}
HXLINE( 147)		this->frames = ::cpp::VirtualArray_obj::__new();
HXLINE( 149)		{
HXLINE( 149)			int _g11 = (int)0;
HXDLIN( 149)			int _g2 = frameData->get_length();
HXDLIN( 149)			while((_g11 < _g2)){
HXLINE( 149)				_g11 = (_g11 + (int)1);
HXDLIN( 149)				int i1 = (_g11 - (int)1);
HXLINE( 151)				if (this->repeats) {
HXLINE( 153)					this->img = ( ( ::openfl::display::BitmapData)(frameData->__get(i1)) );
HXLINE( 154)					int _hx_tmp = ::Std_obj::_hx_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE));
HXDLIN( 154)					this->drawRepeated(null(),_hx_tmp,::Std_obj::_hx_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)));
HXLINE( 155)					this->frames->push(this->img);
            				}
            				else {
HXLINE( 159)					::cpp::VirtualArray _hx_tmp1 = this->frames;
HXDLIN( 159)					_hx_tmp1->push(frameData->__get(i1));
            				}
            			}
            		}
HXLINE( 164)		this->img = ( ( ::openfl::display::BitmapData)(this->frames->__get((int)0)) );
HXLINE( 166)		this->graphicsLoaded = true;
            	}


void ImageBackground_obj::unloadGraphics(){
            	HX_GC_STACKFRAME(&_hx_pos_7dc35281368897fd_170_unloadGraphics)
HXLINE( 171)		if (!(this->graphicsLoaded)) {
HXLINE( 172)			return;
            		}
HXLINE( 175)		this->img =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,(int)1,(int)1,null(),null());
HXLINE( 176)		this->currFrame = (int)0;
HXLINE( 177)		this->repeated = false;
HXLINE( 178)		this->frames = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 180)		{
HXLINE( 180)			int _g = (int)0;
HXDLIN( 180)			::Array< int > _g1 = this->durations;
HXDLIN( 180)			while((_g < _g1->length)){
HXLINE( 180)				int d = _g1->__get(_g);
HXDLIN( 180)				_g = (_g + (int)1);
HXLINE( 182)				this->frames->push(this->img);
            			}
            		}
HXLINE( 187)		int numFrames = this->durations->length;
HXLINE( 189)		this->graphicsLoaded = false;
            	}


void ImageBackground_obj::reloadGraphics(int subID){
            	HX_STACKFRAME(&_hx_pos_7dc35281368897fd_193_reloadGraphics)
HXLINE( 194)		this->super::reloadGraphics(subID);
HXLINE( 195)		{
HXLINE( 195)			int _g = (int)0;
HXDLIN( 195)			::Array< ::Dynamic> _g1 = ::com::stencyl::Engine_obj::engine->backgroundLayers;
HXDLIN( 195)			while((_g < _g1->length)){
HXLINE( 195)				 ::com::stencyl::models::scene::layers::BackgroundLayer layer = _g1->__get(_g).StaticCast<  ::com::stencyl::models::scene::layers::BackgroundLayer >();
HXDLIN( 195)				_g = (_g + (int)1);
HXLINE( 197)				if (hx::IsEq( layer->model,hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 199)					layer->reload(layer->resourceID);
            				}
            			}
            		}
            	}



hx::ObjectPtr< ImageBackground_obj > ImageBackground_obj::__new(int ID,int atlasID,::String name,::Array< int > durations,Float parallaxX,Float parallaxY,bool repeats) {
	hx::ObjectPtr< ImageBackground_obj > __this = new ImageBackground_obj();
	__this->__construct(ID,atlasID,name,durations,parallaxX,parallaxY,repeats);
	return __this;
}

hx::ObjectPtr< ImageBackground_obj > ImageBackground_obj::__alloc(hx::Ctx *_hx_ctx,int ID,int atlasID,::String name,::Array< int > durations,Float parallaxX,Float parallaxY,bool repeats) {
	ImageBackground_obj *__this = (ImageBackground_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ImageBackground_obj), true, "com.stencyl.models.background.ImageBackground"));
	*(void **)__this = ImageBackground_obj::_hx_vtable;
	__this->__construct(ID,atlasID,name,durations,parallaxX,parallaxY,repeats);
	return __this;
}

ImageBackground_obj::ImageBackground_obj()
{
}

void ImageBackground_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageBackground);
	HX_MARK_MEMBER_NAME(currFrame,"currFrame");
	HX_MARK_MEMBER_NAME(currTime,"currTime");
	HX_MARK_MEMBER_NAME(img,"img");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(durations,"durations");
	HX_MARK_MEMBER_NAME(parallaxX,"parallaxX");
	HX_MARK_MEMBER_NAME(parallaxY,"parallaxY");
	HX_MARK_MEMBER_NAME(repeats,"repeats");
	HX_MARK_MEMBER_NAME(repeated,"repeated");
	HX_MARK_MEMBER_NAME(graphicsLoaded,"graphicsLoaded");
	 ::com::stencyl::models::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImageBackground_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currFrame,"currFrame");
	HX_VISIT_MEMBER_NAME(currTime,"currTime");
	HX_VISIT_MEMBER_NAME(img,"img");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(durations,"durations");
	HX_VISIT_MEMBER_NAME(parallaxX,"parallaxX");
	HX_VISIT_MEMBER_NAME(parallaxY,"parallaxY");
	HX_VISIT_MEMBER_NAME(repeats,"repeats");
	HX_VISIT_MEMBER_NAME(repeated,"repeated");
	HX_VISIT_MEMBER_NAME(graphicsLoaded,"graphicsLoaded");
	 ::com::stencyl::models::Resource_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ImageBackground_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { return hx::Val( img ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"repeats") ) { return hx::Val( repeats ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currTime") ) { return hx::Val( currTime ); }
		if (HX_FIELD_EQ(inName,"repeated") ) { return hx::Val( repeated ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currFrame") ) { return hx::Val( currFrame ); }
		if (HX_FIELD_EQ(inName,"durations") ) { return hx::Val( durations ); }
		if (HX_FIELD_EQ(inName,"parallaxX") ) { return hx::Val( parallaxX ); }
		if (HX_FIELD_EQ(inName,"parallaxY") ) { return hx::Val( parallaxY ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawRepeated") ) { return hx::Val( drawRepeated_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return hx::Val( loadGraphics_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graphicsLoaded") ) { return hx::Val( graphicsLoaded ); }
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return hx::Val( unloadGraphics_dyn() ); }
		if (HX_FIELD_EQ(inName,"reloadGraphics") ) { return hx::Val( reloadGraphics_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ImageBackground_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { img=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"repeats") ) { repeats=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currTime") ) { currTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"repeated") ) { repeated=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currFrame") ) { currFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"durations") ) { durations=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parallaxX") ) { parallaxX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parallaxY") ) { parallaxY=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graphicsLoaded") ) { graphicsLoaded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageBackground_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currFrame","\xdb","\xaf","\x58","\x6a"));
	outFields->push(HX_HCSTRING("currTime","\x1f","\xa4","\x04","\x90"));
	outFields->push(HX_HCSTRING("img","\x03","\x0c","\x50","\x00"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("durations","\x9f","\x5a","\xbf","\xe7"));
	outFields->push(HX_HCSTRING("parallaxX","\x21","\xc5","\xdb","\xb9"));
	outFields->push(HX_HCSTRING("parallaxY","\x22","\xc5","\xdb","\xb9"));
	outFields->push(HX_HCSTRING("repeats","\xb8","\xd8","\x87","\xa6"));
	outFields->push(HX_HCSTRING("repeated","\x7a","\xbc","\x55","\x10"));
	outFields->push(HX_HCSTRING("graphicsLoaded","\x30","\xdf","\x3a","\xab"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ImageBackground_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ImageBackground_obj,currFrame),HX_HCSTRING("currFrame","\xdb","\xaf","\x58","\x6a")},
	{hx::fsFloat,(int)offsetof(ImageBackground_obj,currTime),HX_HCSTRING("currTime","\x1f","\xa4","\x04","\x90")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(ImageBackground_obj,img),HX_HCSTRING("img","\x03","\x0c","\x50","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ImageBackground_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ImageBackground_obj,durations),HX_HCSTRING("durations","\x9f","\x5a","\xbf","\xe7")},
	{hx::fsFloat,(int)offsetof(ImageBackground_obj,parallaxX),HX_HCSTRING("parallaxX","\x21","\xc5","\xdb","\xb9")},
	{hx::fsFloat,(int)offsetof(ImageBackground_obj,parallaxY),HX_HCSTRING("parallaxY","\x22","\xc5","\xdb","\xb9")},
	{hx::fsBool,(int)offsetof(ImageBackground_obj,repeats),HX_HCSTRING("repeats","\xb8","\xd8","\x87","\xa6")},
	{hx::fsBool,(int)offsetof(ImageBackground_obj,repeated),HX_HCSTRING("repeated","\x7a","\xbc","\x55","\x10")},
	{hx::fsBool,(int)offsetof(ImageBackground_obj,graphicsLoaded),HX_HCSTRING("graphicsLoaded","\x30","\xdf","\x3a","\xab")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ImageBackground_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageBackground_obj_sMemberFields[] = {
	HX_HCSTRING("currFrame","\xdb","\xaf","\x58","\x6a"),
	HX_HCSTRING("currTime","\x1f","\xa4","\x04","\x90"),
	HX_HCSTRING("img","\x03","\x0c","\x50","\x00"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("durations","\x9f","\x5a","\xbf","\xe7"),
	HX_HCSTRING("parallaxX","\x21","\xc5","\xdb","\xb9"),
	HX_HCSTRING("parallaxY","\x22","\xc5","\xdb","\xb9"),
	HX_HCSTRING("repeats","\xb8","\xd8","\x87","\xa6"),
	HX_HCSTRING("repeated","\x7a","\xbc","\x55","\x10"),
	HX_HCSTRING("graphicsLoaded","\x30","\xdf","\x3a","\xab"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("drawRepeated","\x9e","\x48","\x49","\xe6"),
	HX_HCSTRING("loadGraphics","\x11","\xe5","\xd0","\xcb"),
	HX_HCSTRING("unloadGraphics","\xea","\xec","\xbd","\xbd"),
	HX_HCSTRING("reloadGraphics","\x44","\x89","\xf1","\x01"),
	::String(null()) };

static void ImageBackground_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageBackground_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageBackground_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageBackground_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageBackground_obj::__mClass;

void ImageBackground_obj::__register()
{
	hx::Object *dummy = new ImageBackground_obj;
	ImageBackground_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.models.background.ImageBackground","\x5e","\x8c","\xa5","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ImageBackground_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ImageBackground_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageBackground_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImageBackground_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageBackground_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageBackground_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace background
