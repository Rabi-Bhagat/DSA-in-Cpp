#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number for row Boss:";
    cin>>n;
    int i =1 ,count=1;
    while (i<=n)
    {
        int j =1;
        while (j<=i)
        {
            cout<<count;
        count=i+1;
            j = j+1;
        }

        cout<<"\n";
        i = i+1;
        
    }
}