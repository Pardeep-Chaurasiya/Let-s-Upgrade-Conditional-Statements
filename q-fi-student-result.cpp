// A university has the following rules for a student to qualify
// for a degree with A as the main subject and B as the
// subsidiary subject:
// (a) He should get 55 percent or more in A and 45 percent or
// more in B.
// (b) If he gets than 55 percent in A he should get 55 percent or
// more in B. However, he should get at least 45 percent in
// A.
// (c) If he gets less than 45 percent in B and 65 percent or more
// in A he is allowed to reappear in an examination in B to
// qualify.
// (d) In all other cases he is declared to have failed.
// Write a program to receive marks in A and B and Output
// whether the student has passed, failed or is allowed to
// reappear in B.

#include<iostream>
using namespace std;
 
int main(){

    int A,B;
    cout<<"Enter the marks of A & B- ";
    cin>>A>>B;
    if(A>=55 && B>=45)
        cout<<"passed";
    else if(A>=45 && A<55 && B>=55)
        cout<<"passed";
    else if(A>=65 && B<45)
        cout<<"allow to reappear in the exam";
    else
        cout<<"failed";

    return 0;
}