#pragma once

namespace cw {
		template<class fogiotype>
		class Vec2
		{
		public:
			Vec2<fogiotype>();
			Vec2<fogiotype>(fogiotype x, fogiotype y);
			~Vec2<fogiotype>();
		
			fogiotype x, y;
			
			void add(Vec2<fogiotype> other);
			void mul(fogiotype s);
			void devision(fogiotype t);
			fogiotype dot(Vec2<fogiotype> another);
			fogiotype cross(Vec2<fogiotype> another);
			void mag();
		};

		template<class fogiotype>
		Vec2<fogiotype>::Vec2<fogiotype>()
		{
		}
		template<class fogiotype>
		Vec2<fogiotype>::Vec2<fogiotype>(fogiotype x_, fogiotype y_)
			:x(x_), y(y_)
		{

		}
		template<class fogiotype>
		Vec2<fogiotype>::~Vec2<fogiotype>()
		{
		}


		template<class fogiotype>
		void Vec2<fogiotype>::add(Vec2<fogiotype> other) {

			x = x + other.x;
			y = y + other.y;
		}
		template<class fogiotype>
		void Vec2<fogiotype>::mul(fogiotype s) {

			x *= s;
			y *= s;
		}
		template<class fogiotype>
		void Vec2<fogiotype>::devision(fogiotype t) {

			x /= t;
			y /= t;
		}
		template<class fogiotype>
		fogiotype Vec2<fogiotype>::dot(Vec2<fogiotype> another) {

			x *= another.x;
			y *= another.y;
			return x + y;

		}
		template<class fogiotype>
		fogiotype Vec2<fogiotype>::cross(Vec2<fogiotype> another) {

			x *= another.y;
			y *= another.x;
			

			return x - y;



		}
		template<class fogiotype>
		void Vec2<fogiotype>::mag() {
			fogiotype m;
			m = sqrt((x*x) + (y*y));

			x = x/m;
			y = y/m;
		}

		typedef Vec2<int> Vec2i;
		typedef Vec2<float> Vec2f;
}