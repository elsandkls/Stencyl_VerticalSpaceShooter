// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_JoystickButton
#include <com/stencyl/JoystickButton.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1054_new,"com.stencyl.JoystickButton","new",0x2673702f,"com.stencyl.JoystickButton.new","com/stencyl/Input.hx",1054,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1061_equals,"com.stencyl.JoystickButton","equals",0x98f3d9d0,"com.stencyl.JoystickButton.equals","com/stencyl/Input.hx",1061,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1013_fromID,"com.stencyl.JoystickButton","fromID",0x8ec77f56,"com.stencyl.JoystickButton.fromID","com/stencyl/Input.hx",1013,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_997_boot,"com.stencyl.JoystickButton","boot",0x76a7b983,"com.stencyl.JoystickButton.boot","com/stencyl/Input.hx",997,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_998_boot,"com.stencyl.JoystickButton","boot",0x76a7b983,"com.stencyl.JoystickButton.boot","com/stencyl/Input.hx",998,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1000_boot,"com.stencyl.JoystickButton","boot",0x76a7b983,"com.stencyl.JoystickButton.boot","com/stencyl/Input.hx",1000,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1001_boot,"com.stencyl.JoystickButton","boot",0x76a7b983,"com.stencyl.JoystickButton.boot","com/stencyl/Input.hx",1001,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1002_boot,"com.stencyl.JoystickButton","boot",0x76a7b983,"com.stencyl.JoystickButton.boot","com/stencyl/Input.hx",1002,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1003_boot,"com.stencyl.JoystickButton","boot",0x76a7b983,"com.stencyl.JoystickButton.boot","com/stencyl/Input.hx",1003,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1005_boot,"com.stencyl.JoystickButton","boot",0x76a7b983,"com.stencyl.JoystickButton.boot","com/stencyl/Input.hx",1005,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1006_boot,"com.stencyl.JoystickButton","boot",0x76a7b983,"com.stencyl.JoystickButton.boot","com/stencyl/Input.hx",1006,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1007_boot,"com.stencyl.JoystickButton","boot",0x76a7b983,"com.stencyl.JoystickButton.boot","com/stencyl/Input.hx",1007,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1008_boot,"com.stencyl.JoystickButton","boot",0x76a7b983,"com.stencyl.JoystickButton.boot","com/stencyl/Input.hx",1008,0x3cd12fa5)
HX_LOCAL_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1010_boot,"com.stencyl.JoystickButton","boot",0x76a7b983,"com.stencyl.JoystickButton.boot","com/stencyl/Input.hx",1010,0x3cd12fa5)
namespace com{
namespace stencyl{

void JoystickButton_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1054_new)
HXLINE(1055)		this->id = HX_("",00,00,00,00);
HXLINE(1056)		this->a = ::Array_obj< int >::__new(0);
            	}

Dynamic JoystickButton_obj::__CreateEmpty() { return new JoystickButton_obj; }

void *JoystickButton_obj::_hx_vtable = 0;

Dynamic JoystickButton_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JoystickButton_obj > _hx_result = new JoystickButton_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JoystickButton_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x35d5f7dd;
}

bool JoystickButton_obj::equals( ::com::stencyl::JoystickButton b){
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1061_equals)
HXDLIN(1061)		return (this->id == b->id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(JoystickButton_obj,equals,return )

int JoystickButton_obj::DEVICE;

int JoystickButton_obj::TYPE;

int JoystickButton_obj::UP;

int JoystickButton_obj::DOWN;

int JoystickButton_obj::LEFT;

int JoystickButton_obj::RIGHT;

int JoystickButton_obj::AXIS;

int JoystickButton_obj::HAT;

int JoystickButton_obj::BUTTON;

int JoystickButton_obj::BALL;

 ::haxe::ds::StringMap JoystickButton_obj::cacheFromID;

 ::com::stencyl::JoystickButton JoystickButton_obj::fromID(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1013_fromID)
HXLINE(1014)		if (::com::stencyl::JoystickButton_obj::cacheFromID->exists(id)) {
HXLINE(1015)			return ::com::stencyl::JoystickButton_obj::cacheFromID->get(id).StaticCast<  ::com::stencyl::JoystickButton >();
            		}
HXLINE(1017)		 ::com::stencyl::JoystickButton b =  ::com::stencyl::JoystickButton_obj::__alloc( HX_CTX );
HXLINE(1018)		b->id = id;
HXLINE(1020)		if ((id.indexOf(HX_("axis",a1,1c,79,40),null()) != (int)-1)) {
HXLINE(1022)			int device = ::Std_obj::parseInt(id.substr((int)0,id.indexOf(HX_(",",2c,00,00,00),null())));
HXLINE(1023)			int axis = ::Std_obj::parseInt(id.substr((id.lastIndexOf(HX_(" ",20,00,00,00),null()) + (int)1),null()));
HXLINE(1024)			int sign;
HXDLIN(1024)			if ((id.substr((id.indexOf(HX_("axis",a1,1c,79,40),null()) - (int)1),(int)1) == HX_("+",2b,00,00,00))) {
HXLINE(1024)				sign = (int)1;
            			}
            			else {
HXLINE(1024)				sign = (int)-1;
            			}
HXLINE(1025)			b->a = ::Array_obj< int >::__new(4)->init(0,device)->init(1,(int)0)->init(2,axis)->init(3,sign);
            		}
            		else {
HXLINE(1027)			if ((id.indexOf(HX_("hat",5b,3f,4f,00),null()) != (int)-1)) {
HXLINE(1029)				int device1 = ::Std_obj::parseInt(id.substr((int)0,id.indexOf(HX_(",",2c,00,00,00),null())));
HXLINE(1030)				int hat = (int)0;
HXLINE(1031)				int sign1 = (int)0;
HXLINE(1032)				{
HXLINE(1032)					::String _g = id.split(HX_(" ",20,00,00,00))->__get((int)1);
HXDLIN(1032)					::String _hx_switch_0 = _g;
            					if (  (_hx_switch_0==HX_("down",62,f8,6d,42)) ){
HXLINE(1035)						hat = (int)1;
HXDLIN(1035)						sign1 = (int)1;
HXDLIN(1035)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE(1037)						hat = (int)0;
HXDLIN(1037)						sign1 = (int)-1;
HXDLIN(1037)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(1036)						hat = (int)0;
HXDLIN(1036)						sign1 = (int)1;
HXDLIN(1036)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==HX_("up",5b,66,00,00)) ){
HXLINE(1034)						hat = (int)1;
HXDLIN(1034)						sign1 = (int)-1;
HXDLIN(1034)						goto _hx_goto_2;
            					}
            					_hx_goto_2:;
            				}
HXLINE(1039)				b->a = ::Array_obj< int >::__new(4)->init(0,device1)->init(1,(int)1)->init(2,hat)->init(3,sign1);
            			}
            			else {
HXLINE(1043)				int device2 = ::Std_obj::parseInt(id.substr((int)0,id.indexOf(HX_(",",2c,00,00,00),null())));
HXLINE(1044)				int button = ::Std_obj::parseInt(id.substr(id.lastIndexOf(HX_(" ",20,00,00,00),null()),null()));
HXLINE(1046)				b->a = ::Array_obj< int >::__new(3)->init(0,device2)->init(1,(int)2)->init(2,button);
            			}
            		}
HXLINE(1049)		::com::stencyl::JoystickButton_obj::cacheFromID->set(id,b);
HXLINE(1050)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JoystickButton_obj,fromID,return )


JoystickButton_obj::JoystickButton_obj()
{
}

void JoystickButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JoystickButton);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_END_CLASS();
}

void JoystickButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(a,"a");
}

hx::Val JoystickButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return hx::Val( a ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool JoystickButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fromID") ) { outValue = fromID_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cacheFromID") ) { outValue = ( cacheFromID ); return true; }
	}
	return false;
}

hx::Val JoystickButton_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool JoystickButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"cacheFromID") ) { cacheFromID=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void JoystickButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo JoystickButton_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(JoystickButton_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(JoystickButton_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo JoystickButton_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &JoystickButton_obj::DEVICE,HX_HCSTRING("DEVICE","\x96","\x88","\xfa","\x23")},
	{hx::fsInt,(void *) &JoystickButton_obj::TYPE,HX_HCSTRING("TYPE","\xba","\xba","\xc9","\x37")},
	{hx::fsInt,(void *) &JoystickButton_obj::UP,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")},
	{hx::fsInt,(void *) &JoystickButton_obj::DOWN,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")},
	{hx::fsInt,(void *) &JoystickButton_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &JoystickButton_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &JoystickButton_obj::AXIS,HX_HCSTRING("AXIS","\xa1","\xe4","\x39","\x2b")},
	{hx::fsInt,(void *) &JoystickButton_obj::HAT,HX_HCSTRING("HAT","\x3b","\xdb","\x36","\x00")},
	{hx::fsInt,(void *) &JoystickButton_obj::BUTTON,HX_HCSTRING("BUTTON","\xf2","\x0d","\x63","\x8c")},
	{hx::fsInt,(void *) &JoystickButton_obj::BALL,HX_HCSTRING("BALL","\xff","\xa9","\xd1","\x2b")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &JoystickButton_obj::cacheFromID,HX_HCSTRING("cacheFromID","\xa7","\xbf","\x67","\xd4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String JoystickButton_obj_sMemberFields[] = {
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	::String(null()) };

static void JoystickButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoystickButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JoystickButton_obj::DEVICE,"DEVICE");
	HX_MARK_MEMBER_NAME(JoystickButton_obj::TYPE,"TYPE");
	HX_MARK_MEMBER_NAME(JoystickButton_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(JoystickButton_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(JoystickButton_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(JoystickButton_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(JoystickButton_obj::AXIS,"AXIS");
	HX_MARK_MEMBER_NAME(JoystickButton_obj::HAT,"HAT");
	HX_MARK_MEMBER_NAME(JoystickButton_obj::BUTTON,"BUTTON");
	HX_MARK_MEMBER_NAME(JoystickButton_obj::BALL,"BALL");
	HX_MARK_MEMBER_NAME(JoystickButton_obj::cacheFromID,"cacheFromID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JoystickButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoystickButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JoystickButton_obj::DEVICE,"DEVICE");
	HX_VISIT_MEMBER_NAME(JoystickButton_obj::TYPE,"TYPE");
	HX_VISIT_MEMBER_NAME(JoystickButton_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(JoystickButton_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(JoystickButton_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(JoystickButton_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(JoystickButton_obj::AXIS,"AXIS");
	HX_VISIT_MEMBER_NAME(JoystickButton_obj::HAT,"HAT");
	HX_VISIT_MEMBER_NAME(JoystickButton_obj::BUTTON,"BUTTON");
	HX_VISIT_MEMBER_NAME(JoystickButton_obj::BALL,"BALL");
	HX_VISIT_MEMBER_NAME(JoystickButton_obj::cacheFromID,"cacheFromID");
};

#endif

hx::Class JoystickButton_obj::__mClass;

static ::String JoystickButton_obj_sStaticFields[] = {
	HX_HCSTRING("DEVICE","\x96","\x88","\xfa","\x23"),
	HX_HCSTRING("TYPE","\xba","\xba","\xc9","\x37"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("AXIS","\xa1","\xe4","\x39","\x2b"),
	HX_HCSTRING("HAT","\x3b","\xdb","\x36","\x00"),
	HX_HCSTRING("BUTTON","\xf2","\x0d","\x63","\x8c"),
	HX_HCSTRING("BALL","\xff","\xa9","\xd1","\x2b"),
	HX_HCSTRING("cacheFromID","\xa7","\xbf","\x67","\xd4"),
	HX_HCSTRING("fromID","\xc5","\x93","\xc6","\xb5"),
	::String(null())
};

void JoystickButton_obj::__register()
{
	hx::Object *dummy = new JoystickButton_obj;
	JoystickButton_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.JoystickButton","\xbd","\x2c","\x76","\x20");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JoystickButton_obj::__GetStatic;
	__mClass->mSetStaticField = &JoystickButton_obj::__SetStatic;
	__mClass->mMarkFunc = JoystickButton_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(JoystickButton_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JoystickButton_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JoystickButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JoystickButton_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JoystickButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JoystickButton_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void JoystickButton_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_997_boot)
HXDLIN( 997)		DEVICE = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_998_boot)
HXDLIN( 998)		TYPE = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1000_boot)
HXDLIN(1000)		UP = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1001_boot)
HXDLIN(1001)		DOWN = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1002_boot)
HXDLIN(1002)		LEFT = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1003_boot)
HXDLIN(1003)		RIGHT = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1005_boot)
HXDLIN(1005)		AXIS = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1006_boot)
HXDLIN(1006)		HAT = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1007_boot)
HXDLIN(1007)		BUTTON = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1008_boot)
HXDLIN(1008)		BALL = (int)3;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1010_boot)
HXDLIN(1010)		cacheFromID =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace com
} // end namespace stencyl