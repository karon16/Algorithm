//
// Created by Christopher Buhendwa on 5/14/24.
//

#include "Solution.cpp"
#include <vector>

using namespace std;

int main(){
    // Given values
    int m = 3;
    int n = 3;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    Solution::merge(nums1, m, nums2, n);
    Solution::printSolution(nums1);

    return 0;
}