#include<iostream>
using namespace std;

int main(){
    float profit,loss,cost_price,selling_price,calculation;
    cout<<"Please enter the cost price of the product\n";
    cin>>cost_price;
    cout<<"Please enter the selling price of the product\n";
    cin>>selling_price;

    calculation =  selling_price - cost_price ;

    if(calculation)
        cout<<"Owner is make a profit of Rs."<<calculation;
    else
        cout<<"Owner is make a loss of Rs."<<calculation;
    
    return 0;
}