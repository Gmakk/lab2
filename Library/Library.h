#pragma once
#include <cmath>
#include<iostream>
#define M_PI 3.14159265358979323846

class strophoid {
	float A_coordinate;
public:
	strophoid(float offset);
	strophoid();
	~strophoid() = default;

	float show_A();
	void set_A(float value);
	float find_y(float x_value);
	float find_distance(float angle);//угол в радианах
	float find_curve_rad();
	float find_loop_square();
	float find_volume();
	float find_square_asymptote();
};