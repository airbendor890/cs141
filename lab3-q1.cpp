#include<iostream>
using namespace std;
int main()
{ int sint;
  sint=sizeof(int); 
  cout<<"size of integer variable is"<<sint<<"bytes";
  
  int schar;
  schar=sizeof(char);
  cout<<"\n size of a char variable is "<<schar<<"bytes";
  
  int sfloat;
  sfloat=sizeof(float);
  cout<<"\n size of a float variable is "<<sfloat<<"bytes";

  int sdouble;
  sdouble=sizeof(double);
  cout<<"\n size of a double variable is "<<sdouble<<"bytes";

  int sbool;
  sbool=sizeof(bool);
  cout<<"\n size of a boolean variable is"<<sbool<<"bytes";
  
  return 1;

}   
 
