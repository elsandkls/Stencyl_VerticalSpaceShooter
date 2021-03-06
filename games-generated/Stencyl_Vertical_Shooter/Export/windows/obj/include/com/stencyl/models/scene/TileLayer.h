// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_models_scene_TileLayer
#define INCLUDED_com_stencyl_models_scene_TileLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_EngineScaleUpdateListener
#include <com/stencyl/graphics/EngineScaleUpdateListener.h>
#endif
HX_DECLARE_CLASS3(com,stencyl,graphics,EngineScaleUpdateListener)
HX_DECLARE_CLASS3(com,stencyl,models,Scene)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Grid)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Hitbox)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Mask)
HX_DECLARE_CLASS4(com,stencyl,models,scene,Tile)
HX_DECLARE_CLASS4(com,stencyl,models,scene,TileLayer)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,ITileContainer)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Tilemap)
HX_DECLARE_CLASS2(openfl,display,Tileset)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace com{
namespace stencyl{
namespace models{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES TileLayer_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef TileLayer_obj OBJ_;
		TileLayer_obj();

	public:
		enum { _hx_ClassId = 0x1df2a24c };

		void __construct(int layerID, ::com::stencyl::models::Scene scene,int numCols,int numRows);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.models.scene.TileLayer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.models.scene.TileLayer"); }
		static hx::ObjectPtr< TileLayer_obj > __new(int layerID, ::com::stencyl::models::Scene scene,int numCols,int numRows);
		static hx::ObjectPtr< TileLayer_obj > __alloc(hx::Ctx *_hx_ctx,int layerID, ::com::stencyl::models::Scene scene,int numCols,int numRows);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileLayer_obj();

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
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("TileLayer","\xa3","\xbf","\xee","\x9c"); }

		static void __boot();
		static int TILESET_CACHE_MULTIPLIER;
		static  ::haxe::ds::IntMap cacheSource;
		static void resetStatics();
		static ::Dynamic resetStatics_dyn();

		static  ::haxe::ds::IntMap autotileFlagPointMap;
		int layerID;
		::Array< ::Dynamic> rows;
		::Array< ::Dynamic> autotileData;
		 ::com::stencyl::models::collision::Grid grid;
		 ::com::stencyl::models::Scene scene;
		int numRows;
		int numCols;
		 ::haxe::ds::ObjectMap tilemaps;
		bool noTiles;
		void clear();
		::Dynamic clear_dyn();

		void setPosition(int x,int y);
		::Dynamic setPosition_dyn();

		void mountGrid();
		::Dynamic mountGrid_dyn();

		void setTileAt(int row,int col, ::com::stencyl::models::scene::Tile tile, ::Dynamic updateAutotile);
		::Dynamic setTileAt_dyn();

		 ::com::stencyl::models::scene::Tile getTileAt(int row,int col);
		::Dynamic getTileAt_dyn();

		void updateAutotilesNear(int yc,int xc);
		::Dynamic updateAutotilesNear_dyn();

		void updateAutotile(int y,int x);
		::Dynamic updateAutotile_dyn();

		void draw(int viewX,int viewY);
		::Dynamic draw_dyn();

		void updateScale();
		::Dynamic updateScale_dyn();

		 ::openfl::display::Tilemap getTilemap( ::openfl::display::Tileset fltileset);
		::Dynamic getTilemap_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene

#endif /* INCLUDED_com_stencyl_models_scene_TileLayer */ 
