#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int x,y,sum,prd,dif,rem;
  float div;  
  cout<<"give your two favrouite numbers\n";
  cin>>x>>y;
  
  sum=x+y;
  dif=x-y;
  prd=x*y;
  div=x/y;
  rem=x%y;

  cout<<"sum of two numbers is"<<sum;
  cout<<"\n difference of two numbers is"<<abs(dif);
  cout<<"\n their product is"<<prd;
  cout<<"\n their division is "<<div;
  cout<<"\n reminder when first no is divide by second one is"<<rem;
  
  return 0;

 
} 
