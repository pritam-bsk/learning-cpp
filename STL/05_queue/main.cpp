#include <iostream>
#include <queue> 
using namespace std;
int main(){
  std::queue<int> q;
  q.push(1);
  q.push(2);
  q.emplace(3);
  q.front() = 10;
  q.back() = 20;

  while (!q.empty()) {
      std::cout << q.front() << " ";
      q.pop();
  }
  std::cout << std::endl;

  // Check if the queue is empty
  if (q.empty()) {
      std::cout << "Queue is empty." << std::endl;
  } else {
      std::cout << "Queue is not empty." << std::endl;
  }

  priority_queue<int> pq;
  pq.push(5);
  pq.push(1);
  pq.push(3);
  pq.emplace(2);

  while (!pq.empty()) {
      std::cout << pq.top() << " ";
      pq.pop();
  }
  std::cout << std::endl;

  priority_queue<int, vector<int>, greater<int>> min_pq;
  min_pq.push(5);
  min_pq.push(1);
  min_pq.push(3);
  min_pq.emplace(2);
  while (!min_pq.empty()) {
      std::cout << min_pq.top() << " ";
      min_pq.pop();
  }
  std::cout << std::endl;

  return 0;
}