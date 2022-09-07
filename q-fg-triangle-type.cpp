// If the three sides of a triangle are entered through the
// keyboard, write a program to check whether the triangle is
// isosceles, equilateral, scalene or right angled triangle.

#include<iostream>
#include<math.h>
using namespace std;
 
int main(){

    int x, y, z;   
    int max, flag=0;
    cout<<"Enter the first side: ";
    cin>>x;
    cout<<"Enter the second side: ";
    cin>> y;
    cout<<"Enter the third side: ";
    cin>>z;



    if (x==y && x==z)
    {
        cout<<"Triangle is equilateral.";
    }
     else if (x==y || y==z || z==x)
    {
        cout<<"Triangle is isosceles.";
    }
  
    max = x;
    if (y>max)
        max = y;
    if (z>max)
        max = z;
    if (max == x)
    {
        if(pow(max,2) == pow(y,2)+pow(z,2))
            flag=1;
    }

    if (max == y)
    {
         if(pow(max,2) == pow(x,2)+pow(z,2))
            flag=1;
    }

    if (max == z)
    {
        if(pow(max,2) == pow(x,2)+pow(y,2))
            flag=1;
    }

    if(flag==1)
    {
        printf("Triangle is right angled");
    }

    return 0;
}