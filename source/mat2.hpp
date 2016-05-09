

#ifndef MAT2_HPP
#define MAT2_HPP
#include "vec2.hpp"


class mat2 {
public:
	 
	mat2();
	mat2(float a, float b, float c, float d);

	
	float a, b, c, d; 

	 
	float det() const;
	mat2& operator *= (mat2 const& m);
};

vec2 operator * (mat2 const& m, vec2 const& Vector1);
void operator * (vec2 const& Vector1, mat2 const& m);
mat2 operator * (mat2 const& ma1, mat2 const& ma2);
mat2 operator * (float a, mat2 const& m);
mat2 inverse(mat2 const& m);
mat2 transpose(mat2 const& m);
mat2 make_rotation_mat2(float phi);

#endif 

    

