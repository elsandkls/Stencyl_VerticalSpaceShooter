// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Animation
#include <com/stencyl/models/actor/Animation.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Sprite
#include <com/stencyl/models/actor/Sprite.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntHashTable
#include <de/polygonal/ds/IntHashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Map
#include <de/polygonal/ds/Map.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6b3db1b6c03515d7_15_new,"com.stencyl.models.actor.Sprite","new",0x730c1a05,"com.stencyl.models.actor.Sprite.new","com/stencyl/models/actor/Sprite.hx",15,0x9b34288b)
HX_LOCAL_STACK_FRAME(_hx_pos_6b3db1b6c03515d7_28_loadGraphics,"com.stencyl.models.actor.Sprite","loadGraphics",0x6e46becc,"com.stencyl.models.actor.Sprite.loadGraphics","com/stencyl/models/actor/Sprite.hx",28,0x9b34288b)
HX_LOCAL_STACK_FRAME(_hx_pos_6b3db1b6c03515d7_36_unloadGraphics,"com.stencyl.models.actor.Sprite","unloadGraphics",0x4ca9eb65,"com.stencyl.models.actor.Sprite.unloadGraphics","com/stencyl/models/actor/Sprite.hx",36,0x9b34288b)
HX_LOCAL_STACK_FRAME(_hx_pos_6b3db1b6c03515d7_43_reloadGraphics,"com.stencyl.models.actor.Sprite","reloadGraphics",0x90dd87bf,"com.stencyl.models.actor.Sprite.reloadGraphics","com/stencyl/models/actor/Sprite.hx",43,0x9b34288b)
HX_LOCAL_STACK_FRAME(_hx_pos_6b3db1b6c03515d7_68_get_width,"com.stencyl.models.actor.Sprite","get_width",0xc6f6a5c2,"com.stencyl.models.actor.Sprite.get_width","com/stencyl/models/actor/Sprite.hx",68,0x9b34288b)
HX_LOCAL_STACK_FRAME(_hx_pos_6b3db1b6c03515d7_74_get_height,"com.stencyl.models.actor.Sprite","get_height",0x0729dcab,"com.stencyl.models.actor.Sprite.get_height","com/stencyl/models/actor/Sprite.hx",74,0x9b34288b)
namespace com{
namespace stencyl{
namespace models{
namespace actor{

void Sprite_obj::__construct(int ID,int atlasID,::String name,int defaultAnimation,bool readableImages){
            	HX_GC_STACKFRAME(&_hx_pos_6b3db1b6c03515d7_15_new)
HXLINE(  16)		super::__construct(ID,name,atlasID);
HXLINE(  18)		this->defaultAnimation = defaultAnimation;
HXLINE(  19)		this->readableImages = readableImages;
HXLINE(  21)		this->animations =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic Sprite_obj::__CreateEmpty() { return new Sprite_obj; }

void *Sprite_obj::_hx_vtable = 0;

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sprite_obj > _hx_result = new Sprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Sprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x170dc54f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x170dc54f;
	} else {
		return inClassId==(int)0x6f2c5c85;
	}
}

void Sprite_obj::loadGraphics(){
            	HX_STACKFRAME(&_hx_pos_6b3db1b6c03515d7_28_loadGraphics)
HXDLIN(  28)		 ::Dynamic a = this->animations->iterator();
HXDLIN(  28)		while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXDLIN(  28)			 ::com::stencyl::models::actor::Animation a1 = ( ( ::com::stencyl::models::actor::Animation)(a->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  30)			a1->loadGraphics();
            		}
            	}


void Sprite_obj::unloadGraphics(){
            	HX_STACKFRAME(&_hx_pos_6b3db1b6c03515d7_36_unloadGraphics)
HXDLIN(  36)		 ::Dynamic a = this->animations->iterator();
HXDLIN(  36)		while(( (bool)(a->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXDLIN(  36)			 ::com::stencyl::models::actor::Animation a1 = ( ( ::com::stencyl::models::actor::Animation)(a->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  38)			a1->unloadGraphics();
            		}
            	}


void Sprite_obj::reloadGraphics(int subID){
            	HX_STACKFRAME(&_hx_pos_6b3db1b6c03515d7_43_reloadGraphics)
HXLINE(  44)		if ((subID == (int)-1)) {
HXLINE(  46)			this->unloadGraphics();
HXLINE(  47)			this->loadGraphics();
            		}
            		else {
HXLINE(  51)			this->animations->get(subID).StaticCast<  ::com::stencyl::models::actor::Animation >()->unloadGraphics();
HXLINE(  52)			this->animations->get(subID).StaticCast<  ::com::stencyl::models::actor::Animation >()->loadGraphics();
            		}
HXLINE(  55)		{
HXLINE(  55)			::Dynamic actor = ::com::stencyl::Engine_obj::engine->allActors->iterator();
HXDLIN(  55)			while(::de::polygonal::ds::Itr_obj::hasNext(actor)){
HXLINE(  55)				 ::com::stencyl::models::Actor actor1 = ( ( ::com::stencyl::models::Actor)(::de::polygonal::ds::Itr_obj::next(actor)) );
HXLINE(  57)				bool _hx_tmp;
HXDLIN(  57)				bool _hx_tmp1;
HXDLIN(  57)				if (hx::IsNotNull( actor1 )) {
HXLINE(  57)					_hx_tmp1 = !(actor1->dead);
            				}
            				else {
HXLINE(  57)					_hx_tmp1 = false;
            				}
HXDLIN(  57)				if (_hx_tmp1) {
HXLINE(  57)					_hx_tmp = !(actor1->recycled);
            				}
            				else {
HXLINE(  57)					_hx_tmp = false;
            				}
HXDLIN(  57)				if (_hx_tmp) {
HXLINE(  59)					if ((actor1->type->spriteID == this->ID)) {
HXLINE(  61)						actor1->reloadAnimationGraphics(subID);
            					}
            				}
            			}
            		}
            	}


int Sprite_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_6b3db1b6c03515d7_68_get_width)
HXLINE(  69)		 ::com::stencyl::models::actor::Animation defaultAnim = this->animations->get(this->defaultAnimation).StaticCast<  ::com::stencyl::models::actor::Animation >();
HXLINE(  70)		return ::Std_obj::_hx_int(((Float)defaultAnim->imgWidth / (Float)defaultAnim->framesAcross));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_width,return )

int Sprite_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_6b3db1b6c03515d7_74_get_height)
HXLINE(  75)		 ::com::stencyl::models::actor::Animation defaultAnim = this->animations->get(this->defaultAnimation).StaticCast<  ::com::stencyl::models::actor::Animation >();
HXLINE(  76)		return ::Std_obj::_hx_int(((Float)defaultAnim->imgHeight / (Float)defaultAnim->framesDown));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_height,return )


hx::ObjectPtr< Sprite_obj > Sprite_obj::__new(int ID,int atlasID,::String name,int defaultAnimation,bool readableImages) {
	hx::ObjectPtr< Sprite_obj > __this = new Sprite_obj();
	__this->__construct(ID,atlasID,name,defaultAnimation,readableImages);
	return __this;
}

hx::ObjectPtr< Sprite_obj > Sprite_obj::__alloc(hx::Ctx *_hx_ctx,int ID,int atlasID,::String name,int defaultAnimation,bool readableImages) {
	Sprite_obj *__this = (Sprite_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sprite_obj), true, "com.stencyl.models.actor.Sprite"));
	*(void **)__this = Sprite_obj::_hx_vtable;
	__this->__construct(ID,atlasID,name,defaultAnimation,readableImages);
	return __this;
}

Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(defaultAnimation,"defaultAnimation");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(readableImages,"readableImages");
	 ::com::stencyl::models::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaultAnimation,"defaultAnimation");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(readableImages,"readableImages");
	 ::com::stencyl::models::Resource_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Sprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_width() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_height() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return hx::Val( animations ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return hx::Val( loadGraphics_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readableImages") ) { return hx::Val( readableImages ); }
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return hx::Val( unloadGraphics_dyn() ); }
		if (HX_FIELD_EQ(inName,"reloadGraphics") ) { return hx::Val( reloadGraphics_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defaultAnimation") ) { return hx::Val( defaultAnimation ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Sprite_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readableImages") ) { readableImages=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defaultAnimation") ) { defaultAnimation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("defaultAnimation","\x03","\x56","\x2d","\x0e"));
	outFields->push(HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"));
	outFields->push(HX_HCSTRING("readableImages","\xc8","\x74","\x93","\xcf"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Sprite_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sprite_obj,defaultAnimation),HX_HCSTRING("defaultAnimation","\x03","\x56","\x2d","\x0e")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Sprite_obj,animations),HX_HCSTRING("animations","\xef","\x34","\x1c","\x83")},
	{hx::fsBool,(int)offsetof(Sprite_obj,readableImages),HX_HCSTRING("readableImages","\xc8","\x74","\x93","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Sprite_obj_sStaticStorageInfo = 0;
#endif

static ::String Sprite_obj_sMemberFields[] = {
	HX_HCSTRING("defaultAnimation","\x03","\x56","\x2d","\x0e"),
	HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"),
	HX_HCSTRING("readableImages","\xc8","\x74","\x93","\xcf"),
	HX_HCSTRING("loadGraphics","\x11","\xe5","\xd0","\xcb"),
	HX_HCSTRING("unloadGraphics","\xea","\xec","\xbd","\xbd"),
	HX_HCSTRING("reloadGraphics","\x44","\x89","\xf1","\x01"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	::String(null()) };

static void Sprite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sprite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Object *dummy = new Sprite_obj;
	Sprite_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.models.actor.Sprite","\x93","\xb3","\x13","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sprite_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Sprite_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sprite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sprite_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor