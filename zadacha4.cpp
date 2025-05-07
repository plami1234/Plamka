#include<iostream>
using namespace std;
int main(){
    int sum;
    int masiv[5];
    for(int i=0;i<5;i++)
    {
    cout<<"Vuvedi chislo "<<i+1<<": ";
        cin>>masiv[i];
        sum = masiv[i]+sum;

    }
    cout<<"Sumata e:"<<sum;
return 0;
}
