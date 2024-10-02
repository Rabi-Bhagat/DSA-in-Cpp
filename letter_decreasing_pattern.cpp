#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number for row Boss:";
    cin>>n;
    int i =1 ;
    while (i<=n)
    {
       int j =1;
       while (j<=n)
       {
        char ch ='A'+j-1;
        cout<<ch;
        j = j+1;
       }
       cout<<"\n";
       i = i+1;
    }
    
           
           }