#include <iostream>
using namespace std;

void printarmstrong(int a)
{int c=0,b,d,e=0;
b=a;
while(b>0)
 {c=b%10;
 b=b/10;
 d=c*c*c;
 e=e+d;}
if(a==e)
 cout<<a<<"\t";
}

int main() {
	int a,b;
	cout<<"Enter the lower and upper limit of the interval ";
	cin>>a>>b;
	cout<<"\n The armstrong numbers in this interval are ";
	for(int i=a;i<=b;i++)
	{printarmstrong (i);}
	return 0;
}
