// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_models_scene_TerrainDef
#define INCLUDED_com_stencyl_models_scene_TerrainDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS4(com,stencyl,models,scene,TerrainDef)

namespace com{
namespace stencyl{
namespace models{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES TerrainDef_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TerrainDef_obj OBJ_;
		TerrainDef_obj();

	public:
		enum { _hx_ClassId = 0x37b03a67 };

		void __construct(::Array< ::Dynamic> shapes,int ID,::String name,Float x,Float y,hx::Null< int >  __o_groupID,hx::Null< int >  __o_fillColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.models.scene.TerrainDef")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.models.scene.TerrainDef"); }
		static hx::ObjectPtr< TerrainDef_obj > __new(::Array< ::Dynamic> shapes,int ID,::String name,Float x,Float y,hx::Null< int >  __o_groupID,hx::Null< int >  __o_fillColor);
		static hx::ObjectPtr< TerrainDef_obj > __alloc(hx::Ctx *_hx_ctx,::Array< ::Dynamic> shapes,int ID,::String name,Float x,Float y,hx::Null< int >  __o_groupID,hx::Null< int >  __o_fillColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TerrainDef_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TerrainDef","\x30","\xc9","\x4d","\xd5"); }

		Float x;
		Float y;
		 ::box2D::collision::shapes::B2Shape shape;
		::Array< ::Dynamic> shapes;
		int ID;
		::String name;
		int groupID;
		int fillColor;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_TerrainDef */ 