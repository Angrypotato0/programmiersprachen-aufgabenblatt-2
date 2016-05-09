#include <iostream>
#include "rectangle.hpp"


rectangle::rectangle():
cnr {0.0f, 0.0f}, a {1.0f}, b {1.0f}, clr {0.0f, 0.0f, 0.0f} {

}

 
rectangle::rectangle(vec2 const& cnr_, float a_, float b_, color const& clr_):
cnr {cnr_}, a {a_}, b {b_}, clr {clr_} {

	if (a_ == 0.0f) {
		std::cout << "!! Die Seiten sind zu klein. Mach groesser !!" << std::endl;
		a = 1.0f; 
	}

	else if (a_ < 0.0f) { 
		a = a_ * (-1);
	}

	if (b_ == 0.0f) {
		std::cerr << "!! Die Seiten sind zu klein. Mach groesser !!" << std::endl;
		b = 1.0f; 
	}

	else if (b_ < 0.0f) { 
		b = b_ * (-1);
	}
}

	
float rectangle::get_area() const {
	return a * b;
}

	
float rectangle::get_perimeter() const {
	return 2 * a + 2 * b;
}

	
float rectangle::get_diagonal() const {
	return sqrt(a * a + b * b);
}

	
void rectangle::set_aside(float a_) {
	if (a_ == 0.0f) {
		std::cout << "!! Die Seiten sind zu klein. Mach groesser !!" << std::endl;
		a = 1.0f; 
	}

	else if (a_ < 0.0f) { 
		a = a_ * (-1);
	}

	else a = a_;
}

	
float rectangle::get_aside() const {
	return a;
}

	
void rectangle::set_bside(float b_) {
	if (b_ == 0.0f) {
		std::cout << "!! Die Seiten sind zu klein. Mach groesser !!" << std::endl;
		b = 1.0f; // 
	}

	else if (b_ < 0.0f) { 
		b = b_ * (-1);
	}

	else b = b_;
}
	
	
float rectangle::get_bside() const {
	return b;
}
	
	
void rectangle::set_corner(vec2 const& cnr_) {
	cnr = cnr_;
}

	
vec2 rectangle::get_corner() const {
	return cnr;
}

	
void rectangle::set_color(color const& clr_) {
	clr = clr_;
}

	
color rectangle::get_color() const {
	return clr;
}