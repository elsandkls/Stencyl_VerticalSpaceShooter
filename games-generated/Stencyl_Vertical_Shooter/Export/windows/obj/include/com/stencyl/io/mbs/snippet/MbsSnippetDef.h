// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_io_mbs_snippet_MbsSnippetDef
#define INCLUDED_com_stencyl_io_mbs_snippet_MbsSnippetDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mbs_core_MbsObject
#include <mbs/core/MbsObject.h>
#endif
HX_DECLARE_CLASS5(com,stencyl,io,mbs,snippet,MbsSnippetDef)
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
namespace snippet{


class HXCPP_CLASS_ATTRIBUTES MbsSnippetDef_obj : public  ::mbs::core::MbsObject_obj
{
	public:
		typedef  ::mbs::core::MbsObject_obj super;
		typedef MbsSnippetDef_obj OBJ_;
		MbsSnippetDef_obj();

	public:
		enum { _hx_ClassId = 0x56e7090e };

		void __construct(::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.io.mbs.snippet.MbsSnippetDef")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.io.mbs.snippet.MbsSnippetDef"); }
		static hx::ObjectPtr< MbsSnippetDef_obj > __new(::Dynamic data);
		static hx::ObjectPtr< MbsSnippetDef_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MbsSnippetDef_obj();

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
		::String __ToString() const { return HX_HCSTRING("MbsSnippetDef","\xe6","\x55","\x5e","\xe9"); }

		static  ::mbs::core::MbsField attachedEvent;
		static  ::mbs::core::MbsField actorID;
		static  ::mbs::core::MbsField classname;
		static  ::mbs::core::MbsField description;
		static  ::mbs::core::MbsField design;
		static  ::mbs::core::MbsField drawOrder;
		static  ::mbs::core::MbsField id;
		static  ::mbs::core::MbsField name;
		static  ::mbs::core::MbsField packageName;
		static  ::mbs::core::MbsField sceneID;
		static  ::mbs::core::MbsField type;
		static  ::mbs::core::MbsField attributes;
		static  ::mbs::core::MbsField blocks;
		static  ::mbs::core::MbsField events;
		static  ::mbs::core::ComposedType MBS_SNIPPET_DEF;
		static void initializeType();
		static ::Dynamic initializeType_dyn();

		static  ::mbs::io::MbsList new_MbsSnippetDef_list(::Dynamic data);
		static ::Dynamic new_MbsSnippetDef_list_dyn();

		 ::mbs::core::MbsType getMbsType();

		 ::mbs::io::MbsList _attributes;
		 ::mbs::io::MbsList _blocks;
		 ::mbs::io::MbsList _events;
		void allocateNew();
		::Dynamic allocateNew_dyn();

		bool getAttachedEvent();
		::Dynamic getAttachedEvent_dyn();

		void setAttachedEvent(bool _val);
		::Dynamic setAttachedEvent_dyn();

		int getActorID();
		::Dynamic getActorID_dyn();

		void setActorID(int _val);
		::Dynamic setActorID_dyn();

		::String getClassname();
		::Dynamic getClassname_dyn();

		void setClassname(::String _val);
		::Dynamic setClassname_dyn();

		::String getDescription();
		::Dynamic getDescription_dyn();

		void setDescription(::String _val);
		::Dynamic setDescription_dyn();

		bool getDesign();
		::Dynamic getDesign_dyn();

		void setDesign(bool _val);
		::Dynamic setDesign_dyn();

		int getDrawOrder();
		::Dynamic getDrawOrder_dyn();

		void setDrawOrder(int _val);
		::Dynamic setDrawOrder_dyn();

		int getId();
		::Dynamic getId_dyn();

		void setId(int _val);
		::Dynamic setId_dyn();

		::String getName();
		::Dynamic getName_dyn();

		void setName(::String _val);
		::Dynamic setName_dyn();

		::String getPackageName();
		::Dynamic getPackageName_dyn();

		void setPackageName(::String _val);
		::Dynamic setPackageName_dyn();

		int getSceneID();
		::Dynamic getSceneID_dyn();

		void setSceneID(int _val);
		::Dynamic setSceneID_dyn();

		::String getType();
		::Dynamic getType_dyn();

		void setType(::String _val);
		::Dynamic setType_dyn();

		 ::mbs::io::MbsList getAttributes();
		::Dynamic getAttributes_dyn();

		 ::mbs::io::MbsList createAttributes(int _length);
		::Dynamic createAttributes_dyn();

		 ::mbs::io::MbsList getBlocks();
		::Dynamic getBlocks_dyn();

		 ::mbs::io::MbsList createBlocks(int _length);
		::Dynamic createBlocks_dyn();

		 ::mbs::io::MbsList getEvents();
		::Dynamic getEvents_dyn();

		 ::mbs::io::MbsList createEvents(int _length);
		::Dynamic createEvents_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs
} // end namespace snippet

#endif /* INCLUDED_com_stencyl_io_mbs_snippet_MbsSnippetDef */ 
