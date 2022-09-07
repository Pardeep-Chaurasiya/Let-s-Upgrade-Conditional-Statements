#include<iostream>
using namespace std;
 
int main(){
    float area,perimeter,length,breadth;
    
    cout<<"Enter the length of the rectangle :-  ";
    cin>>length;
    cout<<"Enter the breadth of the rectangle :-  ";
    cin>>breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout<<"Area of rectangle is "<<area;
    cout<<"\nPerimeter of rectangle is "<<perimeter;
    if(area > perimeter)
        cout<<"\nArea of rectangle is greater then its perimeter";
    else
        cout<<"\nPerimeter of rectangle is greater then its area";

    return 0;
}