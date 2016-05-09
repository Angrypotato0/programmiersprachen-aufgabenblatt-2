

#include "mat2.hpp"
#include "vec2.hpp"
#include <iostream>
#include <math.h>

 
mat2::mat2(): 
a{1}, b{0}, c{0}, d{1} {

}

 
mat2::mat2(float a_, float b_, float c_, float d_):
a{a_}, b{b_}, c{c_}, d{d_} {

}

mat2& mat2::operator *= (mat2 const& m) {
	float mat_a = a * m.a + b * m.c; 
	float mat_b = a * m.b + b * m.d;
	float mat_c = c * m.a + d * m.c; 
	float mat_d = c * m.b + d * m.d;

	a = mat_a, b = mat_b, c = mat_c, d = mat_d;

	return *this;
}


mat2 operator * (mat2 const& m1, mat2 const& m2) {
	float mat_a = m1.a * m2.a + m1.b * m2.c;
	float mat_b = m1.a * m2.b + m1.b * m2.d; 
	float mat_c = m1.c * m2.a + m1.d * m2.c;
	float mat_d = m1.c * m2.b + m1.d * m2.d;

	return mat2 {mat_a, mat_b, mat_c, mat_d};
}


vec2 operator * (mat2 const& m, vec2 const& Vector1) {
	return vec2 {(m.a * Vector1.a + m.b * Vector1.b), (m.c * Vector1.a + m.d * Vector1.b)};
}



void operator * (vec2 const& Vector1, mat2 const& m){
	std::cout << "!! Die Multiplikation ist nicht möglich !!" <<std::endl;
	return;
}

mat2 operator * (float a, mat2 const& m) {
	return mat2 {a * m.a, a * m.b, a * m.c, a * m.d};
}


float mat2::det() const {
	return (a * d) - (b * c);
}


mat2 inverse(mat2 const& m) {
	if (m.det() == 0) {
		std::cout << "!! Der Determinant ist gleich 0 !!" << std::endl;
	}

	else {
		mat2 inv {m.d, -m.b, -m.c, m.a};
		return (1 / m.det()) * inv;
	}

}

mat2 transpose(mat2 const& m) {
	return mat2 {m.a, m.c, m.b, m.d};
}


mat2 make_rotation_mat2(float phi) {
	mat2 rotate{};
	rotate.a = cos(phi);
	rotate.b = -sin(phi);
	rotate.c = sin(phi);
	rotate.d = cos(phi);
	return rotate;
	
}