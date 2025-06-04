#include<iostream>
using namespace std;
int main(){
  int n,lastNum;
  cout<<"n=";
  cin>>n;

  while(n>0)
  {
   lastNum= n%10;
   n=n/10;
   cout<<lastNum;
  }

  return 0;
}
