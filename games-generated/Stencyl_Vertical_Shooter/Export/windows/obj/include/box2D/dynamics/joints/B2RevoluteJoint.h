// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJoint
#define INCLUDED_box2D_dynamics_joints_B2RevoluteJoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
HX_DECLARE_CLASS3(box2D,common,math,B2Mat22)
HX_DECLARE_CLASS3(box2D,common,math,B2Mat33)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec2)
HX_DECLARE_CLASS3(box2D,common,math,B2Vec3)
HX_DECLARE_CLASS2(box2D,dynamics,B2TimeStep)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2Joint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2JointDef)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2RevoluteJoint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2RevoluteJointDef)

namespace box2D{
namespace dynamics{
namespace joints{


class HXCPP_CLASS_ATTRIBUTES B2RevoluteJoint_obj : public  ::box2D::dynamics::joints::B2Joint_obj
{
	public:
		typedef  ::box2D::dynamics::joints::B2Joint_obj super;
		typedef B2RevoluteJoint_obj OBJ_;
		B2RevoluteJoint_obj();

	public:
		enum { _hx_ClassId = 0x6f07845a };

		void __construct( ::box2D::dynamics::joints::B2RevoluteJointDef def);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.dynamics.joints.B2RevoluteJoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.dynamics.joints.B2RevoluteJoint"); }
		static hx::ObjectPtr< B2RevoluteJoint_obj > __new( ::box2D::dynamics::joints::B2RevoluteJointDef def);
		static hx::ObjectPtr< B2RevoluteJoint_obj > __alloc(hx::Ctx *_hx_ctx, ::box2D::dynamics::joints::B2RevoluteJointDef def);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2RevoluteJoint_obj();

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
		::String __ToString() const { return HX_HCSTRING("B2RevoluteJoint","\xb4","\xb3","\xb8","\xbe"); }

		static void __boot();
		static  ::box2D::common::math::B2Vec2 tImpulse;
		 ::box2D::common::math::B2Vec2 getAnchorA();

		 ::box2D::common::math::B2Vec2 getAnchorB();

		 ::box2D::common::math::B2Vec2 getReactionForce(Float inv_dt);

		Float getReactionTorque(Float inv_dt);

		Float getJointAngle();
		::Dynamic getJointAngle_dyn();

		Float getJointSpeed();
		::Dynamic getJointSpeed_dyn();

		bool isLimitEnabled();
		::Dynamic isLimitEnabled_dyn();

		void enableLimit(bool flag);
		::Dynamic enableLimit_dyn();

		Float getLowerLimit();
		::Dynamic getLowerLimit_dyn();

		Float getUpperLimit();
		::Dynamic getUpperLimit_dyn();

		void setLimits(Float lower,Float upper);
		::Dynamic setLimits_dyn();

		bool isMotorEnabled();
		::Dynamic isMotorEnabled_dyn();

		void enableMotor(bool flag);
		::Dynamic enableMotor_dyn();

		void setMotorSpeed(Float speed);
		::Dynamic setMotorSpeed_dyn();

		Float getMotorSpeed();
		::Dynamic getMotorSpeed_dyn();

		void setMaxMotorTorque(Float torque);
		::Dynamic setMaxMotorTorque_dyn();

		Float getMotorTorque();
		::Dynamic getMotorTorque_dyn();

		 ::box2D::common::math::B2Mat22 K;
		 ::box2D::common::math::B2Mat22 K1;
		 ::box2D::common::math::B2Mat22 K2;
		 ::box2D::common::math::B2Mat22 K3;
		void initVelocityConstraints( ::box2D::dynamics::B2TimeStep step);

		 ::box2D::common::math::B2Vec3 impulse3;
		 ::box2D::common::math::B2Vec2 impulse2;
		 ::box2D::common::math::B2Vec2 reduced;
		void solveVelocityConstraints( ::box2D::dynamics::B2TimeStep step);

		bool solvePositionConstraints(Float baumgarte);

		 ::box2D::common::math::B2Vec2 m_localAnchor1;
		 ::box2D::common::math::B2Vec2 m_localAnchor2;
		 ::box2D::common::math::B2Vec3 m_impulse;
		Float m_motorImpulse;
		 ::box2D::common::math::B2Mat33 m_mass;
		Float m_motorMass;
		bool m_enableMotor;
		Float m_maxMotorTorque;
		Float m_motorSpeed;
		bool m_enableLimit;
		Float m_referenceAngle;
		Float m_lowerAngle;
		Float m_upperAngle;
		int m_limitState;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints

#endif /* INCLUDED_box2D_dynamics_joints_B2RevoluteJoint */ 
