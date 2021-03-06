// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_Data
#define INCLUDED_com_stencyl_Data

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,stencyl,Data)
HX_DECLARE_CLASS3(com,stencyl,behavior,Behavior)
HX_DECLARE_CLASS3(com,stencyl,io,AbstractReader)
HX_DECLARE_CLASS5(com,stencyl,io,mbs,snippet,MbsSnippetDef)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,actor,ActorType)
HX_DECLARE_CLASS3(com,stencyl,utils,LazyIntMap)
HX_DECLARE_CLASS3(com,stencyl,utils,LazyStringMap)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(mbs,core,MbsObject)
HX_DECLARE_CLASS2(mbs,core,MbsType)
HX_DECLARE_CLASS2(mbs,io,MbsIO)
HX_DECLARE_CLASS2(mbs,io,MbsReader)

namespace com{
namespace stencyl{


class HXCPP_CLASS_ATTRIBUTES Data_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Data_obj OBJ_;
		Data_obj();

	public:
		enum { _hx_ClassId = 0x128aa015 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.Data")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.Data"); }
		static hx::ObjectPtr< Data_obj > __new();
		static hx::ObjectPtr< Data_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Data_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Data","\x4a","\x82","\x3c","\x2d"); }

		static  ::com::stencyl::Data instance;
		static  ::com::stencyl::Data get();
		static ::Dynamic get_dyn();

		static void resetStatics();
		static ::Dynamic resetStatics_dyn();

		::Array< ::Dynamic> readers;
		 ::mbs::io::MbsReader gameMbs;
		 ::mbs::io::MbsReader resourceListMbs;
		 ::mbs::io::MbsReader sceneListMbs;
		 ::mbs::io::MbsReader behaviorListMbs;
		 ::com::stencyl::utils::LazyIntMap resources;
		 ::com::stencyl::utils::LazyStringMap resourceMap;
		 ::com::stencyl::utils::LazyIntMap behaviors;
		 ::haxe::ds::IntMap resourceLookup;
		 ::haxe::ds::StringMap resourceNameLookup;
		 ::haxe::ds::IntMap behaviorLookup;
		 ::com::stencyl::io::mbs::snippet::MbsSnippetDef behaviorReader;
		 ::haxe::ds::ObjectMap resourceReaderPool;
		void loadAll();
		::Dynamic loadAll_dyn();

		void loadReaders();
		::Dynamic loadReaders_dyn();

		void scanBehaviorMbs();
		::Dynamic scanBehaviorMbs_dyn();

		void scanResourceMbs();
		::Dynamic scanResourceMbs_dyn();

		 ::com::stencyl::models::Resource loadResourceFromMbsByName(::String name);
		::Dynamic loadResourceFromMbsByName_dyn();

		 ::com::stencyl::models::Resource loadResourceFromMbs(int id);
		::Dynamic loadResourceFromMbs_dyn();

		void loadAllResourcesOfType( ::mbs::core::MbsType type);
		::Dynamic loadAllResourcesOfType_dyn();

		 ::com::stencyl::behavior::Behavior loadBehaviorFromMbs(int id);
		::Dynamic loadBehaviorFromMbs_dyn();

		 ::com::stencyl::models::Resource readResource(::String type, ::Dynamic object);
		::Dynamic readResource_dyn();

		bool actorTypesLoaded;
		::Array< ::Dynamic> getAllActorTypes();
		::Dynamic getAllActorTypes_dyn();

		void loadAtlas(int atlasID);
		::Dynamic loadAtlas_dyn();

		void unloadAtlas(int atlasID);
		::Dynamic unloadAtlas_dyn();

		void reloadScaledResources();
		::Dynamic reloadScaledResources_dyn();

};

} // end namespace com
} // end namespace stencyl

#endif /* INCLUDED_com_stencyl_Data */ 
