// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_io_mbs_shape_MbsPolygon
#define INCLUDED_com_stencyl_io_mbs_shape_MbsPolygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_io_mbs_shape_MbsShape
#include <com/stencyl/io/mbs/shape/MbsShape.h>
#endif
HX_DECLARE_CLASS5(com,stencyl,io,mbs,shape,MbsPolygon)
HX_DECLARE_CLASS5(com,stencyl,io,mbs,shape,MbsShape)
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
namespace shape{


class HXCPP_CLASS_ATTRIBUTES MbsPolygon_obj : public  ::com::stencyl::io::mbs::shape::MbsShape_obj
{
	public:
		typedef  ::com::stencyl::io::mbs::shape::MbsShape_obj super;
		typedef MbsPolygon_obj OBJ_;
		MbsPolygon_obj();

	public:
		enum { _hx_ClassId = 0x1968de7c };

		void __construct(::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.io.mbs.shape.MbsPolygon")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.io.mbs.shape.MbsPolygon"); }
		static hx::ObjectPtr< MbsPolygon_obj > __new(::Dynamic data);
		static hx::ObjectPtr< MbsPolygon_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MbsPolygon_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MbsPolygon","\xbc","\xae","\x5b","\x28"); }

		static  ::mbs::core::MbsField points;
		static  ::mbs::core::ComposedType MBS_POLYGON;
		static void initializeType();
		static ::Dynamic initializeType_dyn();

		static  ::mbs::io::MbsList new_MbsPolygon_list(::Dynamic data);
		static ::Dynamic new_MbsPolygon_list_dyn();

		virtual  ::mbs::core::MbsType getMbsType();

		 ::mbs::io::MbsList _points;
		virtual void allocateNew();

		 ::mbs::io::MbsList getPoints();
		::Dynamic getPoints_dyn();

		 ::mbs::io::MbsList createPoints(int _length);
		::Dynamic createPoints_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs
} // end namespace shape

#endif /* INCLUDED_com_stencyl_io_mbs_shape_MbsPolygon */ 
