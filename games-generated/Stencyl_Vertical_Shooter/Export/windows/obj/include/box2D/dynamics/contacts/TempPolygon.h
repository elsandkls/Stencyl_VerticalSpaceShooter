// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_dynamics_contacts_TempPolygon
#define INCLUDED_box2D_dynamics_contacts_TempPolygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,TempPolygon)

namespace box2D{
namespace dynamics{
namespace contacts{


class HXCPP_CLASS_ATTRIBUTES TempPolygon_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TempPolygon_obj OBJ_;
		TempPolygon_obj();

	public:
		enum { _hx_ClassId = 0x38850846 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.dynamics.contacts.TempPolygon")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.dynamics.contacts.TempPolygon"); }
		static hx::ObjectPtr< TempPolygon_obj > __new();
		static hx::ObjectPtr< TempPolygon_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TempPolygon_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TempPolygon","\xa6","\x49","\x1a","\xdd"); }

		::Array< ::Dynamic> vertices;
		::Array< ::Dynamic> normals;
		int count;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts

#endif /* INCLUDED_box2D_dynamics_contacts_TempPolygon */ 
