class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        unordered_set<int> ust;
        int n = arr.size();
        bool ans = false;
        
        for(int i=0 ; i<arr.size() ; i++) {
            int val = arr[i];
            if((val%2 == 0 && ust.find(val/2) != ust.end()) || (ust.find(val*2) != ust.end())){
                ans = true;
                break;
            }
            ust.insert(val);
        }
        
        return ans;
    }
};