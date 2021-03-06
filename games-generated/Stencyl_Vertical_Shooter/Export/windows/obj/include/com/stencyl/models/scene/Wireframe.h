// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_models_scene_Wireframe
#define INCLUDED_com_stencyl_models_scene_Wireframe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,models,collision,Mask)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Wireframe)

namespace com{
namespace stencyl{
namespace models{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES Wireframe_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Wireframe_obj OBJ_;
		Wireframe_obj();

	public:
		enum { _hx_ClassId = 0x43b79fb5 };

		void __construct(Float x,Float y,Float width,Float height, ::Dynamic shape, ::com::stencyl::models::collision::Mask shape2);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.models.scene.Wireframe")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.models.scene.Wireframe"); }
		static hx::ObjectPtr< Wireframe_obj > __new(Float x,Float y,Float width,Float height, ::Dynamic shape, ::com::stencyl::models::collision::Mask shape2);
		static hx::ObjectPtr< Wireframe_obj > __alloc(hx::Ctx *_hx_ctx,Float x,Float y,Float width,Float height, ::Dynamic shape, ::com::stencyl::models::collision::Mask shape2);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Wireframe_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Wireframe","\xa8","\x49","\xd9","\x12"); }

		Float x;
		Float y;
		 ::Dynamic shape;
		 ::com::stencyl::models::collision::Mask shape2;
		Float width;
		Float height;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_Wireframe */ 
