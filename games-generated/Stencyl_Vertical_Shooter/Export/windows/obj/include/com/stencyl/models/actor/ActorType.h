// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#define INCLUDED_com_stencyl_models_actor_ActorType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
HX_DECLARE_CLASS2(box2D,dynamics,B2BodyDef)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,actor,ActorType)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace com{
namespace stencyl{
namespace models{
namespace actor{


class HXCPP_CLASS_ATTRIBUTES ActorType_obj : public  ::com::stencyl::models::Resource_obj
{
	public:
		typedef  ::com::stencyl::models::Resource_obj super;
		typedef ActorType_obj OBJ_;
		ActorType_obj();

	public:
		enum { _hx_ClassId = 0x46f6d7cf };

		void __construct(int ID,int atlasID,::String name,int groupID,int spriteID, ::haxe::ds::StringMap behaviorValues, ::box2D::dynamics::B2BodyDef bodyDef,int physicsMode,bool autoScale,bool pausable,bool ignoreGravity);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.models.actor.ActorType")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.models.actor.ActorType"); }
		static hx::ObjectPtr< ActorType_obj > __new(int ID,int atlasID,::String name,int groupID,int spriteID, ::haxe::ds::StringMap behaviorValues, ::box2D::dynamics::B2BodyDef bodyDef,int physicsMode,bool autoScale,bool pausable,bool ignoreGravity);
		static hx::ObjectPtr< ActorType_obj > __alloc(hx::Ctx *_hx_ctx,int ID,int atlasID,::String name,int groupID,int spriteID, ::haxe::ds::StringMap behaviorValues, ::box2D::dynamics::B2BodyDef bodyDef,int physicsMode,bool autoScale,bool pausable,bool ignoreGravity);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ActorType_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ActorType","\x2f","\xe8","\xb4","\xc2"); }

		int groupID;
		int spriteID;
		 ::haxe::ds::StringMap behaviorValues;
		 ::box2D::dynamics::B2BodyDef bodyDef;
		int physicsMode;
		bool autoScale;
		bool pausable;
		bool ignoreGravity;
		virtual ::String toString();

		void loadGraphics();

		void unloadGraphics();

};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace actor

#endif /* INCLUDED_com_stencyl_models_actor_ActorType */ 
