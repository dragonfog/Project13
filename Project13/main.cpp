#include <iostream>
#include "Vec2i.hpp"
#include "Vec3i.hpp"
using namespace cw;


void print(Vec2i v) {
	std::cout << "v(" << v.x << "," << v.y << ")" << std::endl;
}

void printx(Vec3i v) {
	std::cout << "v(" << v.x << "," << v.y << "," << v.z << ")" << std::endl;
}




void main() { 
	Vec2i v1(0, 9);
	Vec2i v2(4, 5);
	Vec2i v3(2, 2);
	Vec3i v4(3, 1, 1);
	Vec3i v5(2, 2, 2);

	int collect = v1.mulVec(v2);
	print(v1);
	print(v2);
	v1.add(v2);
	print(v1);
	v1.mul(10);
	print(v1);
	v1.devision(10);
	print(v1);
	int collect2 = v1.divVec(v3);
	print(v1);
	int collect3 = v4.mulVec(v5);
	v4.add(v5);
	printx(v4);

	std::cout << collect << std::endl;

	std::cout << collect2 << std::endl;

	std::cout << collect3 << std::endl;
	getchar();




}