#include <iostream>
using namespace std;

void printstrong(int a)
{int c=0,b,d,e=0;
b=a;
while(b>0)
 {d=1;
 c=b%10;
 b=b/10;
 for(int j=c;j>0;j--)
 {d=d*j;}
 e=e+d;}
if(a==e)
 cout<<a<<"\t";
}

int main() {
	int a,b;
	cout<<"Enter the lower and upper limit of the interval ";
	cin>>a>>b;
	cout<<"\n The strong numbers in this interval are ";
	for(int i=a;i<=b;i++)
	{printstrong (i);}
	return 0;
}
