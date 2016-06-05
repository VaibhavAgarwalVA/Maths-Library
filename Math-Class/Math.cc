#include "Math.hh"
#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<"Maths Library"<<"\n";
	
	//testing min and max
	cout<<"Enter 2 values"<<"\n";
	cin>>a>>b;
	cout<<"Entered values : "<<a<<" "<<b<<endl;
	cout<<max(a,b)<<" is bigger. "<<min(a,b)<<" is smaller."<<endl;

	

	return 0;
}
