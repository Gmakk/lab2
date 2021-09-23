#include "Header.h"

int D_Show(strophoid* object) {
	std::cout << "Current value of A is: " << object->show_A() << std::endl;
	return 1;
}

int D_Change(strophoid* object) {
	float new_val;
	std::cout << "Enter new value of A: ";
	getNum(new_val);
	object->set_A(new_val);
	return 1;
}

int D_Coord(strophoid* object) {
	float x;
	std::cout << "Enter X coordinate: ";
	getNum(x);
	if(object->show_A()!=0)
		std::cout << "The Y coordinate of the Cartesian coordinate system: +-" << fabs(object->find_y(x)) << std::endl;
	else
		std::cout << "The Y coordinate of the Cartesian coordinate system: " << 0 << std::endl;
	return 1;
}

int D_Dist(strophoid* object) {
	float angle;
	std::cout << "Enter angle: ";
	getNum(angle);
	while (angle < 0)
		angle += 2;
	std::cout << "Distance to the center in the polar coordinate system: " << object->find_distance(angle) << std::endl;
	return 1;
}

int D_Rad(strophoid* object) {
	std::cout << "Radius of curvature at the nodal point: " << object->find_curve_rad() << std::endl;
	return 1;
}

int D_Square(strophoid* object) {
	std::cout << "Loop area: " << object->find_loop_square() << std::endl;
	return 1;
}

int D_Volume(strophoid* object) {
	std::cout << "Volume of body of revolution: " << object->find_volume() << std::endl;
	return 1;
}

int D_Asympt(strophoid* object) {
	std::cout << "Area between the branches and the asymptote: " << object->find_square_asymptote() << std::endl;
	return 1;
}