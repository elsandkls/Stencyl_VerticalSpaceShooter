// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_dynamics_contacts_ReferenceFace
#define INCLUDED_box2D_dynamics_contacts_ReferenceFace

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,ReferenceFace)

namespace box2D{
namespace dynamics{
namespace contacts{


class HXCPP_CLASS_ATTRIBUTES ReferenceFace_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ReferenceFace_obj OBJ_;
		ReferenceFace_obj();

	public:
		enum { _hx_ClassId = 0x14a434ec };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.dynamics.contacts.ReferenceFace")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.dynamics.contacts.ReferenceFace"); }
		static hx::ObjectPtr< ReferenceFace_obj > __new();
		static hx::ObjectPtr< ReferenceFace_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ReferenceFace_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ReferenceFace","\xe8","\x79","\x2b","\xc8"); }

		int i1;
		int i2;
		 ::box2D::common::math::B2Vec2 v1;
		 ::box2D::common::math::B2Vec2 v2;
		 ::box2D::common::math::B2Vec2 normal;
		 ::box2D::common::math::B2Vec2 sideNormal1;
		 ::box2D::common::math::B2Vec2 sideNormal2;
		Float sideOffset1;
		Float sideOffset2;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts

#endif /* INCLUDED_box2D_dynamics_contacts_ReferenceFace */ 
