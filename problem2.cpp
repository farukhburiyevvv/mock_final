#include <vector>
using namespace std;
#include <iostream>

void sumEvenNumbers(vector<int> v) {
    int sum = 0;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            sum += v[i];
        }
    }
    cout<<" Sum of even numbers: "<<sum;
}

void longestConsecutiveSubsequence(vector<int> v) {
    int max_num = INT_MIN;
    int count = 1;
    for (int i = 0; i <= v.size(); i++) {
        if(v[i] == v[i+1]) {
            ++count;
        }
        else {
            max_num = max(max_num, count);
            count = 1;
        }
    }
    cout<<"Length of longest consecutive subsequence: "<<max_num;

}
