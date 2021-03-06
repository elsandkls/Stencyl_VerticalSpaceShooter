// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Math
#include <box2D/common/math/B2Math.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Sweep
#include <box2D/common/math/B2Sweep.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactImpulse
#include <box2D/dynamics/B2ContactImpulse.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactListener
#include <box2D/dynamics/B2ContactListener.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Island
#include <box2D/dynamics/B2Island.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2TimeStep
#include <box2D/dynamics/B2TimeStep.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactConstraint
#include <box2D/dynamics/contacts/B2ContactConstraint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactConstraintPoint
#include <box2D/dynamics/contacts/B2ContactConstraintPoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactSolver
#include <box2D/dynamics/contacts/B2ContactSolver.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3cffaad300dd2b25_118_new,"box2D.dynamics.B2Island","new",0x0c9ee620,"box2D.dynamics.B2Island.new","box2D/dynamics/B2Island.hx",118,0xbaa61170)
HX_LOCAL_STACK_FRAME(_hx_pos_3cffaad300dd2b25_131_initialize,"box2D.dynamics.B2Island","initialize",0xd9025390,"box2D.dynamics.B2Island.initialize","box2D/dynamics/B2Island.hx",131,0xbaa61170)
HX_LOCAL_STACK_FRAME(_hx_pos_3cffaad300dd2b25_158_clear,"box2D.dynamics.B2Island","clear",0x4de7774d,"box2D.dynamics.B2Island.clear","box2D/dynamics/B2Island.hx",158,0xbaa61170)
HX_LOCAL_STACK_FRAME(_hx_pos_3cffaad300dd2b25_165_solve,"box2D.dynamics.B2Island","solve",0x8651c53f,"box2D.dynamics.B2Island.solve","box2D/dynamics/B2Island.hx",165,0xbaa61170)
HX_LOCAL_STACK_FRAME(_hx_pos_3cffaad300dd2b25_363_solveTOI,"box2D.dynamics.B2Island","solveTOI",0xe33bce8f,"box2D.dynamics.B2Island.solveTOI","box2D/dynamics/B2Island.hx",363,0xbaa61170)
HX_LOCAL_STACK_FRAME(_hx_pos_3cffaad300dd2b25_463_report,"box2D.dynamics.B2Island","report",0xdb7d3ef4,"box2D.dynamics.B2Island.report","box2D/dynamics/B2Island.hx",463,0xbaa61170)
HX_LOCAL_STACK_FRAME(_hx_pos_3cffaad300dd2b25_485_addBody,"box2D.dynamics.B2Island","addBody",0x0241b323,"box2D.dynamics.B2Island.addBody","box2D/dynamics/B2Island.hx",485,0xbaa61170)
HX_LOCAL_STACK_FRAME(_hx_pos_3cffaad300dd2b25_494_addContact,"box2D.dynamics.B2Island","addContact",0x6d45c8bf,"box2D.dynamics.B2Island.addContact","box2D/dynamics/B2Island.hx",494,0xbaa61170)
HX_LOCAL_STACK_FRAME(_hx_pos_3cffaad300dd2b25_500_addJoint,"box2D.dynamics.B2Island","addJoint",0x927371a9,"box2D.dynamics.B2Island.addJoint","box2D/dynamics/B2Island.hx",500,0xbaa61170)
HX_LOCAL_STACK_FRAME(_hx_pos_3cffaad300dd2b25_461_boot,"box2D.dynamics.B2Island","boot",0xf6837672,"box2D.dynamics.B2Island.boot","box2D/dynamics/B2Island.hx",461,0xbaa61170)
namespace box2D{
namespace dynamics{

void B2Island_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3cffaad300dd2b25_118_new)
HXLINE( 119)		this->m_bodies = ::Array_obj< ::Dynamic>::__new();
HXLINE( 120)		this->m_contacts = ::Array_obj< ::Dynamic>::__new();
HXLINE( 121)		this->m_joints = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic B2Island_obj::__CreateEmpty() { return new B2Island_obj; }

void *B2Island_obj::_hx_vtable = 0;

Dynamic B2Island_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2Island_obj > _hx_result = new B2Island_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2Island_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x64fa4172;
}

void B2Island_obj::initialize(int bodyCapacity,int contactCapacity,int jointCapacity, ::Dynamic allocator, ::box2D::dynamics::B2ContactListener listener, ::box2D::dynamics::contacts::B2ContactSolver contactSolver){
            	HX_STACKFRAME(&_hx_pos_3cffaad300dd2b25_131_initialize)
HXLINE( 132)		int i;
HXLINE( 134)		this->m_bodyCapacity = bodyCapacity;
HXLINE( 135)		this->m_contactCapacity = contactCapacity;
HXLINE( 136)		this->m_jointCapacity = jointCapacity;
HXLINE( 137)		this->m_bodyCount = (int)0;
HXLINE( 138)		this->m_contactCount = (int)0;
HXLINE( 139)		this->m_jointCount = (int)0;
HXLINE( 141)		this->m_allocator = allocator;
HXLINE( 142)		this->m_listener = listener;
HXLINE( 143)		this->m_contactSolver = contactSolver;
HXLINE( 145)		{
HXLINE( 145)			int _g1 = this->m_bodies->length;
HXDLIN( 145)			int _g = bodyCapacity;
HXDLIN( 145)			while((_g1 < _g)){
HXLINE( 145)				_g1 = (_g1 + (int)1);
HXDLIN( 145)				int i1 = (_g1 - (int)1);
HXLINE( 146)				this->m_bodies[i1] = null();
            			}
            		}
HXLINE( 148)		{
HXLINE( 148)			int _g11 = this->m_contacts->length;
HXDLIN( 148)			int _g2 = contactCapacity;
HXDLIN( 148)			while((_g11 < _g2)){
HXLINE( 148)				_g11 = (_g11 + (int)1);
HXDLIN( 148)				int i2 = (_g11 - (int)1);
HXLINE( 149)				this->m_contacts[i2] = null();
            			}
            		}
HXLINE( 151)		{
HXLINE( 151)			int _g12 = this->m_joints->length;
HXDLIN( 151)			int _g3 = jointCapacity;
HXDLIN( 151)			while((_g12 < _g3)){
HXLINE( 151)				_g12 = (_g12 + (int)1);
HXDLIN( 151)				int i3 = (_g12 - (int)1);
HXLINE( 152)				this->m_joints[i3] = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(B2Island_obj,initialize,(void))

void B2Island_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_3cffaad300dd2b25_158_clear)
HXLINE( 159)		this->m_bodyCount = (int)0;
HXLINE( 160)		this->m_contactCount = (int)0;
HXLINE( 161)		this->m_jointCount = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2Island_obj,clear,(void))

void B2Island_obj::solve( ::box2D::dynamics::B2TimeStep step, ::box2D::common::math::B2Vec2 gravity,bool allowSleep){
            	HX_STACKFRAME(&_hx_pos_3cffaad300dd2b25_165_solve)
HXLINE( 166)		int i;
HXLINE( 167)		int j;
HXLINE( 168)		 ::box2D::dynamics::B2Body b;
HXLINE( 169)		 ::box2D::dynamics::joints::B2Joint joint;
HXLINE( 172)		{
HXLINE( 172)			int _g1 = (int)0;
HXDLIN( 172)			int _g = this->m_bodyCount;
HXDLIN( 172)			while((_g1 < _g)){
HXLINE( 172)				_g1 = (_g1 + (int)1);
HXDLIN( 172)				int i1 = (_g1 - (int)1);
HXLINE( 174)				b = this->m_bodies->__get(i1).StaticCast<  ::box2D::dynamics::B2Body >();
HXLINE( 176)				int _hx_tmp = b->getType();
HXDLIN( 176)				if ((_hx_tmp != ::box2D::dynamics::B2Body_obj::b2_dynamicBody)) {
HXLINE( 177)					continue;
            				}
HXLINE( 187)				if (b->isIgnoringGravity()) {
HXLINE( 189)					 ::box2D::common::math::B2Vec2 b1 = b->m_linearVelocity;
HXDLIN( 189)					Float step1 = step->dt;
HXDLIN( 189)					b1->x = (b1->x + (step1 * (b->m_invMass * b->m_force->x)));
HXLINE( 190)					 ::box2D::common::math::B2Vec2 b2 = b->m_linearVelocity;
HXDLIN( 190)					Float step2 = step->dt;
HXDLIN( 190)					b2->y = (b2->y + (step2 * (b->m_invMass * b->m_force->y)));
            				}
            				else {
HXLINE( 195)					 ::box2D::common::math::B2Vec2 b3 = b->m_linearVelocity;
HXDLIN( 195)					Float step3 = step->dt;
HXDLIN( 195)					Float gravity1 = gravity->x;
HXDLIN( 195)					b3->x = (b3->x + (step3 * (gravity1 + (b->m_invMass * b->m_force->x))));
HXLINE( 196)					 ::box2D::common::math::B2Vec2 b4 = b->m_linearVelocity;
HXDLIN( 196)					Float step4 = step->dt;
HXDLIN( 196)					Float gravity2 = gravity->y;
HXDLIN( 196)					b4->y = (b4->y + (step4 * (gravity2 + (b->m_invMass * b->m_force->y))));
            				}
HXLINE( 201)				 ::box2D::dynamics::B2Body b5 = b;
HXDLIN( 201)				b5->m_angularVelocity = (b5->m_angularVelocity + ((step->dt * b->m_invI) * b->m_torque));
HXLINE( 210)				 ::box2D::common::math::B2Vec2 b6 = b->m_linearVelocity;
HXDLIN( 210)				b6->multiply(::box2D::common::math::B2Math_obj::clamp((((Float)1.0) - (step->dt * b->m_linearDamping)),((Float)0.0),((Float)1.0)));
HXLINE( 211)				 ::box2D::dynamics::B2Body b7 = b;
HXDLIN( 211)				Float b8 = b7->m_angularVelocity;
HXDLIN( 211)				b7->m_angularVelocity = (b8 * ::box2D::common::math::B2Math_obj::clamp((((Float)1.0) - (step->dt * b->m_angularDamping)),((Float)0.0),((Float)1.0)));
            			}
            		}
HXLINE( 214)		this->m_contactSolver->initialize(step,this->m_contacts,this->m_contactCount,this->m_allocator);
HXLINE( 215)		 ::box2D::dynamics::contacts::B2ContactSolver contactSolver = this->m_contactSolver;
HXLINE( 218)		contactSolver->initVelocityConstraints(step);
HXLINE( 220)		{
HXLINE( 220)			int _g11 = (int)0;
HXDLIN( 220)			int _g2 = this->m_jointCount;
HXDLIN( 220)			while((_g11 < _g2)){
HXLINE( 220)				_g11 = (_g11 + (int)1);
HXDLIN( 220)				int i2 = (_g11 - (int)1);
HXLINE( 222)				joint = this->m_joints->__get(i2).StaticCast<  ::box2D::dynamics::joints::B2Joint >();
HXLINE( 223)				joint->initVelocityConstraints(step);
            			}
            		}
HXLINE( 227)		{
HXLINE( 227)			int _g12 = (int)0;
HXDLIN( 227)			int _g3 = step->velocityIterations;
HXDLIN( 227)			while((_g12 < _g3)){
HXLINE( 227)				_g12 = (_g12 + (int)1);
HXDLIN( 227)				int i3 = (_g12 - (int)1);
HXLINE( 229)				{
HXLINE( 229)					int _g31 = (int)0;
HXDLIN( 229)					int _g21 = this->m_jointCount;
HXDLIN( 229)					while((_g31 < _g21)){
HXLINE( 229)						_g31 = (_g31 + (int)1);
HXDLIN( 229)						int j1 = (_g31 - (int)1);
HXLINE( 231)						joint = this->m_joints->__get(j1).StaticCast<  ::box2D::dynamics::joints::B2Joint >();
HXLINE( 232)						joint->solveVelocityConstraints(step);
            					}
            				}
HXLINE( 235)				contactSolver->solveVelocityConstraints();
            			}
            		}
HXLINE( 239)		{
HXLINE( 239)			int _g13 = (int)0;
HXDLIN( 239)			int _g4 = this->m_jointCount;
HXDLIN( 239)			while((_g13 < _g4)){
HXLINE( 239)				_g13 = (_g13 + (int)1);
HXDLIN( 239)				int i4 = (_g13 - (int)1);
HXLINE( 241)				joint = this->m_joints->__get(i4).StaticCast<  ::box2D::dynamics::joints::B2Joint >();
HXLINE( 242)				joint->finalizeVelocityConstraints();
            			}
            		}
HXLINE( 244)		contactSolver->finalizeVelocityConstraints();
HXLINE( 247)		{
HXLINE( 247)			int _g14 = (int)0;
HXDLIN( 247)			int _g5 = this->m_bodyCount;
HXDLIN( 247)			while((_g14 < _g5)){
HXLINE( 247)				_g14 = (_g14 + (int)1);
HXDLIN( 247)				int i5 = (_g14 - (int)1);
HXLINE( 249)				b = this->m_bodies->__get(i5).StaticCast<  ::box2D::dynamics::B2Body >();
HXLINE( 251)				int _hx_tmp1 = b->getType();
HXDLIN( 251)				if ((_hx_tmp1 == ::box2D::dynamics::B2Body_obj::b2_staticBody)) {
HXLINE( 252)					continue;
            				}
HXLINE( 256)				Float translationX = (step->dt * b->m_linearVelocity->x);
HXLINE( 257)				Float translationY = (step->dt * b->m_linearVelocity->y);
HXLINE( 259)				if ((((translationX * translationX) + (translationY * translationY)) > ::box2D::common::B2Settings_obj::b2_maxTranslationSquared)) {
HXLINE( 261)					b->m_linearVelocity->normalize();
HXLINE( 262)					 ::box2D::common::math::B2Vec2 b9 = b->m_linearVelocity;
HXDLIN( 262)					b9->x = (b9->x * (::box2D::common::B2Settings_obj::b2_maxTranslation * step->inv_dt));
HXLINE( 263)					 ::box2D::common::math::B2Vec2 b10 = b->m_linearVelocity;
HXDLIN( 263)					b10->y = (b10->y * (::box2D::common::B2Settings_obj::b2_maxTranslation * step->inv_dt));
            				}
HXLINE( 265)				Float rotation = (step->dt * b->m_angularVelocity);
HXLINE( 266)				if (((rotation * rotation) > ::box2D::common::B2Settings_obj::b2_maxRotationSquared)) {
HXLINE( 268)					if ((b->m_angularVelocity < ((Float)0.0))) {
HXLINE( 270)						b->m_angularVelocity = (-(::box2D::common::B2Settings_obj::b2_maxRotation) * step->inv_dt);
            					}
            					else {
HXLINE( 274)						b->m_angularVelocity = (::box2D::common::B2Settings_obj::b2_maxRotation * step->inv_dt);
            					}
            				}
HXLINE( 279)				{
HXLINE( 279)					 ::box2D::common::math::B2Vec2 _this = b->m_sweep->c0;
HXDLIN( 279)					 ::box2D::common::math::B2Vec2 v = b->m_sweep->c;
HXDLIN( 279)					_this->x = v->x;
HXDLIN( 279)					_this->y = v->y;
            				}
HXLINE( 280)				b->m_sweep->a0 = b->m_sweep->a;
HXLINE( 284)				 ::box2D::common::math::B2Vec2 b11 = b->m_sweep->c;
HXDLIN( 284)				b11->x = (b11->x + (step->dt * b->m_linearVelocity->x));
HXLINE( 285)				 ::box2D::common::math::B2Vec2 b12 = b->m_sweep->c;
HXDLIN( 285)				b12->y = (b12->y + (step->dt * b->m_linearVelocity->y));
HXLINE( 286)				 ::box2D::common::math::B2Sweep b13 = b->m_sweep;
HXDLIN( 286)				b13->a = (b13->a + (step->dt * b->m_angularVelocity));
HXLINE( 289)				b->synchronizeTransform();
            			}
            		}
HXLINE( 295)		{
HXLINE( 295)			int _g15 = (int)0;
HXDLIN( 295)			int _g6 = step->positionIterations;
HXDLIN( 295)			while((_g15 < _g6)){
HXLINE( 295)				_g15 = (_g15 + (int)1);
HXDLIN( 295)				int i6 = (_g15 - (int)1);
HXLINE( 297)				bool contactsOkay = contactSolver->solvePositionConstraints(::box2D::common::B2Settings_obj::b2_contactBaumgarte);
HXLINE( 299)				bool jointsOkay = true;
HXLINE( 300)				{
HXLINE( 300)					int _g32 = (int)0;
HXDLIN( 300)					int _g22 = this->m_jointCount;
HXDLIN( 300)					while((_g32 < _g22)){
HXLINE( 300)						_g32 = (_g32 + (int)1);
HXDLIN( 300)						int j2 = (_g32 - (int)1);
HXLINE( 302)						joint = this->m_joints->__get(j2).StaticCast<  ::box2D::dynamics::joints::B2Joint >();
HXLINE( 303)						bool jointOkay = joint->solvePositionConstraints(::box2D::common::B2Settings_obj::b2_contactBaumgarte);
HXLINE( 304)						if (jointsOkay) {
HXLINE( 304)							jointsOkay = jointOkay;
            						}
            						else {
HXLINE( 304)							jointsOkay = false;
            						}
            					}
            				}
HXLINE( 307)				bool _hx_tmp2;
HXDLIN( 307)				if (contactsOkay) {
HXLINE( 307)					_hx_tmp2 = jointsOkay;
            				}
            				else {
HXLINE( 307)					_hx_tmp2 = false;
            				}
HXDLIN( 307)				if (_hx_tmp2) {
HXLINE( 309)					goto _hx_goto_12;
            				}
            			}
            			_hx_goto_12:;
            		}
HXLINE( 313)		this->report(contactSolver->m_constraints);
HXLINE( 315)		if (allowSleep) {
HXLINE( 317)			Float minSleepTime = ((Float)1.7976931348623158e+308);
HXLINE( 319)			Float linTolSqr = (::box2D::common::B2Settings_obj::b2_linearSleepTolerance * ::box2D::common::B2Settings_obj::b2_linearSleepTolerance);
HXLINE( 320)			Float angTolSqr = (::box2D::common::B2Settings_obj::b2_angularSleepTolerance * ::box2D::common::B2Settings_obj::b2_angularSleepTolerance);
HXLINE( 322)			{
HXLINE( 322)				int _g16 = (int)0;
HXDLIN( 322)				int _g7 = this->m_bodyCount;
HXDLIN( 322)				while((_g16 < _g7)){
HXLINE( 322)					_g16 = (_g16 + (int)1);
HXDLIN( 322)					int i7 = (_g16 - (int)1);
HXLINE( 324)					b = this->m_bodies->__get(i7).StaticCast<  ::box2D::dynamics::B2Body >();
HXLINE( 325)					int _hx_tmp3 = b->getType();
HXDLIN( 325)					if ((_hx_tmp3 == ::box2D::dynamics::B2Body_obj::b2_staticBody)) {
HXLINE( 327)						continue;
            					}
HXLINE( 330)					if ((((int)b->m_flags & (int)::box2D::dynamics::B2Body_obj::e_allowSleepFlag) == (int)0)) {
HXLINE( 332)						b->m_sleepTime = ((Float)0.0);
HXLINE( 333)						minSleepTime = ((Float)0.0);
            					}
HXLINE( 336)					bool _hx_tmp4;
HXDLIN( 336)					bool _hx_tmp5;
HXDLIN( 336)					if ((((int)b->m_flags & (int)::box2D::dynamics::B2Body_obj::e_allowSleepFlag) != (int)0)) {
HXLINE( 336)						_hx_tmp5 = ((b->m_angularVelocity * b->m_angularVelocity) > angTolSqr);
            					}
            					else {
HXLINE( 336)						_hx_tmp5 = true;
            					}
HXDLIN( 336)					if (!(_hx_tmp5)) {
HXLINE( 336)						_hx_tmp4 = (::box2D::common::math::B2Math_obj::dot(b->m_linearVelocity,b->m_linearVelocity) > linTolSqr);
            					}
            					else {
HXLINE( 336)						_hx_tmp4 = true;
            					}
HXDLIN( 336)					if (_hx_tmp4) {
HXLINE( 340)						b->m_sleepTime = ((Float)0.0);
HXLINE( 341)						minSleepTime = ((Float)0.0);
            					}
            					else {
HXLINE( 345)						 ::box2D::dynamics::B2Body b14 = b;
HXDLIN( 345)						b14->m_sleepTime = (b14->m_sleepTime + step->dt);
HXLINE( 346)						minSleepTime = ::box2D::common::math::B2Math_obj::min(minSleepTime,b->m_sleepTime);
            					}
            				}
            			}
HXLINE( 350)			if ((minSleepTime >= ::box2D::common::B2Settings_obj::b2_timeToSleep)) {
HXLINE( 352)				int _g17 = (int)0;
HXDLIN( 352)				int _g8 = this->m_bodyCount;
HXDLIN( 352)				while((_g17 < _g8)){
HXLINE( 352)					_g17 = (_g17 + (int)1);
HXDLIN( 352)					int i8 = (_g17 - (int)1);
HXLINE( 354)					b = this->m_bodies->__get(i8).StaticCast<  ::box2D::dynamics::B2Body >();
HXLINE( 355)					b->setAwake(false);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(B2Island_obj,solve,(void))

void B2Island_obj::solveTOI( ::box2D::dynamics::B2TimeStep subStep){
            	HX_STACKFRAME(&_hx_pos_3cffaad300dd2b25_363_solveTOI)
HXLINE( 364)		int i;
HXLINE( 365)		int j;
HXLINE( 366)		this->m_contactSolver->initialize(subStep,this->m_contacts,this->m_contactCount,this->m_allocator);
HXLINE( 367)		 ::box2D::dynamics::contacts::B2ContactSolver contactSolver = this->m_contactSolver;
HXLINE( 374)		{
HXLINE( 374)			int _g1 = (int)0;
HXDLIN( 374)			int _g = this->m_jointCount;
HXDLIN( 374)			while((_g1 < _g)){
HXLINE( 374)				_g1 = (_g1 + (int)1);
HXDLIN( 374)				int i1 = (_g1 - (int)1);
HXLINE( 376)				this->m_joints->__get(i1).StaticCast<  ::box2D::dynamics::joints::B2Joint >()->initVelocityConstraints(subStep);
            			}
            		}
HXLINE( 381)		{
HXLINE( 381)			int _g11 = (int)0;
HXDLIN( 381)			int _g2 = subStep->velocityIterations;
HXDLIN( 381)			while((_g11 < _g2)){
HXLINE( 381)				_g11 = (_g11 + (int)1);
HXDLIN( 381)				int i2 = (_g11 - (int)1);
HXLINE( 383)				contactSolver->solveVelocityConstraints();
HXLINE( 384)				{
HXLINE( 384)					int _g3 = (int)0;
HXDLIN( 384)					int _g21 = this->m_jointCount;
HXDLIN( 384)					while((_g3 < _g21)){
HXLINE( 384)						_g3 = (_g3 + (int)1);
HXDLIN( 384)						int j1 = (_g3 - (int)1);
HXLINE( 386)						this->m_joints->__get(j1).StaticCast<  ::box2D::dynamics::joints::B2Joint >()->solveVelocityConstraints(subStep);
            					}
            				}
            			}
            		}
HXLINE( 394)		{
HXLINE( 394)			int _g12 = (int)0;
HXDLIN( 394)			int _g4 = this->m_bodyCount;
HXDLIN( 394)			while((_g12 < _g4)){
HXLINE( 394)				_g12 = (_g12 + (int)1);
HXDLIN( 394)				int i3 = (_g12 - (int)1);
HXLINE( 396)				 ::box2D::dynamics::B2Body b = this->m_bodies->__get(i3).StaticCast<  ::box2D::dynamics::B2Body >();
HXLINE( 398)				int _hx_tmp = b->getType();
HXDLIN( 398)				if ((_hx_tmp == ::box2D::dynamics::B2Body_obj::b2_staticBody)) {
HXLINE( 399)					continue;
            				}
HXLINE( 403)				Float translationX = (subStep->dt * b->m_linearVelocity->x);
HXLINE( 404)				Float translationY = (subStep->dt * b->m_linearVelocity->y);
HXLINE( 406)				if ((((translationX * translationX) + (translationY * translationY)) > ::box2D::common::B2Settings_obj::b2_maxTranslationSquared)) {
HXLINE( 408)					b->m_linearVelocity->normalize();
HXLINE( 409)					 ::box2D::common::math::B2Vec2 b1 = b->m_linearVelocity;
HXDLIN( 409)					b1->x = (b1->x * (::box2D::common::B2Settings_obj::b2_maxTranslation * subStep->inv_dt));
HXLINE( 410)					 ::box2D::common::math::B2Vec2 b2 = b->m_linearVelocity;
HXDLIN( 410)					b2->y = (b2->y * (::box2D::common::B2Settings_obj::b2_maxTranslation * subStep->inv_dt));
            				}
HXLINE( 413)				Float rotation = (subStep->dt * b->m_angularVelocity);
HXLINE( 414)				if (((rotation * rotation) > ::box2D::common::B2Settings_obj::b2_maxRotationSquared)) {
HXLINE( 416)					if ((b->m_angularVelocity < ((Float)0.0))) {
HXLINE( 418)						b->m_angularVelocity = (-(::box2D::common::B2Settings_obj::b2_maxRotation) * subStep->inv_dt);
            					}
            					else {
HXLINE( 422)						b->m_angularVelocity = (::box2D::common::B2Settings_obj::b2_maxRotation * subStep->inv_dt);
            					}
            				}
HXLINE( 427)				{
HXLINE( 427)					 ::box2D::common::math::B2Vec2 _this = b->m_sweep->c0;
HXDLIN( 427)					 ::box2D::common::math::B2Vec2 v = b->m_sweep->c;
HXDLIN( 427)					_this->x = v->x;
HXDLIN( 427)					_this->y = v->y;
            				}
HXLINE( 428)				b->m_sweep->a0 = b->m_sweep->a;
HXLINE( 431)				 ::box2D::common::math::B2Vec2 b3 = b->m_sweep->c;
HXDLIN( 431)				b3->x = (b3->x + (subStep->dt * b->m_linearVelocity->x));
HXLINE( 432)				 ::box2D::common::math::B2Vec2 b4 = b->m_sweep->c;
HXDLIN( 432)				b4->y = (b4->y + (subStep->dt * b->m_linearVelocity->y));
HXLINE( 433)				 ::box2D::common::math::B2Sweep b5 = b->m_sweep;
HXDLIN( 433)				b5->a = (b5->a + (subStep->dt * b->m_angularVelocity));
HXLINE( 436)				b->synchronizeTransform();
            			}
            		}
HXLINE( 442)		Float k_toiBaumgarte = ((Float)0.75);
HXLINE( 443)		{
HXLINE( 443)			int _g13 = (int)0;
HXDLIN( 443)			int _g5 = subStep->positionIterations;
HXDLIN( 443)			while((_g13 < _g5)){
HXLINE( 443)				_g13 = (_g13 + (int)1);
HXDLIN( 443)				int i4 = (_g13 - (int)1);
HXLINE( 445)				bool contactsOkay = contactSolver->solvePositionConstraints(k_toiBaumgarte);
HXLINE( 446)				bool jointsOkay = true;
HXLINE( 447)				{
HXLINE( 447)					int _g31 = (int)0;
HXDLIN( 447)					int _g22 = this->m_jointCount;
HXDLIN( 447)					while((_g31 < _g22)){
HXLINE( 447)						_g31 = (_g31 + (int)1);
HXDLIN( 447)						int j2 = (_g31 - (int)1);
HXLINE( 449)						bool jointOkay = this->m_joints->__get(j2).StaticCast<  ::box2D::dynamics::joints::B2Joint >()->solvePositionConstraints(::box2D::common::B2Settings_obj::b2_contactBaumgarte);
HXLINE( 450)						if (jointsOkay) {
HXLINE( 450)							jointsOkay = jointOkay;
            						}
            						else {
HXLINE( 450)							jointsOkay = false;
            						}
            					}
            				}
HXLINE( 453)				bool _hx_tmp1;
HXDLIN( 453)				if (contactsOkay) {
HXLINE( 453)					_hx_tmp1 = jointsOkay;
            				}
            				else {
HXLINE( 453)					_hx_tmp1 = false;
            				}
HXDLIN( 453)				if (_hx_tmp1) {
HXLINE( 455)					goto _hx_goto_21;
            				}
            			}
            			_hx_goto_21:;
            		}
HXLINE( 458)		this->report(contactSolver->m_constraints);
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2Island_obj,solveTOI,(void))

void B2Island_obj::report(::Array< ::Dynamic> constraints){
            	HX_STACKFRAME(&_hx_pos_3cffaad300dd2b25_463_report)
HXLINE( 464)		if (hx::IsNull( this->m_listener )) {
HXLINE( 466)			return;
            		}
HXLINE( 469)		{
HXLINE( 469)			int _g1 = (int)0;
HXDLIN( 469)			int _g = this->m_contactCount;
HXDLIN( 469)			while((_g1 < _g)){
HXLINE( 469)				_g1 = (_g1 + (int)1);
HXDLIN( 469)				int i = (_g1 - (int)1);
HXLINE( 471)				 ::box2D::dynamics::contacts::B2Contact c = this->m_contacts->__get(i).StaticCast<  ::box2D::dynamics::contacts::B2Contact >();
HXLINE( 472)				 ::box2D::dynamics::contacts::B2ContactConstraint cc = constraints->__get(i).StaticCast<  ::box2D::dynamics::contacts::B2ContactConstraint >();
HXLINE( 474)				{
HXLINE( 474)					int _g3 = (int)0;
HXDLIN( 474)					int _g2 = cc->pointCount;
HXDLIN( 474)					while((_g3 < _g2)){
HXLINE( 474)						_g3 = (_g3 + (int)1);
HXDLIN( 474)						int j = (_g3 - (int)1);
HXLINE( 476)						::box2D::dynamics::B2Island_obj::s_impulse->normalImpulses[j] = cc->points->__get(j).StaticCast<  ::box2D::dynamics::contacts::B2ContactConstraintPoint >()->normalImpulse;
HXLINE( 477)						::box2D::dynamics::B2Island_obj::s_impulse->tangentImpulses[j] = cc->points->__get(j).StaticCast<  ::box2D::dynamics::contacts::B2ContactConstraintPoint >()->tangentImpulse;
            					}
            				}
HXLINE( 479)				this->m_listener->postSolve(c,::box2D::dynamics::B2Island_obj::s_impulse);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2Island_obj,report,(void))

void B2Island_obj::addBody( ::box2D::dynamics::B2Body body){
            	HX_STACKFRAME(&_hx_pos_3cffaad300dd2b25_485_addBody)
HXLINE( 487)		body->m_islandIndex = this->m_bodyCount;
HXLINE( 488)		::Array< ::Dynamic> _hx_tmp = this->m_bodies;
HXDLIN( 488)		_hx_tmp[this->m_bodyCount++] = body;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2Island_obj,addBody,(void))

void B2Island_obj::addContact( ::box2D::dynamics::contacts::B2Contact contact){
            	HX_STACKFRAME(&_hx_pos_3cffaad300dd2b25_494_addContact)
HXDLIN( 494)		::Array< ::Dynamic> _hx_tmp = this->m_contacts;
HXDLIN( 494)		_hx_tmp[this->m_contactCount++] = contact;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2Island_obj,addContact,(void))

void B2Island_obj::addJoint( ::box2D::dynamics::joints::B2Joint joint){
            	HX_STACKFRAME(&_hx_pos_3cffaad300dd2b25_500_addJoint)
HXDLIN( 500)		::Array< ::Dynamic> _hx_tmp = this->m_joints;
HXDLIN( 500)		_hx_tmp[this->m_jointCount++] = joint;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2Island_obj,addJoint,(void))

 ::box2D::dynamics::B2ContactImpulse B2Island_obj::s_impulse;


hx::ObjectPtr< B2Island_obj > B2Island_obj::__new() {
	hx::ObjectPtr< B2Island_obj > __this = new B2Island_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< B2Island_obj > B2Island_obj::__alloc(hx::Ctx *_hx_ctx) {
	B2Island_obj *__this = (B2Island_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2Island_obj), true, "box2D.dynamics.B2Island"));
	*(void **)__this = B2Island_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

B2Island_obj::B2Island_obj()
{
}

void B2Island_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2Island);
	HX_MARK_MEMBER_NAME(m_allocator,"m_allocator");
	HX_MARK_MEMBER_NAME(m_listener,"m_listener");
	HX_MARK_MEMBER_NAME(m_contactSolver,"m_contactSolver");
	HX_MARK_MEMBER_NAME(m_bodies,"m_bodies");
	HX_MARK_MEMBER_NAME(m_contacts,"m_contacts");
	HX_MARK_MEMBER_NAME(m_joints,"m_joints");
	HX_MARK_MEMBER_NAME(m_bodyCount,"m_bodyCount");
	HX_MARK_MEMBER_NAME(m_jointCount,"m_jointCount");
	HX_MARK_MEMBER_NAME(m_contactCount,"m_contactCount");
	HX_MARK_MEMBER_NAME(m_bodyCapacity,"m_bodyCapacity");
	HX_MARK_MEMBER_NAME(m_contactCapacity,"m_contactCapacity");
	HX_MARK_MEMBER_NAME(m_jointCapacity,"m_jointCapacity");
	HX_MARK_END_CLASS();
}

void B2Island_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_allocator,"m_allocator");
	HX_VISIT_MEMBER_NAME(m_listener,"m_listener");
	HX_VISIT_MEMBER_NAME(m_contactSolver,"m_contactSolver");
	HX_VISIT_MEMBER_NAME(m_bodies,"m_bodies");
	HX_VISIT_MEMBER_NAME(m_contacts,"m_contacts");
	HX_VISIT_MEMBER_NAME(m_joints,"m_joints");
	HX_VISIT_MEMBER_NAME(m_bodyCount,"m_bodyCount");
	HX_VISIT_MEMBER_NAME(m_jointCount,"m_jointCount");
	HX_VISIT_MEMBER_NAME(m_contactCount,"m_contactCount");
	HX_VISIT_MEMBER_NAME(m_bodyCapacity,"m_bodyCapacity");
	HX_VISIT_MEMBER_NAME(m_contactCapacity,"m_contactCapacity");
	HX_VISIT_MEMBER_NAME(m_jointCapacity,"m_jointCapacity");
}

hx::Val B2Island_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"solve") ) { return hx::Val( solve_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"report") ) { return hx::Val( report_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addBody") ) { return hx::Val( addBody_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"solveTOI") ) { return hx::Val( solveTOI_dyn() ); }
		if (HX_FIELD_EQ(inName,"addJoint") ) { return hx::Val( addJoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"m_bodies") ) { return hx::Val( m_bodies ); }
		if (HX_FIELD_EQ(inName,"m_joints") ) { return hx::Val( m_joints ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return hx::Val( initialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"addContact") ) { return hx::Val( addContact_dyn() ); }
		if (HX_FIELD_EQ(inName,"m_listener") ) { return hx::Val( m_listener ); }
		if (HX_FIELD_EQ(inName,"m_contacts") ) { return hx::Val( m_contacts ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_allocator") ) { return hx::Val( m_allocator ); }
		if (HX_FIELD_EQ(inName,"m_bodyCount") ) { return hx::Val( m_bodyCount ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_jointCount") ) { return hx::Val( m_jointCount ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_contactCount") ) { return hx::Val( m_contactCount ); }
		if (HX_FIELD_EQ(inName,"m_bodyCapacity") ) { return hx::Val( m_bodyCapacity ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_contactSolver") ) { return hx::Val( m_contactSolver ); }
		if (HX_FIELD_EQ(inName,"m_jointCapacity") ) { return hx::Val( m_jointCapacity ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_contactCapacity") ) { return hx::Val( m_contactCapacity ); }
	}
	return super::__Field(inName,inCallProp);
}

bool B2Island_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"s_impulse") ) { outValue = ( s_impulse ); return true; }
	}
	return false;
}

hx::Val B2Island_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"m_bodies") ) { m_bodies=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_joints") ) { m_joints=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_listener") ) { m_listener=inValue.Cast<  ::box2D::dynamics::B2ContactListener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_contacts") ) { m_contacts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_allocator") ) { m_allocator=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_bodyCount") ) { m_bodyCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_jointCount") ) { m_jointCount=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_contactCount") ) { m_contactCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_bodyCapacity") ) { m_bodyCapacity=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_contactSolver") ) { m_contactSolver=inValue.Cast<  ::box2D::dynamics::contacts::B2ContactSolver >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_jointCapacity") ) { m_jointCapacity=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_contactCapacity") ) { m_contactCapacity=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool B2Island_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"s_impulse") ) { s_impulse=ioValue.Cast<  ::box2D::dynamics::B2ContactImpulse >(); return true; }
	}
	return false;
}

void B2Island_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_allocator","\x39","\xc2","\xe3","\x76"));
	outFields->push(HX_HCSTRING("m_listener","\xc6","\x01","\x7d","\x5f"));
	outFields->push(HX_HCSTRING("m_contactSolver","\x41","\x6c","\xc1","\xee"));
	outFields->push(HX_HCSTRING("m_bodies","\x52","\xc4","\xce","\x23"));
	outFields->push(HX_HCSTRING("m_contacts","\x25","\xd3","\xc1","\x53"));
	outFields->push(HX_HCSTRING("m_joints","\xbb","\x90","\xfb","\x59"));
	outFields->push(HX_HCSTRING("m_bodyCount","\x3b","\x95","\xc1","\x44"));
	outFields->push(HX_HCSTRING("m_jointCount","\xf7","\x08","\x6e","\x79"));
	outFields->push(HX_HCSTRING("m_contactCount","\x61","\xc8","\xf6","\x48"));
	outFields->push(HX_HCSTRING("m_bodyCapacity","\x4e","\xbc","\x91","\x40"));
	outFields->push(HX_HCSTRING("m_contactCapacity","\xe8","\x84","\x7c","\xda"));
	outFields->push(HX_HCSTRING("m_jointCapacity","\x12","\x46","\x33","\xbf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2Island_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(B2Island_obj,m_allocator),HX_HCSTRING("m_allocator","\x39","\xc2","\xe3","\x76")},
	{hx::fsObject /*::box2D::dynamics::B2ContactListener*/ ,(int)offsetof(B2Island_obj,m_listener),HX_HCSTRING("m_listener","\xc6","\x01","\x7d","\x5f")},
	{hx::fsObject /*::box2D::dynamics::contacts::B2ContactSolver*/ ,(int)offsetof(B2Island_obj,m_contactSolver),HX_HCSTRING("m_contactSolver","\x41","\x6c","\xc1","\xee")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(B2Island_obj,m_bodies),HX_HCSTRING("m_bodies","\x52","\xc4","\xce","\x23")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(B2Island_obj,m_contacts),HX_HCSTRING("m_contacts","\x25","\xd3","\xc1","\x53")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(B2Island_obj,m_joints),HX_HCSTRING("m_joints","\xbb","\x90","\xfb","\x59")},
	{hx::fsInt,(int)offsetof(B2Island_obj,m_bodyCount),HX_HCSTRING("m_bodyCount","\x3b","\x95","\xc1","\x44")},
	{hx::fsInt,(int)offsetof(B2Island_obj,m_jointCount),HX_HCSTRING("m_jointCount","\xf7","\x08","\x6e","\x79")},
	{hx::fsInt,(int)offsetof(B2Island_obj,m_contactCount),HX_HCSTRING("m_contactCount","\x61","\xc8","\xf6","\x48")},
	{hx::fsInt,(int)offsetof(B2Island_obj,m_bodyCapacity),HX_HCSTRING("m_bodyCapacity","\x4e","\xbc","\x91","\x40")},
	{hx::fsInt,(int)offsetof(B2Island_obj,m_contactCapacity),HX_HCSTRING("m_contactCapacity","\xe8","\x84","\x7c","\xda")},
	{hx::fsInt,(int)offsetof(B2Island_obj,m_jointCapacity),HX_HCSTRING("m_jointCapacity","\x12","\x46","\x33","\xbf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo B2Island_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::box2D::dynamics::B2ContactImpulse*/ ,(void *) &B2Island_obj::s_impulse,HX_HCSTRING("s_impulse","\xa9","\xd5","\xe7","\x69")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String B2Island_obj_sMemberFields[] = {
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("solve","\x7f","\xbf","\xc5","\x80"),
	HX_HCSTRING("solveTOI","\x4f","\xbc","\x4d","\x1c"),
	HX_HCSTRING("report","\xb4","\x3c","\x84","\x06"),
	HX_HCSTRING("addBody","\x63","\xbd","\x58","\x7d"),
	HX_HCSTRING("addContact","\x7f","\xa6","\xfe","\x80"),
	HX_HCSTRING("addJoint","\x69","\x5f","\x85","\xcb"),
	HX_HCSTRING("m_allocator","\x39","\xc2","\xe3","\x76"),
	HX_HCSTRING("m_listener","\xc6","\x01","\x7d","\x5f"),
	HX_HCSTRING("m_contactSolver","\x41","\x6c","\xc1","\xee"),
	HX_HCSTRING("m_bodies","\x52","\xc4","\xce","\x23"),
	HX_HCSTRING("m_contacts","\x25","\xd3","\xc1","\x53"),
	HX_HCSTRING("m_joints","\xbb","\x90","\xfb","\x59"),
	HX_HCSTRING("m_bodyCount","\x3b","\x95","\xc1","\x44"),
	HX_HCSTRING("m_jointCount","\xf7","\x08","\x6e","\x79"),
	HX_HCSTRING("m_contactCount","\x61","\xc8","\xf6","\x48"),
	HX_HCSTRING("m_bodyCapacity","\x4e","\xbc","\x91","\x40"),
	HX_HCSTRING("m_contactCapacity","\xe8","\x84","\x7c","\xda"),
	HX_HCSTRING("m_jointCapacity","\x12","\x46","\x33","\xbf"),
	::String(null()) };

static void B2Island_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Island_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Island_obj::s_impulse,"s_impulse");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2Island_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Island_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Island_obj::s_impulse,"s_impulse");
};

#endif

hx::Class B2Island_obj::__mClass;

static ::String B2Island_obj_sStaticFields[] = {
	HX_HCSTRING("s_impulse","\xa9","\xd5","\xe7","\x69"),
	::String(null())
};

void B2Island_obj::__register()
{
	hx::Object *dummy = new B2Island_obj;
	B2Island_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.B2Island","\x2e","\x96","\xf1","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &B2Island_obj::__GetStatic;
	__mClass->mSetStaticField = &B2Island_obj::__SetStatic;
	__mClass->mMarkFunc = B2Island_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(B2Island_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2Island_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2Island_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2Island_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2Island_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2Island_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void B2Island_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_3cffaad300dd2b25_461_boot)
HXDLIN( 461)		s_impulse =  ::box2D::dynamics::B2ContactImpulse_obj::__alloc( HX_CTX );
            	}
}

} // end namespace box2D
} // end namespace dynamics
