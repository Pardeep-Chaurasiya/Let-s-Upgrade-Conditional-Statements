#include<iostream>
using namespace std;
 
int main(){
    
     int x1, y1;
    cout<<"Enter the co-ordinates of point: ";
    cin>>x1>>y1;

    if(x1 == 0 && y1 !=0)
        cout<<"Point ("<<x1<<","<<y1<<") lies on y-axis";
    else if (x1 !=0 && y1 == 0)
        cout<<"Point ("<<x1<<","<<y1<<") lies on x-axis";
    else if (x1 == 0 && y1 == 0)
        cout<<"Point ("<<x1<<","<<y1<<") lies on the origin";
    else
        cout<<"Point ("<<x1<<","<<y1<<") lies neither on y-axis nor x-axis";

    return 0;
}