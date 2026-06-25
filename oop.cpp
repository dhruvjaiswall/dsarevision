#include<iostream>
#include<string>
using namespace std;
/*class teacher{
private:               //private access moodifier
double salary;
    //properties/attributes
public:
string name;
string dept;
string classes;


//methods/member fuctions-1 class ke ander ke fuction ko bolte
void changedept(string newdept){
    dept=newdept;
    

}void setsalary(double s){        //ye setter and getter fuction hai jisse hm private data 
        salary=s;                 //ko indirectly access krte h   
    }
    double getsalary(){
        return salary;
    }
};
int main(){
    teacher t1;             //yha hmne first teacher ke liye object bna diya 
    t1 . name = "dj";
    cout<<t1.name<<endl;
    t1.setsalary(25000);   
    cout<<t1.getsalary();
    return 0;        
} */           //yha tk 25 minutes tk ka tha
      //encapsulation and data hiding example
// class account{
//     private:
//     double balance;
//     string password; //data hiding
//     public:
//     string uname;
//     string id;
// }
             //constructor
class teacher{
private:
double password=12;
public:
string name;
string subject;
string dept;
//ye non parametrized constructor hai
teacher (){
    cout<<"h im a aa a  a constructor \n";        //this is a custom constructor jise class ke
    dept=":computer science";          };             // same name ka function bnate hai
//ab hm likhenge parametrized contructor
teacher (string n,string d,string s){                 
    name =n;
    dept =d;
    subject = s;};
    void getinfo(){
        cout<<"name:"<<name;
        cout<<"dept:"<<dept;
        cout<<"subject:"<<subject;

}

};
int main(){
    teacher t1("dhruv","civil","dsa");
    t1.getinfo();

}
//inheritance
