#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number Boss:";
    cin>>n;
    int i =1 ; //this fo row boss(remainder)
    while (i<=n)
    {
       int j =1;
       while (j<=i)
       {
        
       cout << '*';
        j=j+1;
       }
       cout<<endl;
       i = i+1;
    }
    

}