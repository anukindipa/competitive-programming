#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    int s = nums.size();
    vector<int> v = {0, 0};
    map<int, int> m;
    for (int i = 0; i < s; i++) {
      m[nums[i]] = i;
    }
    for (int i = 0; i < s; i++) {
      int n = target - nums[i];
      int x = m[n];
      if (x && i != x) {
        v = {i, x};
        return v;
      }
    }
    return v;
  }
};