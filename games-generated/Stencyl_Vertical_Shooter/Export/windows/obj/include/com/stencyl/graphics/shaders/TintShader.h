// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_graphics_shaders_TintShader
#define INCLUDED_com_stencyl_graphics_shaders_TintShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BasicShader)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,TintShader)

namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES TintShader_obj : public  ::com::stencyl::graphics::shaders::BasicShader_obj
{
	public:
		typedef  ::com::stencyl::graphics::shaders::BasicShader_obj super;
		typedef TintShader_obj OBJ_;
		TintShader_obj();

	public:
		enum { _hx_ClassId = 0x22f97578 };

		void __construct(int color,hx::Null< Float >  __o_amount);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.graphics.shaders.TintShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.graphics.shaders.TintShader"); }
		static hx::ObjectPtr< TintShader_obj > __new(int color,hx::Null< Float >  __o_amount);
		static hx::ObjectPtr< TintShader_obj > __alloc(hx::Ctx *_hx_ctx,int color,hx::Null< Float >  __o_amount);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TintShader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TintShader","\xa0","\x72","\x8f","\x5a"); }

		void setAmount(Float amount);
		::Dynamic setAmount_dyn();

		void setColor(int color);
		::Dynamic setColor_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_TintShader */ 