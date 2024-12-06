#include <vector>
using namespace std;
#include <iostream>

int sumEvenNumbers(vector<int> v) {
    int sum = 0;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            sum += v[i];
        }
    }
    return sum;
}

int longestConsecutiveSubsequence(vector<int> v) {
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
   return max_num;

}
