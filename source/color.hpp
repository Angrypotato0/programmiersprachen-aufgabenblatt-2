

#ifndef COLOR_HPP
#define COLOR_HPP
#include <iostream>

struct color {
	

	color():
	r{0.0f}, g{0.0f}, b{0.0f}{}


	color(float c):
	r{c}, g{c}, b{c}{
		if (c>1||c<0){
			std::cout<<"!! Bitte geben Sie Farbwerte zwischen 0 und 1 an !!"<< std::endl;
			r = 0.0f;
			g = 0.0f;
			b = 0.0f;
		}
	}
	color(float r_, float g_, float b_):
	r{r_}, g{g_}, b{b_}{
		if (r>1||r<0){
			std::cout<<"!! Bitte geben Sie Farbwerte zwischen 0 und 1 an !!"<< std::endl;
			r = 0.0f;
		}
		if (g>1||g<0){
			std::cout<<"!! Bitte geben Sie Farbwerte zwischen 0 und 1 an !!"<< std::endl;
			g = 0.0f;
		}
		if (b>1||b<0){
			std::cout<<"!! Bitte geben Sie Farbwerte zwischen 0 und 1 an !!"<< std::endl;
			b = 0.0f;
		}
	}
	float r,g,b;
};
#endif