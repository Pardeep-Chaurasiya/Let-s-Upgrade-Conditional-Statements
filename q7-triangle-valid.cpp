#include<iostream>
using namespace std;
 
int main(){
    int first_angle,second_angle,third_angle;
    
    cout<<"Enter the first angle of triangle :-  ";
    cin>>first_angle;
    cout<<"Enter the second angle of triangle :-  ";
    cin>>second_angle;
    cout<<"Enter the third angle of triangle :-  ";
    cin>>third_angle;

    if(first_angle+second_angle+third_angle == 180)
        cout<<"Valid Triangle";
    else
        cout<<"Invalid Triangle";
return 0;
}