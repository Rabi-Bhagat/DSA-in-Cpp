#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Hey! Boss,Enter your Number:";
    cin>>n;
    int nextnumber;
    
    int a= 0,b =1;
    cout<<a<<" "<<endl<<b<<" "<<endl;
    for (int  i = 0; i < n; i++)
    {
        nextnumber = a +b;
        cout<<nextnumber<<endl;

        a = b;
        b = nextnumber;
    }

    cout<<endl;
    

}