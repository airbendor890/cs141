#include<iostream>
using namespace std;
//prgm to print even natural no betn 1,100
int main()
{	//even(2n) format
	//for lop
	for(int i=0;i<=50;i++)
		{	//internal lop for step display
			int j=0;
			while(j<=i)
			{cout<<" ";j++;}
			cout<<2*i<<endl;
		}
	return 0;
}
