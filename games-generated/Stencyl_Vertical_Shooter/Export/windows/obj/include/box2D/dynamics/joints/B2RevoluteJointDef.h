// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJointDef
#define INCLUDED_box2D_dynamics_joints_B2RevoluteJointDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS2(box2D,dynamics,B2Body)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2JointDef)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2RevoluteJointDef)

namespace box2D{
namespace dynamics{
namespace joints{


class HXCPP_CLASS_ATTRIBUTES B2RevoluteJointDef_obj : public  ::box2D::dynamics::joints::B2JointDef_obj
{
	public:
		typedef  ::box2D::dynamics::joints::B2JointDef_obj super;
		typedef B2RevoluteJointDef_obj OBJ_;
		B2RevoluteJointDef_obj();

	public:
		enum { _hx_ClassId = 0x2b5da5c3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.dynamics.joints.B2RevoluteJointDef")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.dynamics.joints.B2RevoluteJointDef"); }
		static hx::ObjectPtr< B2RevoluteJointDef_obj > __new();
		static hx::ObjectPtr< B2RevoluteJointDef_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2RevoluteJointDef_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("B2RevoluteJointDef","\x71","\x86","\xa7","\x0c"); }

		void initialize( ::box2D::dynamics::B2Body bA, ::box2D::dynamics::B2Body bB, ::box2D::common::math::B2Vec2 anchor);
		::Dynamic initialize_dyn();

		 ::box2D::common::math::B2Vec2 localAnchorA;
		 ::box2D::common::math::B2Vec2 localAnchorB;
		Float referenceAngle;
		bool enableLimit;
		Float lowerAngle;
		Float upperAngle;
		bool enableMotor;
		Float motorSpeed;
		Float maxMotorTorque;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints

#endif /* INCLUDED_box2D_dynamics_joints_B2RevoluteJointDef */ 