#include <iostream>
#include <string>
#include "engineer.h"
using namespace std;

Engineer::Engineer(){
    cout<<"default Engineer constructor is called"<<endl;
}
Engineer::Engineer(string name, int age, string address, int contract_count)
        : Person(name, age, address),
          contract_count(contract_count) 
{
    cout<<"custom Engineer constructor is called"<<endl;
}
Engineer::Engineer(const Engineer& source)
        : Person(source), contract_count(source.contract_count) 
{
    cout<<"copy Engineer constructor is called"<<endl;
}
int Engineer::get_contract_count(){
    return contract_count;
}
void Engineer::set_contract_count(int contract_count){
    this->contract_count = contract_count;
}
Engineer::~Engineer(){
    cout<<"Engineer destructor is called"<<endl;
}