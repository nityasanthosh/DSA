class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxLucky = -1;

        for (int i = 0; i < arr.size(); i++) {
            int current = arr[i];
            int count = 0;

            // Count how many times current appears
            for (int j = 0; j < arr.size(); j++) {
                if (arr[j] == current) {
                    count++;
                }
            }

            // If it’s lucky and larger than max found so far
            if (count == current) {
                maxLucky = max(maxLucky, current);
            }
        }

        return maxLucky;
    }

};