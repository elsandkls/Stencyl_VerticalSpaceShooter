// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_io_mbs_actortype_MbsSprite
#define INCLUDED_com_stencyl_io_mbs_actortype_MbsSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_io_mbs_MbsResource
#include <com/stencyl/io/mbs/MbsResource.h>
#endif
HX_DECLARE_CLASS4(com,stencyl,io,mbs,MbsResource)
HX_DECLARE_CLASS5(com,stencyl,io,mbs,actortype,MbsSprite)
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
namespace actortype{


class HXCPP_CLASS_ATTRIBUTES MbsSprite_obj : public  ::com::stencyl::io::mbs::MbsResource_obj
{
	public:
		typedef  ::com::stencyl::io::mbs::MbsResource_obj super;
		typedef MbsSprite_obj OBJ_;
		MbsSprite_obj();

	public:
		enum { _hx_ClassId = 0x5052ec3d };

		void __construct(::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.io.mbs.actortype.MbsSprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.io.mbs.actortype.MbsSprite"); }
		static hx::ObjectPtr< MbsSprite_obj > __new(::Dynamic data);
		static hx::ObjectPtr< MbsSprite_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MbsSprite_obj();

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
		::String __ToString() const { return HX_HCSTRING("MbsSprite","\x03","\xee","\x3a","\xfe"); }

		static  ::mbs::core::MbsField defaultAnimation;
		static  ::mbs::core::MbsField readableImages;
		static  ::mbs::core::MbsField height;
		static  ::mbs::core::MbsField width;
		static  ::mbs::core::MbsField animations;
		static  ::mbs::core::ComposedType MBS_SPRITE;
		static void initializeType();
		static ::Dynamic initializeType_dyn();

		static  ::mbs::io::MbsList new_MbsSprite_list(::Dynamic data);
		static ::Dynamic new_MbsSprite_list_dyn();

		 ::mbs::core::MbsType getMbsType();

		 ::mbs::io::MbsList _animations;
		void allocateNew();

		int getDefaultAnimation();
		::Dynamic getDefaultAnimation_dyn();

		void setDefaultAnimation(int _val);
		::Dynamic setDefaultAnimation_dyn();

		bool getReadableImages();
		::Dynamic getReadableImages_dyn();

		void setReadableImages(bool _val);
		::Dynamic setReadableImages_dyn();

		int getHeight();
		::Dynamic getHeight_dyn();

		void setHeight(int _val);
		::Dynamic setHeight_dyn();

		int getWidth();
		::Dynamic getWidth_dyn();

		void setWidth(int _val);
		::Dynamic setWidth_dyn();

		 ::mbs::io::MbsList getAnimations();
		::Dynamic getAnimations_dyn();

		 ::mbs::io::MbsList createAnimations(int _length);
		::Dynamic createAnimations_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs
} // end namespace actortype

#endif /* INCLUDED_com_stencyl_io_mbs_actortype_MbsSprite */ 
