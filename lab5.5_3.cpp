#include<iostream>
using namespace std;
int main()
{	cout<<"HOLLOW SQUARE PATTERN WITH DIAGONAL"<<endl;
	cout<<" #  #  #  #  #"<<endl;
	cout<<" #  #     #  #"<<endl;
	cout<<" #     #     #"<<endl;
	cout<<" #  #     #  #"<<endl;
	cout<<" #  #  #  #  #"<<endl;
	cout<<"\n\n\n\n\n";

	for(int i=1;i<=5;i++)
		{if(i==1 || i==5)
			{cout<<" #  #  #  #  #"<<endl;}
		else 		 
		if(i%2==0)
			{cout<<" #  #     #  #"<<endl;}
		 //if(i==3){cout<<" #     #     #"<<endl;}
			else
			{cout<<" #     #     #"<<endl;}
		
		}



	return 0;

}
