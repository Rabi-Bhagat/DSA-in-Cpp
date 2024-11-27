#include<iostream>
using namespace std;
int main(){
    int a = 2;
    cout<<a<<endl;
//this is a block , in this block yhe vakue o is 2
    if (true)
    {
        int a =6;
        cout<<a<<endl;
       /* in his block the value of a is 6 
        because the value of a of upper block is nor=t accesible by 
        a under the if loop*/
    }
    cout<<a<<endl;

    int b = 4;
    cout<<b<<endl;
    if (true)
    {
        int b = 999;
        cout<<b<<endl;
    }

    int c = 11;
    cout<<c<<endl;
    

    
}