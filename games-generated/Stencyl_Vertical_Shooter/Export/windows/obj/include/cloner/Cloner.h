// Generated by Haxe 3.4.7
#ifndef INCLUDED_cloner_Cloner
#define INCLUDED_cloner_Cloner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cloner,Cloner)
HX_DECLARE_CLASS1(cloner,MapCloner)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace cloner{


class HXCPP_CLASS_ATTRIBUTES Cloner_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Cloner_obj OBJ_;
		Cloner_obj();

	public:
		enum { _hx_ClassId = 0x08ddf0ca };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cloner.Cloner")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"cloner.Cloner"); }
		static hx::ObjectPtr< Cloner_obj > __new();
		static hx::ObjectPtr< Cloner_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Cloner_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Cloner","\x95","\x52","\xe2","\x42"); }

		 ::haxe::ds::ObjectMap cache;
		 ::haxe::ds::StringMap classHandles;
		 ::cloner::MapCloner stringMapCloner;
		 ::cloner::MapCloner intMapCloner;
		::String returnString(::String v);
		::Dynamic returnString_dyn();

		 ::Dynamic clone( ::Dynamic v);
		::Dynamic clone_dyn();

		 ::Dynamic _clone( ::Dynamic v);
		::Dynamic _clone_dyn();

		 ::Dynamic handleAnonymous( ::Dynamic v);
		::Dynamic handleAnonymous_dyn();

		 ::Dynamic handleClass(hx::Class c, ::Dynamic inValue);
		::Dynamic handleClass_dyn();

		::cpp::VirtualArray cloneArray(::cpp::VirtualArray inValue);
		::Dynamic cloneArray_dyn();

		 ::Dynamic cloneClass( ::Dynamic inValue);
		::Dynamic cloneClass_dyn();

};

} // end namespace cloner

#endif /* INCLUDED_cloner_Cloner */ 
