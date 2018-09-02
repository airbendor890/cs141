#include<iostream>
using namespace std;
int main()
{	float a,b,c;	//declaration for three numbers
	cout<<"enter three numbers";
	cin>>a>>b>>c;
	
	if(a>b && b>c)
	{cout<<"your first input is maximum";}
        if(a<b && b>c)
	{cout<<"ur second input is maximum";}
        if(a<b && b<c)
	{cout<<"your third input is maximum";}       
	
}
