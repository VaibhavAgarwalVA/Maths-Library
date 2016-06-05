
#include <iostream>

using namespace std;

class Maths
{
	public:

		//max in O(1)	
		template <typename T>
		T max(T const& a, T const& b) const
		{
			return (a>b)?a:b ;
		}

		//min in O(1)
		template <typename T>
		T min(T const& a, T const& b) const
		{
			return (a>b)?b:a ;
		}		

		//gcd in O(log n)
		template <typename T>
		T gcd(T const& a, T const& b)
		{
			T m1= min(a,b);
			T m2= max(a,b);
			
			while(m1){
				T temp= m2%m1;
				m2= m1;
				m1= temp;	
			}

			return m2;
		}

		template <typename T>
		T lcm(T const& a, T const& b)
		{
			T hcf = gcd(a,b);
			T lcm = (a*b)/hcf; 

			return lcm;
		}
};
