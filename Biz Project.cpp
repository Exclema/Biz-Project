//Biz Project by DSE-01-1274/2021//
#include<iostream>
using namespace std;
int main()
{
 float bp,tc,sp,l,p;

 while(1)
 {
 cout<<"\n\nEnter The Buying Price \n";
 cin>>bp;

 cout<<"Enter The Transport Cost \n";
 cin>>tc;

 cout<<"Enter The Selling Price \n";
 cin>>sp;

 if((bp+tc)>sp)
 {
  l=(bp+tc)-sp;
  cout<<"\n\nLoss Is = "<<l;
 }
 else if((bp+tc)<sp)
 {
  p=sp-(bp+tc);
  cout<<"\nProfit Is = "<<p;
 }
 else
 {
  cout<<"\nNo Profit No Loss\n";
 }
 }
 return 0;
}
