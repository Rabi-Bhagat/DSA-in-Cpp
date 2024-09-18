#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your Numbers:";
    cin>>n;

    int i =1;
    while (i<=n)
    {
        int j =1;
        while(j<=n){
        //   cout<<j;
          cout<<n-j+1; //this is used for opposie number print like 4321
          j= j+1;  
        }
        cout<<endl;
        i = i+1;
    }
    
}