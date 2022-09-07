#include<iostream>
using namespace std;

int main(){
    int number,remainder,reversed_number,temp;

    cout<<"Enter the number for reverse operation :-  ";
    cin>>number;

    temp = number;

    while(number != 0){
        remainder = number % 10;
        reversed_number = (reversed_number * 10) + remainder;
        number = number / 10;
    }

    cout<<"Reversed of "<<temp<<" is "<<reversed_number;
    if(temp==reversed_number)
        cout<<"\nBoth number is equal ";
    else
        cout<<"\nBoth number are not equal";
}