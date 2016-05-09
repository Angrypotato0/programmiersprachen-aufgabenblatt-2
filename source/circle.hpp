#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"
#include "mat2.hpp"
#include "color.hpp"
#include <cmath>

class circle {
public: 
	
	circle();
	circle(vec2 const& ctr, float r, color const& clr);

	
	
	float get_diameter() const;
	float get_area() const; 
	float get_circumference() const;
	void set_radius(float r_); 
	float get_radius() const; 
	void set_center(vec2 const& ctr_); 
	vec2 get_center() const;
	void set_color(color const& clr_);
	color get_color() const;
	

private:
	
	vec2 ctr; 
	float r; 
	color clr; 

};

#endif 