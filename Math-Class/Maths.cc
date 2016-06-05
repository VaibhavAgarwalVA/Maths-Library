#include "Maths.hh"

int main()
{
	int a,b;
	cout<<"Maths Library"<<"\n";
	
	cout<<"Enter 2 values"<<"\n";
	cin>>a>>b;
	cout<<"Entered values : "<<a<<" "<<b<<endl;

	Maths maths;

	//testing min and max
	cout<<maths.max(a,b)<<" is bigger. "<<maths.min(a,b)<<" is smaller."<<endl;

	//testing gcd
	cout<<"GCD of the two numbers is : "<<maths.gcd(a,b)<<endl;

	//testing lcm
	cout<<"LCM of the two numbers is : "<<maths.lcm(a,b)<<endl;


	return 0;
}
