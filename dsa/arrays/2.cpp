// Leetcode 1207 -> Unique Number of Occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int count = 1;
        int i = 0;

        sort(arr.begin(), arr.end());

        while (i < arr.size()) {
            count = 1;
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            ans.push_back(count);
            i += count;
        }

        sort(ans.begin(), ans.end());

        for (int i = 0; i < ans.size() - 1; i++) {
            if (ans[i] == ans[i + 1]) {
                return false;
            }
        }
        return true;
    }
};


//About solution
/*

1. First sort the arr array 
2. Iterate over it to check the occurrence 
3. Jump to the element where the number changed
4. Check if the ans array has duplicate number (same occurrence)

*/