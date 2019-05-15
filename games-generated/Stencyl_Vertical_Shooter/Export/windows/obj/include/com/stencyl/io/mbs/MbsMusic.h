// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_io_mbs_MbsMusic
#define INCLUDED_com_stencyl_io_mbs_MbsMusic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_io_mbs_MbsResource
#include <com/stencyl/io/mbs/MbsResource.h>
#endif
HX_DECLARE_CLASS4(com,stencyl,io,mbs,MbsMusic)
HX_DECLARE_CLASS4(com,stencyl,io,mbs,MbsResource)
HX_DECLARE_CLASS2(mbs,core,ComposedType)
HX_DECLARE_CLASS2(mbs,core,MbsField)
HX_DECLARE_CLASS2(mbs,core,MbsObject)
HX_DECLARE_CLASS2(mbs,core,MbsType)
HX_DECLARE_CLASS2(mbs,io,MbsIO)
HX_DECLARE_CLASS2(mbs,io,MbsList)
HX_DECLARE_CLASS2(mbs,io,MbsListBase)

namespace com{
namespace stencyl{
namespace io{
namespace mbs{


class HXCPP_CLASS_ATTRIBUTES MbsMusic_obj : public  ::com::stencyl::io::mbs::MbsResource_obj
{
	public:
		typedef  ::com::stencyl::io::mbs::MbsResource_obj super;
		typedef MbsMusic_obj OBJ_;
		MbsMusic_obj();

	public:
		enum { _hx_ClassId = 0x2fadfb94 };

		void __construct(::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.io.mbs.MbsMusic")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.io.mbs.MbsMusic"); }
		static hx::ObjectPtr< MbsMusic_obj > __new(::Dynamic data);
		static hx::ObjectPtr< MbsMusic_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MbsMusic_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MbsMusic","\x67","\x88","\xf6","\xbd"); }

		static  ::mbs::core::MbsField loop;
		static  ::mbs::core::MbsField pan;
		static  ::mbs::core::MbsField stream;
		static  ::mbs::core::MbsField type;
		static  ::mbs::core::MbsField volume;
		static  ::mbs::core::ComposedType MBS_MUSIC;
		static void initializeType();
		static ::Dynamic initializeType_dyn();

		static  ::mbs::io::MbsList new_MbsMusic_list(::Dynamic data);
		static ::Dynamic new_MbsMusic_list_dyn();

		 ::mbs::core::MbsType getMbsType();

		void allocateNew();

		bool getLoop();
		::Dynamic getLoop_dyn();

		void setLoop(bool _val);
		::Dynamic setLoop_dyn();

		int getPan();
		::Dynamic getPan_dyn();

		void setPan(int _val);
		::Dynamic setPan_dyn();

		bool getStream();
		::Dynamic getStream_dyn();

		void setStream(bool _val);
		::Dynamic setStream_dyn();

		::String getType();
		::Dynamic getType_dyn();

		void setType(::String _val);
		::Dynamic setType_dyn();

		int getVolume();
		::Dynamic getVolume_dyn();

		void setVolume(int _val);
		::Dynamic setVolume_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs

#endif /* INCLUDED_com_stencyl_io_mbs_MbsMusic */ 