// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_models_scene_Tile
#define INCLUDED_com_stencyl_models_scene_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,scene,AutotileFormat)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Tile)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Tileset)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Tileset)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace com{
namespace stencyl{
namespace models{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES Tile_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Tile_obj OBJ_;
		Tile_obj();

	public:
		enum { _hx_ClassId = 0x0ed3a37d };

		void __construct(int tileID,int collisionID,::String metadata,int frameIndex,::Array< int > durations, ::com::stencyl::models::scene::AutotileFormat autotileFormat, ::haxe::ds::IntMap autotileMergeSet, ::com::stencyl::models::scene::Tileset parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.models.scene.Tile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.models.scene.Tile"); }
		static hx::ObjectPtr< Tile_obj > __new(int tileID,int collisionID,::String metadata,int frameIndex,::Array< int > durations, ::com::stencyl::models::scene::AutotileFormat autotileFormat, ::haxe::ds::IntMap autotileMergeSet, ::com::stencyl::models::scene::Tileset parent);
		static hx::ObjectPtr< Tile_obj > __alloc(hx::Ctx *_hx_ctx,int tileID,int collisionID,::String metadata,int frameIndex,::Array< int > durations, ::com::stencyl::models::scene::AutotileFormat autotileFormat, ::haxe::ds::IntMap autotileMergeSet, ::com::stencyl::models::scene::Tileset parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tile_obj();

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
		::String __ToString() const { return HX_HCSTRING("Tile","\x4e","\xf7","\xd5","\x37"); }

		static void __boot();
		static  ::openfl::geom::Rectangle dummyRect;
		int tileID;
		int collisionID;
		::String metadata;
		int frameIndex;
		 ::com::stencyl::models::scene::Tileset parent;
		 ::com::stencyl::models::scene::AutotileFormat autotileFormat;
		::Array< ::Dynamic> autotiles;
		 ::haxe::ds::IntMap autotileMergeSet;
		 ::openfl::display::BitmapData pixels;
		::Array< int > durations;
		::Array< int > frames;
		int currFrame;
		int currTime;
		bool updateSource;
		 ::openfl::display::Tileset data;
		void update(Float elapsedTime);
		::Dynamic update_dyn();

		 ::openfl::geom::Rectangle getSource(int tileWidth,int tileHeight);
		::Dynamic getSource_dyn();

		void loadGraphics();
		::Dynamic loadGraphics_dyn();

		void unloadGraphics();
		::Dynamic unloadGraphics_dyn();

		void loadAnimationPixels( ::openfl::display::BitmapData pixels);
		::Dynamic loadAnimationPixels_dyn();

		::Array< ::Dynamic> createAutotileAnimations( ::openfl::display::BitmapData imgData, ::com::stencyl::models::scene::AutotileFormat format);
		::Dynamic createAutotileAnimations_dyn();

		 ::openfl::geom::Rectangle sourceRect( ::openfl::geom::Point p,int srcFrameOffset);
		::Dynamic sourceRect_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_Tile */ 
