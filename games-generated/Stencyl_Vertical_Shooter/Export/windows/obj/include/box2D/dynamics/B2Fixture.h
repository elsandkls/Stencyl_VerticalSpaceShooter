// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#define INCLUDED_box2D_dynamics_B2Fixture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2AABB)
HX_DECLARE_CLASS2(box2D,collision,B2RayCastInput)
HX_DECLARE_CLASS2(box2D,collision,B2RayCastOutput)
HX_DECLARE_CLASS2(box2D,collision,IBroadPhase)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2MassData)
HX_DECLARE_CLASS3(box2D,collision,shapes,B2Shape)
HX_DECLARE_CLASS3(box2D,common,math,B2Transform)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS2(box2D,dynamics,B2Body)
HX_DECLARE_CLASS2(box2D,dynamics,B2FilterData)
HX_DECLARE_CLASS2(box2D,dynamics,B2Fixture)
HX_DECLARE_CLASS2(box2D,dynamics,B2FixtureDef)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace box2D{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES B2Fixture_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2Fixture_obj OBJ_;
		B2Fixture_obj();

	public:
		enum { _hx_ClassId = 0x44167528 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.dynamics.B2Fixture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.dynamics.B2Fixture"); }
		static hx::ObjectPtr< B2Fixture_obj > __new();
		static hx::ObjectPtr< B2Fixture_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2Fixture_obj();

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
		::String __ToString() const { return HX_HCSTRING("B2Fixture","\xf9","\x3f","\x8a","\x4d"); }

		static void __boot();
		static  ::box2D::collision::B2AABB tempAABB1;
		static  ::box2D::collision::B2AABB tempAABB2;
		int getType();
		::Dynamic getType_dyn();

		 ::box2D::collision::shapes::B2Shape getShape();
		::Dynamic getShape_dyn();

		void setSensor(bool sensor);
		::Dynamic setSensor_dyn();

		bool isSensor();
		::Dynamic isSensor_dyn();

		void setFilterData( ::box2D::dynamics::B2FilterData filter);
		::Dynamic setFilterData_dyn();

		 ::box2D::dynamics::B2FilterData getFilterData();
		::Dynamic getFilterData_dyn();

		 ::box2D::dynamics::B2Body getBody();
		::Dynamic getBody_dyn();

		 ::box2D::dynamics::B2Fixture getNext();
		::Dynamic getNext_dyn();

		 ::com::stencyl::models::Actor getUserData();
		::Dynamic getUserData_dyn();

		void SetUserData( ::com::stencyl::models::Actor data);
		::Dynamic SetUserData_dyn();

		bool testPoint( ::box2D::common::math::B2Vec2 p);
		::Dynamic testPoint_dyn();

		bool rayCast( ::box2D::collision::B2RayCastOutput output, ::box2D::collision::B2RayCastInput input);
		::Dynamic rayCast_dyn();

		 ::box2D::collision::shapes::B2MassData getMassData( ::box2D::collision::shapes::B2MassData massData);
		::Dynamic getMassData_dyn();

		void setDensity(Float density);
		::Dynamic setDensity_dyn();

		Float getDensity();
		::Dynamic getDensity_dyn();

		Float getFriction();
		::Dynamic getFriction_dyn();

		void setFriction(Float friction);
		::Dynamic setFriction_dyn();

		Float getRestitution();
		::Dynamic getRestitution_dyn();

		void setRestitution(Float restitution);
		::Dynamic setRestitution_dyn();

		 ::box2D::collision::B2AABB getAABB();
		::Dynamic getAABB_dyn();

		void create( ::box2D::dynamics::B2Body body, ::box2D::common::math::B2Transform xf, ::box2D::dynamics::B2FixtureDef def);
		::Dynamic create_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void createProxy(::Dynamic broadPhase, ::box2D::common::math::B2Transform xf);
		::Dynamic createProxy_dyn();

		void destroyProxy(::Dynamic broadPhase);
		::Dynamic destroyProxy_dyn();

		void synchronize(::Dynamic broadPhase, ::box2D::common::math::B2Transform transform1, ::box2D::common::math::B2Transform transform2);
		::Dynamic synchronize_dyn();

		 ::box2D::collision::shapes::B2MassData m_massData;
		 ::box2D::collision::B2AABB m_aabb;
		Float m_density;
		 ::box2D::dynamics::B2Fixture m_next;
		 ::box2D::dynamics::B2Body m_body;
		 ::box2D::collision::shapes::B2Shape m_shape;
		Float m_friction;
		Float m_restitution;
		 ::Dynamic m_proxy;
		 ::box2D::dynamics::B2FilterData m_filter;
		bool m_isSensor;
		 ::com::stencyl::models::Actor m_userData;
		int groupID;
};

} // end namespace box2D
} // end namespace dynamics

#endif /* INCLUDED_box2D_dynamics_B2Fixture */ 