// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_io_mbs_scene_layers_MbsColorBackground
#define INCLUDED_com_stencyl_io_mbs_scene_layers_MbsColorBackground

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mbs_core_MbsObject
#include <mbs/core/MbsObject.h>
#endif
HX_DECLARE_CLASS6(com,stencyl,io,mbs,scene,layers,MbsColorBackground)
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
namespace scene{
namespace layers{


class HXCPP_CLASS_ATTRIBUTES MbsColorBackground_obj : public  ::mbs::core::MbsObject_obj
{
	public:
		typedef  ::mbs::core::MbsObject_obj super;
		typedef MbsColorBackground_obj OBJ_;
		MbsColorBackground_obj();

	public:
		enum { _hx_ClassId = 0x7000b1f4 };

		void __construct(::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.io.mbs.scene.layers.MbsColorBackground")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.io.mbs.scene.layers.MbsColorBackground"); }
		static hx::ObjectPtr< MbsColorBackground_obj > __new(::Dynamic data);
		static hx::ObjectPtr< MbsColorBackground_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MbsColorBackground_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MbsColorBackground","\x73","\x81","\x19","\xfa"); }

		static  ::mbs::core::MbsField color;
		static  ::mbs::core::ComposedType MBS_COLOR_BACKGROUND;
		static void initializeType();
		static ::Dynamic initializeType_dyn();

		static  ::mbs::io::MbsList new_MbsColorBackground_list(::Dynamic data);
		static ::Dynamic new_MbsColorBackground_list_dyn();

		 ::mbs::core::MbsType getMbsType();

		void allocateNew();
		::Dynamic allocateNew_dyn();

		int getColor();
		::Dynamic getColor_dyn();

		void setColor(int _val);
		::Dynamic setColor_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs
} // end namespace scene
} // end namespace layers

#endif /* INCLUDED_com_stencyl_io_mbs_scene_layers_MbsColorBackground */ 