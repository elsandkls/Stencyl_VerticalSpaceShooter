// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_graphics_shaders_Shader
#define INCLUDED_com_stencyl_graphics_shaders_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,Shader)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)

namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES Shader_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Shader_obj OBJ_;
		Shader_obj();

	public:
		enum { _hx_ClassId = 0x1413f255 };

		void __construct(::Array< ::Dynamic> sources);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.graphics.shaders.Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.graphics.shaders.Shader"); }
		static hx::ObjectPtr< Shader_obj > __new(::Array< ::Dynamic> sources);
		static hx::ObjectPtr< Shader_obj > __alloc(hx::Ctx *_hx_ctx,::Array< ::Dynamic> sources);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

		 ::lime::graphics::opengl::GLObject compile(::String source,int type);
		::Dynamic compile_dyn();

		int attribute(::String a);
		::Dynamic attribute_dyn();

		int uniform(::String u);
		::Dynamic uniform_dyn();

		void bind();
		::Dynamic bind_dyn();

		 ::lime::graphics::opengl::GLObject program;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_Shader */ 
