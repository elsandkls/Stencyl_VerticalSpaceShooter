// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_dynamics_B2FixtureDef
#define INCLUDED_box2D_dynamics_B2FixtureDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS2(box2D,dynamics,B2FilterData)
HX_DECLARE_CLASS2(box2D,dynamics,B2FixtureDef)

namespace box2D{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES B2FixtureDef_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2FixtureDef_obj OBJ_;
		B2FixtureDef_obj();

	public:
		enum { _hx_ClassId = 0x5e45257d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.dynamics.B2FixtureDef")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.dynamics.B2FixtureDef"); }
		static hx::ObjectPtr< B2FixtureDef_obj > __new();
		static hx::ObjectPtr< B2FixtureDef_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2FixtureDef_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("B2FixtureDef","\x4c","\x33","\xf1","\x8d"); }

		 ::box2D::collision::shapes::B2Shape shape;
		 ::Dynamic userData;
		Float friction;
		Float restitution;
		Float density;
		bool isSensor;
		 ::box2D::dynamics::B2FilterData filter;
		int groupID;
};

} // end namespace box2D
} // end namespace dynamics

#endif /* INCLUDED_box2D_dynamics_B2FixtureDef */ 
