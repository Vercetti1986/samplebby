#include<iostream>
#include<string>

using namespace std;

int main(){
    
    cout<< "Enter your age: ";
    int nAge =0;
    cin>>nAge;

    if(nAge >=1 && nAge<=18)
        cout<<"Imp Birthday";
    else if(nAge==21 || nAge==50 || nAge>=65)
        cout<<"Imp Birthday";
    else
        cout<<"Not Important";
    return 0;
}