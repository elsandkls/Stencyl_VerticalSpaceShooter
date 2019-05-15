// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Atlas
#include <com/stencyl/models/Atlas.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Sound
#include <com/stencyl/models/Sound.h>
#endif
#ifndef INCLUDED_com_stencyl_models_SoundChannel
#include <com/stencyl/models/SoundChannel.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Assets
#include <com/stencyl/utils/Assets.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisFile
#include <lime/media/vorbis/VorbisFile.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fa5c2b1d243c39f8_32_new,"com.stencyl.models.Sound","new",0xe9c1b2ec,"com.stencyl.models.Sound.new","com/stencyl/models/Sound.hx",32,0xddcd8043)
HX_LOCAL_STACK_FRAME(_hx_pos_fa5c2b1d243c39f8_58_loadGraphics,"com.stencyl.models.Sound","loadGraphics",0xb3505105,"com.stencyl.models.Sound.loadGraphics","com/stencyl/models/Sound.hx",58,0xddcd8043)
HX_LOCAL_STACK_FRAME(_hx_pos_fa5c2b1d243c39f8_67_unloadGraphics,"com.stencyl.models.Sound","unloadGraphics",0x14e73dde,"com.stencyl.models.Sound.unloadGraphics","com/stencyl/models/Sound.hx",67,0xddcd8043)
HX_LOCAL_STACK_FRAME(_hx_pos_fa5c2b1d243c39f8_80_play,"com.stencyl.models.Sound","play",0xa11285e8,"com.stencyl.models.Sound.play","com/stencyl/models/Sound.hx",80,0xddcd8043)
HX_LOCAL_STACK_FRAME(_hx_pos_fa5c2b1d243c39f8_96_loop,"com.stencyl.models.Sound","loop",0x9e6ffe58,"com.stencyl.models.Sound.loop","com/stencyl/models/Sound.hx",96,0xddcd8043)
HX_LOCAL_STACK_FRAME(_hx_pos_fa5c2b1d243c39f8_113_getStreamingSource,"com.stencyl.models.Sound","getStreamingSource",0xf102dddb,"com.stencyl.models.Sound.getStreamingSource","com/stencyl/models/Sound.hx",113,0xddcd8043)
HX_LOCAL_STACK_FRAME(_hx_pos_fa5c2b1d243c39f8_141_stopInstances,"com.stencyl.models.Sound","stopInstances",0xb6276c68,"com.stencyl.models.Sound.stopInstances","com/stencyl/models/Sound.hx",141,0xddcd8043)
namespace com{
namespace stencyl{
namespace models{

void Sound_obj::__construct(int ID,::String name,bool streaming,bool looping,Float panning,Float volume,::String ext,int atlasID){
            	HX_STACKFRAME(&_hx_pos_fa5c2b1d243c39f8_32_new)
HXLINE(  33)		super::__construct(ID,name,(int)-1);
HXLINE(  35)		this->streaming = streaming;
HXLINE(  36)		this->looping = looping;
HXLINE(  37)		this->panning = panning;
HXLINE(  38)		this->volume = volume;
HXLINE(  39)		this->ext = ext;
HXLINE(  40)		this->atlasID = atlasID;
HXLINE(  43)		this->ext = HX_("ogg",4f,94,54,00);
HXLINE(  48)		 ::com::stencyl::models::Atlas atlas = ::com::stencyl::models::GameModel_obj::get()->atlases->get(atlasID).StaticCast<  ::com::stencyl::models::Atlas >();
HXLINE(  50)		bool _hx_tmp;
HXDLIN(  50)		if (hx::IsNotNull( atlas )) {
HXLINE(  50)			_hx_tmp = atlas->active;
            		}
            		else {
HXLINE(  50)			_hx_tmp = false;
            		}
HXDLIN(  50)		if (_hx_tmp) {
HXLINE(  52)			this->loadGraphics();
            		}
            	}

Dynamic Sound_obj::__CreateEmpty() { return new Sound_obj; }

void *Sound_obj::_hx_vtable = 0;

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sound_obj > _hx_result = new Sound_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool Sound_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x170dc54f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x170dc54f;
	} else {
		return inClassId==(int)0x248da576;
	}
}

void Sound_obj::loadGraphics(){
            	HX_STACKFRAME(&_hx_pos_fa5c2b1d243c39f8_58_loadGraphics)
HXDLIN(  58)		if (!(this->streaming)) {
HXLINE(  61)			::String _hx_tmp;
HXDLIN(  61)			if (this->streaming) {
HXLINE(  61)				_hx_tmp = HX_("music",a5,d0,5a,10);
            			}
            			else {
HXLINE(  61)				_hx_tmp = HX_("sfx",85,9c,57,00);
            			}
HXDLIN(  61)			this->src = ::com::stencyl::utils::Assets_obj::getSound((((((HX_("assets/",4c,2a,dc,36) + _hx_tmp) + HX_("/sound-",ed,75,9f,d4)) + this->ID) + HX_(".",2e,00,00,00)) + this->ext),false);
            		}
            	}


void Sound_obj::unloadGraphics(){
            	HX_STACKFRAME(&_hx_pos_fa5c2b1d243c39f8_67_unloadGraphics)
HXDLIN(  67)		if (!(this->streaming)) {
HXLINE(  69)			if (hx::IsNotNull( this->src )) {
HXLINE(  71)				this->stopInstances();
HXLINE(  72)				this->src->close();
            			}
HXLINE(  75)			this->src = null();
            		}
            	}


 ::openfl::media::SoundChannel Sound_obj::play(hx::Null< int >  __o_channelNum,hx::Null< Float >  __o_position){
int channelNum = __o_channelNum.Default(1);
Float position = __o_position.Default(0);
            	HX_STACKFRAME(&_hx_pos_fa5c2b1d243c39f8_80_play)
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		if (this->streaming) {
HXLINE(  81)			_hx_tmp = hx::IsNull( this->src );
            		}
            		else {
HXLINE(  81)			_hx_tmp = false;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  83)			this->src = this->getStreamingSource();
            		}
HXLINE(  86)		if (hx::IsNull( this->src )) {
HXLINE(  88)			 ::Dynamic _hx_tmp1 = ::haxe::Log_obj::trace;
HXDLIN(  88)			_hx_tmp1((((HX_("Trying to play uninitialized sound: ",90,fb,0b,fb) + this->name) + HX_(" - ",73,6f,18,00)) + this->ID),hx::SourceInfo(HX_("Sound.hx",6f,1d,3b,f3),88,HX_("com.stencyl.models.Sound",fa,0c,63,9c),HX_("play",f4,2d,5a,4a)));
HXLINE(  89)			return null();
            		}
HXLINE(  92)		return this->src->play(position,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,play,return )

 ::openfl::media::SoundChannel Sound_obj::loop(hx::Null< int >  __o_channelNum,hx::Null< Float >  __o_position){
int channelNum = __o_channelNum.Default(1);
Float position = __o_position.Default(0);
            	HX_STACKFRAME(&_hx_pos_fa5c2b1d243c39f8_96_loop)
HXLINE(  97)		bool _hx_tmp;
HXDLIN(  97)		if (this->streaming) {
HXLINE(  97)			_hx_tmp = hx::IsNull( this->src );
            		}
            		else {
HXLINE(  97)			_hx_tmp = false;
            		}
HXDLIN(  97)		if (_hx_tmp) {
HXLINE(  99)			this->src = this->getStreamingSource();
            		}
HXLINE( 102)		if (hx::IsNull( this->src )) {
HXLINE( 104)			 ::Dynamic _hx_tmp1 = ::haxe::Log_obj::trace;
HXDLIN( 104)			_hx_tmp1((((HX_("Trying to play uninitialized sound: ",90,fb,0b,fb) + this->name) + HX_(" - ",73,6f,18,00)) + this->ID),hx::SourceInfo(HX_("Sound.hx",6f,1d,3b,f3),104,HX_("com.stencyl.models.Sound",fa,0c,63,9c),HX_("loop",64,a6,b7,47)));
HXLINE( 105)			return null();
            		}
HXLINE( 108)		return this->src->play(position,(int)100000000,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,loop,return )

 ::openfl::media::Sound Sound_obj::getStreamingSource(){
            	HX_STACKFRAME(&_hx_pos_fa5c2b1d243c39f8_113_getStreamingSource)
HXLINE( 114)		::String path = (((HX_("assets/music/sound-",34,a0,5a,18) + this->ID) + HX_(".",2e,00,00,00)) + this->ext);
HXLINE( 118)		 ::lime::media::vorbis::VorbisFile vorbisFile = ::lime::media::vorbis::VorbisFile_obj::fromFile(::com::stencyl::utils::Assets_obj::getPath(path));
HXLINE( 119)		 ::lime::media::AudioBuffer audioBuffer = ::lime::media::AudioBuffer_obj::fromVorbisFile(vorbisFile);
HXLINE( 120)		return ::openfl::media::Sound_obj::fromAudioBuffer(audioBuffer);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,getStreamingSource,return )

void Sound_obj::stopInstances(){
            	HX_STACKFRAME(&_hx_pos_fa5c2b1d243c39f8_141_stopInstances)
HXDLIN( 141)		int _g = (int)0;
HXDLIN( 141)		while((_g < (int)32)){
HXDLIN( 141)			_g = (_g + (int)1);
HXDLIN( 141)			int i = (_g - (int)1);
HXLINE( 143)			 ::com::stencyl::models::SoundChannel sc = ::com::stencyl::Engine_obj::engine->channels->__get(i).StaticCast<  ::com::stencyl::models::SoundChannel >();
HXLINE( 145)			if (hx::IsEq( sc->currentSource,this->src )) {
HXLINE( 147)				sc->stopSound();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,stopInstances,(void))


hx::ObjectPtr< Sound_obj > Sound_obj::__new(int ID,::String name,bool streaming,bool looping,Float panning,Float volume,::String ext,int atlasID) {
	hx::ObjectPtr< Sound_obj > __this = new Sound_obj();
	__this->__construct(ID,name,streaming,looping,panning,volume,ext,atlasID);
	return __this;
}

hx::ObjectPtr< Sound_obj > Sound_obj::__alloc(hx::Ctx *_hx_ctx,int ID,::String name,bool streaming,bool looping,Float panning,Float volume,::String ext,int atlasID) {
	Sound_obj *__this = (Sound_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sound_obj), true, "com.stencyl.models.Sound"));
	*(void **)__this = Sound_obj::_hx_vtable;
	__this->__construct(ID,name,streaming,looping,panning,volume,ext,atlasID);
	return __this;
}

Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(streaming,"streaming");
	HX_MARK_MEMBER_NAME(looping,"looping");
	HX_MARK_MEMBER_NAME(panning,"panning");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(ext,"ext");
	HX_MARK_MEMBER_NAME(src,"src");
	 ::com::stencyl::models::Resource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(streaming,"streaming");
	HX_VISIT_MEMBER_NAME(looping,"looping");
	HX_VISIT_MEMBER_NAME(panning,"panning");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(ext,"ext");
	HX_VISIT_MEMBER_NAME(src,"src");
	 ::com::stencyl::models::Resource_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ext") ) { return hx::Val( ext ); }
		if (HX_FIELD_EQ(inName,"src") ) { return hx::Val( src ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"loop") ) { return hx::Val( loop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return hx::Val( volume ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { return hx::Val( looping ); }
		if (HX_FIELD_EQ(inName,"panning") ) { return hx::Val( panning ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"streaming") ) { return hx::Val( streaming ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return hx::Val( loadGraphics_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stopInstances") ) { return hx::Val( stopInstances_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unloadGraphics") ) { return hx::Val( unloadGraphics_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getStreamingSource") ) { return hx::Val( getStreamingSource_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Sound_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ext") ) { ext=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"src") ) { src=inValue.Cast<  ::openfl::media::Sound >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { looping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"panning") ) { panning=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"streaming") ) { streaming=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("streaming","\x62","\xc8","\x22","\xb6"));
	outFields->push(HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20"));
	outFields->push(HX_HCSTRING("panning","\x11","\x49","\x1b","\x99"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	outFields->push(HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Sound_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Sound_obj,streaming),HX_HCSTRING("streaming","\x62","\xc8","\x22","\xb6")},
	{hx::fsBool,(int)offsetof(Sound_obj,looping),HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20")},
	{hx::fsFloat,(int)offsetof(Sound_obj,panning),HX_HCSTRING("panning","\x11","\x49","\x1b","\x99")},
	{hx::fsFloat,(int)offsetof(Sound_obj,volume),HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")},
	{hx::fsString,(int)offsetof(Sound_obj,ext),HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00")},
	{hx::fsObject /*::openfl::media::Sound*/ ,(int)offsetof(Sound_obj,src),HX_HCSTRING("src","\xe4","\xa6","\x57","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Sound_obj_sStaticStorageInfo = 0;
#endif

static ::String Sound_obj_sMemberFields[] = {
	HX_HCSTRING("streaming","\x62","\xc8","\x22","\xb6"),
	HX_HCSTRING("looping","\xfe","\x7c","\x7d","\x20"),
	HX_HCSTRING("panning","\x11","\x49","\x1b","\x99"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00"),
	HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"),
	HX_HCSTRING("loadGraphics","\x11","\xe5","\xd0","\xcb"),
	HX_HCSTRING("unloadGraphics","\xea","\xec","\xbd","\xbd"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("getStreamingSource","\xe7","\x02","\x2c","\xc5"),
	HX_HCSTRING("stopInstances","\xdc","\x62","\x28","\x0e"),
	::String(null()) };

static void Sound_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sound_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#endif

hx::Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Object *dummy = new Sound_obj;
	Sound_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.models.Sound","\xfa","\x0c","\x63","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sound_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Sound_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sound_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sound_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sound_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace models