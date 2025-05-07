#include<iostream>
using namespace std;
int main(){

  int number,sum,lastDigital;
    cout<<"Vuvedi chislo:";
    cin>>number;
    while(number>0){
    lastDigital=number%10;
    sum=sum+lastDigital;
    number=number/10;
    }
    cout<<sum;
    return 0;

}