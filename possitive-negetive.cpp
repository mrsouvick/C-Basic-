//Check if a number is positive, negative, or zero
#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Enter only interger value\n";
cout<<"Enter the number:";
cin>>num;
if(num>0){
    cout<<"Possitive Number";
}else if(num==0){
    cout<<"zero";
}else{
    cout<<"Negetive number";
}

    return 0;
}