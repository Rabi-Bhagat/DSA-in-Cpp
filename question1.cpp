#include<iostream>
using namespace std;
int main(){
char a;
cout<<"enter the value of a:\n";
cin >>a;
if (a>64 &&a<94)
{
    cout<<"this is Uppercase letter";
}
else if (a>47&&a<58)
{
      cout<<"this is numeric letter";   
}
else if (a>96&&a<123)
{
    cout<<"this is lowercase letter"; 
}






}