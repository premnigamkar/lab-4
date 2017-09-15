#include <iostream>
using namespace std;

void maxmin(int a,int b)
{if(a>b)
cout<<"\n The maximum is "<<a<<" and the minimum is "<<b;
else if(b>a)
cout<<"\n The maximum is "<<b<<" and the minimum is "<<a;
else
	cout<<"\n Both are equal ";
}

int main() {
	int m,n;
	cout<<"Enter the numbers ";
	cin>>n>>m;
	maxmin(n,m);
	return 0;
}
