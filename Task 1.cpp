#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
int a_copy;
a_copy=*a;
*a=*b;
*a=a_copy;

}
int main()
{
  int a,b;
  cout<<"a=";
  cin>>a;
  cout<<"b=";
  cin>>b;
  swap(a,b);
  cout<<"After swap:"<<endl;
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;

}