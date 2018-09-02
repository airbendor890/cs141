#include<iostream>

using namespace std;


int main()
{  char alp='A';		//character initializn
   while(alp<='Z')			//main whl lop
   {   char pla='A';
	while(pla<=alp)			//insd whl lop for step printing
	{cout<<" ";
	  pla++;
	}
	cout<<alp<<endl;
    	alp++;	
}
	return 0;
}
