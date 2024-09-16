#include<iostream>
using namespace std;
int main(){
    int n,sum = 0,i=1;
    cout<<"enter your number:\n";
    cin>>n;
    while (i<=n)
    {
       sum = sum+i;
       i= i+1;
    }
    cout<<"value of the sum is:"<<sum;
    
}