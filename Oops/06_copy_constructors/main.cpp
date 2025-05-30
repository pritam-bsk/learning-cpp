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

  Engineer en("pritam",18,"kyoto",5);
  print_engineer_details(en);
  cout << "........................................." << endl;
  Engineer en1(en);
  print_engineer_details(en1);

  return 0;
}