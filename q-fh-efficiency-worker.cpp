// In a company, worker efficiency is determined on the basis of
// the time required for a worker to complete a particular job. If
// the time taken by the worker is between 2 – 3 hours, then the
// worker is said to be highly efficient. If the time required by
// the worker is between 3 – 4 hours, then the worker is ordered
// to improve speed. If the time taken is between 4 – 5 hours, the
// worker is given training to improve his speed, and if the time
// taken by the worker is more than 5 hours, then the worker has
// to leave the company. If the time taken by the worker is input
// through the keyboard, find the efficiency of the worker.

#include<iostream>
using namespace std;
 
int main(){

    float hours;
    cout<<"Input the time taken by worker: ";
    cin>>hours;

    if(hours>=2 && hours<=3)
        cout<<"Worker is highly efficient";
    if(hours>3 && hours <=4)
        cout<<"Worker needs to improve speed";
    if(hours>4 && hours <=5)
        cout<<"Give training to worker";
    if(hours>5)
        cout<<"Worker is terminated";

    return 0;
}