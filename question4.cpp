#include <iostream>
using namespace std;

void oddeven(int a)
{if(a%2==0)
 {cout<<"\n The number is even";}
 else
 {cout<<"\n The number is odd";}
}

int main() {
	int a;
	cout<<"Enter the number ";
	cin>>a;
	oddeven(a);
	return 0;
}
