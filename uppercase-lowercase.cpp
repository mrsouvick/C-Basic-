//Find charecter lowercase or uppercase
#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter the char:";
cin>>ch;

if(ch>='a' && ch<='z')
{
    cout<<"lowercase!";
}else if(ch>='A' && ch<='Z'){
    cout<<"UPPEERCASE!";
}else{
    cout<<"Enter Valid Char";
}

    return 0;
}