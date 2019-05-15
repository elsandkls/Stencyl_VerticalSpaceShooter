// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2ContactID
#include <box2D/collision/B2ContactID.h>
#endif
#ifndef INCLUDED_box2D_collision_B2ManifoldPoint
#include <box2D/collision/B2ManifoldPoint.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37cae476527fb0cb_40_new,"box2D.collision.B2ManifoldPoint","new",0xe354d5b5,"box2D.collision.B2ManifoldPoint.new","box2D/collision/B2ManifoldPoint.hx",40,0x2d787b1d)
HX_LOCAL_STACK_FRAME(_hx_pos_37cae476527fb0cb_45_reset,"box2D.collision.B2ManifoldPoint","reset",0x50150e64,"box2D.collision.B2ManifoldPoint.reset","box2D/collision/B2ManifoldPoint.hx",45,0x2d787b1d)
HX_LOCAL_STACK_FRAME(_hx_pos_37cae476527fb0cb_51_set,"box2D.collision.B2ManifoldPoint","set",0xe358a0f7,"box2D.collision.B2ManifoldPoint.set","box2D/collision/B2ManifoldPoint.hx",51,0x2d787b1d)
namespace box2D{
namespace collision{

void B2ManifoldPoint_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_37cae476527fb0cb_40_new)
HXLINE(  41)		this->m_localPoint =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  42)		this->m_id =  ::box2D::collision::B2ContactID_obj::__alloc( HX_CTX );
HXLINE(  43)		this->reset();
            	}

Dynamic B2ManifoldPoint_obj::__CreateEmpty() { return new B2ManifoldPoint_obj; }

void *B2ManifoldPoint_obj::_hx_vtable = 0;

Dynamic B2ManifoldPoint_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2ManifoldPoint_obj > _hx_result = new B2ManifoldPoint_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2ManifoldPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x709d69bb;
}

void B2ManifoldPoint_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_37cae476527fb0cb_45_reset)
HXLINE(  46)		{
HXLINE(  46)			 ::box2D::common::math::B2Vec2 _this = this->m_localPoint;
HXDLIN(  46)			_this->x = ((Float)0.0);
HXDLIN(  46)			_this->y = ((Float)0.0);
            		}
HXLINE(  47)		this->m_normalImpulse = ((Float)0.0);
HXLINE(  48)		this->m_tangentImpulse = ((Float)0.0);
HXLINE(  49)		this->m_id->set_key((int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2ManifoldPoint_obj,reset,(void))

void B2ManifoldPoint_obj::set( ::box2D::collision::B2ManifoldPoint m){
            	HX_STACKFRAME(&_hx_pos_37cae476527fb0cb_51_set)
HXLINE(  52)		{
HXLINE(  52)			 ::box2D::common::math::B2Vec2 _this = this->m_localPoint;
HXDLIN(  52)			 ::box2D::common::math::B2Vec2 v = m->m_localPoint;
HXDLIN(  52)			_this->x = v->x;
HXDLIN(  52)			_this->y = v->y;
            		}
HXLINE(  53)		this->m_normalImpulse = m->m_normalImpulse;
HXLINE(  54)		this->m_tangentImpulse = m->m_tangentImpulse;
HXLINE(  55)		this->m_id->set(m->m_id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2ManifoldPoint_obj,set,(void))


hx::ObjectPtr< B2ManifoldPoint_obj > B2ManifoldPoint_obj::__new() {
	hx::ObjectPtr< B2ManifoldPoint_obj > __this = new B2ManifoldPoint_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< B2ManifoldPoint_obj > B2ManifoldPoint_obj::__alloc(hx::Ctx *_hx_ctx) {
	B2ManifoldPoint_obj *__this = (B2ManifoldPoint_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2ManifoldPoint_obj), true, "box2D.collision.B2ManifoldPoint"));
	*(void **)__this = B2ManifoldPoint_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

B2ManifoldPoint_obj::B2ManifoldPoint_obj()
{
}

void B2ManifoldPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2ManifoldPoint);
	HX_MARK_MEMBER_NAME(m_localPoint,"m_localPoint");
	HX_MARK_MEMBER_NAME(m_normalImpulse,"m_normalImpulse");
	HX_MARK_MEMBER_NAME(m_tangentImpulse,"m_tangentImpulse");
	HX_MARK_MEMBER_NAME(m_id,"m_id");
	HX_MARK_END_CLASS();
}

void B2ManifoldPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_localPoint,"m_localPoint");
	HX_VISIT_MEMBER_NAME(m_normalImpulse,"m_normalImpulse");
	HX_VISIT_MEMBER_NAME(m_tangentImpulse,"m_tangentImpulse");
	HX_VISIT_MEMBER_NAME(m_id,"m_id");
}

hx::Val B2ManifoldPoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"m_id") ) { return hx::Val( m_id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_localPoint") ) { return hx::Val( m_localPoint ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_normalImpulse") ) { return hx::Val( m_normalImpulse ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_tangentImpulse") ) { return hx::Val( m_tangentImpulse ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val B2ManifoldPoint_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"m_id") ) { m_id=inValue.Cast<  ::box2D::collision::B2ContactID >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_localPoint") ) { m_localPoint=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_normalImpulse") ) { m_normalImpulse=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_tangentImpulse") ) { m_tangentImpulse=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2ManifoldPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_localPoint","\xb7","\xd0","\x8e","\xcf"));
	outFields->push(HX_HCSTRING("m_normalImpulse","\xbc","\x9e","\xbb","\xb4"));
	outFields->push(HX_HCSTRING("m_tangentImpulse","\x42","\xf9","\x1f","\x7e"));
	outFields->push(HX_HCSTRING("m_id","\xad","\xb3","\x54","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2ManifoldPoint_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2ManifoldPoint_obj,m_localPoint),HX_HCSTRING("m_localPoint","\xb7","\xd0","\x8e","\xcf")},
	{hx::fsFloat,(int)offsetof(B2ManifoldPoint_obj,m_normalImpulse),HX_HCSTRING("m_normalImpulse","\xbc","\x9e","\xbb","\xb4")},
	{hx::fsFloat,(int)offsetof(B2ManifoldPoint_obj,m_tangentImpulse),HX_HCSTRING("m_tangentImpulse","\x42","\xf9","\x1f","\x7e")},
	{hx::fsObject /*::box2D::collision::B2ContactID*/ ,(int)offsetof(B2ManifoldPoint_obj,m_id),HX_HCSTRING("m_id","\xad","\xb3","\x54","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *B2ManifoldPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String B2ManifoldPoint_obj_sMemberFields[] = {
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("m_localPoint","\xb7","\xd0","\x8e","\xcf"),
	HX_HCSTRING("m_normalImpulse","\xbc","\x9e","\xbb","\xb4"),
	HX_HCSTRING("m_tangentImpulse","\x42","\xf9","\x1f","\x7e"),
	HX_HCSTRING("m_id","\xad","\xb3","\x54","\x48"),
	::String(null()) };

static void B2ManifoldPoint_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2ManifoldPoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2ManifoldPoint_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2ManifoldPoint_obj::__mClass,"__mClass");
};

#endif

hx::Class B2ManifoldPoint_obj::__mClass;

void B2ManifoldPoint_obj::__register()
{
	hx::Object *dummy = new B2ManifoldPoint_obj;
	B2ManifoldPoint_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.collision.B2ManifoldPoint","\x43","\xd7","\x08","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = B2ManifoldPoint_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2ManifoldPoint_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2ManifoldPoint_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2ManifoldPoint_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2ManifoldPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2ManifoldPoint_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace collision