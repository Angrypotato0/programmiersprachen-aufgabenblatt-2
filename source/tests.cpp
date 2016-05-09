#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"
#include "vec2.cpp"
#include "mat2.hpp"
#include "mat2.cpp"
#include "circle.hpp"
#include "circle.cpp"
#include "rectangle.hpp"
#include "rectangle.cpp"


TEST_CASE("describe_operator_+=", "[vec2]") {
	vec2 vc1 {6.0f, 3.0f};
	vec2 vc2 {5.0f, 3.0f};
	vec2 vc3 {0.0f, 0.0f};
	vec2 vc4 {5.6f, 6.5f};
	 
 	
	vc1 += vc2; 				
	REQUIRE(vc1.a == 11.0f);		 
	REQUIRE(vc1.b == 6.0f);		

	vc2 += vc3;
	REQUIRE(vc2.a == 5.0f);
	REQUIRE(vc2.b == 3.0f);

	vc3 += vc4;
	REQUIRE(vc3.a == 5.6f);
	REQUIRE(vc3.b == 6.5f);

	vc4 += vec2 {-2.25f, 3.0f};
	REQUIRE(vc4.a == 3.35f);
	REQUIRE(vc4.b == 9.5f);

	vec2 vc {};
	REQUIRE(vc.a == 0.0f);
	REQUIRE(vc.b == 0.0f);
}

	
TEST_CASE("describe_operator_-=", "[vec2]") {
	vec2 vc1 {6.0f, 3.0f};
	vec2 vc2 {5.0f, 3.0f};
	vec2 vc3 {0.0f, 0.0f};
	vec2 vc4 {5.6f, 6.5f};
	
 	
	vc1 -= vc2; 
	REQUIRE(vc1.a == 1.0f);
	REQUIRE(vc1.b == 0.0f);

	vc2 -= vc3;
	REQUIRE(vc2.a == 5.0f); 
	REQUIRE(vc2.b == 3.0f);

	vc3 -= vc4;
	REQUIRE(vc3.a == -5.6f);
	REQUIRE(vc3.b == -6.5f);

	vc4 -= vec2 {-2.25f, 3.0f}; 
	REQUIRE(vc4.a == 7.85f);
	REQUIRE(vc4.b == 3.5f);
}

	
TEST_CASE("describe_operator_*=", "[vec2]") {
	vec2 vc1 {6.0f, 3.0f};
	vec2 vc2 {5.0f, 3.0f};
	vec2 vc3 {0.0f, 0.0f};
	vec2 vc4 {5.6f, 6.5f};

	vc1 *= 2.0f;
	REQUIRE(vc1.a == 12.0f);
	REQUIRE(vc1.b == 6.0f);

	vc2 *= 3.7f;
	REQUIRE(vc2.a == 18.5f);
	REQUIRE(vc2.b == 11.1f);

	vc3 *= -4.2f;
	REQUIRE(vc3.a == -0.0f);
	REQUIRE(vc3.b == -0.0f);

	vc4 *= 1.75;
	REQUIRE(vc4.a == 9.8f);
	REQUIRE(vc4.b == 11.375f);


}

	
TEST_CASE("describe_operator_/=", "[vec2]") {
	vec2 vc1 {6.0f, 3.0f};
	vec2 vc2 {5.0f, 3.0f};
	vec2 vc3 {0.0f, 0.0f};
	vec2 vc4 {5.6f, 6.5f};

	vc1 /= 2.0f; 
	REQUIRE(vc1.a == 3.0f);
	REQUIRE(vc1.b == 1.5f);

	vc2 /= 3.5f;
	REQUIRE(vc2.a == Approx(1.4286f));
	REQUIRE(vc2.b == Approx(0.85714f));

	vc3 /= -2.25f;
	REQUIRE(vc3.a == -0.0f);
	REQUIRE(vc3.b == -0.0f);

	vc4 /= -1.75;
	REQUIRE(vc4.a == -3.2f);
	REQUIRE(vc4.b == Approx(-3.71429f));

}

	
TEST_CASE("describe_operator_addition", "[vec2]") {
	vec2 vc1 {1.0f, 2.0f};
	vec2 vc2 {5.0f, 3.0f};
	vec2 vc3 {4.2f, 6.9f};
	vec2 vc4 {0.0f, 0.0f}; 

	vec2 vecA = vc1 + vc2; 
	REQUIRE(vecA.a == 6.0f);
	REQUIRE(vecA.b == 5.0f);

	vec2 vecB = vc1 + vc3;
	REQUIRE(vecB.a == 5.2f);
	REQUIRE(vecB.b == 8.9f);

	vec2 vecC = vc2 + vc3;
	REQUIRE(vecC.a == 9.2f);
	REQUIRE(vecC.b == 9.9f);

	vec2 vecD = vc3 + vc4; 
	REQUIRE(vecD.a == 4.2f); 
	REQUIRE(vecD.b == 6.9f);

	
}

	 
TEST_CASE("describe_operator_subtraktion", "[vec2]") {
	vec2 vc1 {1.0f, 2.0f};
	vec2 vc2 {5.0f, 3.0f};
	vec2 vc3 {4.2f, 6.9f};
	vec2 vc4 {0.0f, 0.0f};
	 

	vec2 vecA = vc1 - vc2; 
	REQUIRE(vecA.a == -4.0f);
	REQUIRE(vecA.b == -1.0f);

	vec2 vecB = vc1 - vc3; 
	REQUIRE(vecB.a == Approx(-3.2f));
	REQUIRE(vecB.b == -4.9f);

	vec2 vecC = vc2 - vc3; 
	REQUIRE(vecC.a == Approx(0.8f)); 
	REQUIRE(vecC.b == -3.9f);

	vec2 vecD = vc3 - vc4;
	REQUIRE(vecD.a == 4.2f);
	REQUIRE(vecD.b == 6.9f);

	
}

	 
TEST_CASE("describe_operator_multiplikation1", "[vec2]") {
	vec2 vc1 {1.0f, 2.0f};
	vec2 vc2 {5.0f, 3.0f};
	vec2 vc3 {4.2f, 6.9f};
	vec2 vc4 {0.0f, 0.0f};
	

	vec2 vcm1 = vc1 * 2.0f; 
	REQUIRE(vcm1.a == 2.0f);
	REQUIRE(vcm1.b == 4.0f);

	vec2 vcm2 = vc2 * 4.2f; 
	REQUIRE(vcm2.a == 21.0f);
	REQUIRE(vcm2.b == Approx(12.6f)); 
	vec2 vcm3 = vc3 * 6.9f;
	REQUIRE(vcm3.a == 28.98f);
	REQUIRE(vcm3.b == 47.61f);

	vec2 vcm4 = vc4 * 5.5f; 
	REQUIRE(vcm4.a == 0.0f);
	REQUIRE(vcm4.b == 0.0f);

	
}

 
TEST_CASE("describe_operator_multiplikation2", "[vec2]") {
	vec2 vc1 {1.0f, 2.0f};
	vec2 vc2 {5.0f, 3.0f};
	vec2 vc3 {4.2f, 6.9f};
	vec2 vc4 {0.0f, 0.0f};
	 

	vec2 vcm1 = 2.0f * vc1; 
	REQUIRE(vcm1.a == 2.0f);
	REQUIRE(vcm1.b == 4.0f);

	vec2 vcm2 = 4.2f * vc2; 
	REQUIRE(vcm2.a == 21.0f);
	REQUIRE(vcm2.b == Approx(12.6f)); 

	vec2 vcm3 = 6.9f * vc3;
	REQUIRE(vcm3.a == 28.98f);
	REQUIRE(vcm3.b == 47.61f);

	vec2 vcm4 = 5.5f * vc4; 
	REQUIRE(vcm4.a == 0.0f);
	REQUIRE(vcm4.b == 0.0f);

	

}

	
TEST_CASE("describe_operator_division", "[vec2]") {
	vec2 vc1 {1.0f, 2.0f};
	vec2 vc2 {5.0f, 3.0f};
	vec2 vc3 {4.2f, 6.9f};
	vec2 vc4 {0.0f, 0.0f};
	 

	vec2 vcd1 = vc1 / 2.0f; 
	REQUIRE(vcd1.a == 0.5f);
	REQUIRE(vcd1.b == 1.0f);

	vec2 vcd2 = vc2 / 4.2f; 
	REQUIRE(vcd2.a == Approx(1.190476));
	REQUIRE(vcd2.b == Approx(0.714285));

	vec2 vcd3 = vc3 / 6.9f; 
	REQUIRE(vcd3.a == Approx(0.608695f));
	REQUIRE(vcd3.b == Approx(1.0f));

	vec2 vcd4 = vc4 / 0.0f;
	REQUIRE(vcd4.a == Approx(0.0f));
	REQUIRE(vcd4.b == Approx(0.0f));
}

	
TEST_CASE("describe_operator_mat_*=", "[mat2]") {
	mat2 mt1 {};
	mat2 mt2 {2.0f, 3.0f, 4.0f, 5.0f};
	mat2 mt3 {-3.0f, 5.0f, 0.0f, -1.0f};
	

	mt1 *= mt2; 
	REQUIRE(mt1.a == 2.0f);
	REQUIRE(mt1.b == 3.0f);
	REQUIRE(mt1.c == 4.0f);
	REQUIRE(mt1.d == 5.0f);

	mt2 *= mt2; 
	REQUIRE(mt2.a == 16.0f);
	REQUIRE(mt2.b == 21.0f);
	REQUIRE(mt2.c == 28.0f);
	REQUIRE(mt2.d == 37.0f);

	mt3 *= mt1;
	REQUIRE(mt3.a == 14.0f);
	REQUIRE(mt3.b == 16.0f);
	REQUIRE(mt3.c == -4.0f);
	REQUIRE(mt3.d == -5.0f);

	


}

	
TEST_CASE("describe_operator_mat_*", "[mat2]") {
	mat2 mt1 {};
	mat2 mt2 {2.0f, 3.0f, 4.0f, 5.0f};
	mat2 mt3 {-3.0f, 5.0f, 0.0f, -1.0f};
	

	mat2 mt12 = mt1 * mt2;
	REQUIRE(mt12.a == 2.0f);
	REQUIRE(mt12.b == 3.0f);
	REQUIRE(mt12.c == 4.0f);
	REQUIRE(mt12.d == 5.0f);

	mat2 mt22 = mt2 * mt2;
	REQUIRE(mt22.a == 16.0f);
	REQUIRE(mt22.b == 21.0f);
	REQUIRE(mt22.c == 28.0f);
	REQUIRE(mt22.d == 37.0f);

	mat2 mt32 = mt3 * mt2;
	REQUIRE(mt32.a == 14.0f);
	REQUIRE(mt32.b == 16.0f);
	REQUIRE(mt32.c == -4.0f);
	REQUIRE(mt32.d == -5.0f); 

	

}

TEST_CASE("describe_operator_matvec_*", "[mat2]") {
	mat2 mt1 {};
	mat2 mt2 {2.0f, 3.0f, 4.0f, 5.0f};
	mat2 mt3 {-3.0f, 5.0f, 0.0f, -1.0f};
	mat2 mt4 {-4.2, 6.9f, 1.2f, -2.8f};
	vec2 vc1 {};
	vec2 vc2 {5.0f, 3.0f};
	vec2 vc3 {4.2f, 6.9f};
	vec2 vc4 {1.0f, 2.0f};

	vec2 vm22 = mt2 * vc2;
	REQUIRE(vm22.a == 19);
	REQUIRE(vm22.b == 35);

}

TEST_CASE("describe_operator_vecmat_*", "[mat2]") {
	mat2 mt1 {};
	mat2 mt2 {2.0f, 3.0f, 4.0f, 5.0f};
	vec2 vc1 {};
	vec2 vc2 {5.0f, 3.0f};

	vc2 * mt2;  
}

TEST_CASE("describe_function_determinate", "[mat2]") {
	mat2 mt1 {};
	REQUIRE(mt1.det() == 1.0f);

	mat2 mt2 {2.0f, 3.0f, 0.0f, 5.0f};
	REQUIRE(mt2.det() == 10.0f);

	mat2 mt3 {-4.2, 6.9f, 1.2f, -2.8f};
	REQUIRE(mt3.det() == Approx(3.48f));

	mat2 mt4 {-0.4f, 3.23f, 9.75f, 2.13};
	REQUIRE(mt4.det() == Approx(-32.3445));
}

TEST_CASE("describe_function_inverse", "[mat2]") {
	mat2 mt1 {2.0f, 3.0f, 4.0f, 5.0f};
	mat2 mt1_i = inverse(mt1);
	REQUIRE(mt1_i.a == Approx(-2.5f));
	REQUIRE(mt1_i.b == Approx(1.5f));
	REQUIRE(mt1_i.c == Approx(2.0f));
	REQUIRE(mt1_i.d == Approx(-1.0f));

	mat2 mt2_i = inverse(mat2{0.0f, 0.0f, 0.0f, 0.0f});

	mat2 mt3 {-4.2, 6.9f, 1.2f, -2.8f};
	mat2 mt3_i = inverse(mt3);
	REQUIRE(mt3_i.a == Approx(-0.8046f));
	REQUIRE(mt3_i.b == Approx(-1.9827586f));
	REQUIRE(mt3_i.c == Approx(-0.34482759f));
	REQUIRE(mt3_i.d == Approx(-1.20689655f));

}

TEST_CASE("describe_function_transpose", "[mat2]"){
	mat2 m1 {2.0f, 3.0f, 4.0f, 5.0f};
	mat2 m1_t = transpose(m1);
	REQUIRE(m1_t.a == 2.0f);
	REQUIRE(m1_t.b == 4.0f);
	REQUIRE(m1_t.c == 3.0f);
	REQUIRE(m1_t.d == 5.0f);

	mat2 m2 {-4.2, 6.9f, 1.2f, -2.8f};
	mat2 m2_t = transpose(m2);
	REQUIRE(m2_t.a == -4.2f);
	REQUIRE(m2_t.b == 1.2f);
	REQUIRE(m2_t.c == 6.9f);
	REQUIRE(m2_t.d == -2.8f);

	mat2 m3 {-3.0f, 5.0f, 0.0f, -1.0f};
	mat2 m3_t = transpose(m3);
	REQUIRE(m3_t.a == -3.0f);
	REQUIRE(m3_t.b == 0.0f);
	REQUIRE(m3_t.c == 5.0f);
	REQUIRE(m3_t.d == -1.0f);

}

TEST_CASE("describe_function_rotate", "[mat2]") {
	mat2 m1 = make_rotation_mat2(4.0f);
	REQUIRE(m1.a == Approx(-0.65364f));
	REQUIRE(m1.b == Approx(0.7568f));
	REQUIRE(m1.c == Approx(-0.7568f));
	REQUIRE(m1.d == Approx(-0.65364f));

	mat2 m2 = make_rotation_mat2(1.0f);
	REQUIRE(m2.a == Approx(0.54030f));
	REQUIRE(m2.b == Approx(-0.841470f));
	REQUIRE(m2.c == Approx(0.841470f));
	REQUIRE(m2.d == Approx(0.54030f));

	mat2 m3 = make_rotation_mat2(2.34f);
	REQUIRE(m3.a == Approx(-0.695563f));
	REQUIRE(m3.b == Approx(-0.7184648f));
	REQUIRE(m3.c == Approx(0.7184648f));
	REQUIRE(m3.d == Approx(-0.695563f));

}

TEST_CASE("describe_function_getDiameter", "[circle]") {
	circle c1 {};
	REQUIRE((c1.get_diameter()) == Approx(2.0f));

	circle c2 {{1.0, 2.5}, -3.2, {0.0, 0.0, 0.0}};
	REQUIRE((c2.get_diameter()) == Approx(6.4f));

	circle c3 {{2.3, 10.2}, 4.2, {0.0, 0.0, 0.0}};
	REQUIRE((c3.get_diameter()) == Approx(8.4f));

	circle c4  {{6.9, 4.6}, 6.9, {0.3, 1.0, 0.5}};
	REQUIRE((c4.get_diameter()) == Approx(13.8f));

	circle c5  {{6.9, 4.6}, 0.0, {0.3, 1.0, 0.5}}; 
	REQUIRE((c5.get_radius()) == Approx(1.0f));

}

TEST_CASE("describe_function_getAreacircle", "[circle]") {
	circle c1 {};
	REQUIRE((c1.get_area()) == Approx(3.14159f));

	circle c2 {{1.0, 2.5}, 3.2, {0.0, 0.0, 0.0}};
	REQUIRE((c2.get_area()) == Approx(32.169901f));

	circle c3 {{2.3, 10.2}, 4.2, {0.0, 0.0, 0.0}};
	REQUIRE((c3.get_area()) == Approx(55.41769441f));

	circle c4  {{6.9, 4.6}, 6.9, {0.3, 1.0, 0.5}};
	REQUIRE((c4.get_area()) == Approx(149.5712262f));

}

TEST_CASE("describe_function_getcircumference", "[circle]") {
	circle c1 {};
	REQUIRE((c1.get_circumference()) == Approx(6.2831f));

	circle c2 {{1.0, 2.5}, 3.2, {0.0, 0.0, 0.0}};
	REQUIRE((c2.get_circumference()) == Approx(20.106193f));

	circle c3 {{2.3, 10.2}, 4.2, {0.0, 0.0, 0.0}};
	REQUIRE((c3.get_circumference()) == Approx(26.389378f));

	circle c4  {{6.9, 4.6}, 6.9, {0.3, 1.0, 0.5}};
	REQUIRE((c4.get_circumference()) == Approx(43.3539786f));

}

TEST_CASE("describe_function_getRadius", "[circle]") {
	circle c1 {};
	REQUIRE((c1.get_radius()) == Approx(1.0f));

	circle c2 {{1.0, 2.5}, 3.2, {0.0, 0.0, 0.0}};
	REQUIRE((c2.get_radius()) == Approx(3.2f));

	circle c3 {{2.3, 10.2}, 4.2, {0.0, 0.0, 0.0}};
	REQUIRE((c3.get_radius()) == Approx(4.2f));

	circle c4 {{6.9, 4.6}, 6.9, {0.3, 1.0, 0.5}};
	REQUIRE((c4.get_radius()) == Approx(6.9f));

}

TEST_CASE("describe_function_setRadius", "[circle]") {
	circle c1 {};
	c1.set_radius(-3.2f);
	REQUIRE((c1.get_radius()) == Approx(3.2f));

	circle c2 {{1.0, 2.5}, 3.2, {0.0, 0.0, 0.0}};
	c2.set_radius(-4.3f);
	REQUIRE((c2.get_radius()) == Approx(4.3f));

	circle c3 {{2.3, 10.2}, 4.2, {0.0, 0.0, 0.0}};
	c3.set_radius(6.9f);
	REQUIRE((c3.get_radius()) == Approx(6.9f));

	circle c4 {{6.9, 4.6}, 6.9, {0.3, 1.0, 0.5}};
	c4.set_radius(0.0f);
	REQUIRE((c4.get_radius()) == Approx(1.0f));

}


TEST_CASE("describe_function_getCentercircle", "[circle]") {
	circle c1 {};
	REQUIRE((c1.get_center().a) == Approx(0.0f));
	REQUIRE((c1.get_center().b) == Approx(0.0f));

	circle c2 {{1.0, 2.5}, 3.2, {0.0, 0.0, 0.0}};
	REQUIRE((c2.get_center().a) == Approx(1.0f));
	REQUIRE((c2.get_center().b) == Approx(2.5f));

	circle c3 {{2.3, 10.2}, 4.2, {0.0, 0.0, 0.0}};
	REQUIRE((c3.get_center().a) == Approx(2.3f));
	REQUIRE((c3.get_center().b) == Approx(10.2f));

	circle c4 {{6.9, 4.6}, 6.9, {0.3, 1.0, 0.5}};
	REQUIRE((c4.get_center().a) == Approx(6.9f));
	REQUIRE((c4.get_center().b) == Approx(4.6f));

}

TEST_CASE("describe_function_setCentercircle", "[circle]") {
	circle c1 {};
	c1.set_center({3.2f, 0.4f});
	REQUIRE((c1.get_center().a) == Approx(3.2f));
	REQUIRE((c1.get_center().b) == Approx(0.4f));

	circle c2 {{1.0, 2.5}, 3.2, {0.0, 0.0, 0.0}};
	c2.set_center({-4.3f, -2.5});
	REQUIRE((c2.get_center().a) == Approx(-4.3f));
	REQUIRE((c2.get_center().b) == Approx(-2.5f));

	circle c3 {{2.3, 10.2}, 4.2, {0.0, 0.0, 0.0}};
	c3.set_center({6.9f, 4.2f});
	REQUIRE((c3.get_center().a) == Approx(6.9f));
	REQUIRE((c3.get_center().b) == Approx(4.2f));

	circle c4 {{6.9, 4.6}, 6.9, {0.3, 1.0, 0.5}};
	c4.set_center({0.0f, 0.0f});
	REQUIRE((c4.get_center().a) == Approx(0.0f));
	REQUIRE((c4.get_center().b) == Approx(0.0f));

}

TEST_CASE("describe_function_getColorcircle", "[circle]") {
	circle c1 {};
	REQUIRE((c1.get_color().r) == Approx(0.0f));
	REQUIRE((c1.get_color().g) == Approx(0.0f));
	REQUIRE((c1.get_color().b) == Approx(0.0f));

	circle c2 {{1.0, 2.5}, 3.2, {0.0, 0.94, 0.3}};
	REQUIRE((c2.get_color().r) == Approx(0.0f));
	REQUIRE((c2.get_color().g) == Approx(0.94f));
	REQUIRE((c2.get_color().b) == Approx(0.3f));

	circle c3 {{2.3, 10.2}, 4.2, {0.1, 0.24, 0.8}};
	REQUIRE((c3.get_color().r) == Approx(0.1f));
	REQUIRE((c3.get_color().g) == Approx(0.24f));
	REQUIRE((c3.get_color().b) == Approx(0.8f));

	circle c4 {{6.9, 4.6}, 6.9, {0.3, 1.0, 0.5}};
	REQUIRE((c4.get_color().r) == Approx(0.3f));
	REQUIRE((c4.get_color().g) == Approx(1.0f));
	REQUIRE((c4.get_color().b) == Approx(0.5f));

}

TEST_CASE("describe_function_setColorcircle", "[circle]") {
	circle c1 {};
	c1.set_color({0.2f, 0.3f, 0.4f});
	REQUIRE((c1.get_color().r) == Approx(0.2f));
	REQUIRE((c1.get_color().g) == Approx(0.3f));
	REQUIRE((c1.get_color().b) == Approx(0.4f));

	circle c2 {{1.0, 2.5}, 3.2, {0.0, 0.94, 0.3}};
	c2.set_color({0.0f, 0.0f, 0.0f});
	REQUIRE((c2.get_color().r) == Approx(0.0f));
	REQUIRE((c2.get_color().g) == Approx(0.0f));
	REQUIRE((c2.get_color().b) == Approx(0.0f));

	circle c3 {{2.3, 10.2}, 4.2, {0.1, 0.24, 0.8}};
	c3.set_color({0.34f, 0.25f, 0.12f});
	REQUIRE((c3.get_color().r) == Approx(0.34f));
	REQUIRE((c3.get_color().g) == Approx(0.25f));
	REQUIRE((c3.get_color().b) == Approx(0.12f));

	circle c4 {{6.9, 4.6}, 6.9, {0.3, 1.0, 0.5}};
	c4.set_color({0.3f, 1.0f, 0.5f});
	REQUIRE((c4.get_color().r) == Approx(0.3f));
	REQUIRE((c4.get_color().g) == Approx(1.0f));
	REQUIRE((c4.get_color().b) == Approx(0.5f));
}
TEST_CASE("describe_function_getArearectangle", "[rectangle]") {
	rectangle r1 {};
	REQUIRE((r1.get_area()) == Approx(1.0f));

	rectangle r2 {{2.3, 10.2}, -4.2, 6.9, {0.0, 0.0, 0.0}};
	REQUIRE((r2.get_area()) == Approx(28.98f));

	rectangle r3 {{6.9, 4.6}, 10.37, -5.29, {0.3, 1.0, 0.5}};
	REQUIRE((r3.get_area()) == Approx(54.8573f));

	rectangle r4 {{1.0, 2.5}, 3.2, 1.05, {0.0, 0.0, 0.0}};
	REQUIRE((r4.get_area()) == Approx(3.36f));

}

TEST_CASE("describe_function_getPerimeter", "[rectangle]") {
	rectangle r1 {};
	REQUIRE((r1.get_perimeter()) == Approx(4.0f));

	rectangle r2 {{2.3, 10.2}, 4.2, 6.9, {0.0, 0.0, 0.0}};
	REQUIRE((r2.get_perimeter()) == Approx(22.2f));

	rectangle r3 {{6.9, 4.6}, 10.37, 5.29, {0.3, 1.0, 0.5}};
	REQUIRE((r3.get_perimeter()) == Approx(31.32f));

	rectangle r4 {{1.0, 2.5}, 3.2, 1.05, {0.0, 0.0, 0.0}};
	REQUIRE((r4.get_perimeter()) == Approx(8.5f));

}

TEST_CASE("describe_function_getDiagonal", "[rectangle]") {
	rectangle r1 {};
	REQUIRE((r1.get_diagonal()) == Approx(1.414213562f));

	rectangle r2 {{2.3, 10.2}, 4.2, 6.9, {0.0, 0.0, 0.0}};
	REQUIRE((r2.get_diagonal()) == Approx(8.077747211f));

	rectangle r3 {{6.9, 4.6}, 10.37, 5.29, {0.3, 1.0, 0.5}};
	REQUIRE((r3.get_diagonal()) == Approx(11.64134872f));

	rectangle r4 {{1.0, 2.5}, 3.2, 1.05, {0.0, 0.0, 0.0}};
	REQUIRE((r4.get_diagonal()) == Approx(3.367862824f));

}

TEST_CASE("describe_function_setAside", "[rectangle]") {
	rectangle r1 {};
	r1.set_aside(3.33f);
	REQUIRE((r1.get_aside()) == Approx(3.33f));

	rectangle r2 {{2.3, 10.2}, 4.2, 6.9, {0.0, 0.0, 0.0}};
	r2.set_aside(10.94f);
	REQUIRE((r2.get_aside()) == Approx(10.94f));

	rectangle r3 {{6.9, 4.6}, 10.37, 5.29, {0.3, 1.0, 0.5}};
	r3.set_aside(2.75f);
	REQUIRE((r3.get_aside()) == Approx(2.75f));

	rectangle r4 {{1.0, 2.5}, 3.2, 1.05, {0.0, 0.0, 0.0}};
	r4.set_aside(12.9f);
	REQUIRE((r4.get_aside()) == Approx(12.9f));

	rectangle r5 {{1.0, 2.5}, 3.2, 1.05, {0.0, 0.0, 0.0}};
	r5.set_aside(0.0f);
	REQUIRE((r5.get_aside()) == Approx(1.0f));

}

TEST_CASE("describe_function_getAside", "[rectangle]") {
	rectangle r1 {};
	REQUIRE((r1.get_aside()) == Approx(1.0f));

	rectangle r2 {{2.3, 10.2}, 4.2, 6.9, {0.0, 0.0, 0.0}};
	REQUIRE((r2.get_aside()) == Approx(4.2f));

	rectangle r3 {{6.9, 4.6}, 10.37, 5.29, {0.3, 1.0, 0.5}};
	REQUIRE((r3.get_aside()) == Approx(10.37f));

	rectangle r4 {{1.0, 2.5}, 3.2, 1.05, {0.0, 0.0, 0.0}};
	REQUIRE((r4.get_aside()) == Approx(3.2f));

}

TEST_CASE("describe_function_setBside", "[rectangle]") {
	rectangle r1 {};
	r1.set_bside(3.33f);
	REQUIRE((r1.get_bside()) == Approx(3.33f));

	rectangle r2 {{2.3, 10.2}, 4.2, 6.9, {0.0, 0.0, 0.0}};
	r2.set_bside(-10.94f);
	REQUIRE((r2.get_bside()) == Approx(10.94f));

	rectangle r3 {{6.9, 4.6}, 10.37, 5.29, {0.3, 1.0, 0.5}};
	r3.set_bside(2.75f);
	REQUIRE((r3.get_bside()) == Approx(2.75f));

	rectangle r4 {{1.0, 2.5}, 3.2, 1.05, {0.0, 0.0, 0.0}};
	r4.set_bside(12.9f);
	REQUIRE((r4.get_bside()) == Approx(12.9f));

}

TEST_CASE("describe_function_getBside", "[rectangle]") {
	rectangle r1 {};
	REQUIRE((r1.get_bside()) == Approx(1.0f));

	rectangle r2 {{2.3, 10.2}, 4.2, 6.9, {0.0, 0.0, 0.0}};
	REQUIRE((r2.get_bside()) == Approx(6.9f));

	rectangle r3 {{6.9, 4.6}, 10.37, 5.29, {0.3, 1.0, 0.5}};
	REQUIRE((r3.get_bside()) == Approx(5.29f));

	rectangle r4 {{1.0, 2.5}, 3.2, 1.05, {0.0, 0.0, 0.0}};
	REQUIRE((r4.get_bside()) == Approx(1.05f));

}

TEST_CASE("describe_function_getCenterrectangle", "[rectangle]") {
	rectangle r1 {};
	REQUIRE((r1.get_corner().a) == Approx(0.0f));
	REQUIRE((r1.get_corner().b) == Approx(0.0f));

	rectangle r2 {{2.3, 10.2}, 4.2, 6.9, {0.0, 0.0, 0.0}};
	REQUIRE((r2.get_corner().a) == Approx(2.3f));
	REQUIRE((r2.get_corner().b) == Approx(10.2f));

	rectangle r3 {{-6.9, 4.6}, 10.37, 5.29, {0.3, 1.0, 0.5}};
	REQUIRE((r3.get_corner().a) == Approx(-6.9f));
	REQUIRE((r3.get_corner().b) == Approx(4.6f));

	rectangle r4 {{1.0, 2.5}, 3.2, 1.05, {0.0, 0.0, 0.0}};
	REQUIRE((r4.get_corner().a) == Approx(1.0f));
	REQUIRE((r4.get_corner().b) == Approx(2.5f));

}

TEST_CASE("describe_function_setCenterrectangle", "[rectangle]") {
	rectangle r1 {};
	r1.set_corner({3.2f, 0.4f});
	REQUIRE((r1.get_corner().a) == Approx(3.2f));
	REQUIRE((r1.get_corner().b) == Approx(0.4f));

	rectangle r2 {{1.0, 2.5}, 3.2, 4.3, {0.0, 0.0, 0.0}};
	r2.set_corner({-4.3f, -2.5});
	REQUIRE((r2.get_corner().a) == Approx(-4.3f));
	REQUIRE((r2.get_corner().b) == Approx(-2.5f));

	rectangle r3 {{2.3, 10.2}, 4.2, 10.12, {0.0, 0.0, 0.0}};
	r3.set_corner({6.9f, 4.2f});
	REQUIRE((r3.get_corner().a) == Approx(6.9f));
	REQUIRE((r3.get_corner().b) == Approx(4.2f));

	rectangle r4 {{6.9, 4.6}, 6.9, 9.21, {0.3, 1.0, 0.5}};
	r4.set_corner({0.0f, 0.0f});
	REQUIRE((r4.get_corner().a) == Approx(0.0f));
	REQUIRE((r4.get_corner().b) == Approx(0.0f));

}

TEST_CASE("describe_function_getColorrectangle", "[rectangle]") {
	rectangle r1 {};
	REQUIRE((r1.get_color().r) == Approx(0.0f));
	REQUIRE((r1.get_color().g) == Approx(0.0f));
	REQUIRE((r1.get_color().b) == Approx(0.0f));

	rectangle r2 {{1.0, 2.5}, 3.2, 4.3, {0.0f, 0.94f, 0.3f}};
	REQUIRE((r2.get_color().r) == Approx(0.0f));
	REQUIRE((r2.get_color().g) == Approx(0.94f));
	REQUIRE((r2.get_color().b) == Approx(0.3f));

	rectangle r3 {{2.3, 10.2}, 4.2, 10.12, {0.9f, 0.3f, 0.7f}};
	REQUIRE((r3.get_color().r) == Approx(0.9f));
	REQUIRE((r3.get_color().g) == Approx(0.3f));
	REQUIRE((r3.get_color().b) == Approx(0.7f));

	rectangle r4 {{6.9, 4.6}, 6.9, 3.2, {0.3f, 1.0f, 0.5f}};
	REQUIRE((r4.get_color().r) == Approx(0.3f));
	REQUIRE((r4.get_color().g) == Approx(1.0f));
	REQUIRE((r4.get_color().b) == Approx(0.5f));

}

TEST_CASE("describe_function_setColorrectangle", "[rectangle]") {
	rectangle r1 {};
	r1.set_color({1.0f, 0.4f, 0.9f});
	REQUIRE((r1.get_color().r) == Approx(1.0f));
	REQUIRE((r1.get_color().g) == Approx(0.4f));
	REQUIRE((r1.get_color().b) == Approx(0.9f));

	rectangle r2 {{1.0, 2.5}, 3.2, 4.3, {0.0f, 0.94f, 0.3f}};
	r2.set_color({0.0f, 0.0f, 0.0f});
	REQUIRE((r2.get_color().r) == Approx(0.0f));
	REQUIRE((r2.get_color().g) == Approx(0.0f));
	REQUIRE((r2.get_color().b) == Approx(0.0f));

	rectangle r3 {{2.3, 10.2}, 4.2, 10.12, {0.9f, 0.3f, 0.7f}};
	r3.set_color({0.2f, 0.42f, 0.69f});
	REQUIRE((r3.get_color().r) == Approx(0.2f));
	REQUIRE((r3.get_color().g) == Approx(0.42f));
	REQUIRE((r3.get_color().b) == Approx(0.69f));

	rectangle r4 {{6.9, 4.6}, 6.9, 3.2, {0.3f, 1.0f, 0.5f}};
	r4.set_color({1.0f, 1.0f, 1.0f});
	REQUIRE((r4.get_color().r) == Approx(1.0f));
	REQUIRE((r4.get_color().g) == Approx(1.0f));
	REQUIRE((r4.get_color().b) == Approx(1.0f));

}



int main(int argc, char * argv[]) {

  return Catch::Session().run(argc, argv);

}