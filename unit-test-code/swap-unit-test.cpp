#include <gtest/gtest.h>
#include <swap.hxx>


TEST(swap, _)
{
	int l_first = 5;
	int l_second = 2;

	swap(l_first, l_second);

	EXPECT_EQ(l_first, 2);
	EXPECT_EQ(l_second, 5);
}