#include <iostream>
using namespace std;

void printprime(int a)
{int c=0;
for(int j=2;j<a;j++)
 {if(a%j==0)
  {c=1;}
 }
if(c==0)
 cout<<a<<"\t";
}

int main() {
	int a,b;
	cout<<"Enter the lower and upper limit of the interval ";
	cin>>a>>b;
	cout<<"\n The primes in this interval are ";
	for(int i=a;i<=b;i++)
	{printprime (i);}
	return 0;
}
