#include<iostream>
using namespace std;
 
int main(){
    
    char health,sex,area;
    int age;

    cout<<"Enter health condn(e/p),sex(m/f),area(c/v)&age\n";
    cin>>health>>sex>>area>>age;

    if(health=='e'&&sex=='m'&&area=='c'&&age>=25&&age<=35)
    {
    cout<<"\nInsured\n";
    cout<<"\nPremium rate = Rs. 4 per 1,000\n";
    cout<<"\nmaximum policy amount = Rs. 2,00,000";
    }
    else
    if(health=='e'&&sex=='f'&&area=='c'&&age>=25&&age<=35)
    {
    cout<<"\nInsured";
    cout<<"\nPremium Rate = Rs. 3 per 1000";
    cout<<"\nMaximum policy amount = Rs. 1,00,000";
    }
    else
    if(health=='p'&&sex=='m'&&area=='v'&&age>=25&&age<=35)
    {
    cout<<"\nInsured";
    cout<<"\nPremium Rate = Rs. 6 per 1,000";
    cout<<"\nMaximum policy amount = Rs. 10,000";
    }
    else
    cout<<"\nYou cannot be insured\n";
    return 0;
}