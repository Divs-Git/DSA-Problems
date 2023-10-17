https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int i = 0;
        while(i < n) {
            int count = 1;
            for(int j = i+1; j < n ; j++)  {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }
            ans.push_back(count);
            i = i + count;
        }

        sort(ans.begin(),ans.end());
        for(int i = 0 ; i < ans.size()-1 ; i++) {
            if(ans[i] == ans[i+1]) {
                return false;
            }
        }
        return true;
    }
};