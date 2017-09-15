#include <iostream>
using namespace std;
void diameter(int a)
{cout<<"\nThe diameter is "<<2*a;}
void area(int b)
{float c;
c=3.14*b*b;
cout<<"\nThe area is "<<c;}
void circumference(int a)
{cout<<"\nThe circumference is "<<2*3.14*a;
}
int main() {
	int r;
	cout<<"Enter the value of radius ";
	cin>>r;
	diameter(r);
	area(r);
	circumference(r);
	
	return 0;
}
