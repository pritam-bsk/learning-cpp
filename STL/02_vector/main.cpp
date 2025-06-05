#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& v) {
    for (const auto& elem : v) {
        cout << elem << " ";
    }
    cout << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << endl;
}
void printVector(const vector<pair<int, int>>& v) {
    for (const auto& elem : v) {
        cout << "(" << elem.first << ", " << elem.second << ") ";
    }
    cout << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << endl;
}

int main(){
  std::vector<int> v; 
  v.push_back(2);
  printVector(v);
  v.emplace_back(1);
  printVector(v);
  v.push_back(3);
  printVector(v);
  v.emplace_back(4);
  printVector(v);
  v.push_back(5);
  printVector(v);
  v.emplace_back(6);
  printVector(v);
  cout<<endl;

  vector<pair<int, int>> v2;
  v2.push_back({1, 2});
  printVector(v2);
  v2.emplace_back(3, 4);
  printVector(v2);
  cout<<endl;

  vector<int> v3(5, 100); // {100, 100, 100, 100, 100}
  printVector(v3);
  v3.push_back(200);
  printVector(v3);
  cout<<endl;

  vector<int> v4(5); // {0, 0, 0, 0, 0}
  printVector(v4);
  cout<<endl;

  vector<int> v5(v3); // Copy constructor
  printVector(v5);

  vector<int> v6 = {1, 2, 3, 4, 5, 6, 7, 8};
  printVector(v6);
  v.pop_back();
  printVector(v6);

  v6.swap(v5);
  printVector(v6);

  v6.clear();
  printVector(v6);

  return 0;
}