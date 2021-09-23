#pragma once
#include <iostream>
#include <vld.h>
#include <Library.h>

template <class T>
int getPositiveNum(T& a);
int dialog(const char* msgs[], int N);
int getInt(int* a);
template <class T>
int getNum(T& a) {
	std::cin >> a;
	if (!std::cin.good())
		return -1;
	return 1;
}

int D_Show(strophoid* object);
int D_Change(strophoid* object);
int D_Coord(strophoid* object);
int D_Dist(strophoid* object);
int D_Rad(strophoid* object);
int D_Square(strophoid* object);
int D_Volume(strophoid* object);
int D_Asympt(strophoid* object);