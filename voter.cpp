//to verify voting eligibility
#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter the age:";
cin>>age;
if(age>=18){
cout<<"Can Vote!";
}else{
    cout<<"Can't Vote!";
}
    return 0;
}