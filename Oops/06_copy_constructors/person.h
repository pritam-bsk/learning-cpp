#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name{"unknown"};
    int age{0};
private:
    string address{"unknown"};
public:
    Person() ;
    Person(string name, int age, string address);   
    Person(const Person& source);
    void set_name(string name);
    void set_age(int age);
    void set_address(string address);
    string get_name() ;
    int get_age()  ;
    string get_address() ;
    ~Person();
};


#endif