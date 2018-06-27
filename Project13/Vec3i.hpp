#pragma once

namespace cw {

	template<class fogiotype>
	//add template class (1)
	class Vec3
	{
	public:

		//change all of them to fogiotype (4)
		Vec3<fogiotype>();
		Vec3<fogiotype>(fogiotype x, fogiotype y, fogiotype z);
		~Vec3();
		fogiotype x;
		fogiotype y;
		fogiotype z;

		void add(Vec3<fogiotype> other);
		void mul(fogiotype s);
		void devision(fogiotype t);
		fogiotype dot(Vec3<fogiotype> another);
		fogiotype cross(Vec3<fogiotype> another);
		void mag();
	};
		//movefrom cpp to hpp (3)
		template<class fogiotype>
		Vec3<fogiotype>::Vec3<fogiotype>()
		{
		}
		template<class fogiotype>
		Vec3<fogiotype>::Vec3<fogiotype>(fogiotype x_, fogiotype y_, fogiotype z_)
			:x(x_), y(y_), z(z_)
		{
		}
		template<class fogiotype>
		Vec3<fogiotype>::~Vec3<fogiotype>()
		{
		}
		
		template<class fogiotype>
		void Vec3<fogiotype>::add(Vec3<fogiotype> other) {

			x = x + other.x;
			y = y + other.y;
			z = z + other.z;
		}

		template<class fogiotype>
		void Vec3<fogiotype>::mul(fogiotype s) {

			x *= s;
			y *= s;
			z *= s;
		}

		template<class fogiotype>
		void Vec3<fogiotype>::devision(fogiotype t) {

			x /= t;
			y /= t;
			z /= t;
		}

		template<class fogiotype>
		fogiotype Vec3<fogiotype>::dot(Vec3<fogiotype> another) {

			x *= another.x;
			y *= another.y;
			z *= another.z;
			return x + y + z;
		}

		template<class fogiotype>
		fogiotype Vec3<fogiotype>::cross(Vec3<fogiotype> another) {

			x *= another.y;
			y *= another.x;
			z *= another.z;

			return (x*y) - (y*z);



		}

		template<class fogiotype>
		void Vec3<fogiotype>::mag() {
			fogiotype m;
			m = sqrt((x*x) + (y*y)+(z*z));

			x = x / m;
			y = y / m;
			z = z / m;
		}
		//add typedef (2)
		//sssss
	

	typedef Vec3<int> Vec3i;
	typedef Vec3<float> Vec3f;
};