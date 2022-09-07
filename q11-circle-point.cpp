#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    
    float x1,y1,radius,cx,cy,distance;

    cout<<"Enter the center points (cx, cy)\n";
    cin>>cx>>cy;

    cout<<"Enter the radius of circle";
    cin>>radius;
    
    cout<<"Enter points (x1, y1)\n";
    cin>>x1>>y1;

    distance = sqrt( pow( (x1 - cx), 2 ) + pow( (y1 - cy), 2 ) );  
  
    if(distance < radius)  
    {  
        cout<<"Point ("<<x1<<","<<y1<<") is inside the Circle\n";
    }  
    else if(distance > radius)  
    {  
       cout<<"Point ("<<x1<<","<<y1<<") is outside the Circle\n";  
    }  
    else  
    {  
        cout<<"Point ("<<x1<<","<<y1<<") is on the Circle\n";  
    }  
  

    return 0;

}