#include <iostream>
using namespace std;

class Negation {
public:
	int x, y;
	Negation(int a, int b)
	{
		x = a;
		cout<<"x : "<<x<<endl;
	}

	//overload - operator
	void operator-() 
	{ 
		x=++x; 
		cout<<endl<<"After performing unary operator overlaoding"<<endl;
		cout<<"x : "<<x<<endl;
	} 
	
}; 
int main() 
{ 
	Negation d1(8, 9);
	
	-d1;
	
	return 0; 
}
