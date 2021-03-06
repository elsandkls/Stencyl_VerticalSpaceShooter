// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime__internal_backend_native_NativeAudioSource2
#define INCLUDED_lime__internal_backend_native_NativeAudioSource2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime__internal_backend_native_NativeAudioSourceImpl
#include <lime/_internal/backend/native/NativeAudioSourceImpl.h>
#endif
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeAudioSource2)
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeAudioSourceImpl)
HX_DECLARE_CLASS2(lime,math,Vector4)
HX_DECLARE_CLASS2(lime,media,AudioSource)
HX_DECLARE_CLASS3(lime,media,vorbis,VorbisFile)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeAudioSource2_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NativeAudioSource2_obj OBJ_;
		NativeAudioSource2_obj();

	public:
		enum { _hx_ClassId = 0x5b1ca4bc };

		void __construct( ::lime::media::AudioSource audioSource);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._internal.backend.native.NativeAudioSource2")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime._internal.backend.native.NativeAudioSource2"); }
		static hx::ObjectPtr< NativeAudioSource2_obj > __new( ::lime::media::AudioSource audioSource);
		static hx::ObjectPtr< NativeAudioSource2_obj > __alloc(hx::Ctx *_hx_ctx, ::lime::media::AudioSource audioSource);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeAudioSource2_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("NativeAudioSource2","\x18","\xe5","\x88","\x63"); }

		static void __boot();
		static int BUFFER_LENGTH;
		static int BUFFER_NUMBER;
		::cpp::VirtualArray buffers;
		 ::lime::media::AudioSource audioSource;
		 ::Dynamic handle;
		int format;
		int loops;
		 ::lime::math::Vector4 position;
		bool playing;
		int dataLength;
		int samples;
		 ::lime::utils::ArrayBufferView bufferData;
		 ::lime::media::vorbis::VorbisFile vorbisFile;
		Float timeBlock1;
		Float timeBlock2;
		void init();
		::Dynamic init_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void update();
		::Dynamic update_dyn();

		void play();
		::Dynamic play_dyn();

		void pause();
		::Dynamic pause_dyn();

		void stop();
		::Dynamic stop_dyn();

		void initHandle();
		::Dynamic initHandle_dyn();

		void initBuffers();
		::Dynamic initBuffers_dyn();

		 ::Dynamic fillBuffer( ::Dynamic buffer, ::Dynamic pos);
		::Dynamic fillBuffer_dyn();

		void flushBuffers( ::Dynamic pos);
		::Dynamic flushBuffers_dyn();

		void error( ::Dynamic pos);
		::Dynamic error_dyn();

		void seek(Float value);
		::Dynamic seek_dyn();

		Float bytesToSeconds(int bytes);
		::Dynamic bytesToSeconds_dyn();

		int secondsToBytes(Float seconds);
		::Dynamic secondsToBytes_dyn();

		 ::Dynamic readVorbisFile(hx::Null< int >  length);
		::Dynamic readVorbisFile_dyn();

		int getCurrentTime();
		::Dynamic getCurrentTime_dyn();

		int setCurrentTime(int value);
		::Dynamic setCurrentTime_dyn();

		Float getGain();
		::Dynamic getGain_dyn();

		Float setGain(Float value);
		::Dynamic setGain_dyn();

		int getLength();
		::Dynamic getLength_dyn();

		int setLength(int value);
		::Dynamic setLength_dyn();

		int getLoops();
		::Dynamic getLoops_dyn();

		int setLoops(int value);
		::Dynamic setLoops_dyn();

		 ::lime::math::Vector4 getPosition();
		::Dynamic getPosition_dyn();

		 ::lime::math::Vector4 setPosition( ::lime::math::Vector4 value);
		::Dynamic setPosition_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_NativeAudioSource2 */ 
