// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#define INCLUDED_openfl__internal_renderer_DrawCommandBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandBuffer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandType)
HX_DECLARE_CLASS3(openfl,_internal,renderer,ShaderBuffer)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES DrawCommandBuffer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DrawCommandBuffer_obj OBJ_;
		DrawCommandBuffer_obj();

	public:
		enum { _hx_ClassId = 0x5daef738 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.DrawCommandBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.DrawCommandBuffer"); }
		static hx::ObjectPtr< DrawCommandBuffer_obj > __new();
		static hx::ObjectPtr< DrawCommandBuffer_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawCommandBuffer_obj();

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
		::String __ToString() const { return HX_HCSTRING("DrawCommandBuffer","\xe7","\xdd","\x9a","\xb4"); }

		static void __boot();
		static  ::openfl::_internal::renderer::DrawCommandBuffer empty;
		void _hx___replace_openfl_display_TriangleCulling(::Array< ::Dynamic> a,int i, ::Dynamic t);
		::Dynamic _hx___replace_openfl_display_TriangleCulling_dyn();

		void _hx___replace_openfl_Vector_Int(::Array< ::Dynamic> a,int i, ::openfl::_Vector::IntVector t);
		::Dynamic _hx___replace_openfl_Vector_Int_dyn();

		void _hx___replace_openfl_Vector_Float(::Array< ::Dynamic> a,int i, ::openfl::_Vector::FloatVector t);
		::Dynamic _hx___replace_openfl_Vector_Float_dyn();

		void _hx___replace_openfl__internal_renderer_ShaderBuffer(::Array< ::Dynamic> a,int i, ::openfl::_internal::renderer::ShaderBuffer t);
		::Dynamic _hx___replace_openfl__internal_renderer_ShaderBuffer_dyn();

		void _hx___replace_openfl_display_InterpolationMethod(::Array< ::Dynamic> a,int i, ::Dynamic t);
		::Dynamic _hx___replace_openfl_display_InterpolationMethod_dyn();

		void _hx___replace_openfl_display_SpreadMethod(::Array< ::Dynamic> a,int i, ::Dynamic t);
		::Dynamic _hx___replace_openfl_display_SpreadMethod_dyn();

		void _hx___replace_Array_Float(::Array< ::Dynamic> a,int i,::Array< Float > t);
		::Dynamic _hx___replace_Array_Float_dyn();

		void _hx___replace_Array_Int(::Array< ::Dynamic> a,int i,::Array< int > t);
		::Dynamic _hx___replace_Array_Int_dyn();

		void _hx___replace_openfl_display_GradientType(::Array< ::Dynamic> a,int i, ::Dynamic t);
		::Dynamic _hx___replace_openfl_display_GradientType_dyn();

		void _hx___replace_openfl_display_JointStyle(::Array< ::Dynamic> a,int i, ::Dynamic t);
		::Dynamic _hx___replace_openfl_display_JointStyle_dyn();

		void _hx___replace_openfl_display_CapsStyle(::Array< ::Dynamic> a,int i, ::Dynamic t);
		::Dynamic _hx___replace_openfl_display_CapsStyle_dyn();

		void _hx___replace_openfl_display_LineScaleMode(::Array< ::Dynamic> a,int i, ::Dynamic t);
		::Dynamic _hx___replace_openfl_display_LineScaleMode_dyn();

		void _hx___replace_Bool(::Array< bool > a,int i,bool t);
		::Dynamic _hx___replace_Bool_dyn();

		void _hx___replace_Int(::Array< int > a,int i,int t);
		::Dynamic _hx___replace_Int_dyn();

		void _hx___replace_Float(::Array< Float > a,int i,Float t);
		::Dynamic _hx___replace_Float_dyn();

		void _hx___replace_openfl__internal_renderer_DrawCommandType(::Array< ::Dynamic> a,int i, ::openfl::_internal::renderer::DrawCommandType t);
		::Dynamic _hx___replace_openfl__internal_renderer_DrawCommandType_dyn();

		bool dirty;
		::Array< ::Dynamic> types;
		::Array< bool > b;
		bool copyOnWrite;
		::Array< Float > f;
		::Array< ::Dynamic> ff;
		::Array< int > i;
		::Array< ::Dynamic> ii;
		::cpp::VirtualArray o;
		int t_i;
		int b_i;
		int f_i;
		int ff_i;
		int i_i;
		int ii_i;
		int o_i;
		::Array< int > objVersions;
		int _hx___lastLength;
		bool _hx___dirty;
		 ::openfl::_internal::renderer::DrawCommandBuffer append( ::openfl::_internal::renderer::DrawCommandBuffer other);
		::Dynamic append_dyn();

		void beginBitmapFill( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,bool repeat,bool smooth);
		::Dynamic beginBitmapFill_dyn();

		void beginFill(int color,Float alpha);
		::Dynamic beginFill_dyn();

		void beginGradientFill( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio);
		::Dynamic beginGradientFill_dyn();

		void beginShaderFill( ::openfl::_internal::renderer::ShaderBuffer shaderBuffer);
		::Dynamic beginShaderFill_dyn();

		void clear();
		::Dynamic clear_dyn();

		 ::openfl::_internal::renderer::DrawCommandBuffer copy();
		::Dynamic copy_dyn();

		void cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY);
		::Dynamic cubicCurveTo_dyn();

		void curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY);
		::Dynamic curveTo_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void drawCircle(Float x,Float y,Float radius);
		::Dynamic drawCircle_dyn();

		void drawEllipse(Float x,Float y,Float width,Float height);
		::Dynamic drawEllipse_dyn();

		void drawQuads( ::openfl::_Vector::FloatVector rects, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector transforms);
		::Dynamic drawQuads_dyn();

		void drawRect(Float x,Float y,Float width,Float height);
		::Dynamic drawRect_dyn();

		void drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight);
		::Dynamic drawRoundRect_dyn();

		void drawTriangles( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::Dynamic culling);
		::Dynamic drawTriangles_dyn();

		void endFill();
		::Dynamic endFill_dyn();

		void lineBitmapStyle( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,bool repeat,bool smooth);
		::Dynamic lineBitmapStyle_dyn();

		void lineGradientStyle( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio);
		::Dynamic lineGradientStyle_dyn();

		void lineStyle( ::Dynamic thickness,int color,Float alpha,bool pixelHinting, ::Dynamic scaleMode, ::Dynamic caps, ::Dynamic joints,Float miterLimit);
		::Dynamic lineStyle_dyn();

		void lineTo(Float x,Float y);
		::Dynamic lineTo_dyn();

		void markAsClean();
		::Dynamic markAsClean_dyn();

		void moveTo(Float x,Float y);
		::Dynamic moveTo_dyn();

		void prepareWrite();
		::Dynamic prepareWrite_dyn();

		void overrideBlendMode( ::Dynamic blendMode);
		::Dynamic overrideBlendMode_dyn();

		void overrideMatrix( ::openfl::geom::Matrix matrix);
		::Dynamic overrideMatrix_dyn();

		void windingEvenOdd();
		::Dynamic windingEvenOdd_dyn();

		void windingNonZero();
		::Dynamic windingNonZero_dyn();

		bool get_dirty();
		::Dynamic get_dirty_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		void _hx___initFromEmpty();
		::Dynamic _hx___initFromEmpty_dyn();

		void _hx___endBuffer();
		::Dynamic _hx___endBuffer_dyn();

		void _hx___replaceMtx(::cpp::VirtualArray a,int i, ::openfl::geom::Matrix t);
		::Dynamic _hx___replaceMtx_dyn();

		void _hx___replaceBmp(::cpp::VirtualArray a,int i, ::openfl::display::BitmapData t);
		::Dynamic _hx___replaceBmp_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_DrawCommandBuffer */ 
