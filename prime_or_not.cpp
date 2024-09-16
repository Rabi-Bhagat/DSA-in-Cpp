#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cout<<"enter your number:\n";
    cin>>n;
    while (i<n )
    {
        if (n%i == 0)
        {
            cout<<"not prime"<<i<<endl;
        }
        else
        {
            cout<<"the number is prime"<<i<<endl;
        }
        
        i = i+1;
    }
    
}