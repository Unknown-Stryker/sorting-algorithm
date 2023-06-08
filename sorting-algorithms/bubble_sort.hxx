#ifndef _BUBBLE_SORT_HXX_
#define _BUBBLE_SORT_HXX_
#include <cstddef>
#include "swap.hxx"


template<typename T>
void bubble_sort(T* const begin_ptrc_p, T* const end_ptrc_p) noexcept
{
	const std::size_t l_size_of_the_container = (end_ptrc_p - begin_ptrc_p) + 1;
	const std::size_t l_max_index = l_size_of_the_container - 1;

	T* l_left_ptr = begin_ptrc_p;
	T* l_right_ptr = begin_ptrc_p + 1;
	
	std::size_t l_remaining_elements_to_sort = l_size_of_the_container;

	while (0 < l_remaining_elements_to_sort)
	{
		while (l_right_ptr <= end_ptrc_p)
		{
			if (*l_left_ptr > *l_right_ptr)
			{
				::swap(*l_left_ptr, *l_right_ptr);
			}
			++l_left_ptr;
			++l_right_ptr;
		}
		--l_remaining_elements_to_sort;
		l_left_ptr = begin_ptrc_p;
		l_right_ptr = begin_ptrc_p + 1;
	}
}


#endif