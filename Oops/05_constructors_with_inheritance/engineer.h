#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"

using namespace std;
class Engineer : public Person {
private:
    int contract_count{0};
public:
    Engineer() ;
    Engineer(string name, int age, string address, int contract_count);
    int get_contract_count();
    void set_contract_count(int contract_count);
    ~Engineer();
};

#endif