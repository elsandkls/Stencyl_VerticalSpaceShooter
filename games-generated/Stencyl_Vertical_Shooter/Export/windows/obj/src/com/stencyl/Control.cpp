// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Control
#include <com/stencyl/Control.h>
#endif
#ifndef INCLUDED_com_stencyl_JoystickButton
#include <com/stencyl/JoystickButton.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae90999902a502b2_973_new,"com.stencyl.Control","new",0x54cce280,"com.stencyl.Control.new","com/stencyl/Input.hx",973,0x3cd12fa5)
namespace com{
namespace stencyl{

void Control_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_ae90999902a502b2_973_new)
HXLINE( 983)		this->pressure = ((Float)0);
HXLINE( 987)		this->name = name;
HXLINE( 988)		this->keys = ::Array_obj< int >::__new(0);
HXLINE( 990)		this->buttons = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic Control_obj::__CreateEmpty() { return new Control_obj; }

void *Control_obj::_hx_vtable = 0;

Dynamic Control_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Control_obj > _hx_result = new Control_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Control_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x77a2e652;
}


hx::ObjectPtr< Control_obj > Control_obj::__new(::String name) {
	hx::ObjectPtr< Control_obj > __this = new Control_obj();
	__this->__construct(name);
	return __this;
}

hx::ObjectPtr< Control_obj > Control_obj::__alloc(hx::Ctx *_hx_ctx,::String name) {
	Control_obj *__this = (Control_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Control_obj), true, "com.stencyl.Control"));
	*(void **)__this = Control_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

Control_obj::Control_obj()
{
}

void Control_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Control);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(released,"released");
	HX_MARK_MEMBER_NAME(down,"down");
	HX_MARK_MEMBER_NAME(pressure,"pressure");
	HX_MARK_END_CLASS();
}

void Control_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(released,"released");
	HX_VISIT_MEMBER_NAME(down,"down");
	HX_VISIT_MEMBER_NAME(pressure,"pressure");
}

hx::Val Control_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"keys") ) { return hx::Val( keys ); }
		if (HX_FIELD_EQ(inName,"down") ) { return hx::Val( down ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { return hx::Val( buttons ); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return hx::Val( pressed ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return hx::Val( released ); }
		if (HX_FIELD_EQ(inName,"pressure") ) { return hx::Val( pressure ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Control_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down") ) { down=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { released=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Control_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"));
	outFields->push(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"));
	outFields->push(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
	outFields->push(HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Control_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Control_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Control_obj,keys),HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Control_obj,buttons),HX_HCSTRING("buttons","\x41","\x52","\x75","\xca")},
	{hx::fsBool,(int)offsetof(Control_obj,pressed),HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")},
	{hx::fsBool,(int)offsetof(Control_obj,released),HX_HCSTRING("released","\xbd","\x88","\xe7","\x76")},
	{hx::fsBool,(int)offsetof(Control_obj,down),HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")},
	{hx::fsFloat,(int)offsetof(Control_obj,pressure),HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Control_obj_sStaticStorageInfo = 0;
#endif

static ::String Control_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"),
	HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),
	HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"),
	::String(null()) };

static void Control_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Control_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Control_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Control_obj::__mClass,"__mClass");
};

#endif

hx::Class Control_obj::__mClass;

void Control_obj::__register()
{
	hx::Object *dummy = new Control_obj;
	Control_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.Control","\x8e","\xe2","\x91","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Control_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Control_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Control_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Control_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Control_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Control_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
