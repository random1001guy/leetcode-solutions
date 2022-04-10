class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        unordered_map<int,int> ump;
        int n = arr.size();
        bool ans = false;
        
        for(int i=0 ; i<arr.size() ; i++) {
            int val = arr[i];
            if((val%2 == 0 && ump.count(val/2) > 0) || (ump.count(val*2) > 0)){
                ans = true;
                break;
            }
            ump[val] = i;
        }
        
        return ans;
    }
};