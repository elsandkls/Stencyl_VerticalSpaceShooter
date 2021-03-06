// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Float_Void
#include <lime/app/_Event_Float_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_system_Sensor
#include <lime/system/Sensor.h>
#endif
#ifndef INCLUDED_lime_system_SensorType
#include <lime/system/SensorType.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_AccelerometerEvent
#include <openfl/events/AccelerometerEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_sensors_Accelerometer
#include <openfl/sensors/Accelerometer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_120_new,"openfl.sensors.Accelerometer","new",0xc90bd80e,"openfl.sensors.Accelerometer.new","openfl/sensors/Accelerometer.hx",120,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_134_addEventListener,"openfl.sensors.Accelerometer","addEventListener",0x24c24f5f,"openfl.sensors.Accelerometer.addEventListener","openfl/sensors/Accelerometer.hx",134,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_180_setRequestedUpdateInterval,"openfl.sensors.Accelerometer","setRequestedUpdateInterval",0x3228fd0c,"openfl.sensors.Accelerometer.setRequestedUpdateInterval","openfl/sensors/Accelerometer.hx",180,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_211_update,"openfl.sensors.Accelerometer","update",0x14ceff1b,"openfl.sensors.Accelerometer.update","openfl/sensors/Accelerometer.hx",211,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_259_get_muted,"openfl.sensors.Accelerometer","get_muted",0xd092e9f0,"openfl.sensors.Accelerometer.get_muted","openfl/sensors/Accelerometer.hx",259,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_264_set_muted,"openfl.sensors.Accelerometer","set_muted",0xb3e3d5fc,"openfl.sensors.Accelerometer.set_muted","openfl/sensors/Accelerometer.hx",264,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_144_initialize,"openfl.sensors.Accelerometer","initialize",0x6c6b9b62,"openfl.sensors.Accelerometer.initialize","openfl/sensors/Accelerometer.hx",144,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_232_accelerometer_onUpdate,"openfl.sensors.Accelerometer","accelerometer_onUpdate",0xa4ccc04a,"openfl.sensors.Accelerometer.accelerometer_onUpdate","openfl/sensors/Accelerometer.hx",232,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_248_get_isSupported,"openfl.sensors.Accelerometer","get_isSupported",0x5d680929,"openfl.sensors.Accelerometer.get_isSupported","openfl/sensors/Accelerometer.hx",248,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_86_boot,"openfl.sensors.Accelerometer","boot",0x196a34c4,"openfl.sensors.Accelerometer.boot","openfl/sensors/Accelerometer.hx",86,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_87_boot,"openfl.sensors.Accelerometer","boot",0x196a34c4,"openfl.sensors.Accelerometer.boot","openfl/sensors/Accelerometer.hx",87,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_88_boot,"openfl.sensors.Accelerometer","boot",0x196a34c4,"openfl.sensors.Accelerometer.boot","openfl/sensors/Accelerometer.hx",88,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_89_boot,"openfl.sensors.Accelerometer","boot",0x196a34c4,"openfl.sensors.Accelerometer.boot","openfl/sensors/Accelerometer.hx",89,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_90_boot,"openfl.sensors.Accelerometer","boot",0x196a34c4,"openfl.sensors.Accelerometer.boot","openfl/sensors/Accelerometer.hx",90,0x246a7024)
HX_LOCAL_STACK_FRAME(_hx_pos_edf0bfbbf82459e5_91_boot,"openfl.sensors.Accelerometer","boot",0x196a34c4,"openfl.sensors.Accelerometer.boot","openfl/sensors/Accelerometer.hx",91,0x246a7024)
namespace openfl{
namespace sensors{

void Accelerometer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_120_new)
HXLINE( 122)		super::__construct(null());
HXLINE( 124)		::openfl::sensors::Accelerometer_obj::initialize();
HXLINE( 126)		this->_hx___interval = (int)0;
HXLINE( 127)		this->_hx___muted = false;
HXLINE( 129)		this->setRequestedUpdateInterval(::openfl::sensors::Accelerometer_obj::defaultInterval);
            	}

Dynamic Accelerometer_obj::__CreateEmpty() { return new Accelerometer_obj; }

void *Accelerometer_obj::_hx_vtable = 0;

Dynamic Accelerometer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Accelerometer_obj > _hx_result = new Accelerometer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Accelerometer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1b123bf8;
	} else {
		return inClassId==(int)0x2190e792;
	}
}

void Accelerometer_obj::addEventListener(::String type, ::Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_134_addEventListener)
HXLINE( 136)		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
HXLINE( 137)		this->update();
            	}


void Accelerometer_obj::setRequestedUpdateInterval(int interval){
            	HX_GC_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_180_setRequestedUpdateInterval)
HXLINE( 182)		this->_hx___interval = interval;
HXLINE( 184)		if ((this->_hx___interval < (int)0)) {
HXLINE( 186)			HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,null()));
            		}
            		else {
HXLINE( 188)			if ((this->_hx___interval == (int)0)) {
HXLINE( 190)				this->_hx___interval = ::openfl::sensors::Accelerometer_obj::defaultInterval;
            			}
            		}
HXLINE( 194)		if (hx::IsNotNull( this->_hx___timer )) {
HXLINE( 196)			this->_hx___timer->stop();
HXLINE( 197)			this->_hx___timer = null();
            		}
HXLINE( 201)		bool _hx_tmp;
HXDLIN( 201)		if (::openfl::sensors::Accelerometer_obj::supported) {
HXLINE( 201)			_hx_tmp = !(this->get_muted());
            		}
            		else {
HXLINE( 201)			_hx_tmp = false;
            		}
HXDLIN( 201)		if (_hx_tmp) {
HXLINE( 203)			this->_hx___timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,this->_hx___interval);
HXLINE( 204)			this->_hx___timer->run = this->update_dyn();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Accelerometer_obj,setRequestedUpdateInterval,(void))

void Accelerometer_obj::update(){
            	HX_GC_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_211_update)
HXLINE( 213)		 ::openfl::events::AccelerometerEvent event =  ::openfl::events::AccelerometerEvent_obj::__alloc( HX_CTX ,HX_("update",09,86,05,87),null(),null(),null(),null(),null(),null());
HXLINE( 215)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 215)		Float _hx_tmp;
HXDLIN( 215)		if ((timer > (int)0)) {
HXLINE( 215)			_hx_tmp = ((Float)timer / (Float)(int)1000);
            		}
            		else {
HXLINE( 215)			_hx_tmp = (int)0;
            		}
HXDLIN( 215)		event->timestamp = _hx_tmp;
HXLINE( 216)		event->accelerationX = ::openfl::sensors::Accelerometer_obj::currentX;
HXLINE( 217)		event->accelerationY = ::openfl::sensors::Accelerometer_obj::currentY;
HXLINE( 218)		event->accelerationZ = ::openfl::sensors::Accelerometer_obj::currentZ;
HXLINE( 220)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,update,(void))

bool Accelerometer_obj::get_muted(){
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_259_get_muted)
HXDLIN( 259)		return this->_hx___muted;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,get_muted,return )

bool Accelerometer_obj::set_muted(bool value){
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_264_set_muted)
HXLINE( 266)		this->_hx___muted = value;
HXLINE( 267)		this->setRequestedUpdateInterval(this->_hx___interval);
HXLINE( 269)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Accelerometer_obj,set_muted,return )

Float Accelerometer_obj::currentX;

Float Accelerometer_obj::currentY;

Float Accelerometer_obj::currentZ;

int Accelerometer_obj::defaultInterval;

bool Accelerometer_obj::initialized;

bool Accelerometer_obj::supported;

void Accelerometer_obj::initialize(){
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_144_initialize)
HXDLIN( 144)		if (!(::openfl::sensors::Accelerometer_obj::initialized)) {
HXLINE( 147)			::Array< ::Dynamic> sensors = ::lime::_hx_system::Sensor_obj::getSensors(::lime::_hx_system::SensorType_obj::ACCELEROMETER_dyn());
HXLINE( 149)			if ((sensors->length > (int)0)) {
HXLINE( 151)				sensors->__get((int)0).StaticCast<  ::lime::_hx_system::Sensor >()->onUpdate->add(::openfl::sensors::Accelerometer_obj::accelerometer_onUpdate_dyn(),null(),null());
HXLINE( 152)				::openfl::sensors::Accelerometer_obj::supported = true;
            			}
HXLINE( 157)			::openfl::sensors::Accelerometer_obj::initialized = true;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,initialize,(void))

void Accelerometer_obj::accelerometer_onUpdate(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_232_accelerometer_onUpdate)
HXLINE( 234)		::openfl::sensors::Accelerometer_obj::currentX = x;
HXLINE( 235)		::openfl::sensors::Accelerometer_obj::currentY = y;
HXLINE( 236)		::openfl::sensors::Accelerometer_obj::currentZ = z;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Accelerometer_obj,accelerometer_onUpdate,(void))

bool Accelerometer_obj::get_isSupported(){
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_248_get_isSupported)
HXLINE( 250)		::openfl::sensors::Accelerometer_obj::initialize();
HXLINE( 252)		return ::openfl::sensors::Accelerometer_obj::supported;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,get_isSupported,return )


hx::ObjectPtr< Accelerometer_obj > Accelerometer_obj::__new() {
	hx::ObjectPtr< Accelerometer_obj > __this = new Accelerometer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Accelerometer_obj > Accelerometer_obj::__alloc(hx::Ctx *_hx_ctx) {
	Accelerometer_obj *__this = (Accelerometer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Accelerometer_obj), true, "openfl.sensors.Accelerometer"));
	*(void **)__this = Accelerometer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Accelerometer_obj::Accelerometer_obj()
{
}

void Accelerometer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Accelerometer);
	HX_MARK_MEMBER_NAME(_hx___interval,"__interval");
	HX_MARK_MEMBER_NAME(_hx___muted,"__muted");
	HX_MARK_MEMBER_NAME(_hx___timer,"__timer");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Accelerometer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___interval,"__interval");
	HX_VISIT_MEMBER_NAME(_hx___muted,"__muted");
	HX_VISIT_MEMBER_NAME(_hx___timer,"__timer");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Accelerometer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_muted() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__muted") ) { return hx::Val( _hx___muted ); }
		if (HX_FIELD_EQ(inName,"__timer") ) { return hx::Val( _hx___timer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_muted") ) { return hx::Val( get_muted_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_muted") ) { return hx::Val( set_muted_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__interval") ) { return hx::Val( _hx___interval ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return hx::Val( addEventListener_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"setRequestedUpdateInterval") ) { return hx::Val( setRequestedUpdateInterval_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Accelerometer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"currentX") ) { outValue = ( currentX ); return true; }
		if (HX_FIELD_EQ(inName,"currentY") ) { outValue = ( currentY ); return true; }
		if (HX_FIELD_EQ(inName,"currentZ") ) { outValue = ( currentZ ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"supported") ) { outValue = ( supported ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_isSupported() ); return true; } }
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultInterval") ) { outValue = ( defaultInterval ); return true; }
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { outValue = get_isSupported_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accelerometer_onUpdate") ) { outValue = accelerometer_onUpdate_dyn(); return true; }
	}
	return false;
}

hx::Val Accelerometer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_muted(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__muted") ) { _hx___muted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__timer") ) { _hx___timer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__interval") ) { _hx___interval=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Accelerometer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"currentX") ) { currentX=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"currentY") ) { currentY=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"currentZ") ) { currentZ=ioValue.Cast< Float >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"supported") ) { supported=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultInterval") ) { defaultInterval=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Accelerometer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("muted","\x6b","\x8f","\x5b","\x10"));
	outFields->push(HX_HCSTRING("__interval","\x65","\xec","\xb4","\xcb"));
	outFields->push(HX_HCSTRING("__muted","\x4b","\xe8","\xb9","\x7a"));
	outFields->push(HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Accelerometer_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Accelerometer_obj,_hx___interval),HX_HCSTRING("__interval","\x65","\xec","\xb4","\xcb")},
	{hx::fsBool,(int)offsetof(Accelerometer_obj,_hx___muted),HX_HCSTRING("__muted","\x4b","\xe8","\xb9","\x7a")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(Accelerometer_obj,_hx___timer),HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Accelerometer_obj_sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Accelerometer_obj::currentX,HX_HCSTRING("currentX","\xff","\x15","\x45","\x9b")},
	{hx::fsFloat,(void *) &Accelerometer_obj::currentY,HX_HCSTRING("currentY","\x00","\x16","\x45","\x9b")},
	{hx::fsFloat,(void *) &Accelerometer_obj::currentZ,HX_HCSTRING("currentZ","\x01","\x16","\x45","\x9b")},
	{hx::fsInt,(void *) &Accelerometer_obj::defaultInterval,HX_HCSTRING("defaultInterval","\x26","\x37","\x8a","\x51")},
	{hx::fsBool,(void *) &Accelerometer_obj::initialized,HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{hx::fsBool,(void *) &Accelerometer_obj::supported,HX_HCSTRING("supported","\x2e","\xc6","\x09","\x15")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Accelerometer_obj_sMemberFields[] = {
	HX_HCSTRING("__interval","\x65","\xec","\xb4","\xcb"),
	HX_HCSTRING("__muted","\x4b","\xe8","\xb9","\x7a"),
	HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("setRequestedUpdateInterval","\xfa","\xce","\x5f","\x28"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get_muted","\xc2","\xeb","\x04","\x54"),
	HX_HCSTRING("set_muted","\xce","\xd7","\x55","\x37"),
	::String(null()) };

static void Accelerometer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Accelerometer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::currentX,"currentX");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::currentY,"currentY");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::currentZ,"currentZ");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::defaultInterval,"defaultInterval");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::supported,"supported");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Accelerometer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::currentX,"currentX");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::currentY,"currentY");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::currentZ,"currentZ");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::defaultInterval,"defaultInterval");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::supported,"supported");
};

#endif

hx::Class Accelerometer_obj::__mClass;

static ::String Accelerometer_obj_sStaticFields[] = {
	HX_HCSTRING("currentX","\xff","\x15","\x45","\x9b"),
	HX_HCSTRING("currentY","\x00","\x16","\x45","\x9b"),
	HX_HCSTRING("currentZ","\x01","\x16","\x45","\x9b"),
	HX_HCSTRING("defaultInterval","\x26","\x37","\x8a","\x51"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("supported","\x2e","\xc6","\x09","\x15"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("accelerometer_onUpdate","\x38","\x83","\x9c","\xc1"),
	HX_HCSTRING("get_isSupported","\x7b","\x34","\x6c","\xb4"),
	::String(null())
};

void Accelerometer_obj::__register()
{
	hx::Object *dummy = new Accelerometer_obj;
	Accelerometer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.sensors.Accelerometer","\x1c","\x79","\x67","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Accelerometer_obj::__GetStatic;
	__mClass->mSetStaticField = &Accelerometer_obj::__SetStatic;
	__mClass->mMarkFunc = Accelerometer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Accelerometer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Accelerometer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Accelerometer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Accelerometer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Accelerometer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Accelerometer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Accelerometer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_86_boot)
HXDLIN(  86)		currentX = ((Float)0.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_87_boot)
HXDLIN(  87)		currentY = ((Float)1.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_88_boot)
HXDLIN(  88)		currentZ = ((Float)0.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_89_boot)
HXDLIN(  89)		defaultInterval = (int)34;
            	}
{
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_90_boot)
HXDLIN(  90)		initialized = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_edf0bfbbf82459e5_91_boot)
HXDLIN(  91)		supported = false;
            	}
}

} // end namespace openfl
} // end namespace sensors
