#include <iostream>
using namespace std;

class student{
  private: 
    long id;
    string name;
    int age;

  public:
    void set_name(string = "Yme");
    void print_name();
    void set_age(int);
    int get_age();
    
};

void student::print_name(){
  cout<<"Name: "<<name<<"\n";
}

void student::set_name(string n){
  name = n;
}
void student::set_age(int input_age){
    age = input_age;
}
int student::get_age(){
    return age;
}

