// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_io_mbs_game_MbsCollisionGroup
#define INCLUDED_com_stencyl_io_mbs_game_MbsCollisionGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mbs_core_MbsObject
#include <mbs/core/MbsObject.h>
#endif
HX_DECLARE_CLASS5(com,stencyl,io,mbs,game,MbsCollisionGroup)
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
namespace game{


class HXCPP_CLASS_ATTRIBUTES MbsCollisionGroup_obj : public  ::mbs::core::MbsObject_obj
{
	public:
		typedef  ::mbs::core::MbsObject_obj super;
		typedef MbsCollisionGroup_obj OBJ_;
		MbsCollisionGroup_obj();

	public:
		enum { _hx_ClassId = 0x2f96456c };

		void __construct(::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.io.mbs.game.MbsCollisionGroup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.io.mbs.game.MbsCollisionGroup"); }
		static hx::ObjectPtr< MbsCollisionGroup_obj > __new(::Dynamic data);
		static hx::ObjectPtr< MbsCollisionGroup_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MbsCollisionGroup_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MbsCollisionGroup","\x6b","\xdd","\x19","\x24"); }

		static  ::mbs::core::MbsField id;
		static  ::mbs::core::MbsField name;
		static  ::mbs::core::ComposedType MBS_COLLISION_GROUP;
		static void initializeType();
		static ::Dynamic initializeType_dyn();

		static  ::mbs::io::MbsList new_MbsCollisionGroup_list(::Dynamic data);
		static ::Dynamic new_MbsCollisionGroup_list_dyn();

		 ::mbs::core::MbsType getMbsType();

		void allocateNew();
		::Dynamic allocateNew_dyn();

		int getId();
		::Dynamic getId_dyn();

		void setId(int _val);
		::Dynamic setId_dyn();

		::String getName();
		::Dynamic getName_dyn();

		void setName(::String _val);
		::Dynamic setName_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs
} // end namespace game

#endif /* INCLUDED_com_stencyl_io_mbs_game_MbsCollisionGroup */ 
