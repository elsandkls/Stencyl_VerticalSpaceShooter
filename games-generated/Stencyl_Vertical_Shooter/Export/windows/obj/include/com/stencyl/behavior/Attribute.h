// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_behavior_Attribute
#define INCLUDED_com_stencyl_behavior_Attribute

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,behavior,Attribute)

namespace com{
namespace stencyl{
namespace behavior{


class HXCPP_CLASS_ATTRIBUTES Attribute_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Attribute_obj OBJ_;
		Attribute_obj();

	public:
		enum { _hx_ClassId = 0x13581f9b };

		void __construct(int ID,::String fieldName,::String fullName, ::Dynamic value,::String type, ::Dynamic parent,bool hidden);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.behavior.Attribute")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.behavior.Attribute"); }
		static hx::ObjectPtr< Attribute_obj > __new(int ID,::String fieldName,::String fullName, ::Dynamic value,::String type, ::Dynamic parent,bool hidden);
		static hx::ObjectPtr< Attribute_obj > __alloc(hx::Ctx *_hx_ctx,int ID,::String fieldName,::String fullName, ::Dynamic value,::String type, ::Dynamic parent,bool hidden);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Attribute_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Attribute","\xfc","\x4f","\xc3","\x9c"); }

		int ID;
		::String fieldName;
		::String fullName;
		::String type;
		::String defaultValue;
		 ::Dynamic value;
		 ::Dynamic realValue;
		 ::Dynamic parent;
		bool hidden;
		 ::Dynamic getRealValue();
		::Dynamic getRealValue_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace behavior

#endif /* INCLUDED_com_stencyl_behavior_Attribute */ 