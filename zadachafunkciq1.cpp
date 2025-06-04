#include <iostream>
using namespace std;

void swapNums (int &x , int &y)
{
  int z = x;
  x = y;
  y = z;
}

int main()
{

int firstNum = 10;
int secondNum = 20;
  int thirdNum = 30;
  int fourthNum = 40;

cout<<"Before swapNums: "<<"\n";
cout<<firstNum<<secondNum<<"\n";
swapNums(firstNum, secondNum);
cout<<"After swapNums: "<<"\n";
cout<<firstNum<<secondNum<<"\n";
  swapNums(thirdNum, fourthNum);
  cout<<"After swapNums: "<<"\n";
  cout<<thirdNum<<fourthNum<<"\n";
  return 0;
}
