// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime__internal_backend_native_NativeAudioSourceImpl
#define INCLUDED_lime__internal_backend_native_NativeAudioSourceImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeAudioSourceImpl)
HX_DECLARE_CLASS2(lime,math,Vector4)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeAudioSourceImpl_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx_dispose)(); 
		static inline void dispose( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_dispose)();
		}
		void (hx::Object :: *_hx_init)(); 
		static inline void init( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_init)();
		}
		void (hx::Object :: *_hx_update)(); 
		static inline void update( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_update)();
		}
		void (hx::Object :: *_hx_play)(); 
		static inline void play( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_play)();
		}
		void (hx::Object :: *_hx_pause)(); 
		static inline void pause( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_pause)();
		}
		void (hx::Object :: *_hx_stop)(); 
		static inline void stop( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_stop)();
		}
		int (hx::Object :: *_hx_getCurrentTime)(); 
		static inline int getCurrentTime( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_getCurrentTime)();
		}
		int (hx::Object :: *_hx_setCurrentTime)(int value); 
		static inline int setCurrentTime( ::Dynamic _hx_,int value) {
			return (_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_setCurrentTime)(value);
		}
		Float (hx::Object :: *_hx_getGain)(); 
		static inline Float getGain( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_getGain)();
		}
		Float (hx::Object :: *_hx_setGain)(Float value); 
		static inline Float setGain( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_setGain)(value);
		}
		int (hx::Object :: *_hx_getLength)(); 
		static inline int getLength( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_getLength)();
		}
		int (hx::Object :: *_hx_setLength)(int value); 
		static inline int setLength( ::Dynamic _hx_,int value) {
			return (_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_setLength)(value);
		}
		int (hx::Object :: *_hx_getLoops)(); 
		static inline int getLoops( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_getLoops)();
		}
		int (hx::Object :: *_hx_setLoops)(int value); 
		static inline int setLoops( ::Dynamic _hx_,int value) {
			return (_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_setLoops)(value);
		}
		 ::lime::math::Vector4 (hx::Object :: *_hx_getPosition)(); 
		static inline  ::lime::math::Vector4 getPosition( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_getPosition)();
		}
		 ::lime::math::Vector4 (hx::Object :: *_hx_setPosition)( ::lime::math::Vector4 value); 
		static inline  ::lime::math::Vector4 setPosition( ::Dynamic _hx_, ::lime::math::Vector4 value) {
			return (_hx_.mPtr->*( static_cast< ::lime::_internal::backend::native::NativeAudioSourceImpl_obj *>(_hx_.mPtr->_hx_getInterface(0x712cf8b6)))->_hx_setPosition)(value);
		}
};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_NativeAudioSourceImpl */ 