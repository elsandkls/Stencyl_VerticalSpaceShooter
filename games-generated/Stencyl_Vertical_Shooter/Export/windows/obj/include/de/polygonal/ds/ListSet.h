// Generated by Haxe 3.4.7
#ifndef INCLUDED_de_polygonal_ds_ListSet
#define INCLUDED_de_polygonal_ds_ListSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_de_polygonal_ds_Set
#include <de/polygonal/ds/Set.h>
#endif
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
HX_DECLARE_CLASS3(de,polygonal,ds,ListSet)
HX_DECLARE_CLASS3(de,polygonal,ds,ListSetIterator)
HX_DECLARE_CLASS3(de,polygonal,ds,Set)

namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES ListSet_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ListSet_obj OBJ_;
		ListSet_obj();

	public:
		enum { _hx_ClassId = 0x70937711 };

		void __construct( ::Dynamic __o_initialCapacity,::cpp::VirtualArray source);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="de.polygonal.ds.ListSet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"de.polygonal.ds.ListSet"); }
		static hx::ObjectPtr< ListSet_obj > __new( ::Dynamic __o_initialCapacity,::cpp::VirtualArray source);
		static hx::ObjectPtr< ListSet_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic __o_initialCapacity,::cpp::VirtualArray source);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListSet_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("ListSet","\xc4","\xed","\xd8","\xd7"); }

		int key;
		int capacity;
		int growthRate;
		bool reuseIterator;
		::cpp::VirtualArray mData;
		int mInitialCapacity;
		int mSize;
		 ::de::polygonal::ds::ListSetIterator mIterator;
		 ::de::polygonal::ds::ListSet reserve(int n);
		::Dynamic reserve_dyn();

		 ::de::polygonal::ds::ListSet pack();
		::Dynamic pack_dyn();

		 ::de::polygonal::ds::ListSet iter( ::Dynamic f);
		::Dynamic iter_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		bool has( ::Dynamic val);
		::Dynamic has_dyn();

		bool set( ::Dynamic val);
		::Dynamic set_dyn();

		bool unset( ::Dynamic val);
		::Dynamic unset_dyn();

		void merge(::Dynamic set, ::Dynamic assign, ::Dynamic copier);
		::Dynamic merge_dyn();

		int get_size();
		::Dynamic get_size_dyn();

		void free();
		::Dynamic free_dyn();

		bool contains( ::Dynamic val);
		::Dynamic contains_dyn();

		bool remove( ::Dynamic val);
		::Dynamic remove_dyn();

		void clear(hx::Null< bool >  gc);
		::Dynamic clear_dyn();

		::Dynamic iterator();
		::Dynamic iterator_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		::cpp::VirtualArray toArray();
		::Dynamic toArray_dyn();

		::Dynamic clone(hx::Null< bool >  byRef, ::Dynamic copier);
		::Dynamic clone_dyn();

		void grow();
		::Dynamic grow_dyn();

		void resizeContainer(int newSize);
		::Dynamic resizeContainer_dyn();

};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_ListSet */ 