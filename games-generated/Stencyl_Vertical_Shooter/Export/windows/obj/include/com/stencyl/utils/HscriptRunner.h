// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_HscriptRunner
#define INCLUDED_com_stencyl_utils_HscriptRunner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,utils,HscriptRunner)
HX_DECLARE_CLASS1(hscript,Interp)
HX_DECLARE_CLASS1(hscript,Parser)

namespace com{
namespace stencyl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES HscriptRunner_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HscriptRunner_obj OBJ_;
		HscriptRunner_obj();

	public:
		enum { _hx_ClassId = 0x2fe81201 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.utils.HscriptRunner")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.utils.HscriptRunner"); }
		static hx::ObjectPtr< HscriptRunner_obj > __new();
		static hx::ObjectPtr< HscriptRunner_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HscriptRunner_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HscriptRunner","\xa3","\xf2","\x4c","\x71"); }

		 ::hscript::Parser parser;
		 ::hscript::Interp interp;
		void registerVar(::String name, ::Dynamic obj);
		::Dynamic registerVar_dyn();

		void execute(::String script);
		::Dynamic execute_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils

#endif /* INCLUDED_com_stencyl_utils_HscriptRunner */ 
