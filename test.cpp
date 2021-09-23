#include "pch.h"
#include <Library.h>

TEST(Constr, positive) {
	strophoid str(5.5);
	ASSERT_FLOAT_EQ(str.show_A(), 5.5);
}

TEST(Constr, zero) {
	strophoid str;
	ASSERT_FLOAT_EQ(str.show_A(), 0);
}

TEST(Constr, negative) {
	strophoid str(-5.5);
	ASSERT_FLOAT_EQ(str.show_A(), 5.5);
}

TEST(Set, positive) {
	strophoid str(5.5);
	str.set_A(6.6);
	ASSERT_FLOAT_EQ(str.show_A(), 6.6);
}

TEST(Set, negative) {
	strophoid str(5.5);
	str.set_A(-6.6);
	ASSERT_FLOAT_EQ(str.show_A(), 6.6);
}

TEST(Find_Y, positive_x) {
	strophoid str(5.5);
	ASSERT_FLOAT_EQ(str.find_y(2), 2.9277003);
}

TEST(Find_Y, negative_X) {
	strophoid str(5.5);
	ASSERT_FLOAT_EQ(str.find_y(-2), -1.3662601);
}

TEST(Distance, positive) {
	strophoid str(5);
	ASSERT_FLOAT_EQ(str.find_distance(1), 3.8510559);
}

TEST(Radius, positive) {
	strophoid str(sqrt(2));
	ASSERT_FLOAT_EQ(str.find_curve_rad(), 2);
}

TEST(Radius, negative) {
	strophoid str(-sqrt(2));
	ASSERT_FLOAT_EQ(str.find_curve_rad(), 2);
}

TEST(Square_1, positive) {
	strophoid str(2);
	ASSERT_FLOAT_EQ(str.find_loop_square(), 8-2*M_PI);
}

TEST(Square_1, negative) {
	strophoid str(-2);
	ASSERT_FLOAT_EQ(str.find_loop_square(), 8 - 2 * M_PI);
}

TEST(Volume, positive) {
	strophoid str(5.5);
	ASSERT_FLOAT_EQ(str.find_volume(), 27.6818);
}

TEST(Volume, negative) {
	strophoid str(-5.5);
	ASSERT_FLOAT_EQ(str.find_volume(), 27.6818);
}

TEST(Square_2, positive) {
	strophoid str(5.5);
	ASSERT_FLOAT_EQ(str.find_square_asymptote(), 108.01659);
}

TEST(Square_2, negative) {
	strophoid str(-5.5);
	ASSERT_FLOAT_EQ(str.find_square_asymptote(), 108.01659);
}