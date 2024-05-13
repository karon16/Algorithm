//
// Created by Christopher Buhendwa on 5/14/24.
//

#include <iostream>
#include <vector> // Include the vector header

using namespace std;

class Solution {
public:
    static void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i =0; i < n; i++){
            nums1[m+i] = nums2[i];
        }

        for(int i = 0; i < m + n - 1; i++){
            int min = i;
            for(int j = i+1; j < m+n; j++){
                if(nums1[j] < nums1[min]){
                    min = j;
                }
            }

            if (min != i) {
                int temp = nums1[i];
                nums1[i] = nums1[min];
                nums1[min] = temp;
            }


        }
    }

    static void printSolution(vector<int>& nums) {
        cout << "Merged vector: ";
        cout << "[ ";
        for (int num : nums) {
            cout << num << " ";
        }
        cout  << "]" << endl;
    }
};