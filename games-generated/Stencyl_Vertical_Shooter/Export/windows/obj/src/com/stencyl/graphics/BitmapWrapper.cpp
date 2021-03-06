// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_BitmapTweenProperties
#include <com/stencyl/graphics/BitmapTweenProperties.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_BitmapWrapper
#include <com/stencyl/graphics/BitmapWrapper.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_EngineScaleUpdateListener
#include <com/stencyl/graphics/EngineScaleUpdateListener.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_113c744a88de1a89_12_new,"com.stencyl.graphics.BitmapWrapper","new",0x5da136e2,"com.stencyl.graphics.BitmapWrapper.new","com/stencyl/graphics/BitmapWrapper.hx",12,0x488acf8d)
HX_LOCAL_STACK_FRAME(_hx_pos_113c744a88de1a89_37_set_imgX,"com.stencyl.graphics.BitmapWrapper","set_imgX",0x20984e30,"com.stencyl.graphics.BitmapWrapper.set_imgX","com/stencyl/graphics/BitmapWrapper.hx",37,0x488acf8d)
HX_LOCAL_STACK_FRAME(_hx_pos_113c744a88de1a89_45_get_imgX,"com.stencyl.graphics.BitmapWrapper","get_imgX",0x723af4bc,"com.stencyl.graphics.BitmapWrapper.get_imgX","com/stencyl/graphics/BitmapWrapper.hx",45,0x488acf8d)
HX_LOCAL_STACK_FRAME(_hx_pos_113c744a88de1a89_49_set_imgY,"com.stencyl.graphics.BitmapWrapper","set_imgY",0x20984e31,"com.stencyl.graphics.BitmapWrapper.set_imgY","com/stencyl/graphics/BitmapWrapper.hx",49,0x488acf8d)
HX_LOCAL_STACK_FRAME(_hx_pos_113c744a88de1a89_57_get_imgY,"com.stencyl.graphics.BitmapWrapper","get_imgY",0x723af4bd,"com.stencyl.graphics.BitmapWrapper.get_imgY","com/stencyl/graphics/BitmapWrapper.hx",57,0x488acf8d)
HX_LOCAL_STACK_FRAME(_hx_pos_113c744a88de1a89_62_set_smoothing,"com.stencyl.graphics.BitmapWrapper","set_smoothing",0x8b86e859,"com.stencyl.graphics.BitmapWrapper.set_smoothing","com/stencyl/graphics/BitmapWrapper.hx",62,0x488acf8d)
HX_LOCAL_STACK_FRAME(_hx_pos_113c744a88de1a89_67_get_smoothing,"com.stencyl.graphics.BitmapWrapper","get_smoothing",0x4681064d,"com.stencyl.graphics.BitmapWrapper.get_smoothing","com/stencyl/graphics/BitmapWrapper.hx",67,0x488acf8d)
HX_LOCAL_STACK_FRAME(_hx_pos_113c744a88de1a89_71_setOrigin,"com.stencyl.graphics.BitmapWrapper","setOrigin",0x2aecc32a,"com.stencyl.graphics.BitmapWrapper.setOrigin","com/stencyl/graphics/BitmapWrapper.hx",71,0x488acf8d)
HX_LOCAL_STACK_FRAME(_hx_pos_113c744a88de1a89_83_updateScale,"com.stencyl.graphics.BitmapWrapper","updateScale",0x9f21f043,"com.stencyl.graphics.BitmapWrapper.updateScale","com/stencyl/graphics/BitmapWrapper.hx",83,0x488acf8d)
HX_LOCAL_STACK_FRAME(_hx_pos_113c744a88de1a89_87_updatePosition,"com.stencyl.graphics.BitmapWrapper","updatePosition",0x64da9890,"com.stencyl.graphics.BitmapWrapper.updatePosition","com/stencyl/graphics/BitmapWrapper.hx",87,0x488acf8d)
HX_LOCAL_STACK_FRAME(_hx_pos_113c744a88de1a89_93_get_tweenProps,"com.stencyl.graphics.BitmapWrapper","get_tweenProps",0x5a7f960c,"com.stencyl.graphics.BitmapWrapper.get_tweenProps","com/stencyl/graphics/BitmapWrapper.hx",93,0x488acf8d)
namespace com{
namespace stencyl{
namespace graphics{

void BitmapWrapper_obj::__construct( ::openfl::display::Bitmap img){
            	HX_STACKFRAME(&_hx_pos_113c744a88de1a89_12_new)
HXLINE(  19)		this->cacheParentAnchor = ::com::stencyl::utils::Utils_obj::zero;
HXLINE(  29)		super::__construct();
HXLINE(  30)		this->img = img;
HXLINE(  31)		this->offsetX = (int)0;
HXLINE(  32)		this->offsetY = (int)0;
HXLINE(  33)		this->addChild(img);
            	}

Dynamic BitmapWrapper_obj::__CreateEmpty() { return new BitmapWrapper_obj; }

void *BitmapWrapper_obj::_hx_vtable = 0;

Dynamic BitmapWrapper_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BitmapWrapper_obj > _hx_result = new BitmapWrapper_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BitmapWrapper_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19c29573) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573;
		}
	} else {
		if (inClassId<=(int)0x328feeee) {
			return inClassId==(int)0x1b123bf8 || inClassId==(int)0x328feeee;
		} else {
			return inClassId==(int)0x3f2b00af;
		}
	}
}

static ::com::stencyl::graphics::EngineScaleUpdateListener_obj _hx_com_stencyl_graphics_BitmapWrapper__hx_com_stencyl_graphics_EngineScaleUpdateListener= {
	( void (hx::Object::*)())&::com::stencyl::graphics::BitmapWrapper_obj::updateScale,
};

void *BitmapWrapper_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xac8361ef: return &_hx_com_stencyl_graphics_BitmapWrapper__hx_com_stencyl_graphics_EngineScaleUpdateListener;
	}
	return super::_hx_getInterface(inHash);
}

Float BitmapWrapper_obj::set_imgX(Float x){
            	HX_STACKFRAME(&_hx_pos_113c744a88de1a89_37_set_imgX)
HXLINE(  38)		this->set_x((((x + this->offsetX) * ::com::stencyl::Engine_obj::SCALE) - this->cacheParentAnchor->x));
HXLINE(  40)		return (this->imgX = x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapWrapper_obj,set_imgX,return )

Float BitmapWrapper_obj::get_imgX(){
            	HX_STACKFRAME(&_hx_pos_113c744a88de1a89_45_get_imgX)
HXDLIN(  45)		return this->imgX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapWrapper_obj,get_imgX,return )

Float BitmapWrapper_obj::set_imgY(Float y){
            	HX_STACKFRAME(&_hx_pos_113c744a88de1a89_49_set_imgY)
HXLINE(  50)		this->set_y((((y + this->offsetY) * ::com::stencyl::Engine_obj::SCALE) - this->cacheParentAnchor->y));
HXLINE(  52)		return (this->imgY = y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapWrapper_obj,set_imgY,return )

Float BitmapWrapper_obj::get_imgY(){
            	HX_STACKFRAME(&_hx_pos_113c744a88de1a89_57_get_imgY)
HXDLIN(  57)		return this->imgY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapWrapper_obj,get_imgY,return )

bool BitmapWrapper_obj::set_smoothing(bool smoothing){
            	HX_STACKFRAME(&_hx_pos_113c744a88de1a89_62_set_smoothing)
HXDLIN(  62)		return (this->img->smoothing = smoothing);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapWrapper_obj,set_smoothing,return )

bool BitmapWrapper_obj::get_smoothing(){
            	HX_STACKFRAME(&_hx_pos_113c744a88de1a89_67_get_smoothing)
HXDLIN(  67)		return this->img->smoothing;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapWrapper_obj,get_smoothing,return )

void BitmapWrapper_obj::setOrigin(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_113c744a88de1a89_71_setOrigin)
HXLINE(  72)		{
HXLINE(  72)			 ::com::stencyl::graphics::BitmapWrapper _g = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  72)			Float _hx_tmp = _g->get_x();
HXDLIN(  72)			_g->set_x((_hx_tmp + ((x - this->offsetX) * ::com::stencyl::Engine_obj::SCALE)));
            		}
HXLINE(  73)		{
HXLINE(  73)			 ::com::stencyl::graphics::BitmapWrapper _g1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  73)			Float _hx_tmp1 = _g1->get_y();
HXDLIN(  73)			_g1->set_y((_hx_tmp1 + ((y - this->offsetY) * ::com::stencyl::Engine_obj::SCALE)));
            		}
HXLINE(  74)		this->offsetX = x;
HXLINE(  75)		this->offsetY = y;
HXLINE(  77)		 ::openfl::display::Bitmap _hx_tmp2 = this->img;
HXDLIN(  77)		_hx_tmp2->set_x((-(x) * ::com::stencyl::Engine_obj::SCALE));
HXLINE(  78)		 ::openfl::display::Bitmap _hx_tmp3 = this->img;
HXDLIN(  78)		_hx_tmp3->set_y((-(y) * ::com::stencyl::Engine_obj::SCALE));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BitmapWrapper_obj,setOrigin,(void))

void BitmapWrapper_obj::updateScale(){
            	HX_STACKFRAME(&_hx_pos_113c744a88de1a89_83_updateScale)
HXDLIN(  83)		this->updatePosition();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapWrapper_obj,updateScale,(void))

void BitmapWrapper_obj::updatePosition(){
            	HX_STACKFRAME(&_hx_pos_113c744a88de1a89_87_updatePosition)
HXLINE(  88)		Float _hx_tmp = this->get_imgX();
HXDLIN(  88)		this->set_x((((_hx_tmp + this->offsetX) * ::com::stencyl::Engine_obj::SCALE) - this->cacheParentAnchor->x));
HXLINE(  89)		Float _hx_tmp1 = this->get_imgY();
HXDLIN(  89)		this->set_y((((_hx_tmp1 + this->offsetY) * ::com::stencyl::Engine_obj::SCALE) - this->cacheParentAnchor->y));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapWrapper_obj,updatePosition,(void))

 ::com::stencyl::graphics::BitmapTweenProperties BitmapWrapper_obj::get_tweenProps(){
            	HX_GC_STACKFRAME(&_hx_pos_113c744a88de1a89_93_get_tweenProps)
HXLINE(  94)		if (hx::IsNull( this->tweenProps )) {
HXLINE(  95)			this->tweenProps =  ::com::stencyl::graphics::BitmapTweenProperties_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  96)		return this->tweenProps;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapWrapper_obj,get_tweenProps,return )


hx::ObjectPtr< BitmapWrapper_obj > BitmapWrapper_obj::__new( ::openfl::display::Bitmap img) {
	hx::ObjectPtr< BitmapWrapper_obj > __this = new BitmapWrapper_obj();
	__this->__construct(img);
	return __this;
}

hx::ObjectPtr< BitmapWrapper_obj > BitmapWrapper_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::Bitmap img) {
	BitmapWrapper_obj *__this = (BitmapWrapper_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BitmapWrapper_obj), true, "com.stencyl.graphics.BitmapWrapper"));
	*(void **)__this = BitmapWrapper_obj::_hx_vtable;
	__this->__construct(img);
	return __this;
}

BitmapWrapper_obj::BitmapWrapper_obj()
{
}

void BitmapWrapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapWrapper);
	HX_MARK_MEMBER_NAME(img,"img");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(cacheParentAnchor,"cacheParentAnchor");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(imgX,"imgX");
	HX_MARK_MEMBER_NAME(imgY,"imgY");
	HX_MARK_MEMBER_NAME(tweenProps,"tweenProps");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapWrapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(img,"img");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(cacheParentAnchor,"cacheParentAnchor");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(imgX,"imgX");
	HX_VISIT_MEMBER_NAME(imgY,"imgY");
	HX_VISIT_MEMBER_NAME(tweenProps,"tweenProps");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val BitmapWrapper_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { return hx::Val( img ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"imgX") ) { return hx::Val( inCallProp == hx::paccAlways ? get_imgX() : imgX ); }
		if (HX_FIELD_EQ(inName,"imgY") ) { return hx::Val( inCallProp == hx::paccAlways ? get_imgY() : imgY ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return hx::Val( offsetY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_imgX") ) { return hx::Val( set_imgX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_imgX") ) { return hx::Val( get_imgX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_imgY") ) { return hx::Val( set_imgY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_imgY") ) { return hx::Val( get_imgY_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return hx::Val( inCallProp == hx::paccAlways ? get_smoothing() : smoothing ); }
		if (HX_FIELD_EQ(inName,"setOrigin") ) { return hx::Val( setOrigin_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tweenProps") ) { return hx::Val( inCallProp == hx::paccAlways ? get_tweenProps() : tweenProps ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateScale") ) { return hx::Val( updateScale_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_smoothing") ) { return hx::Val( set_smoothing_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_smoothing") ) { return hx::Val( get_smoothing_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updatePosition") ) { return hx::Val( updatePosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tweenProps") ) { return hx::Val( get_tweenProps_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cacheParentAnchor") ) { return hx::Val( cacheParentAnchor ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BitmapWrapper_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { img=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"imgX") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_imgX(inValue.Cast< Float >()) );imgX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgY") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_imgY(inValue.Cast< Float >()) );imgY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_smoothing(inValue.Cast< bool >()) );smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tweenProps") ) { tweenProps=inValue.Cast<  ::com::stencyl::graphics::BitmapTweenProperties >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cacheParentAnchor") ) { cacheParentAnchor=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("img","\x03","\x0c","\x50","\x00"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("cacheParentAnchor","\xa1","\x30","\x21","\x91"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	outFields->push(HX_HCSTRING("imgX","\xf5","\x76","\xba","\x45"));
	outFields->push(HX_HCSTRING("imgY","\xf6","\x76","\xba","\x45"));
	outFields->push(HX_HCSTRING("tweenProps","\x05","\x09","\xd4","\x7f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BitmapWrapper_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(BitmapWrapper_obj,img),HX_HCSTRING("img","\x03","\x0c","\x50","\x00")},
	{hx::fsFloat,(int)offsetof(BitmapWrapper_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsFloat,(int)offsetof(BitmapWrapper_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(BitmapWrapper_obj,cacheParentAnchor),HX_HCSTRING("cacheParentAnchor","\xa1","\x30","\x21","\x91")},
	{hx::fsBool,(int)offsetof(BitmapWrapper_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{hx::fsFloat,(int)offsetof(BitmapWrapper_obj,imgX),HX_HCSTRING("imgX","\xf5","\x76","\xba","\x45")},
	{hx::fsFloat,(int)offsetof(BitmapWrapper_obj,imgY),HX_HCSTRING("imgY","\xf6","\x76","\xba","\x45")},
	{hx::fsObject /*::com::stencyl::graphics::BitmapTweenProperties*/ ,(int)offsetof(BitmapWrapper_obj,tweenProps),HX_HCSTRING("tweenProps","\x05","\x09","\xd4","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BitmapWrapper_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapWrapper_obj_sMemberFields[] = {
	HX_HCSTRING("img","\x03","\x0c","\x50","\x00"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("cacheParentAnchor","\xa1","\x30","\x21","\x91"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("imgX","\xf5","\x76","\xba","\x45"),
	HX_HCSTRING("imgY","\xf6","\x76","\xba","\x45"),
	HX_HCSTRING("tweenProps","\x05","\x09","\xd4","\x7f"),
	HX_HCSTRING("set_imgX","\xf2","\x8b","\xd2","\x73"),
	HX_HCSTRING("get_imgX","\x7e","\x32","\x75","\xc5"),
	HX_HCSTRING("set_imgY","\xf3","\x8b","\xd2","\x73"),
	HX_HCSTRING("get_imgY","\x7f","\x32","\x75","\xc5"),
	HX_HCSTRING("set_smoothing","\x57","\x8b","\x4b","\x9c"),
	HX_HCSTRING("get_smoothing","\x4b","\xa9","\x45","\x57"),
	HX_HCSTRING("setOrigin","\x28","\x8f","\xa8","\xaa"),
	HX_HCSTRING("updateScale","\xc1","\x37","\x67","\x5e"),
	HX_HCSTRING("updatePosition","\xd2","\x93","\x24","\x00"),
	HX_HCSTRING("get_tweenProps","\x4e","\x91","\xc9","\xf5"),
	::String(null()) };

static void BitmapWrapper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapWrapper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BitmapWrapper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapWrapper_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapWrapper_obj::__mClass;

void BitmapWrapper_obj::__register()
{
	hx::Object *dummy = new BitmapWrapper_obj;
	BitmapWrapper_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.graphics.BitmapWrapper","\xf0","\xdd","\x07","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BitmapWrapper_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BitmapWrapper_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapWrapper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BitmapWrapper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapWrapper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapWrapper_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
