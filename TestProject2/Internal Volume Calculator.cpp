#include <iostream>




int main()
{
	std::cout << "Please enter sphere diameter:  ";
	float Diameter = 0;
	// std::cin used for user to type their own diameter.
	std::cin >> Diameter;
	float Radius = Diameter / 2;
	float Radcube = Radius * Radius * Radius;
	// translates math wise to read "Radcude x ? = A,  A x 4/3 = Volume.
	float Volume = (Radcube * 3.14159) * 1.33335;

	std::cout << "The Radius of the sphere is:  " << Radius << std::endl;
	std::cout << "The internal volume of the sphere is:  " << Volume << std::endl;
}