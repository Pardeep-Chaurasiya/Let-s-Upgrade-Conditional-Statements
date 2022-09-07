#include<iostream>
using namespace std;

int main(){
    int ram_age,shyam_age,ajay_age;
    cout<<"Enter the ram age :-  ";
    cin>>ram_age;
    cout<<"Enter the shyam age :-  ";
    cin>>shyam_age;
    cout<<"Enter the ajay age :-  ";
    cin>>ajay_age;

    if(ram_age < shyam_age && ram_age < ajay_age)
        cout<<"Ram is youngest amonge all three";
    else if( shyam_age < ram_age  &&  shyam_age < ajay_age)
        cout<<"Shyam is youngest amonge all three";
    else
        cout<<"Ajay is youngest amonge all three";

}