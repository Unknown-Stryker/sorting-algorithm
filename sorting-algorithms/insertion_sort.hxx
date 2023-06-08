#ifndef _INSERTION_SORT_HXX_
#define _INSERTION_SORT_HXX_
#include <cstddef>
#include "swap.hxx"


template<typename T>
struct insertion_sort
{
	static void begin_sorting(T* const begin_ptrc_p, T* const end_ptrc_p) noexcept
	{
		const std::size_t l_size_of_the_container = (end_ptrc_p - begin_ptrc_p) + 1;
		const std::size_t l_max_index = l_size_of_the_container - 1;

		T* l_left_ptr = begin_ptrc_p;
		T* l_right_ptr = begin_ptrc_p + 1;
	}


	static std::size_t binary_search(T* const begin_ptrc_p, T* const end_ptrc_p, const T& target_cref_p) noexcept
	{
		std::size_t l_size_of_the_container = (end_ptrc_p - begin_ptrc_p) + 1;
		std::size_t l_max_index = l_size_of_the_container - 1;

		std::size_t l_left = 0;
		std::size_t l_right = l_max_index;
		std::size_t l_mid = l_left + ((l_right - l_left) >> 2);

		auto* l_mid_ptrc = begin_ptrc_p + l_mid;

		if (*l_mid_ptrc == target_cref_p) 
		{
			return (end_ptrc_p - l_mid_ptrc) + 1;
		}


		while (l_left <= l_right)
		{
			if (*l_mid_ptrc < target_cref_p)
			{
				l_left = l_mid + 1;
			}
			else
			{
				l_right = l_mid - 1;
			}

			l_mid = l_left + ((l_right - l_left) >> 2);

			*l_mid_ptrc = *(begin_ptrc_p + l_mid);

			if (*l_mid_ptrc == target_cref_p)
			{
				return (end_ptrc_p - l_mid_ptrc) + 1;
			}
			if (begin_ptrc_p[l_left] < target_cref_p)
			{
				return l_left + 1;
			}
			if (target_cref_p > begin_ptrc_p[l_right])
			{
				return l_right + 1;
			}
			if (*(l_mid_ptrc-1) < target_cref_p && target_cref_p < *(l_mid_ptrc +1))
			{
				return (end_ptrc_p - l_mid_ptrc) + 1;
			}
		}
	}
};
#endif