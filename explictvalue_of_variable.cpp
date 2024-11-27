#include<iostream>
using namespace std;
int main(){
    int a = 2;
    cout<<a<<endl;
    if (true)
    {
       int a = 5;
       cout<<a<<endl;
    }

    int i = 4;
    for (int i = 0; i < 10; i++)
    {
        cout<<" I Am The Besst"<<endl;
        //here the i takes the explict value i.e i =0  by avoiding the value of upper block i.e i = 4
    }
    

    int j = 4;
    for (; j < 5; j++)
    {
        cout<<" Be Best"<<endl;
        //here the i takes the upper i value i.e i =4  
        //the for loop searches the value of i that is found in upper block its taje the value of i =4
    } 
    

}