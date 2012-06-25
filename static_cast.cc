#include <iostream>

int main() {
	float i = 0.97;
	float j = 1.54;

	int x = static_cast<int>(i);
	int y = static_cast<int>(j);

	std::cout<< x << ", " << y << std::endl;
}
