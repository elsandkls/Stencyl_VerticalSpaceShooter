// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_models_Resource
#define INCLUDED_com_stencyl_models_Resource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,models,Resource)

namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES Resource_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Resource_obj OBJ_;
		Resource_obj();

	public:
		enum { _hx_ClassId = 0x170dc54f };

		void __construct(int ID,::String name,int atlasID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.models.Resource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.models.Resource"); }
		static hx::ObjectPtr< Resource_obj > __new(int ID,::String name,int atlasID);
		static hx::ObjectPtr< Resource_obj > __alloc(hx::Ctx *_hx_ctx,int ID,::String name,int atlasID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Resource_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Resource","\xee","\x18","\x52","\xec"); }

		int ID;
		int atlasID;
		::String name;
		::String sID;
		virtual ::String toString();
		::Dynamic toString_dyn();

		bool isAtlasActive();
		::Dynamic isAtlasActive_dyn();

		virtual void loadGraphics();
		::Dynamic loadGraphics_dyn();

		virtual void unloadGraphics();
		::Dynamic unloadGraphics_dyn();

		virtual void reloadGraphics(int subID);
		::Dynamic reloadGraphics_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_Resource */ 