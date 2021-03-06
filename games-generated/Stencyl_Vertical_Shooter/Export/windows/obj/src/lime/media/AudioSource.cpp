// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeAudioSource
#include <lime/_internal/backend/native/NativeAudioSource.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeAudioSource2
#include <lime/_internal/backend/native/NativeAudioSource2.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeAudioSourceImpl
#include <lime/_internal/backend/native/NativeAudioSourceImpl.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioManager
#include <lime/media/AudioManager.h>
#endif
#ifndef INCLUDED_lime_media_AudioSource
#include <lime/media/AudioSource.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisFile
#include <lime/media/vorbis/VorbisFile.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_15_new,"lime.media.AudioSource","new",0xf0422400,"lime.media.AudioSource.new","lime/media/AudioSource.hx",15,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_64_dispose,"lime.media.AudioSource","dispose",0x9c7d243f,"lime.media.AudioSource.dispose","lime/media/AudioSource.hx",64,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_72_init,"lime.media.AudioSource","init",0x46561370,"lime.media.AudioSource.init","lime/media/AudioSource.hx",72,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_81_update,"lime.media.AudioSource","update",0x064f3669,"lime.media.AudioSource.update","lime/media/AudioSource.hx",81,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_87_play,"lime.media.AudioSource","play",0x4af50654,"lime.media.AudioSource.play","lime/media/AudioSource.hx",87,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_94_pause,"lime.media.AudioSource","pause",0x443a5296,"lime.media.AudioSource.pause","lime/media/AudioSource.hx",94,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_101_stop,"lime.media.AudioSource","stop",0x4cf6c862,"lime.media.AudioSource.stop","lime/media/AudioSource.hx",101,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_115_get_currentTime,"lime.media.AudioSource","get_currentTime",0x645da01d,"lime.media.AudioSource.get_currentTime","lime/media/AudioSource.hx",115,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_122_set_currentTime,"lime.media.AudioSource","set_currentTime",0x60291d29,"lime.media.AudioSource.set_currentTime","lime/media/AudioSource.hx",122,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_129_get_gain,"lime.media.AudioSource","get_gain",0xed783468,"lime.media.AudioSource.get_gain","lime/media/AudioSource.hx",129,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_136_set_gain,"lime.media.AudioSource","set_gain",0x9bd58ddc,"lime.media.AudioSource.set_gain","lime/media/AudioSource.hx",136,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_143_get_length,"lime.media.AudioSource","get_length",0xb3e8650f,"lime.media.AudioSource.get_length","lime/media/AudioSource.hx",143,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_150_set_length,"lime.media.AudioSource","set_length",0xb7660383,"lime.media.AudioSource.set_length","lime/media/AudioSource.hx",150,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_157_get_loops,"lime.media.AudioSource","get_loops",0xc5fc1986,"lime.media.AudioSource.get_loops","lime/media/AudioSource.hx",157,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_164_set_loops,"lime.media.AudioSource","set_loops",0xa94d0592,"lime.media.AudioSource.set_loops","lime/media/AudioSource.hx",164,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_171_get_position,"lime.media.AudioSource","get_position",0x75ce8d12,"lime.media.AudioSource.get_position","lime/media/AudioSource.hx",171,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_178_set_position,"lime.media.AudioSource","set_position",0x8ac7b086,"lime.media.AudioSource.set_position","lime/media/AudioSource.hx",178,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_17_boot,"lime.media.AudioSource","boot",0x41b65c92,"lime.media.AudioSource.boot","lime/media/AudioSource.hx",17,0xae7961b2)
namespace lime{
namespace media{

void AudioSource_obj::__construct( ::lime::media::AudioBuffer buffer,hx::Null< int >  __o_offset, ::Dynamic length,hx::Null< int >  __o_loops){
int offset = __o_offset.Default(0);
int loops = __o_loops.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_15_new)
HXLINE(  21)		this->id = ::lime::media::AudioSource_obj::ID++;
HXLINE(  19)		this->onComplete =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  35)		this->buffer = buffer;
HXLINE(  36)		this->offset = offset;
HXLINE(  41)		if (hx::IsNull( buffer->_hx___srcVorbisFile )) {
HXLINE(  42)			this->_hx___backend =  ::lime::_internal::backend::native::NativeAudioSource_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
            		}
            		else {
HXLINE(  44)			this->_hx___backend =  ::lime::_internal::backend::native::NativeAudioSource2_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  47)		bool _hx_tmp;
HXDLIN(  47)		if (hx::IsNotNull( length )) {
HXLINE(  47)			_hx_tmp = hx::IsNotEq( length,(int)0 );
            		}
            		else {
HXLINE(  47)			_hx_tmp = false;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  49)			this->set_length(length);
            		}
HXLINE(  53)		this->set_loops(loops);
HXLINE(  55)		if (hx::IsNotNull( buffer )) {
HXLINE(  57)			this->init();
            		}
            	}

Dynamic AudioSource_obj::__CreateEmpty() { return new AudioSource_obj; }

void *AudioSource_obj::_hx_vtable = 0;

Dynamic AudioSource_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AudioSource_obj > _hx_result = new AudioSource_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool AudioSource_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08bb5e62;
}

void AudioSource_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_64_dispose)
HXLINE(  66)		::lime::_internal::backend::native::NativeAudioSourceImpl_obj::dispose(this->_hx___backend);
HXLINE(  67)		::lime::media::AudioManager_obj::removeAudioSource(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,dispose,(void))

void AudioSource_obj::init(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_72_init)
HXLINE(  74)		::lime::_internal::backend::native::NativeAudioSourceImpl_obj::init(this->_hx___backend);
HXLINE(  75)		::lime::media::AudioManager_obj::addAudioSource(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,init,(void))

void AudioSource_obj::update(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_81_update)
HXDLIN(  81)		::lime::_internal::backend::native::NativeAudioSourceImpl_obj::update(this->_hx___backend);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,update,(void))

void AudioSource_obj::play(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_87_play)
HXDLIN(  87)		::lime::_internal::backend::native::NativeAudioSourceImpl_obj::play(this->_hx___backend);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,play,(void))

void AudioSource_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_94_pause)
HXDLIN(  94)		::lime::_internal::backend::native::NativeAudioSourceImpl_obj::pause(this->_hx___backend);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,pause,(void))

void AudioSource_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_101_stop)
HXDLIN( 101)		::lime::_internal::backend::native::NativeAudioSourceImpl_obj::stop(this->_hx___backend);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,stop,(void))

int AudioSource_obj::get_currentTime(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_115_get_currentTime)
HXDLIN( 115)		return ::lime::_internal::backend::native::NativeAudioSourceImpl_obj::getCurrentTime(this->_hx___backend);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_currentTime,return )

int AudioSource_obj::set_currentTime(int value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_122_set_currentTime)
HXDLIN( 122)		return ::lime::_internal::backend::native::NativeAudioSourceImpl_obj::setCurrentTime(this->_hx___backend,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_currentTime,return )

Float AudioSource_obj::get_gain(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_129_get_gain)
HXDLIN( 129)		return ::lime::_internal::backend::native::NativeAudioSourceImpl_obj::getGain(this->_hx___backend);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_gain,return )

Float AudioSource_obj::set_gain(Float value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_136_set_gain)
HXDLIN( 136)		return ::lime::_internal::backend::native::NativeAudioSourceImpl_obj::setGain(this->_hx___backend,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_gain,return )

int AudioSource_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_143_get_length)
HXDLIN( 143)		return ::lime::_internal::backend::native::NativeAudioSourceImpl_obj::getLength(this->_hx___backend);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_length,return )

int AudioSource_obj::set_length(int value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_150_set_length)
HXDLIN( 150)		return ::lime::_internal::backend::native::NativeAudioSourceImpl_obj::setLength(this->_hx___backend,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_length,return )

int AudioSource_obj::get_loops(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_157_get_loops)
HXDLIN( 157)		return ::lime::_internal::backend::native::NativeAudioSourceImpl_obj::getLoops(this->_hx___backend);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_loops,return )

int AudioSource_obj::set_loops(int value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_164_set_loops)
HXDLIN( 164)		return ::lime::_internal::backend::native::NativeAudioSourceImpl_obj::setLoops(this->_hx___backend,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_loops,return )

 ::lime::math::Vector4 AudioSource_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_171_get_position)
HXDLIN( 171)		return ::lime::_internal::backend::native::NativeAudioSourceImpl_obj::getPosition(this->_hx___backend);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_position,return )

 ::lime::math::Vector4 AudioSource_obj::set_position( ::lime::math::Vector4 value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_178_set_position)
HXDLIN( 178)		return ::lime::_internal::backend::native::NativeAudioSourceImpl_obj::setPosition(this->_hx___backend,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_position,return )

int AudioSource_obj::ID;


hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__new( ::lime::media::AudioBuffer buffer,hx::Null< int >  __o_offset, ::Dynamic length,hx::Null< int >  __o_loops) {
	hx::ObjectPtr< AudioSource_obj > __this = new AudioSource_obj();
	__this->__construct(buffer,__o_offset,length,__o_loops);
	return __this;
}

hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__alloc(hx::Ctx *_hx_ctx, ::lime::media::AudioBuffer buffer,hx::Null< int >  __o_offset, ::Dynamic length,hx::Null< int >  __o_loops) {
	AudioSource_obj *__this = (AudioSource_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AudioSource_obj), true, "lime.media.AudioSource"));
	*(void **)__this = AudioSource_obj::_hx_vtable;
	__this->__construct(buffer,__o_offset,length,__o_loops);
	return __this;
}

AudioSource_obj::AudioSource_obj()
{
}

void AudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSource);
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(_hx___backend,"__backend");
	HX_MARK_END_CLASS();
}

void AudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(_hx___backend,"__backend");
}

hx::Val AudioSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_gain() ); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_loops() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_position() ); }
		if (HX_FIELD_EQ(inName,"get_gain") ) { return hx::Val( get_gain_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_gain") ) { return hx::Val( set_gain_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__backend") ) { return hx::Val( _hx___backend ); }
		if (HX_FIELD_EQ(inName,"get_loops") ) { return hx::Val( get_loops_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_loops") ) { return hx::Val( set_loops_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_currentTime() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return hx::Val( set_position_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentTime") ) { return hx::Val( get_currentTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_currentTime") ) { return hx::Val( set_currentTime_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AudioSource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { outValue = ( ID ); return true; }
	}
	return false;
}

hx::Val AudioSource_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_gain(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_loops(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::lime::media::AudioBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_position(inValue.Cast<  ::lime::math::Vector4 >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__backend") ) { _hx___backend=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_currentTime(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AudioSource_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void AudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("currentTime","\xe6","\xa4","\x8e","\x85"));
	outFields->push(HX_HCSTRING("gain","\x7f","\xf0","\x5e","\x44"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("__backend","\xf4","\x0c","\xd6","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AudioSource_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(AudioSource_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::lime::media::AudioBuffer*/ ,(int)offsetof(AudioSource_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::lime::_internal::backend::native::NativeAudioSourceImpl*/ ,(int)offsetof(AudioSource_obj,_hx___backend),HX_HCSTRING("__backend","\xf4","\x0c","\xd6","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo AudioSource_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &AudioSource_obj::ID,HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String AudioSource_obj_sMemberFields[] = {
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("__backend","\xf4","\x0c","\xd6","\x7c"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("get_currentTime","\x7d","\x5c","\x70","\x46"),
	HX_HCSTRING("set_currentTime","\x89","\xd9","\x3b","\x42"),
	HX_HCSTRING("get_gain","\x08","\xac","\x19","\xc4"),
	HX_HCSTRING("set_gain","\x7c","\x05","\x77","\x72"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("get_loops","\xe6","\x4d","\xa3","\xbc"),
	HX_HCSTRING("set_loops","\xf2","\x39","\xf4","\x9f"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	::String(null()) };

static void AudioSource_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioSource_obj::ID,"ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AudioSource_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioSource_obj::ID,"ID");
};

#endif

hx::Class AudioSource_obj::__mClass;

static ::String AudioSource_obj_sStaticFields[] = {
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	::String(null())
};

void AudioSource_obj::__register()
{
	hx::Object *dummy = new AudioSource_obj;
	AudioSource_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.AudioSource","\x0e","\x64","\xe8","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioSource_obj::__GetStatic;
	__mClass->mSetStaticField = &AudioSource_obj::__SetStatic;
	__mClass->mMarkFunc = AudioSource_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AudioSource_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AudioSource_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioSource_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AudioSource_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioSource_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AudioSource_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_17_boot)
HXDLIN(  17)		ID = (int)0;
            	}
}

} // end namespace lime
} // end namespace media
