#ifndef _SWAP_HXX_
#define _SWAP_HXX_
#include <utility>


template<typename T>
void swap(T& first_ref_p, T& second_ref_p) noexcept
{
	T l_temporary_storage = ::std::move(first_ref_p);
	first_ref_p = ::std::move(second_ref_p);
	second_ref_p = ::std::move(l_temporary_storage);
}


#endif