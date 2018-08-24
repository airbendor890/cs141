#include<iostream>
using namespace std;
int main()
{ // subjects are p c m b  and find average
  int p,c,m,b;
  cout<<"give your marks in physics   chemistry  math  biology out of 100 respectively\n";
  cin>>p>>c>>m>>b;
  cout<<"your average is="<<0.25*(p+c+m+b);
  cout<<"\nyopur percentage is= "<<0.25*(p+c+m+b)<<" %";
  return 0;

}
