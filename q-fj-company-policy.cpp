// The policy followed by a company to process customer orders
// is given by the following rules:
// (a) If a customer order is less than or equal to that in stock
// and has credit is OK, supply has requirement.
// (b) If has credit is not OK do not supply. Send him
// intimation.
// (c) If has credit is Ok but the item in stock is less than has
// order, supply what is in stock. Intimate to him data the
// balance will be shipped.
// Write a C program to implement the company policy.

#include<iostream>
using namespace std;
 
int main(){

    int stock=100, order;
    char credit;

    cout<<"Enter the customer order: ";
    cin>>order;
    cout<<"Is his credit is ok? (Press y/n)\n";
    cin>>credit;  

    if(order<=stock && credit == 'y' || credit == 'Y') 
        cout<<"Sir,\n\t We supplied your requirement\n\t\t Quantity:"<<order;

    else if(order>stock && credit == 'y' || credit == 'Y')
        cout<<"Sir,\n\t We supplied "<<stock<<" products and balance will be shipped later.";

    else
        cout<<"Sir,\n\t Please first clear your credit, until we can't supply you any more.";

    return 0;
}