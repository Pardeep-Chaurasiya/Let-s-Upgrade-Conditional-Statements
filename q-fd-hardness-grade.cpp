#include<iostream>
using namespace std;
 
int main(){
    
    float hardness, carbon_content, tensile_strength;
    int h_f=0, cc_f=0, ts_f=0;  
    int grade;
    cout<<"Enter the value of Hardness: ";
    cin>>hardness;

    cout<<"Enter the value of Carbon Content: ";
    cin>>carbon_content;

    cout<<"Enter the value of Tensile Strength: ";
    cin>>tensile_strength;

    if (hardness>50)
        h_f=1;
    if (carbon_content<0.7)
        cc_f=1;
    if (tensile_strength>5600)
        ts_f=1;
    if(h_f==0 && cc_f==0 && ts_f==0)
        grade = 5;

    if(h_f==1 || cc_f==1 || tensile_strength==1)
        grade = 6;

    if(h_f==1 && cc_f==0 && ts_f==1)
        grade = 7;

    if(h_f==0 && cc_f==1 && ts_f==1)
        grade = 8;

    if(h_f==1 && cc_f==1 && ts_f==0)
        grade = 9;

    if(h_f==1 && cc_f==1 && ts_f==1)
        grade = 10;
    cout<<"The grade of steel is: "<< grade;

    return 0;
}