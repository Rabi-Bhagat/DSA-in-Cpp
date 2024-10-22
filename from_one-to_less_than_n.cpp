#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Hey! Boss,Enter your favouriate number:";
    cin>>n;
    int sum = 0;
    // taking number from 1 to n
    for (int  i = 1; i <=n; i++)
    {
        sum = sum +i;
    }
    cout<<sum<<endl;
}