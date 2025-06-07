#include <algorithm>
#include <iostream>
using namespace std;

class Solution{
public:
    void print_1_to_N(int i,int n) {
        if(i>n) return;
        cout << i <<endl;
        print_1_to_N(i+1,n);
    }
    void print_1_to_N_backtracking(int i, int n){
        if (i<1) return;
        cout << i <<endl;
        i--;
        print_1_to_N_backtracking(i,n);
    }
    int sum_of_n_numbers_parameterize(int n, int sum){
        if(n==0) return sum;
        sum = sum_of_n_numbers_parameterize(n-1,sum+n);
        return sum;
    }
    int sum_of_n_numbers_functional(int n){
        if(!n) return 0;
        return n+sum_of_n_numbers_functional(n-1);
    }
};

int main(){
    int num_of_cases;
    cin >> num_of_cases ;
    Solution sol;
    for (int i = 0; i < num_of_cases; ++i) {
        int x;
        cin >> x;
        // sol.print_1_to_N(1,x);
        // sol.print_1_to_N_backtracking(x,x);
        // cout<<sol.sum_of_n_numbers_parameterize(x,0)<<endl;
        cout<<sol.sum_of_n_numbers_functional(x)<<endl;
    }
}