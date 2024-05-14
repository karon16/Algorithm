//
// Created by Christopher Buhendwa on 5/14/24.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    static int removeElement(vector<int>& nums, int val) {
        int k = 0; // Number of elements not equal to val

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }

    static void printSolution(vector<int>& nums, int k) {
        cout << "Final Array: ";
        cout << "[ ";
        for (int i = 0; i < k; i++){
            cout << nums[i] << " ";
        }
        cout  << "]" << endl;
    }

};
