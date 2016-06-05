
class Math 
{
	public:

		template <typename T>
		T max(T const& a, T const& b) const
		{
			return (a>b)?a:b ;
		}

		template <typename T>
		T min(T const& a, T const& b) const
		{
			return (a>b)?b:a ;
		}		
};
