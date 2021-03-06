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
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_GLUtil
#include <com/stencyl/graphics/GLUtil.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Atlas
#include <com/stencyl/models/Atlas.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Animation
#include <com/stencyl/models/actor/Animation.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Sprite
#include <com/stencyl/models/actor/Sprite.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Assets
#include <com/stencyl/utils/Assets.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_LazyIntMap
#include <com/stencyl/utils/LazyIntMap.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4306bb0b993de4fd_13_new,"com.stencyl.models.actor.Animation","new",0xea24b828,"com.stencyl.models.actor.Animation.new","com/stencyl/models/actor/Animation.hx",13,0xdb1158c8)
HX_LOCAL_STACK_FRAME(_hx_pos_4306bb0b993de4fd_118_loadGraphics,"com.stencyl.models.actor.Animation","loadGraphics",0x9458c449,"com.stencyl.models.actor.Animation.loadGraphics","com/stencyl/models/actor/Animation.hx",118,0xdb1158c8)
HX_LOCAL_STACK_FRAME(_hx_pos_4306bb0b993de4fd_172_unloadGraphics,"com.stencyl.models.actor.Animation","unloadGraphics",0x9f660a22,"com.stencyl.models.actor.Animation.unloadGraphics","com/stencyl/models/actor/Animation.hx",172,0xdb1158c8)
HX_LOCAL_STACK_FRAME(_hx_pos_4306bb0b993de4fd_188_checkImageReadable,"com.stencyl.models.actor.Animation","checkImageReadable",0x39783dbb,"com.stencyl.models.actor.Animation.checkImageReadable","com/stencyl/models/actor/Animation.hx",188,0xdb1158c8)
HX_LOCAL_STACK_FRAME(_hx_pos_4306bb0b993de4fd_252_update,"com.stencyl.models.actor.Animation","update",0xd3b1ab41,"com.stencyl.models.actor.Animation.update","com/stencyl/models/actor/Animation.hx",252,0xdb1158c8)
HX_LOCAL_STACK_FRAME(_hx_pos_4306bb0b993de4fd_48_resetStatics,"com.stencyl.models.actor.Animation","resetStatics",0x70cb612e,"com.stencyl.models.actor.Animation.resetStatics","com/stencyl/models/actor/Animation.hx",48,0xdb1158c8)
HX_LOCAL_STACK_FRAME(_hx_pos_4306bb0b993de4fd_245_updateAll,"com.stencyl.models.actor.Animation","updateAll",0x0393c460,"com.stencyl.models.actor.Animation.updateAll","com/stencyl/models/actor/Animation.hx",245,0xdb1158c8)
HX_LOCAL_STACK_FRAME(_hx_pos_4306bb0b993de4fd_43_boot,"com.stencyl.models.actor.Animation","boot",0xee156b6a,"com.stencyl.models.actor.Animation.boot","com/stencyl/models/actor/Animation.hx",43,0xdb1158c8)
namespace com{
namespace stencyl{
namespace models{
namespace actor{

void Animation_obj::__construct(int animID,::String animName, ::com::stencyl::models::actor::Sprite parent, ::haxe::ds::IntMap simpleShapes, ::haxe::ds::IntMap physicsShapes,bool looping,bool sync,int imgWidth,int imgHeight,Float originX,Float originY,::Array< int > durations,int frameCount,int framesAcross,int framesDown){
            	HX_GC_STACKFRAME(&_hx_pos_4306bb0b993de4fd_13_new)
HXLINE(  32)		this->sharedFrameIndex = (int)0;
HXLINE(  31)		this->sharedTimer = ((Float)0);
HXLINE(  70)		this->animID = animID;
HXLINE(  71)		this->animName = animName;
HXLINE(  73)		this->parent = parent;
HXLINE(  74)		this->simpleShapes = simpleShapes;
HXLINE(  75)		this->physicsShapes = physicsShapes;
HXLINE(  76)		this->looping = looping;
HXLINE(  77)		this->sync = sync;
HXLINE(  78)		this->durations = durations;
HXLINE(  81)		if (hx::IsNull( ::com::stencyl::models::actor::Animation_obj::UNLOADED )) {
HXLINE(  82)			::com::stencyl::models::actor::Animation_obj::UNLOADED =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,(int)1,(int)1,null(),null());
            		}
HXLINE(  83)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  83)		{
HXLINE(  83)			int _g2 = (int)0;
HXDLIN(  83)			int _g1 = frameCount;
HXDLIN(  83)			while((_g2 < _g1)){
HXLINE(  83)				_g2 = (_g2 + (int)1);
HXDLIN(  83)				int i = (_g2 - (int)1);
HXDLIN(  83)				_g->push(::com::stencyl::models::actor::Animation_obj::UNLOADED);
            			}
            		}
HXDLIN(  83)		this->frames = _g;
HXLINE(  84)		this->frameWidth = ::Std_obj::_hx_int(((Float)imgWidth / (Float)framesAcross));
HXLINE(  85)		this->frameHeight = ::Std_obj::_hx_int(((Float)imgHeight / (Float)framesDown));
HXLINE(  87)		this->imgWidth = imgWidth;
HXLINE(  88)		this->imgHeight = imgHeight;
HXLINE(  89)		this->frameCount = frameCount;
HXLINE(  90)		this->framesAcross = framesAcross;
HXLINE(  91)		this->framesDown = framesDown;
HXLINE(  93)		this->originX = originX;
HXLINE(  94)		this->originY = originY;
HXLINE(  96)		if (hx::IsNull( parent )) {
HXLINE(  98)			this->frames = ::Array_obj< ::Dynamic>::__new(1)->init(0,::com::stencyl::models::actor::Animation_obj::UNLOADED);
            		}
            		else {
HXLINE( 102)			::Dynamic this1 = ::com::stencyl::models::GameModel_obj::get()->atlases;
HXDLIN( 102)			 ::com::stencyl::models::Atlas atlas = ( ( ::haxe::ds::IntMap)(this1) )->get(parent->atlasID).StaticCast<  ::com::stencyl::models::Atlas >();
HXLINE( 104)			bool _hx_tmp;
HXDLIN( 104)			if (hx::IsNotNull( atlas )) {
HXLINE( 104)				_hx_tmp = atlas->active;
            			}
            			else {
HXLINE( 104)				_hx_tmp = false;
            			}
HXDLIN( 104)			if (_hx_tmp) {
HXLINE( 106)				this->loadGraphics();
            			}
HXLINE( 109)			bool _hx_tmp1;
HXDLIN( 109)			if ((frameCount > (int)1)) {
HXLINE( 109)				_hx_tmp1 = looping;
            			}
            			else {
HXLINE( 109)				_hx_tmp1 = false;
            			}
HXDLIN( 109)			if (_hx_tmp1) {
HXLINE( 111)				::com::stencyl::models::actor::Animation_obj::allAnimations->push(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            	}

Dynamic Animation_obj::__CreateEmpty() { return new Animation_obj; }

void *Animation_obj::_hx_vtable = 0;

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Animation_obj > _hx_result = new Animation_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14]);
	return _hx_result;
}

bool Animation_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7149be84;
}

void Animation_obj::loadGraphics(){
            	HX_GC_STACKFRAME(&_hx_pos_4306bb0b993de4fd_118_loadGraphics)
HXLINE( 119)		if (this->graphicsLoaded) {
HXLINE( 120)			return;
            		}
HXLINE( 122)		 ::openfl::display::BitmapData imgData = ::com::stencyl::utils::Assets_obj::getBitmapData(((((((HX_("assets/graphics/",38,e5,fb,63) + ::com::stencyl::Engine_obj::IMG_BASE) + HX_("/sprite-",39,9c,cd,df)) + this->parent->ID) + HX_("-",2d,00,00,00)) + this->animID) + HX_(".png",3b,2d,bd,1e)),false);
HXLINE( 128)		if (hx::IsNull( imgData )) {
HXLINE( 130)			::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 130)			{
HXLINE( 130)				int _g2 = (int)0;
HXDLIN( 130)				int _g1 = this->frameCount;
HXDLIN( 130)				while((_g2 < _g1)){
HXLINE( 130)					_g2 = (_g2 + (int)1);
HXDLIN( 130)					int i = (_g2 - (int)1);
HXDLIN( 130)					_g->push(::com::stencyl::models::actor::Animation_obj::UNLOADED);
            				}
            			}
HXDLIN( 130)			this->frames = _g;
HXLINE( 131)			return;
            		}
HXLINE( 134)		if ((this->frameCount == (int)1)) {
HXLINE( 136)			this->frames[(int)0] = imgData;
            		}
            		else {
HXLINE( 140)			int fw = ::Std_obj::_hx_int((this->frameWidth * ::com::stencyl::Engine_obj::SCALE));
HXLINE( 141)			int fh = ::Std_obj::_hx_int((this->frameHeight * ::com::stencyl::Engine_obj::SCALE));
HXLINE( 143)			 ::openfl::geom::Point point =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(int)0,(int)0);
HXLINE( 145)			{
HXLINE( 145)				int _g11 = (int)0;
HXDLIN( 145)				int _g3 = this->frameCount;
HXDLIN( 145)				while((_g11 < _g3)){
HXLINE( 145)					_g11 = (_g11 + (int)1);
HXDLIN( 145)					int i1 = (_g11 - (int)1);
HXLINE( 147)					int sourceRect = (fw * hx::Mod(i1,this->framesAcross));
HXDLIN( 147)					 ::openfl::geom::Rectangle sourceRect1 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,sourceRect,(::Math_obj::floor(((Float)i1 / (Float)this->framesAcross)) * fh),fw,fh);
HXLINE( 148)					 ::openfl::display::BitmapData frameImg =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,fw,fh,true,(int)0);
HXLINE( 149)					frameImg->copyPixels(imgData,sourceRect1,point,null(),null(),null());
HXLINE( 150)					this->frames[i1] = frameImg;
            				}
            			}
HXLINE( 153)			imgData->dispose();
            		}
HXLINE( 157)		bool _hx_tmp;
HXDLIN( 157)		bool _hx_tmp1;
HXDLIN( 157)		if (::com::stencyl::Config_obj::disposeImages) {
HXLINE( 157)			_hx_tmp1 = hx::IsNotNull( this->parent );
            		}
            		else {
HXLINE( 157)			_hx_tmp1 = false;
            		}
HXDLIN( 157)		if (_hx_tmp1) {
HXLINE( 157)			_hx_tmp = !(this->parent->readableImages);
            		}
            		else {
HXLINE( 157)			_hx_tmp = false;
            		}
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 159)			int i2 = (int)0;
HXLINE( 160)			{
HXLINE( 160)				int _g4 = (int)0;
HXDLIN( 160)				::Array< ::Dynamic> _g12 = this->frames;
HXDLIN( 160)				while((_g4 < _g12->length)){
HXLINE( 160)					 ::openfl::display::BitmapData frame = _g12->__get(_g4).StaticCast<  ::openfl::display::BitmapData >();
HXDLIN( 160)					_g4 = (_g4 + (int)1);
HXLINE( 162)					::com::stencyl::graphics::GLUtil_obj::uploadTexture(frame,true);
            				}
            			}
            		}
HXLINE( 168)		this->graphicsLoaded = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,loadGraphics,(void))

void Animation_obj::unloadGraphics(){
            	HX_STACKFRAME(&_hx_pos_4306bb0b993de4fd_172_unloadGraphics)
HXLINE( 173)		if (!(this->graphicsLoaded)) {
HXLINE( 174)			return;
            		}
HXLINE( 176)		{
HXLINE( 176)			int _g1 = (int)0;
HXDLIN( 176)			int _g = this->frameCount;
HXDLIN( 176)			while((_g1 < _g)){
HXLINE( 176)				_g1 = (_g1 + (int)1);
HXDLIN( 176)				int i = (_g1 - (int)1);
HXLINE( 178)				if (this->frames->__get(i).StaticCast<  ::openfl::display::BitmapData >()->readable) {
HXLINE( 179)					this->frames->__get(i).StaticCast<  ::openfl::display::BitmapData >()->dispose();
            				}
HXLINE( 181)				this->frames[i] = ::com::stencyl::models::actor::Animation_obj::UNLOADED;
            			}
            		}
HXLINE( 184)		this->graphicsLoaded = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,unloadGraphics,(void))

bool Animation_obj::checkImageReadable(){
            	HX_STACKFRAME(&_hx_pos_4306bb0b993de4fd_188_checkImageReadable)
HXLINE( 189)		if (this->frames->__get((int)0).StaticCast<  ::openfl::display::BitmapData >()->readable) {
HXLINE( 190)			return true;
            		}
HXLINE( 201)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 201)		 ::com::stencyl::utils::LazyIntMap _hx_tmp1 = ::com::stencyl::Data_obj::get()->resources;
HXDLIN( 201)		::String _hx_tmp2 = (HX_("Can't get actor image with disposeImages enabled: ",41,21,6a,a7) + _hx_tmp1->get((this->parent->ID - (int)1)).StaticCast<  ::com::stencyl::models::Resource >()->name);
HXDLIN( 201)		_hx_tmp(_hx_tmp2,hx::SourceInfo(HX_("Animation.hx",5a,da,24,72),201,HX_("com.stencyl.models.actor.Animation",36,c4,93,e4),HX_("checkImageReadable",83,24,8d,86)));
HXLINE( 206)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,checkImageReadable,return )

void Animation_obj::update(Float elapsedTime){
            	HX_STACKFRAME(&_hx_pos_4306bb0b993de4fd_252_update)
HXLINE( 253)		 ::com::stencyl::models::actor::Animation _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)		_hx_tmp->sharedTimer = (_hx_tmp->sharedTimer + elapsedTime);
HXLINE( 255)		bool _hx_tmp1;
HXDLIN( 255)		if ((this->frameCount > (int)1)) {
HXLINE( 255)			Float _hx_tmp2 = this->sharedTimer;
HXDLIN( 255)			_hx_tmp1 = (_hx_tmp2 > this->durations->__get(this->sharedFrameIndex));
            		}
            		else {
HXLINE( 255)			_hx_tmp1 = false;
            		}
HXDLIN( 255)		if (_hx_tmp1) {
HXLINE( 257)			int old = this->sharedFrameIndex;
HXLINE( 259)			 ::com::stencyl::models::actor::Animation _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 259)			_hx_tmp3->sharedTimer = (_hx_tmp3->sharedTimer - this->durations->__get(this->sharedFrameIndex));
HXLINE( 261)			this->sharedFrameIndex++;
HXLINE( 263)			if ((this->sharedFrameIndex >= this->frameCount)) {
HXLINE( 265)				if (this->looping) {
HXLINE( 267)					this->sharedFrameIndex = (int)0;
            				}
            				else {
HXLINE( 272)					this->sharedFrameIndex--;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,update,(void))

::Array< ::Dynamic> Animation_obj::allAnimations;

 ::openfl::display::BitmapData Animation_obj::UNLOADED;

void Animation_obj::resetStatics(){
            	HX_STACKFRAME(&_hx_pos_4306bb0b993de4fd_48_resetStatics)
HXDLIN(  48)		::com::stencyl::models::actor::Animation_obj::allAnimations = ::Array_obj< ::Dynamic>::__new();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,resetStatics,(void))

void Animation_obj::updateAll(Float elapsedTime){
            	HX_STACKFRAME(&_hx_pos_4306bb0b993de4fd_245_updateAll)
HXDLIN( 245)		int _g = (int)0;
HXDLIN( 245)		::Array< ::Dynamic> _g1 = ::com::stencyl::models::actor::Animation_obj::allAnimations;
HXDLIN( 245)		while((_g < _g1->length)){
HXDLIN( 245)			 ::com::stencyl::models::actor::Animation a = _g1->__get(_g).StaticCast<  ::com::stencyl::models::actor::Animation >();
HXDLIN( 245)			_g = (_g + (int)1);
HXLINE( 247)			{
HXLINE( 247)				 ::com::stencyl::models::actor::Animation a1 = a;
HXDLIN( 247)				a1->sharedTimer = (a1->sharedTimer + elapsedTime);
HXDLIN( 247)				bool _hx_tmp;
HXDLIN( 247)				if ((a->frameCount > (int)1)) {
HXLINE( 247)					Float a2 = a->sharedTimer;
HXDLIN( 247)					_hx_tmp = (a2 > a->durations->__get(a->sharedFrameIndex));
            				}
            				else {
HXLINE( 247)					_hx_tmp = false;
            				}
HXDLIN( 247)				if (_hx_tmp) {
HXLINE( 247)					int old = a->sharedFrameIndex;
HXDLIN( 247)					 ::com::stencyl::models::actor::Animation a3 = a;
HXDLIN( 247)					a3->sharedTimer = (a3->sharedTimer - a->durations->__get(a->sharedFrameIndex));
HXDLIN( 247)					a->sharedFrameIndex++;
HXDLIN( 247)					if ((a->sharedFrameIndex >= a->frameCount)) {
HXLINE( 247)						if (a->looping) {
HXLINE( 247)							a->sharedFrameIndex = (int)0;
            						}
            						else {
HXLINE( 247)							a->sharedFrameIndex--;
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,updateAll,(void))


hx::ObjectPtr< Animation_obj > Animation_obj::__new(int animID,::String animName, ::com::stencyl::models::actor::Sprite parent, ::haxe::ds::IntMap simpleShapes, ::haxe::ds::IntMap physicsShapes,bool looping,bool sync,int imgWidth,int imgHeight,Float originX,Float originY,::Array< int > durations,int frameCount,int framesAcross,int framesDown) {
	hx::ObjectPtr< Animation_obj > __this = new Animation_obj();
	__this->__construct(animID,animName,parent,simpleShapes,physicsShapes,looping,sync,imgWidth,imgHeight,originX,originY,durations,frameCount,framesAcross,framesDown);
	return __this;
}

hx::ObjectPtr< Animation_obj > Animation_obj::__alloc(hx::Ctx *_hx_ctx,int animID,::String animName, ::com::stencyl::models::actor::Sprite parent, ::haxe::ds::IntMap simpleShapes, ::haxe::ds::IntMap physicsShapes,bool looping,bool sync,int imgWidth,int imgHeight,Float originX,Float originY,::Array< int > durations,int frameCount,int framesAcross,int framesDown) {
	Animation_obj *__this = (Animation_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Animation_obj), true, "com.stencyl.models.actor.Animation"));
	*(void **)__this = Animation_obj::_hx_vtable;
	__this->__construct(animID,animName,parent,simpleShapes,physicsShapes,looping,sync,imgWidth,imgHeight,originX,originY,durations,frameCount,framesAcross,framesDown);
	return __this;
}

Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(animID,"animID");
	HX_MARK_MEMBER_NAME(animName,"animName");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(simpleShapes,"simpleShapes");
	HX_MARK_MEMBER_NAME(physicsShapes,"physicsShapes");
	HX_MARK_MEMBER_NAME(looping,"looping");
	HX_MARK_MEMBER_NAME(sync,"sync");
	HX_MARK_MEMBER_NAME(durations,"durations");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(sharedTimer,"sharedTimer");
	HX_MARK_MEMBER_NAME(sharedFrameIndex,"sharedFrameIndex");
	HX_MARK_MEMBER_NAME(imgWidth,"imgWidth");
	HX_MARK_MEMBER_NAME(imgHeight,"imgHeight");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	HX_MARK_MEMBER_NAME(framesAcross,"framesAcross");
	HX_MARK_MEMBER_NAME(framesDown,"framesDown");
	HX_MARK_MEMBER_NAME(graphicsLoaded,"graphicsLoaded");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animID,"animID");
	HX_VISIT_MEMBER_NAME(animName,"animName");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(simpleShapes,"simpleShapes");
	HX_VISIT_MEMBER_NAME(physicsShapes,"physicsShapes");
	HX_VISIT_MEMBER_NAME(looping,"looping");
	HX_VISIT_MEMBER_NAME(sync,"sync");
	HX_VISIT_MEMBER_NAME(durations,"durations");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(sharedTimer,"sharedTimer");
	HX_VISIT_MEMBER_NAME(sharedFrameIndex,"sharedFrameIndex");
	HX_VISIT_MEMBER_NAME(imgWidth,"imgWidth");
	HX_VISIT_MEMBER_NAME(imgHeight,"imgHeight");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	HX_VISIT_MEMBER_NAME(framesAcross,"framesAcross");
	HX_VISIT_MEMBER_NAME(framesDown,"framesDown");
	HX_VISIT_MEMBER_NAME(graphicsLoaded,"graphicsLoaded");
}

hx::Val Animation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { return hx::Val( sync ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"animID") ) { return hx::Val( animID ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { return hx::Val( looping ); }
		if (HX_FIELD_EQ(inName,"originX") ) { return hx::Val( originX ); }
		if (HX_FIELD_EQ(inName,"originY") ) { return hx::Val( originY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"animName") ) { return hx::Val( animName ); }
		if (HX_FIELD_EQ(inName,"imgWidth") ) { return hx::Val( imgWidth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"durations") ) { return hx::Val( durations ); }
		if (HX_FIELD_EQ(inName,"imgHeight") ) { return hx::Val( imgHeight ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return hx::Val( frameWidth ); }
		if (HX_FIELD_EQ(inName,"frameCount") ) { return hx::Val( frameCount ); }
		if (HX_FIELD_EQ(inName,"framesDown") ) { return hx::Val( framesDown ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return hx::Val( frameHeight ); }
		if (HX_FIELD_EQ(inName,"sharedTimer") ) { return hx::Val( sharedTimer ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleShapes") ) { return hx::Val( simpleShapes ); }
		if (HX_FIELD_EQ(inName,"framesAcross") ) { return hx::Val( framesAcross ); }
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return hx::Val( loadGraphics_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"physicsShapes") ) { return hx::Val( physicsShapes ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graphicsLoaded") ) { return hx::Val( graphicsLoaded ); }
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return hx::Val( unloadGraphics_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sharedFrameIndex") ) { return hx::Val( sharedFrameIndex ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"checkImageReadable") ) { return hx::Val( checkImageReadable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Animation_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"UNLOADED") ) { outValue = ( UNLOADED ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateAll") ) { outValue = updateAll_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetStatics") ) { outValue = resetStatics_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allAnimations") ) { outValue = ( allAnimations ); return true; }
	}
	return false;
}

hx::Val Animation_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { sync=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"animID") ) { animID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::com::stencyl::models::actor::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { looping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"animName") ) { animName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgWidth") ) { imgWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"durations") ) { durations=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgHeight") ) { imgHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesDown") ) { framesDown=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharedTimer") ) { sharedTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleShapes") ) { simpleShapes=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesAcross") ) { framesAcross=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"physicsShapes") ) { physicsShapes=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graphicsLoaded") ) { graphicsLoaded=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sharedFrameIndex") ) { sharedFrameIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Animation_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"UNLOADED") ) { UNLOADED=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allAnimations") ) { allAnimations=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("animID","\x2c","\x2c","\x6c","\x64"));
	outFields->push(HX_HCSTRING("animName","\xfc","\x00","\x55","\x7c"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("simpleShapes","\x04","\x84","\x89","\x68"));
	outFields->push(HX_HCSTRING("physicsShapes","\x59","\xd6","\xf8","\x27"));
	outFields->push(HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20"));
	outFields->push(HX_HCSTRING("sync","\x5b","\xba","\x5f","\x4c"));
	outFields->push(HX_HCSTRING("durations","\x9f","\x5a","\xbf","\xe7"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad"));
	outFields->push(HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0"));
	outFields->push(HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("sharedTimer","\xe0","\x9a","\x25","\x6f"));
	outFields->push(HX_HCSTRING("sharedFrameIndex","\xaa","\xd2","\x93","\xb3"));
	outFields->push(HX_HCSTRING("imgWidth","\x03","\xaf","\xa6","\xb6"));
	outFields->push(HX_HCSTRING("imgHeight","\x4a","\xec","\x81","\xd1"));
	outFields->push(HX_HCSTRING("frameCount","\x62","\x79","\x89","\x2d"));
	outFields->push(HX_HCSTRING("framesAcross","\xc5","\xc3","\xea","\xca"));
	outFields->push(HX_HCSTRING("framesDown","\x28","\x9f","\x54","\xb4"));
	outFields->push(HX_HCSTRING("graphicsLoaded","\x30","\xdf","\x3a","\xab"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Animation_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Animation_obj,animID),HX_HCSTRING("animID","\x2c","\x2c","\x6c","\x64")},
	{hx::fsString,(int)offsetof(Animation_obj,animName),HX_HCSTRING("animName","\xfc","\x00","\x55","\x7c")},
	{hx::fsObject /*::com::stencyl::models::actor::Sprite*/ ,(int)offsetof(Animation_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Animation_obj,simpleShapes),HX_HCSTRING("simpleShapes","\x04","\x84","\x89","\x68")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Animation_obj,physicsShapes),HX_HCSTRING("physicsShapes","\x59","\xd6","\xf8","\x27")},
	{hx::fsBool,(int)offsetof(Animation_obj,looping),HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20")},
	{hx::fsBool,(int)offsetof(Animation_obj,sync),HX_HCSTRING("sync","\x5b","\xba","\x5f","\x4c")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Animation_obj,durations),HX_HCSTRING("durations","\x9f","\x5a","\xbf","\xe7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Animation_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsInt,(int)offsetof(Animation_obj,frameWidth),HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad")},
	{hx::fsInt,(int)offsetof(Animation_obj,frameHeight),HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0")},
	{hx::fsFloat,(int)offsetof(Animation_obj,originX),HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55")},
	{hx::fsFloat,(int)offsetof(Animation_obj,originY),HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55")},
	{hx::fsFloat,(int)offsetof(Animation_obj,sharedTimer),HX_HCSTRING("sharedTimer","\xe0","\x9a","\x25","\x6f")},
	{hx::fsInt,(int)offsetof(Animation_obj,sharedFrameIndex),HX_HCSTRING("sharedFrameIndex","\xaa","\xd2","\x93","\xb3")},
	{hx::fsInt,(int)offsetof(Animation_obj,imgWidth),HX_HCSTRING("imgWidth","\x03","\xaf","\xa6","\xb6")},
	{hx::fsInt,(int)offsetof(Animation_obj,imgHeight),HX_HCSTRING("imgHeight","\x4a","\xec","\x81","\xd1")},
	{hx::fsInt,(int)offsetof(Animation_obj,frameCount),HX_HCSTRING("frameCount","\x62","\x79","\x89","\x2d")},
	{hx::fsInt,(int)offsetof(Animation_obj,framesAcross),HX_HCSTRING("framesAcross","\xc5","\xc3","\xea","\xca")},
	{hx::fsInt,(int)offsetof(Animation_obj,framesDown),HX_HCSTRING("framesDown","\x28","\x9f","\x54","\xb4")},
	{hx::fsBool,(int)offsetof(Animation_obj,graphicsLoaded),HX_HCSTRING("graphicsLoaded","\x30","\xdf","\x3a","\xab")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Animation_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Animation_obj::allAnimations,HX_HCSTRING("allAnimations","\x70","\x45","\x54","\x02")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &Animation_obj::UNLOADED,HX_HCSTRING("UNLOADED","\x1e","\x07","\x3c","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Animation_obj_sMemberFields[] = {
	HX_HCSTRING("animID","\x2c","\x2c","\x6c","\x64"),
	HX_HCSTRING("animName","\xfc","\x00","\x55","\x7c"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("simpleShapes","\x04","\x84","\x89","\x68"),
	HX_HCSTRING("physicsShapes","\x59","\xd6","\xf8","\x27"),
	HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20"),
	HX_HCSTRING("sync","\x5b","\xba","\x5f","\x4c"),
	HX_HCSTRING("durations","\x9f","\x5a","\xbf","\xe7"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad"),
	HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0"),
	HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"),
	HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"),
	HX_HCSTRING("sharedTimer","\xe0","\x9a","\x25","\x6f"),
	HX_HCSTRING("sharedFrameIndex","\xaa","\xd2","\x93","\xb3"),
	HX_HCSTRING("imgWidth","\x03","\xaf","\xa6","\xb6"),
	HX_HCSTRING("imgHeight","\x4a","\xec","\x81","\xd1"),
	HX_HCSTRING("frameCount","\x62","\x79","\x89","\x2d"),
	HX_HCSTRING("framesAcross","\xc5","\xc3","\xea","\xca"),
	HX_HCSTRING("framesDown","\x28","\x9f","\x54","\xb4"),
	HX_HCSTRING("graphicsLoaded","\x30","\xdf","\x3a","\xab"),
	HX_HCSTRING("loadGraphics","\x11","\xe5","\xd0","\xcb"),
	HX_HCSTRING("unloadGraphics","\xea","\xec","\xbd","\xbd"),
	HX_HCSTRING("checkImageReadable","\x83","\x24","\x8d","\x86"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void Animation_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Animation_obj::allAnimations,"allAnimations");
	HX_MARK_MEMBER_NAME(Animation_obj::UNLOADED,"UNLOADED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Animation_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Animation_obj::allAnimations,"allAnimations");
	HX_VISIT_MEMBER_NAME(Animation_obj::UNLOADED,"UNLOADED");
};

#endif

hx::Class Animation_obj::__mClass;

static ::String Animation_obj_sStaticFields[] = {
	HX_HCSTRING("allAnimations","\x70","\x45","\x54","\x02"),
	HX_HCSTRING("UNLOADED","\x1e","\x07","\x3c","\xb4"),
	HX_HCSTRING("resetStatics","\xf6","\x81","\x43","\xa8"),
	HX_HCSTRING("updateAll","\x98","\xd6","\xd6","\x82"),
	::String(null())
};

void Animation_obj::__register()
{
	hx::Object *dummy = new Animation_obj;
	Animation_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.models.actor.Animation","\x36","\xc4","\x93","\xe4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Animation_obj::__GetStatic;
	__mClass->mSetStaticField = &Animation_obj::__SetStatic;
	__mClass->mMarkFunc = Animation_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Animation_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Animation_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Animation_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Animation_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Animation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Animation_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Animation_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4306bb0b993de4fd_43_boot)
HXDLIN(  43)		allAnimations = ::Array_obj< ::Dynamic>::__new();
            	}
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor
