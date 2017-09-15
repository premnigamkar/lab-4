    #include <iostream>
    using namespace std;
     
    void cube(int a)
    {int b;
    b=a*a*a;
    cout<<"\n The cube of the number is "<<b;}
     
    int main() {
    	int n;
    	cout<<"Enter the number ";
    	cin>>n;
    	cube(n);
    	return 0;
    }
