#include<iostream>
using namespace std;

int main()
{cout<<"MIRRORED RIGHTTRIANGLE STAR PATTERN"<<endl;

	for(int i=7;i>=0;i--)
		{ int j=i;
		  while(j>0)
		       { cout<<" ";
			 j--;
		       }

		  for(int k=0;k<=7-i;k++)
			{cout<<"*";}
			
                  cout<<endl;	
		
		}
	return 0;

}
