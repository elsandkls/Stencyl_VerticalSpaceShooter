// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_collision_B2AABB
#define INCLUDED_box2D_collision_B2AABB

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2AABB)
HX_DECLARE_CLASS2(box2D,collision,B2RayCastInput)
HX_DECLARE_CLASS2(box2D,collision,B2RayCastOutput)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)

namespace box2D{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES B2AABB_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2AABB_obj OBJ_;
		B2AABB_obj();

	public:
		enum { _hx_ClassId = 0x7b839245 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.collision.B2AABB")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.collision.B2AABB"); }
		static hx::ObjectPtr< B2AABB_obj > __new();
		static hx::ObjectPtr< B2AABB_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2AABB_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("B2AABB","\x50","\x3c","\xbf","\x58"); }

		bool isValid();
		::Dynamic isValid_dyn();

		 ::box2D::common::math::B2Vec2 getCenter();
		::Dynamic getCenter_dyn();

		 ::box2D::common::math::B2Vec2 getExtents();
		::Dynamic getExtents_dyn();

		bool contains( ::box2D::collision::B2AABB aabb);
		::Dynamic contains_dyn();

		bool rayCast( ::box2D::collision::B2RayCastOutput output, ::box2D::collision::B2RayCastInput input);
		::Dynamic rayCast_dyn();

		bool testOverlap( ::box2D::collision::B2AABB other);
		::Dynamic testOverlap_dyn();

		void combine( ::box2D::collision::B2AABB aabb1, ::box2D::collision::B2AABB aabb2);
		::Dynamic combine_dyn();

		void reset();
		::Dynamic reset_dyn();

		void setTo( ::box2D::collision::B2AABB other);
		::Dynamic setTo_dyn();

		 ::box2D::common::math::B2Vec2 lowerBound;
		 ::box2D::common::math::B2Vec2 upperBound;
};

} // end namespace box2D
} // end namespace collision

#endif /* INCLUDED_box2D_collision_B2AABB */ 