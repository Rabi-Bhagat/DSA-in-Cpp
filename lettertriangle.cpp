#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number for row Boss:";
    cin>>n;
    int i =1 ;
    char ch ='A';
    while (i<=n)
    {
        int j =1;
        while (j<=i)
        {
            cout<< char ( ch + i - 1 ) ;
           
            j = j+1;
        }
        cout<<endl;
        i = i+1;

        
    }
    


}