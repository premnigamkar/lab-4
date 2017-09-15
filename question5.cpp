#include <iostream>
using namespace std;

void prime(int a)
{int c=0;
for(int j=2;j<a;j++)
{if(a%j==0)
{c=1;}
}
if(c==0)
cout<<"\n The number is a prime number ";
}

void perfect(int a)
{int b=0;
for(int i=1;i<a;i++)
{if(a%i==0)
{b=b+i;}}
if(a==b)
cout<<"\n The number is a perfect number ";
}

void armstrong(int a)
{int b,c,e=0;
b=a;
while(b>0)
{c=b%10;
b=b/10;
e=e+c*c*c;}
if(e==a)
cout<<"\n The number is an armstrong number ";
}

int main() {
	int a;
	cout<<"Enter the number to be tested ";
	cin>>a;
	prime (a);
	armstrong (a);
	perfect (a);
	
	return 0;
}
