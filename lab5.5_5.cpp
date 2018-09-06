#include<iostream>
using namespace std;
int main()
{	cout<<"HOLLOW ROHOMBOUS STAR PATTERN"<<endl;

	for(int i=5;i>=1;i--)
		{ for(int j=i;j>=0;j--)
			{cout<<"  ";}
		  if(i>1 && i<5)
			{cout<<"*           *"<<endl;}
		  else
			{cout<<"*  *  *  *  *"<<endl;}


		}


	return 0;



}
