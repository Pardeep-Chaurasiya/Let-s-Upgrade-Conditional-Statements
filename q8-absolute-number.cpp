#include<iostream>
using namespace std;
 
int main(){
    int check_absolute,temp;
    cout<<"Enter the number to check absolute number :-  ";
    cin>>check_absolute;

    if(check_absolute < 0)
        temp = check_absolute * (-1);
    else
        temp = check_absolute;

    cout<<"Absolute value of "<<check_absolute<<" is "<<temp;
    return 0;
}