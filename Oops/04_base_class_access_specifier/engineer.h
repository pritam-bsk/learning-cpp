#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

//Engineer is doing private inheritance

class Engineer : private Person
{
public:
    Engineer();
    ~Engineer();
    
    void build_something(){
        m_full_name = "John Snow"; // OK
        m_age = 23; // OK
        //m_address = "897-78-723"; Compiler error
    }
    
private : 
    int contract_count{0};
};

#endif // ENGINEER_H