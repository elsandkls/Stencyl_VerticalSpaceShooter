// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_models_SoundChannel
#define INCLUDED_com_stencyl_models_SoundChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS3(com,stencyl,models,Sound)
HX_DECLARE_CLASS3(com,stencyl,models,SoundChannel)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,TweenFloat)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,TweenObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)

namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES SoundChannel_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SoundChannel_obj OBJ_;
		SoundChannel_obj();

	public:
		enum { _hx_ClassId = 0x12fca0b5 };

		void __construct( ::com::stencyl::Engine engine,int channelNum);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.models.SoundChannel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.models.SoundChannel"); }
		static hx::ObjectPtr< SoundChannel_obj > __new( ::com::stencyl::Engine engine,int channelNum);
		static hx::ObjectPtr< SoundChannel_obj > __alloc(hx::Ctx *_hx_ctx, ::com::stencyl::Engine engine,int channelNum);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundChannel_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SoundChannel","\xd4","\xaf","\x1c","\xa9"); }

		static void __boot();
		static bool muted;
		static Float masterVolume;
		static void resetStatics();
		static ::Dynamic resetStatics_dyn();

		 ::openfl::media::Sound currentSource;
		 ::openfl::media::SoundChannel currentSound;
		 ::com::stencyl::models::Sound currentClip;
		Float volume;
		Float panning;
		int channelNum;
		bool looping;
		bool paused;
		Float position;
		 ::com::stencyl::Engine engine;
		 ::openfl::media::SoundTransform transform;
		 ::com::stencyl::utils::motion::TweenFloat tweenVolume;
		 ::openfl::media::SoundChannel playSound( ::com::stencyl::models::Sound clip,hx::Null< Float >  position);
		::Dynamic playSound_dyn();

		 ::openfl::media::SoundChannel loopSound( ::com::stencyl::models::Sound clip,hx::Null< Float >  position);
		::Dynamic loopSound_dyn();

		void setPause(bool pause);
		::Dynamic setPause_dyn();

		void looped( ::openfl::events::Event event);
		::Dynamic looped_dyn();

		void stopped( ::openfl::events::Event event);
		::Dynamic stopped_dyn();

		void stopSound();
		::Dynamic stopSound_dyn();

		void tweenUpdated();
		::Dynamic tweenUpdated_dyn();

		void fadeInSound(Float time);
		::Dynamic fadeInSound_dyn();

		void fadeOutSound(Float time);
		::Dynamic fadeOutSound_dyn();

		void fadeSound(Float time,Float amount);
		::Dynamic fadeSound_dyn();

		void setVolume(Float volume);
		::Dynamic setVolume_dyn();

		void setPanning(Float pan);
		::Dynamic setPanning_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_SoundChannel */ 
