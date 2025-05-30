#include <iostream>
#include "engineer.h"
using namespace std;

void print_engineer_details(Engineer &en) {
    cout << "Name: " << en.get_name() << endl;
    cout << "Age: " << en.get_age() << endl;
    cout << "Address: " << en.get_address() << endl;
    cout << "Contract Count: " << en.get_contract_count() << endl;
}

int main(){

  Engineer en;
  en.set_name("pritam");
  en.set_age(18);
  en.set_address("kyoto, japan");
  en.set_contract_count(1);

  print_engineer_details(en);

  return 0;
}