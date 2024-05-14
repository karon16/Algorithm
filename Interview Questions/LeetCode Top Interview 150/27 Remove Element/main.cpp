//
// Created by Christopher Buhendwa on 5/14/24.
//

#include "Solution.cpp"
#include <vector>

using namespace std;

int main(){
    // Given values
    int val = 2;
    vector<int> nums1 = {0,1,2,2,3,0,4,2};

    int k = Solution::removeElement(nums1, val);
    Solution::printSolution(nums1, k);



    return 0;
}