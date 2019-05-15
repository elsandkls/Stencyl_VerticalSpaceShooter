// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_collision_B2DynamicTreeBroadPhase
#define INCLUDED_box2D_collision_B2DynamicTreeBroadPhase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_box2D_collision_QueryCallback
#include <box2D/collision/QueryCallback.h>
#endif
#ifndef INCLUDED_box2D_collision_IBroadPhase
#include <box2D/collision/IBroadPhase.h>
#endif
HX_DECLARE_CLASS2(box2D,collision,B2AABB)
HX_DECLARE_CLASS2(box2D,collision,B2DynamicTree)
HX_DECLARE_CLASS2(box2D,collision,B2DynamicTreeBroadPhase)
HX_DECLARE_CLASS2(box2D,collision,B2DynamicTreeNode)
HX_DECLARE_CLASS2(box2D,collision,B2DynamicTreePair)
HX_DECLARE_CLASS2(box2D,collision,B2RayCastInput)
HX_DECLARE_CLASS2(box2D,collision,IBroadPhase)
HX_DECLARE_CLASS2(box2D,collision,QueryCallback)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS2(box2D,dynamics,B2ContactManager)
HX_DECLARE_CLASS2(box2D,dynamics,B2Fixture)

namespace box2D{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES B2DynamicTreeBroadPhase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2DynamicTreeBroadPhase_obj OBJ_;
		B2DynamicTreeBroadPhase_obj();

	public:
		enum { _hx_ClassId = 0x0e69a22d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.collision.B2DynamicTreeBroadPhase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.collision.B2DynamicTreeBroadPhase"); }
		static hx::ObjectPtr< B2DynamicTreeBroadPhase_obj > __new();
		static hx::ObjectPtr< B2DynamicTreeBroadPhase_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2DynamicTreeBroadPhase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("B2DynamicTreeBroadPhase","\xa6","\x38","\xb1","\x4b"); }

		 ::box2D::collision::B2DynamicTreeNode createProxy( ::box2D::collision::B2AABB aabb, ::box2D::dynamics::B2Fixture userData);
		::Dynamic createProxy_dyn();

		void destroyProxy( ::box2D::collision::B2DynamicTreeNode proxy);
		::Dynamic destroyProxy_dyn();

		void moveProxy( ::box2D::collision::B2DynamicTreeNode proxy, ::box2D::collision::B2AABB aabb, ::box2D::common::math::B2Vec2 displacement);
		::Dynamic moveProxy_dyn();

		bool testOverlap( ::box2D::collision::B2DynamicTreeNode proxyA, ::box2D::collision::B2DynamicTreeNode proxyB);
		::Dynamic testOverlap_dyn();

		 ::box2D::dynamics::B2Fixture getUserData( ::box2D::collision::B2DynamicTreeNode proxy);
		::Dynamic getUserData_dyn();

		 ::box2D::collision::B2AABB getFatAABB( ::box2D::collision::B2DynamicTreeNode proxy);
		::Dynamic getFatAABB_dyn();

		int getProxyCount();
		::Dynamic getProxyCount_dyn();

		void updatePairs( ::box2D::dynamics::B2ContactManager manager);
		::Dynamic updatePairs_dyn();

		bool queryCallback( ::box2D::collision::B2DynamicTreeNode proxy);
		::Dynamic queryCallback_dyn();

		void query(::Dynamic callbackMethod, ::box2D::collision::B2AABB aabb);
		::Dynamic query_dyn();

		void rayCast( ::Dynamic callbackMethod, ::box2D::collision::B2RayCastInput input);
		::Dynamic rayCast_dyn();

		void validate();
		::Dynamic validate_dyn();

		void rebalance(int iterations);
		::Dynamic rebalance_dyn();

		void bufferMove( ::box2D::collision::B2DynamicTreeNode proxy);
		::Dynamic bufferMove_dyn();

		void unBufferMove( ::box2D::collision::B2DynamicTreeNode proxy);
		::Dynamic unBufferMove_dyn();

		int comparePairs( ::box2D::collision::B2DynamicTreePair pair1, ::box2D::collision::B2DynamicTreePair pair2);
		::Dynamic comparePairs_dyn();

		 ::box2D::collision::B2DynamicTree m_tree;
		int m_proxyCount;
		::Array< ::Dynamic> m_moveBuffer;
		::Array< ::Dynamic> m_pairBuffer;
		int m_pairCount;
		 ::box2D::collision::B2DynamicTreeNode cur_queryProxy;
};

} // end namespace box2D
} // end namespace collision

#endif /* INCLUDED_box2D_collision_B2DynamicTreeBroadPhase */ 