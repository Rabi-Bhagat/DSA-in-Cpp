#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter Your Number Boss:"<<endl;
    cin>>n;
    bool isprime = 1;
    
    for (int i = 2; i < n; i++)
    {
        
        if (n % i == 0)
        {
            // cout<<"Not Prime Number"<<endl;
            isprime = 0;
            break;
        }
    }

       if (isprime == 0){
        cout<<"Not a Prime number"<<endl;
       }
       else{
        cout<<"Prime Number"<<endl;
       }
        
        
    }
    
