#include <iostream>
using namespace std;

void printperfect(int a)
{int e=0;
for(int j=1;j<a;j++)
{if(a%j==0)
e=e+j;
 }
if(a==e)
 cout<<a<<"\t";
}

int main() {
	int a,b;
	cout<<"Enter the lower and upper limit of the interval ";
	cin>>a>>b;
	cout<<"\n The perfect numbers in this interval are ";
	for(int i=a;i<=b;i++)
	{printperfect (i);}
	return 0;
}
