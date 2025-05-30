#include "person.h"

Person::Person(){
}

Person::Person(std::string& first_name_param, std::string& last_name_param){
    this->first_name = first_name_param;
    this->last_name = last_name_param;
}


Person::~Person(){

}