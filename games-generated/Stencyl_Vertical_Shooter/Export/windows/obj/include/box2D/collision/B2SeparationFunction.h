// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_collision_B2SeparationFunction
#define INCLUDED_box2D_collision_B2SeparationFunction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2DistanceProxy)
HX_DECLARE_CLASS2(box2D,collision,B2SeparationFunction)
HX_DECLARE_CLASS2(box2D,collision,B2SimplexCache)
HX_DECLARE_CLASS3(box2D,common,math,B2Transform)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)

namespace box2D{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES B2SeparationFunction_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2SeparationFunction_obj OBJ_;
		B2SeparationFunction_obj();

	public:
		enum { _hx_ClassId = 0x65410803 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.collision.B2SeparationFunction")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.collision.B2SeparationFunction"); }
		static hx::ObjectPtr< B2SeparationFunction_obj > __new();
		static hx::ObjectPtr< B2SeparationFunction_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2SeparationFunction_obj();

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
		::String __ToString() const { return HX_HCSTRING("B2SeparationFunction","\x4e","\x0f","\xa2","\x52"); }

		static void __boot();
		static int e_points;
		static int e_faceA;
		static int e_faceB;
		void initialize( ::box2D::collision::B2SimplexCache cache, ::box2D::collision::B2DistanceProxy proxyA, ::box2D::common::math::B2Transform transformA, ::box2D::collision::B2DistanceProxy proxyB, ::box2D::common::math::B2Transform transformB);
		::Dynamic initialize_dyn();

		Float evaluate( ::box2D::common::math::B2Transform transformA, ::box2D::common::math::B2Transform transformB);
		::Dynamic evaluate_dyn();

		 ::box2D::collision::B2DistanceProxy m_proxyA;
		 ::box2D::collision::B2DistanceProxy m_proxyB;
		int m_type;
		 ::box2D::common::math::B2Vec2 m_localPoint;
		 ::box2D::common::math::B2Vec2 m_axis;
};

} // end namespace box2D
} // end namespace collision

#endif /* INCLUDED_box2D_collision_B2SeparationFunction */ 
