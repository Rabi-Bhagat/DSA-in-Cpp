#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number for row Boss:";
    cin>>n;
    int i =1;
            char start ='A';
    while (i<n)
    {
        int j = 1;
        while (j<=n)
        {
            
            
            cout<<start<<" ";
            
            start = start+1;
            j = j+1;

        }
        
        cout<<endl;
        i = i+1;
    }
    
    }