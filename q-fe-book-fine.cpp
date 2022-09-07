#include<iostream>
using namespace std;
 
int main(){
    
    int days;
    float fine;

    cout<<"Enter the number of days: ";
    cin>>days;

    if (days > 0 && days <= 5)
        fine = 0.50 * days;

    if (days >= 6 && days <= 10)
        fine = 1 * days;

    if (days > 10)
        fine = 5 * days;

        if (days > 30)
        {
            cout<<"Your membership would be canceled.\n";
        }
    cout<<"You have to pay Rs."<<fine;

    return 0;
}