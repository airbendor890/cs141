#include<iostream>
using namespace std;
//prgm to find sum of first n  odd nos
int main()
{	int n;	
	cout<<"enter n"<<endl;cin>>n;
	//tk sum variabl=0
	int sum=0;
	
	//if n is odd	
	//us fr lp
	if(n%2!=0)	
	{	
	for(int j=0;j<=(n-1)/2;j++)
		{cout<<((2*j)+1)<<endl;sum=sum+(2*j+1);}
	}
	//if n is even	
	else
	{for(int j=0;j<=n/2;j++)
		{cout<<2*j<<endl;sum=sum+2*j;}
	}

	cout<<"\n sum=="<<" "<<sum<<endl;
	return 0;
}
