#include <iostream>
#include "Vec.cpp"

/// <summary>
/// Function to test vec3 operators
/// </summary>
/// <param name="num_args"></param>
/// <param name="args"></param>
/// <returns></returns>
int main(int num_args, char** args) {
	double3 a{ 0,1,2 };
	double3 b{ 0,0,1 };

	std::cout << a - b << std::endl;
	std::cout << dot(a, b) << std::endl;
	return 0;
}