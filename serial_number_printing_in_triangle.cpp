#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number Boss that you want to be printed in rows:";
    cin>>n;
    

    int i=1 , value =1;
    while (i<=n)
    {
        int j =1;
        while (j<=i)
        {
            cout<<value ;
            cout<<" ";
        value=value +1;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
    
}