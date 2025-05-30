#include "person.h"
using namespace std;

Person::Person(){
    cout<<"default person constructor is called"<<endl;
}

Person::Person(string name, int age, string address)
{
    this->name = name;
    this->age = age;
    this->address = address;
    cout << "custom person constructor is called" << endl;

}

void Person::set_name(string name){
    this->name = name;
}
void Person::set_age(int age){
    this->age = age;
}
void Person::set_address(string address){
    this->address = address;
}

string Person::get_name() {
    return name;
}
int Person::get_age() {
    return age;
}
string Person::get_address() {
    return address;
}

Person::~Person()
{
    cout<<"person destructor is called"<<endl;
}
