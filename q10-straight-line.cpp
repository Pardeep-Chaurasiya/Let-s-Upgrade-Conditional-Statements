#include<iostream>
using namespace std;
 
int main(){
    
     float x1, y1, x2, y2, x3, y3, m, n;  
  
    cout<<"Enter points (x1, y1)\n";  
    cin>>x1>>y1;

    cout<<"Enter points (x2, y2)\n";  
    cin>>x2>>y2;  
  
    cout<<"Enter points (x3, y3)\n";  
    cin>>x3>>y3;  
  
    m = (y2 - y1) / (x2 - x1);  
    n = (y3 - y2) / (x3 - x2);  
  
    if( m == n)  
        cout<<"All 3 points lie on the same line\n";  
    else  
        cout<<"All 3 points do not lie on the same line\n";  

    return 0;
}