#include <algorithm>
#include <iostream>
using namespace std;

class Solution{
public:
    int solve(int x) {
        return x + 2;
    }
};

int main(){
    int num_of_cases;
    num_of_cases = 5;
    Solution sol;
    for (int i = 0; i < num_of_cases; ++i) {
        int x;
        cin >> x;
        cout << sol.solve(x) << endl;
    }
}