#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number for row Boss:";
    cin>>n;
    int i =1 ;
    char start = 'A';
    while (i<=n)
    {
        int j =1;
        while (j<=n)
        {
            cout<< char('A' +i + j - 2) <<" ";
            // we need to define the char variable in c just kike in above line 
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
    
    }