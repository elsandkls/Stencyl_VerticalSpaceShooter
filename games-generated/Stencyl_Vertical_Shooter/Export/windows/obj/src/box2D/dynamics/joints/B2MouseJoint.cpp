// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Sweep
#include <box2D/common/math/B2Sweep.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2TimeStep
#include <box2D/dynamics/B2TimeStep.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2MouseJoint
#include <box2D/dynamics/joints/B2MouseJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2MouseJointDef
#include <box2D/dynamics/joints/B2MouseJointDef.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_55e6dc3726f18d65_121_new,"box2D.dynamics.joints.B2MouseJoint","new",0x030520e3,"box2D.dynamics.joints.B2MouseJoint.new","box2D/dynamics/joints/B2MouseJoint.hx",121,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_50_getAnchorA,"box2D.dynamics.joints.B2MouseJoint","getAnchorA",0x7fec8813,"box2D.dynamics.joints.B2MouseJoint.getAnchorA","box2D/dynamics/joints/B2MouseJoint.hx",50,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_54_getAnchorB,"box2D.dynamics.joints.B2MouseJoint","getAnchorB",0x7fec8814,"box2D.dynamics.joints.B2MouseJoint.getAnchorB","box2D/dynamics/joints/B2MouseJoint.hx",54,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_59_getReactionForce,"box2D.dynamics.joints.B2MouseJoint","getReactionForce",0x6cc6d8a9,"box2D.dynamics.joints.B2MouseJoint.getReactionForce","box2D/dynamics/joints/B2MouseJoint.hx",59,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_64_getReactionTorque,"box2D.dynamics.joints.B2MouseJoint","getReactionTorque",0x5a40764c,"box2D.dynamics.joints.B2MouseJoint.getReactionTorque","box2D/dynamics/joints/B2MouseJoint.hx",64,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_69_getTarget,"box2D.dynamics.joints.B2MouseJoint","getTarget",0x9d4c914a,"box2D.dynamics.joints.B2MouseJoint.getTarget","box2D/dynamics/joints/B2MouseJoint.hx",69,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_75_setTarget,"box2D.dynamics.joints.B2MouseJoint","setTarget",0x809d7d56,"box2D.dynamics.joints.B2MouseJoint.setTarget","box2D/dynamics/joints/B2MouseJoint.hx",75,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_85_getMaxForce,"box2D.dynamics.joints.B2MouseJoint","getMaxForce",0xd2afd2e0,"box2D.dynamics.joints.B2MouseJoint.getMaxForce","box2D/dynamics/joints/B2MouseJoint.hx",85,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_91_setMaxForce,"box2D.dynamics.joints.B2MouseJoint","setMaxForce",0xdd1cd9ec,"box2D.dynamics.joints.B2MouseJoint.setMaxForce","box2D/dynamics/joints/B2MouseJoint.hx",91,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_97_getFrequency,"box2D.dynamics.joints.B2MouseJoint","getFrequency",0x16012643,"box2D.dynamics.joints.B2MouseJoint.getFrequency","box2D/dynamics/joints/B2MouseJoint.hx",97,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_103_setFrequency,"box2D.dynamics.joints.B2MouseJoint","setFrequency",0x2afa49b7,"box2D.dynamics.joints.B2MouseJoint.setFrequency","box2D/dynamics/joints/B2MouseJoint.hx",103,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_109_getDampingRatio,"box2D.dynamics.joints.B2MouseJoint","getDampingRatio",0x6a31f3a2,"box2D.dynamics.joints.B2MouseJoint.getDampingRatio","box2D/dynamics/joints/B2MouseJoint.hx",109,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_115_setDampingRatio,"box2D.dynamics.joints.B2MouseJoint","setDampingRatio",0x65fd70ae,"box2D.dynamics.joints.B2MouseJoint.setDampingRatio","box2D/dynamics/joints/B2MouseJoint.hx",115,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_162_initVelocityConstraints,"box2D.dynamics.joints.B2MouseJoint","initVelocityConstraints",0x40dfbd2c,"box2D.dynamics.joints.B2MouseJoint.initVelocityConstraints","box2D/dynamics/joints/B2MouseJoint.hx",162,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_235_solveVelocityConstraints,"box2D.dynamics.joints.B2MouseJoint","solveVelocityConstraints",0x57a914b7,"box2D.dynamics.joints.B2MouseJoint.solveVelocityConstraints","box2D/dynamics/joints/B2MouseJoint.hx",235,0x534d54ec)
HX_LOCAL_STACK_FRAME(_hx_pos_55e6dc3726f18d65_286_solvePositionConstraints,"box2D.dynamics.joints.B2MouseJoint","solvePositionConstraints",0x8f8529ab,"box2D.dynamics.joints.B2MouseJoint.solvePositionConstraints","box2D/dynamics/joints/B2MouseJoint.hx",286,0x534d54ec)
namespace box2D{
namespace dynamics{
namespace joints{

void B2MouseJoint_obj::__construct( ::box2D::dynamics::joints::B2MouseJointDef def){
            	HX_GC_STACKFRAME(&_hx_pos_55e6dc3726f18d65_121_new)
HXLINE( 122)		super::__construct(def);
HXLINE( 124)		this->K =  ::box2D::common::math::B2Mat22_obj::__alloc( HX_CTX );
HXLINE( 125)		this->K1 =  ::box2D::common::math::B2Mat22_obj::__alloc( HX_CTX );
HXLINE( 126)		this->K2 =  ::box2D::common::math::B2Mat22_obj::__alloc( HX_CTX );
HXLINE( 128)		this->m_localAnchor =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 129)		this->m_target =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 130)		this->m_impulse =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 132)		this->m_mass =  ::box2D::common::math::B2Mat22_obj::__alloc( HX_CTX );
HXLINE( 133)		this->m_C =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 140)		{
HXLINE( 140)			 ::box2D::common::math::B2Vec2 _this = this->m_target;
HXDLIN( 140)			 ::box2D::common::math::B2Vec2 v = def->target;
HXDLIN( 140)			_this->x = v->x;
HXDLIN( 140)			_this->y = v->y;
            		}
HXLINE( 142)		Float tX = (this->m_target->x - this->m_bodyB->m_xf->position->x);
HXLINE( 143)		Float tY = (this->m_target->y - this->m_bodyB->m_xf->position->y);
HXLINE( 144)		 ::box2D::common::math::B2Mat22 tMat = this->m_bodyB->m_xf->R;
HXLINE( 145)		Float _hx_tmp = (tX * tMat->col1->x);
HXDLIN( 145)		this->m_localAnchor->x = (_hx_tmp + (tY * tMat->col1->y));
HXLINE( 146)		Float _hx_tmp1 = (tX * tMat->col2->x);
HXDLIN( 146)		this->m_localAnchor->y = (_hx_tmp1 + (tY * tMat->col2->y));
HXLINE( 148)		this->m_maxForce = def->maxForce;
HXLINE( 149)		{
HXLINE( 149)			 ::box2D::common::math::B2Vec2 _this1 = this->m_impulse;
HXDLIN( 149)			_this1->x = ((Float)0.0);
HXDLIN( 149)			_this1->y = ((Float)0.0);
            		}
HXLINE( 151)		this->m_frequencyHz = def->frequencyHz;
HXLINE( 152)		this->m_dampingRatio = def->dampingRatio;
HXLINE( 154)		this->m_beta = ((Float)0.0);
HXLINE( 155)		this->m_gamma = ((Float)0.0);
            	}

Dynamic B2MouseJoint_obj::__CreateEmpty() { return new B2MouseJoint_obj; }

void *B2MouseJoint_obj::_hx_vtable = 0;

Dynamic B2MouseJoint_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2MouseJoint_obj > _hx_result = new B2MouseJoint_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool B2MouseJoint_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13310c20) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x13310c20;
	} else {
		return inClassId==(int)0x7412524f;
	}
}

 ::box2D::common::math::B2Vec2 B2MouseJoint_obj::getAnchorA(){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_50_getAnchorA)
HXDLIN(  50)		return this->m_target;
            	}


 ::box2D::common::math::B2Vec2 B2MouseJoint_obj::getAnchorB(){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_54_getAnchorB)
HXDLIN(  54)		return this->m_bodyB->getWorldPoint(this->m_localAnchor);
            	}


 ::box2D::common::math::B2Vec2 B2MouseJoint_obj::getReactionForce(Float inv_dt){
            	HX_GC_STACKFRAME(&_hx_pos_55e6dc3726f18d65_59_getReactionForce)
HXDLIN(  59)		Float _hx_tmp = (inv_dt * this->m_impulse->x);
HXDLIN(  59)		return  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,_hx_tmp,(inv_dt * this->m_impulse->y));
            	}


Float B2MouseJoint_obj::getReactionTorque(Float inv_dt){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_64_getReactionTorque)
HXDLIN(  64)		return ((Float)0.0);
            	}


 ::box2D::common::math::B2Vec2 B2MouseJoint_obj::getTarget(){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_69_getTarget)
HXDLIN(  69)		return this->m_target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2MouseJoint_obj,getTarget,return )

void B2MouseJoint_obj::setTarget( ::box2D::common::math::B2Vec2 target){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_75_setTarget)
HXLINE(  76)		if ((this->m_bodyB->isAwake() == false)) {
HXLINE(  77)			this->m_bodyB->setAwake(true);
            		}
HXLINE(  79)		this->m_target = target;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2MouseJoint_obj,setTarget,(void))

Float B2MouseJoint_obj::getMaxForce(){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_85_getMaxForce)
HXDLIN(  85)		return this->m_maxForce;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2MouseJoint_obj,getMaxForce,return )

void B2MouseJoint_obj::setMaxForce(Float maxForce){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_91_setMaxForce)
HXDLIN(  91)		this->m_maxForce = maxForce;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2MouseJoint_obj,setMaxForce,(void))

Float B2MouseJoint_obj::getFrequency(){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_97_getFrequency)
HXDLIN(  97)		return this->m_frequencyHz;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2MouseJoint_obj,getFrequency,return )

void B2MouseJoint_obj::setFrequency(Float hz){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_103_setFrequency)
HXDLIN( 103)		this->m_frequencyHz = hz;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2MouseJoint_obj,setFrequency,(void))

Float B2MouseJoint_obj::getDampingRatio(){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_109_getDampingRatio)
HXDLIN( 109)		return this->m_dampingRatio;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2MouseJoint_obj,getDampingRatio,return )

void B2MouseJoint_obj::setDampingRatio(Float ratio){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_115_setDampingRatio)
HXDLIN( 115)		this->m_dampingRatio = ratio;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2MouseJoint_obj,setDampingRatio,(void))

void B2MouseJoint_obj::initVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_162_initVelocityConstraints)
HXLINE( 163)		 ::box2D::dynamics::B2Body b = this->m_bodyB;
HXLINE( 165)		Float mass = b->getMass();
HXLINE( 168)		Float omega = ((((Float)2.0) * ::Math_obj::PI) * this->m_frequencyHz);
HXLINE( 171)		Float d = (((((Float)2.0) * mass) * this->m_dampingRatio) * omega);
HXLINE( 174)		Float k = ((mass * omega) * omega);
HXLINE( 180)		Float step1 = step->dt;
HXDLIN( 180)		this->m_gamma = (step1 * (d + (step->dt * k)));
HXLINE( 181)		Float _hx_tmp;
HXDLIN( 181)		if ((this->m_gamma != (int)0)) {
HXLINE( 181)			_hx_tmp = ((Float)(int)1 / (Float)this->m_gamma);
            		}
            		else {
HXLINE( 181)			_hx_tmp = ((Float)0.0);
            		}
HXDLIN( 181)		this->m_gamma = _hx_tmp;
HXLINE( 182)		this->m_beta = ((step->dt * k) * this->m_gamma);
HXLINE( 184)		 ::box2D::common::math::B2Mat22 tMat = b->m_xf->R;
HXLINE( 189)		Float rX = (this->m_localAnchor->x - b->m_sweep->localCenter->x);
HXLINE( 190)		Float rY = (this->m_localAnchor->y - b->m_sweep->localCenter->y);
HXLINE( 191)		Float tX = (tMat->col1->x * rX);
HXDLIN( 191)		Float tX1 = (tX + (tMat->col2->x * rY));
HXLINE( 192)		Float rY1 = (tMat->col1->y * rX);
HXDLIN( 192)		rY = (rY1 + (tMat->col2->y * rY));
HXLINE( 193)		rX = tX1;
HXLINE( 198)		Float invMass = b->m_invMass;
HXLINE( 199)		Float invI = b->m_invI;
HXLINE( 202)		this->K1->col1->x = invMass;
HXDLIN( 202)		this->K1->col2->x = ((Float)0.0);
HXLINE( 203)		this->K1->col1->y = ((Float)0.0);
HXDLIN( 203)		this->K1->col2->y = invMass;
HXLINE( 206)		this->K2->col1->x = ((invI * rY) * rY);
HXDLIN( 206)		this->K2->col2->x = ((-(invI) * rX) * rY);
HXLINE( 207)		this->K2->col1->y = ((-(invI) * rX) * rY);
HXDLIN( 207)		this->K2->col2->y = ((invI * rX) * rX);
HXLINE( 210)		this->K->setM(this->K1);
HXLINE( 211)		this->K->addM(this->K2);
HXLINE( 212)		 ::box2D::common::math::B2Vec2 _hx_tmp1 = this->K->col1;
HXDLIN( 212)		_hx_tmp1->x = (_hx_tmp1->x + this->m_gamma);
HXLINE( 213)		 ::box2D::common::math::B2Vec2 _hx_tmp2 = this->K->col2;
HXDLIN( 213)		_hx_tmp2->y = (_hx_tmp2->y + this->m_gamma);
HXLINE( 216)		this->K->getInverse(this->m_mass);
HXLINE( 219)		this->m_C->x = ((b->m_sweep->c->x + rX) - this->m_target->x);
HXLINE( 220)		this->m_C->y = ((b->m_sweep->c->y + rY) - this->m_target->y);
HXLINE( 223)		 ::box2D::dynamics::B2Body b1 = b;
HXDLIN( 223)		b1->m_angularVelocity = (b1->m_angularVelocity * ((Float)0.98));
HXLINE( 226)		 ::box2D::common::math::B2Vec2 _hx_tmp3 = this->m_impulse;
HXDLIN( 226)		_hx_tmp3->x = (_hx_tmp3->x * step->dtRatio);
HXLINE( 227)		 ::box2D::common::math::B2Vec2 _hx_tmp4 = this->m_impulse;
HXDLIN( 227)		_hx_tmp4->y = (_hx_tmp4->y * step->dtRatio);
HXLINE( 229)		 ::box2D::common::math::B2Vec2 b2 = b->m_linearVelocity;
HXDLIN( 229)		b2->x = (b2->x + (invMass * this->m_impulse->x));
HXLINE( 230)		 ::box2D::common::math::B2Vec2 b3 = b->m_linearVelocity;
HXDLIN( 230)		b3->y = (b3->y + (invMass * this->m_impulse->y));
HXLINE( 232)		 ::box2D::dynamics::B2Body b4 = b;
HXDLIN( 232)		Float _hx_tmp5 = (rX * this->m_impulse->y);
HXDLIN( 232)		b4->m_angularVelocity = (b4->m_angularVelocity + (invI * (_hx_tmp5 - (rY * this->m_impulse->x))));
            	}


void B2MouseJoint_obj::solveVelocityConstraints( ::box2D::dynamics::B2TimeStep step){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_235_solveVelocityConstraints)
HXLINE( 236)		 ::box2D::dynamics::B2Body b = this->m_bodyB;
HXLINE( 238)		 ::box2D::common::math::B2Mat22 tMat;
HXLINE( 239)		Float tX;
HXLINE( 240)		Float tY;
HXLINE( 244)		tMat = b->m_xf->R;
HXLINE( 245)		Float rX = (this->m_localAnchor->x - b->m_sweep->localCenter->x);
HXLINE( 246)		Float rY = (this->m_localAnchor->y - b->m_sweep->localCenter->y);
HXLINE( 247)		Float tX1 = (tMat->col1->x * rX);
HXDLIN( 247)		tX = (tX1 + (tMat->col2->x * rY));
HXLINE( 248)		Float rY1 = (tMat->col1->y * rX);
HXDLIN( 248)		rY = (rY1 + (tMat->col2->y * rY));
HXLINE( 249)		rX = tX;
HXLINE( 253)		Float b1 = b->m_linearVelocity->x;
HXDLIN( 253)		Float CdotX = (b1 + (-(b->m_angularVelocity) * rY));
HXLINE( 254)		Float b2 = b->m_linearVelocity->y;
HXDLIN( 254)		Float CdotY = (b2 + (b->m_angularVelocity * rX));
HXLINE( 256)		tMat = this->m_mass;
HXLINE( 257)		Float tX2 = (CdotX + (this->m_beta * this->m_C->x));
HXDLIN( 257)		tX = (tX2 + (this->m_gamma * this->m_impulse->x));
HXLINE( 258)		Float tY1 = (CdotY + (this->m_beta * this->m_C->y));
HXDLIN( 258)		tY = (tY1 + (this->m_gamma * this->m_impulse->y));
HXLINE( 259)		Float impulseX = (tMat->col1->x * tX);
HXDLIN( 259)		Float impulseX1 = -((impulseX + (tMat->col2->x * tY)));
HXLINE( 260)		Float impulseY = (tMat->col1->y * tX);
HXDLIN( 260)		Float impulseY1 = -((impulseY + (tMat->col2->y * tY)));
HXLINE( 262)		Float oldImpulseX = this->m_impulse->x;
HXLINE( 263)		Float oldImpulseY = this->m_impulse->y;
HXLINE( 265)		 ::box2D::common::math::B2Vec2 _hx_tmp = this->m_impulse;
HXDLIN( 265)		_hx_tmp->x = (_hx_tmp->x + impulseX1);
HXLINE( 266)		 ::box2D::common::math::B2Vec2 _hx_tmp1 = this->m_impulse;
HXDLIN( 266)		_hx_tmp1->y = (_hx_tmp1->y + impulseY1);
HXLINE( 267)		Float maxImpulse = (step->dt * this->m_maxForce);
HXLINE( 268)		Float _hx_tmp2 = this->m_impulse->lengthSquared();
HXDLIN( 268)		if ((_hx_tmp2 > (maxImpulse * maxImpulse))) {
HXLINE( 271)			 ::box2D::common::math::B2Vec2 _hx_tmp3 = this->m_impulse;
HXDLIN( 271)			_hx_tmp3->multiply(((Float)maxImpulse / (Float)this->m_impulse->length()));
            		}
HXLINE( 274)		impulseX1 = (this->m_impulse->x - oldImpulseX);
HXLINE( 275)		impulseY1 = (this->m_impulse->y - oldImpulseY);
HXLINE( 278)		 ::box2D::common::math::B2Vec2 b3 = b->m_linearVelocity;
HXDLIN( 278)		b3->x = (b3->x + (b->m_invMass * impulseX1));
HXLINE( 279)		 ::box2D::common::math::B2Vec2 b4 = b->m_linearVelocity;
HXDLIN( 279)		b4->y = (b4->y + (b->m_invMass * impulseY1));
HXLINE( 281)		 ::box2D::dynamics::B2Body b5 = b;
HXDLIN( 281)		Float b6 = b->m_invI;
HXDLIN( 281)		b5->m_angularVelocity = (b5->m_angularVelocity + (b6 * ((rX * impulseY1) - (rY * impulseX1))));
            	}


bool B2MouseJoint_obj::solvePositionConstraints(Float baumgarte){
            	HX_STACKFRAME(&_hx_pos_55e6dc3726f18d65_286_solvePositionConstraints)
HXDLIN( 286)		return true;
            	}



hx::ObjectPtr< B2MouseJoint_obj > B2MouseJoint_obj::__new( ::box2D::dynamics::joints::B2MouseJointDef def) {
	hx::ObjectPtr< B2MouseJoint_obj > __this = new B2MouseJoint_obj();
	__this->__construct(def);
	return __this;
}

hx::ObjectPtr< B2MouseJoint_obj > B2MouseJoint_obj::__alloc(hx::Ctx *_hx_ctx, ::box2D::dynamics::joints::B2MouseJointDef def) {
	B2MouseJoint_obj *__this = (B2MouseJoint_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2MouseJoint_obj), true, "box2D.dynamics.joints.B2MouseJoint"));
	*(void **)__this = B2MouseJoint_obj::_hx_vtable;
	__this->__construct(def);
	return __this;
}

B2MouseJoint_obj::B2MouseJoint_obj()
{
}

void B2MouseJoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2MouseJoint);
	HX_MARK_MEMBER_NAME(K,"K");
	HX_MARK_MEMBER_NAME(K1,"K1");
	HX_MARK_MEMBER_NAME(K2,"K2");
	HX_MARK_MEMBER_NAME(m_localAnchor,"m_localAnchor");
	HX_MARK_MEMBER_NAME(m_target,"m_target");
	HX_MARK_MEMBER_NAME(m_impulse,"m_impulse");
	HX_MARK_MEMBER_NAME(m_mass,"m_mass");
	HX_MARK_MEMBER_NAME(m_C,"m_C");
	HX_MARK_MEMBER_NAME(m_maxForce,"m_maxForce");
	HX_MARK_MEMBER_NAME(m_frequencyHz,"m_frequencyHz");
	HX_MARK_MEMBER_NAME(m_dampingRatio,"m_dampingRatio");
	HX_MARK_MEMBER_NAME(m_beta,"m_beta");
	HX_MARK_MEMBER_NAME(m_gamma,"m_gamma");
	 ::box2D::dynamics::joints::B2Joint_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void B2MouseJoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(K,"K");
	HX_VISIT_MEMBER_NAME(K1,"K1");
	HX_VISIT_MEMBER_NAME(K2,"K2");
	HX_VISIT_MEMBER_NAME(m_localAnchor,"m_localAnchor");
	HX_VISIT_MEMBER_NAME(m_target,"m_target");
	HX_VISIT_MEMBER_NAME(m_impulse,"m_impulse");
	HX_VISIT_MEMBER_NAME(m_mass,"m_mass");
	HX_VISIT_MEMBER_NAME(m_C,"m_C");
	HX_VISIT_MEMBER_NAME(m_maxForce,"m_maxForce");
	HX_VISIT_MEMBER_NAME(m_frequencyHz,"m_frequencyHz");
	HX_VISIT_MEMBER_NAME(m_dampingRatio,"m_dampingRatio");
	HX_VISIT_MEMBER_NAME(m_beta,"m_beta");
	HX_VISIT_MEMBER_NAME(m_gamma,"m_gamma");
	 ::box2D::dynamics::joints::B2Joint_obj::__Visit(HX_VISIT_ARG);
}

hx::Val B2MouseJoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"K") ) { return hx::Val( K ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"K1") ) { return hx::Val( K1 ); }
		if (HX_FIELD_EQ(inName,"K2") ) { return hx::Val( K2 ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"m_C") ) { return hx::Val( m_C ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_mass") ) { return hx::Val( m_mass ); }
		if (HX_FIELD_EQ(inName,"m_beta") ) { return hx::Val( m_beta ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_gamma") ) { return hx::Val( m_gamma ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_target") ) { return hx::Val( m_target ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getTarget") ) { return hx::Val( getTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTarget") ) { return hx::Val( setTarget_dyn() ); }
		if (HX_FIELD_EQ(inName,"m_impulse") ) { return hx::Val( m_impulse ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getAnchorA") ) { return hx::Val( getAnchorA_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAnchorB") ) { return hx::Val( getAnchorB_dyn() ); }
		if (HX_FIELD_EQ(inName,"m_maxForce") ) { return hx::Val( m_maxForce ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getMaxForce") ) { return hx::Val( getMaxForce_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMaxForce") ) { return hx::Val( setMaxForce_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFrequency") ) { return hx::Val( getFrequency_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFrequency") ) { return hx::Val( setFrequency_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_localAnchor") ) { return hx::Val( m_localAnchor ); }
		if (HX_FIELD_EQ(inName,"m_frequencyHz") ) { return hx::Val( m_frequencyHz ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_dampingRatio") ) { return hx::Val( m_dampingRatio ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getDampingRatio") ) { return hx::Val( getDampingRatio_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDampingRatio") ) { return hx::Val( setDampingRatio_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getReactionForce") ) { return hx::Val( getReactionForce_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getReactionTorque") ) { return hx::Val( getReactionTorque_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"initVelocityConstraints") ) { return hx::Val( initVelocityConstraints_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"solveVelocityConstraints") ) { return hx::Val( solveVelocityConstraints_dyn() ); }
		if (HX_FIELD_EQ(inName,"solvePositionConstraints") ) { return hx::Val( solvePositionConstraints_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val B2MouseJoint_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"K") ) { K=inValue.Cast<  ::box2D::common::math::B2Mat22 >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"K1") ) { K1=inValue.Cast<  ::box2D::common::math::B2Mat22 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"K2") ) { K2=inValue.Cast<  ::box2D::common::math::B2Mat22 >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"m_C") ) { m_C=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_mass") ) { m_mass=inValue.Cast<  ::box2D::common::math::B2Mat22 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_beta") ) { m_beta=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_gamma") ) { m_gamma=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_target") ) { m_target=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"m_impulse") ) { m_impulse=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_maxForce") ) { m_maxForce=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_localAnchor") ) { m_localAnchor=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_frequencyHz") ) { m_frequencyHz=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_dampingRatio") ) { m_dampingRatio=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2MouseJoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("K","\x4b","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("K1","\x86","\x41","\x00","\x00"));
	outFields->push(HX_HCSTRING("K2","\x87","\x41","\x00","\x00"));
	outFields->push(HX_HCSTRING("m_localAnchor","\x2e","\xf8","\xaa","\x36"));
	outFields->push(HX_HCSTRING("m_target","\x23","\x9c","\xde","\x4f"));
	outFields->push(HX_HCSTRING("m_impulse","\xa3","\x5f","\x3f","\x78"));
	outFields->push(HX_HCSTRING("m_mass","\x46","\xb1","\x4d","\x90"));
	outFields->push(HX_HCSTRING("m_C","\xb1","\x08","\x53","\x00"));
	outFields->push(HX_HCSTRING("m_maxForce","\xf9","\x05","\xfd","\xd5"));
	outFields->push(HX_HCSTRING("m_frequencyHz","\xbc","\xbe","\x84","\x86"));
	outFields->push(HX_HCSTRING("m_dampingRatio","\x3b","\x27","\x99","\x6c"));
	outFields->push(HX_HCSTRING("m_beta","\x42","\x62","\x0b","\x89"));
	outFields->push(HX_HCSTRING("m_gamma","\x95","\x5e","\x41","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2MouseJoint_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::box2D::common::math::B2Mat22*/ ,(int)offsetof(B2MouseJoint_obj,K),HX_HCSTRING("K","\x4b","\x00","\x00","\x00")},
	{hx::fsObject /*::box2D::common::math::B2Mat22*/ ,(int)offsetof(B2MouseJoint_obj,K1),HX_HCSTRING("K1","\x86","\x41","\x00","\x00")},
	{hx::fsObject /*::box2D::common::math::B2Mat22*/ ,(int)offsetof(B2MouseJoint_obj,K2),HX_HCSTRING("K2","\x87","\x41","\x00","\x00")},
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2MouseJoint_obj,m_localAnchor),HX_HCSTRING("m_localAnchor","\x2e","\xf8","\xaa","\x36")},
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2MouseJoint_obj,m_target),HX_HCSTRING("m_target","\x23","\x9c","\xde","\x4f")},
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2MouseJoint_obj,m_impulse),HX_HCSTRING("m_impulse","\xa3","\x5f","\x3f","\x78")},
	{hx::fsObject /*::box2D::common::math::B2Mat22*/ ,(int)offsetof(B2MouseJoint_obj,m_mass),HX_HCSTRING("m_mass","\x46","\xb1","\x4d","\x90")},
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2MouseJoint_obj,m_C),HX_HCSTRING("m_C","\xb1","\x08","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(B2MouseJoint_obj,m_maxForce),HX_HCSTRING("m_maxForce","\xf9","\x05","\xfd","\xd5")},
	{hx::fsFloat,(int)offsetof(B2MouseJoint_obj,m_frequencyHz),HX_HCSTRING("m_frequencyHz","\xbc","\xbe","\x84","\x86")},
	{hx::fsFloat,(int)offsetof(B2MouseJoint_obj,m_dampingRatio),HX_HCSTRING("m_dampingRatio","\x3b","\x27","\x99","\x6c")},
	{hx::fsFloat,(int)offsetof(B2MouseJoint_obj,m_beta),HX_HCSTRING("m_beta","\x42","\x62","\x0b","\x89")},
	{hx::fsFloat,(int)offsetof(B2MouseJoint_obj,m_gamma),HX_HCSTRING("m_gamma","\x95","\x5e","\x41","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *B2MouseJoint_obj_sStaticStorageInfo = 0;
#endif

static ::String B2MouseJoint_obj_sMemberFields[] = {
	HX_HCSTRING("getAnchorA","\x36","\x72","\x03","\x52"),
	HX_HCSTRING("getAnchorB","\x37","\x72","\x03","\x52"),
	HX_HCSTRING("getReactionForce","\x0c","\x7f","\x58","\x41"),
	HX_HCSTRING("getReactionTorque","\x89","\x66","\x20","\x85"),
	HX_HCSTRING("getTarget","\x87","\x7c","\x43","\x03"),
	HX_HCSTRING("setTarget","\x93","\x68","\x94","\xe6"),
	HX_HCSTRING("getMaxForce","\x5d","\xc7","\xa5","\xd4"),
	HX_HCSTRING("setMaxForce","\x69","\xce","\x12","\xdf"),
	HX_HCSTRING("getFrequency","\x26","\x1f","\x41","\xcb"),
	HX_HCSTRING("setFrequency","\x9a","\x42","\x3a","\xe0"),
	HX_HCSTRING("getDampingRatio","\x9f","\x6a","\x48","\xc9"),
	HX_HCSTRING("setDampingRatio","\xab","\xe7","\x13","\xc5"),
	HX_HCSTRING("K","\x4b","\x00","\x00","\x00"),
	HX_HCSTRING("K1","\x86","\x41","\x00","\x00"),
	HX_HCSTRING("K2","\x87","\x41","\x00","\x00"),
	HX_HCSTRING("initVelocityConstraints","\x29","\xf9","\xf0","\x64"),
	HX_HCSTRING("solveVelocityConstraints","\x1a","\x56","\xac","\xc2"),
	HX_HCSTRING("solvePositionConstraints","\x0e","\x6b","\x88","\xfa"),
	HX_HCSTRING("m_localAnchor","\x2e","\xf8","\xaa","\x36"),
	HX_HCSTRING("m_target","\x23","\x9c","\xde","\x4f"),
	HX_HCSTRING("m_impulse","\xa3","\x5f","\x3f","\x78"),
	HX_HCSTRING("m_mass","\x46","\xb1","\x4d","\x90"),
	HX_HCSTRING("m_C","\xb1","\x08","\x53","\x00"),
	HX_HCSTRING("m_maxForce","\xf9","\x05","\xfd","\xd5"),
	HX_HCSTRING("m_frequencyHz","\xbc","\xbe","\x84","\x86"),
	HX_HCSTRING("m_dampingRatio","\x3b","\x27","\x99","\x6c"),
	HX_HCSTRING("m_beta","\x42","\x62","\x0b","\x89"),
	HX_HCSTRING("m_gamma","\x95","\x5e","\x41","\x3f"),
	::String(null()) };

static void B2MouseJoint_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2MouseJoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2MouseJoint_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2MouseJoint_obj::__mClass,"__mClass");
};

#endif

hx::Class B2MouseJoint_obj::__mClass;

void B2MouseJoint_obj::__register()
{
	hx::Object *dummy = new B2MouseJoint_obj;
	B2MouseJoint_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.joints.B2MouseJoint","\x71","\x73","\x4c","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = B2MouseJoint_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2MouseJoint_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2MouseJoint_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2MouseJoint_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2MouseJoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2MouseJoint_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints
