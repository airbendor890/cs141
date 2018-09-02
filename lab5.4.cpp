#include<iostream>
using namespace std;
int main()
{	int n;
	cout<<"give ref. natural no i will print in reveres order with lader pattern"<<endl;
	cin>>n;
	while(n>=0)	//checks condition  bfr entrng lop
	{  int k=0;
	   while(k<=n)      //anthr whl lop for ladder part
            {cout<<"   "; 
		k++;
	    }
	 cout<<n<<endl;
	 --n;           //decremntn
	}
	return 0;
}
