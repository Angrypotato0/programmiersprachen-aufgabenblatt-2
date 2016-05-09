#include <iostream>
#include "circle.hpp"

	
circle::circle(): 
ctr {0.0f, 0.0f}, r {1.0f}, clr {0.0f, 0.0f, 0.0f} {

}
	
	
circle::circle(vec2 const& ctr_, float r_, color const& clr_): 
ctr {ctr_}, r {r_}, clr {clr_} {

	if (r_ == 0.0f) {
		std::cout << "!! Der Radius muss groeßer Null sein !!" << std::endl;
		r = 1.0f; 
	}

	else if (r_ < 0.0f) {
		std::cout <<"!! Sie habe einen negativen Radius angegeben. Nicht Schlimm ;)"<<std::endl;
		r = r_ * (-1);
	}
}

	
float circle::get_diameter() const {
	return 2 * r;
}

	 
float circle::get_area() const {
	return M_PI * r * r;
}

	
float circle::get_circumference() const {
	return 2 * M_PI * r;
}

	
void circle::set_radius(float r_) {
	if (r_ == 0.0f) {
		std::cout << "!! Der Radius muss groeßer Null sein !!" << std::endl;
		r = 1.0f; 
	}

	else if (r_ < 0.0f) {
		std::cout <<"!! Sie habe einen negativen Radius angegeben. Nicht Schlimm ;)"<<std::endl;
		r = r_ * (-1);
	}

	else r = r_;
}

	 
float circle::get_radius() const {
	return r;
}
	
	
void circle::set_center(vec2 const& ctr_) {
	ctr = ctr_;
}

	 
vec2 circle::get_center() const {
	return ctr;
}
	
void circle::set_color(color const& clr_) {
	clr = clr_;
}

	 
color circle::get_color() const {
	return clr;
}

