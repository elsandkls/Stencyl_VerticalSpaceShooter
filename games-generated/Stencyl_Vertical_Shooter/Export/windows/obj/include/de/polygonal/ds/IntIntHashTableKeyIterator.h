// Generated by Haxe 3.4.7
#ifndef INCLUDED_de_polygonal_ds_IntIntHashTableKeyIterator
#define INCLUDED_de_polygonal_ds_IntIntHashTableKeyIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,IntIntHashTable)
HX_DECLARE_CLASS3(de,polygonal,ds,IntIntHashTableKeyIterator)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
HX_DECLARE_CLASS3(de,polygonal,ds,Map)

namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES IntIntHashTableKeyIterator_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef IntIntHashTableKeyIterator_obj OBJ_;
		IntIntHashTableKeyIterator_obj();

	public:
		enum { _hx_ClassId = 0x1ce6d09c };

		void __construct( ::de::polygonal::ds::IntIntHashTable x);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="de.polygonal.ds.IntIntHashTableKeyIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"de.polygonal.ds.IntIntHashTableKeyIterator"); }
		static hx::ObjectPtr< IntIntHashTableKeyIterator_obj > __new( ::de::polygonal::ds::IntIntHashTable x);
		static hx::ObjectPtr< IntIntHashTableKeyIterator_obj > __alloc(hx::Ctx *_hx_ctx, ::de::polygonal::ds::IntIntHashTable x);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntIntHashTableKeyIterator_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		 ::Dynamic next_8b3ae2fb();
		::String __ToString() const { return HX_HCSTRING("IntIntHashTableKeyIterator","\xad","\xb4","\xa3","\x10"); }

		 ::de::polygonal::ds::IntIntHashTable mObject;
		int mI;
		int mS;
		::Array< int > mData;
		void free();
		::Dynamic free_dyn();

		::Dynamic reset();
		::Dynamic reset_dyn();

		bool hasNext();
		::Dynamic hasNext_dyn();

		int next();
		::Dynamic next_dyn();

		void remove();
		::Dynamic remove_dyn();

		void scan();
		::Dynamic scan_dyn();

};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_IntIntHashTableKeyIterator */ 