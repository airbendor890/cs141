#include<iostream>
using namespace std;
int main()
{cout<<"\nHOLLOW RIGHT TRIANGLE STARPATTERN"<<endl;	
	for(int i=0;i<8;i++)
		{ if(i>1 && i<7)
			{      cout<<"*";
			        for(int k=0;k<=i-2;k++)
			         {cout<<" ";}
			       cout<<"*"<<endl;		
			}
		  else
			{ int j=0;
			        while(j<=i)
				  {cout<<"*";
				   j++;	
				  }
			        cout<<endl;	
			}	



		}

	return 0;

}

