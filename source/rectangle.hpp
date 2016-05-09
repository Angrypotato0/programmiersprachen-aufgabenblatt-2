#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "vec2.hpp"
#include "color.hpp"
#include <cmath>

class rectangle {
public:
	
	rectangle();
	rectangle(vec2 const& cnr_, float a_, float b_, color const& clr_);
	
	float get_area() const; 
	float get_perimeter() const;
	float get_diagonal() const;
	void set_aside(float a_);
	float get_aside() const;
	void set_bside(float b_);
	float get_bside() const;
	void set_corner(vec2 const& cnr_); 
	vec2 get_corner() const;
	void set_color(color const& cnr_);
	color get_color() const;
	

private:
	
	vec2 cnr;
	float a; 
	float b; 
	color clr;

};

#endif 