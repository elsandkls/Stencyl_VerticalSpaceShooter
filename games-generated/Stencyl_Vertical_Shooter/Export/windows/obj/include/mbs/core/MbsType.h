// Generated by Haxe 3.4.7
#ifndef INCLUDED_mbs_core_MbsType
#define INCLUDED_mbs_core_MbsType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(mbs,core,MbsObject)
HX_DECLARE_CLASS2(mbs,core,MbsType)
HX_DECLARE_CLASS2(mbs,io,MbsIO)

namespace mbs{
namespace core{


class HXCPP_CLASS_ATTRIBUTES MbsType_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MbsType_obj OBJ_;
		MbsType_obj();

	public:
		enum { _hx_ClassId = 0x7a6deafb };

		void __construct(::String name,int size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="mbs.core.MbsType")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"mbs.core.MbsType"); }
		static hx::ObjectPtr< MbsType_obj > __new(::String name,int size);
		static hx::ObjectPtr< MbsType_obj > __alloc(hx::Ctx *_hx_ctx,::String name,int size);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MbsType_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MbsType","\x38","\xe9","\xe4","\x1f"); }

		::String name;
		int size;
		::String getName();
		::Dynamic getName_dyn();

		int getSize();
		::Dynamic getSize_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		virtual  ::mbs::core::MbsObject createInstance(::Dynamic data);
		::Dynamic createInstance_dyn();

};

} // end namespace mbs
} // end namespace core

#endif /* INCLUDED_mbs_core_MbsType */ 