// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_models_collision_Grid
#define INCLUDED_com_stencyl_models_collision_Grid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_models_collision_Hitbox
#include <com/stencyl/models/collision/Hitbox.h>
#endif
HX_DECLARE_CLASS4(com,stencyl,models,collision,Grid)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Hitbox)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Mask)
HX_DECLARE_CLASS4(com,stencyl,models,collision,Pixelmask)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace com{
namespace stencyl{
namespace models{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES Grid_obj : public  ::com::stencyl::models::collision::Hitbox_obj
{
	public:
		typedef  ::com::stencyl::models::collision::Hitbox_obj super;
		typedef Grid_obj OBJ_;
		Grid_obj();

	public:
		enum { _hx_ClassId = 0x2c08271f };

		void __construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.models.collision.Grid")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.models.collision.Grid"); }
		static hx::ObjectPtr< Grid_obj > __new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static hx::ObjectPtr< Grid_obj > __alloc(hx::Ctx *_hx_ctx,int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Grid_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Grid","\xe6","\x02","\x45","\x2f"); }

		bool usePositions;
		void setTile(hx::Null< int >  column,hx::Null< int >  row,hx::Null< bool >  solid);
		::Dynamic setTile_dyn();

		void clearTile(hx::Null< int >  column,hx::Null< int >  row);
		::Dynamic clearTile_dyn();

		bool checkTile(int column,int row);
		::Dynamic checkTile_dyn();

		bool getTile(hx::Null< int >  column,hx::Null< int >  row);
		::Dynamic getTile_dyn();

		void setRect(hx::Null< int >  column,hx::Null< int >  row,hx::Null< int >  width,hx::Null< int >  height,hx::Null< bool >  solid);
		::Dynamic setRect_dyn();

		void clearRect(hx::Null< int >  column,hx::Null< int >  row,hx::Null< int >  width,hx::Null< int >  height);
		::Dynamic clearRect_dyn();

		int get_tileWidth();
		::Dynamic get_tileWidth_dyn();

		int get_tileHeight();
		::Dynamic get_tileHeight_dyn();

		int columns;
		int rows;
		::Array< ::Dynamic> data;
		bool collideMask( ::com::stencyl::models::collision::Mask other);

		bool collideHitbox( ::com::stencyl::models::collision::Hitbox other);

		bool collidePixelmask( ::com::stencyl::models::collision::Pixelmask other);
		::Dynamic collidePixelmask_dyn();

		void squareProjection( ::openfl::geom::Point axis, ::openfl::geom::Point point);
		::Dynamic squareProjection_dyn();

		 ::openfl::geom::Rectangle _tile;
		 ::openfl::geom::Rectangle _rect;
		 ::openfl::geom::Point _point;
		 ::openfl::geom::Point _point2;
};

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace collision

#endif /* INCLUDED_com_stencyl_models_collision_Grid */ 
