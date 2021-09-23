#include "pch.h"
#include "framework.h"
#include "Library.h"

strophoid::strophoid(float offset) {
	if (offset >= 0)
		A_coordinate = offset;
	else
		A_coordinate = -offset;
}

strophoid::strophoid() {
	A_coordinate = 0;
}

float strophoid::show_A() {
	return A_coordinate;
}

void strophoid::set_A(float value) {
	if (value < 0)
		A_coordinate = -value;
	else
		A_coordinate = value;
}

float strophoid::find_y(float x_value) {
	return x_value * sqrt((A_coordinate + x_value) / (A_coordinate - x_value));
}

float strophoid::find_distance(float angle) {
	return -(A_coordinate * cos(2 * angle)) / (cos(angle));
}

float strophoid::find_curve_rad() {
	return sqrt(2.0) * A_coordinate;
}

float strophoid::find_loop_square() {
	return pow(A_coordinate, 2) * (2 - M_PI / 2);
}

float strophoid::find_volume() {
	return pow(A_coordinate, 3) * M_PI * 2 / 3 + 2 * pow(A_coordinate, 3) * M_PI * (log(2) - 1);
}

float strophoid::find_square_asymptote() {
	return pow(A_coordinate, 2) * (2 + M_PI / 2);
}