#include<iostream>
using namespace std;
 
int main(){
    
    char ch;
    int ascii;
    cout<<"Enter a character: ";
    cin>>ch;
    ascii = ch;

    cout<<"ASCII value of "<<ch<<" is "<<ascii;

    if (ascii >= 65 && ascii <= 90)
        cout<<endl<<ch<<" is a capital letter";

    else if (ascii >= 97 && ascii <=122)
        cout<<endl<<ch<<" is a capital letter";

    else if (ascii >=48 && ascii <= 57)
        cout<<endl<<ch<<" is a digit";

    else if (ascii>=0 && ascii<=47 || ascii>=58 && ascii<=64 || ascii>=91 && ascii<=96 || ascii>=123 && ascii<=127)
        cout<<endl<<ch<<" is a special symbols";

    return 0;
}