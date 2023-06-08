#include <gtest/gtest.h>
#include <bubble_sort.hxx>
#include <vector>


TEST(bubble_sort, _)
{
	std::vector<int> l_vector = { 9, 3, 5, 7, 1 };
	std::initializer_list<int> l_answer = { 1, 3, 5, 7, 9 };

	bubble_sort(&(l_vector.front()), &(l_vector.back()));

	for (std::size_t i = 0; i < l_answer.size(); ++i)
	{
		EXPECT_EQ(l_answer.begin()[i], l_vector[i]);
	}
}