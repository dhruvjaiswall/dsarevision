#include<iostream>



using namespace std;

int main(){
    int marks[4]={23,22,21,11};
    int* p =marks;

    cout<<"the marks of 1 is "<<*p<<endl;
    cout<<"the marks of 1 is "<<*p+1<<endl;
    cout<<"the marks of 1 is "<<*p+2<<endl;
    cout<<"the marks of 1 is "<<*p+3<<endl;
        return 0; 
}