// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_models_GroupDef
#define INCLUDED_com_stencyl_models_GroupDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c1ae6c0a68dc826d_9_new)
HX_DECLARE_CLASS3(com,stencyl,models,GroupDef)

namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES GroupDef_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GroupDef_obj OBJ_;
		GroupDef_obj();

	public:
		enum { _hx_ClassId = 0x20efaa1b };

		void __construct(int ID,::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.models.GroupDef")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.models.GroupDef"); }

		hx::ObjectPtr< GroupDef_obj > __new(int ID,::String name) {
			hx::ObjectPtr< GroupDef_obj > __this = new GroupDef_obj();
			__this->__construct(ID,name);
			return __this;
		}

		static hx::ObjectPtr< GroupDef_obj > __alloc(hx::Ctx *_hx_ctx,int ID,::String name) {
			GroupDef_obj *__this = (GroupDef_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GroupDef_obj), true, "com.stencyl.models.GroupDef"));
			*(void **)__this = GroupDef_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c1ae6c0a68dc826d_9_new)
HXLINE(  10)		( ( ::com::stencyl::models::GroupDef)(__this) )->ID = ID;
HXLINE(  11)		( ( ::com::stencyl::models::GroupDef)(__this) )->name = name;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GroupDef_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GroupDef","\xe6","\x4b","\x47","\x6b"); }

		int ID;
		::String name;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_GroupDef */ 