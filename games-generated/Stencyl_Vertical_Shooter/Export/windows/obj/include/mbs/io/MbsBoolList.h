// Generated by Haxe 3.4.7
#ifndef INCLUDED_mbs_io_MbsBoolList
#define INCLUDED_mbs_io_MbsBoolList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mbs_io_MbsListBase
#include <mbs/io/MbsListBase.h>
#endif
HX_DECLARE_CLASS2(mbs,core,MbsObject)
HX_DECLARE_CLASS2(mbs,io,MbsBoolList)
HX_DECLARE_CLASS2(mbs,io,MbsIO)
HX_DECLARE_CLASS2(mbs,io,MbsListBase)

namespace mbs{
namespace io{


class HXCPP_CLASS_ATTRIBUTES MbsBoolList_obj : public  ::mbs::io::MbsListBase_obj
{
	public:
		typedef  ::mbs::io::MbsListBase_obj super;
		typedef MbsBoolList_obj OBJ_;
		MbsBoolList_obj();

	public:
		enum { _hx_ClassId = 0x7a5834c2 };

		void __construct(::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="mbs.io.MbsBoolList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"mbs.io.MbsBoolList"); }
		static hx::ObjectPtr< MbsBoolList_obj > __new(::Dynamic data);
		static hx::ObjectPtr< MbsBoolList_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MbsBoolList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MbsBoolList","\x26","\x37","\x1a","\xac"); }

		bool readBool();
		::Dynamic readBool_dyn();

		void writeBool(bool value);
		::Dynamic writeBool_dyn();

};

} // end namespace mbs
} // end namespace io

#endif /* INCLUDED_mbs_io_MbsBoolList */ 
