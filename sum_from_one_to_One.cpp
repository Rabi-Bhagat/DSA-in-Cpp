#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Hey! Boss,Enter your Number:";
    cin>>n;
    int sum = 0;
    for (int  i = 0; i <=n; i++)
    {
        sum = sum +i;
    }
    cout<<sum<<endl;
}