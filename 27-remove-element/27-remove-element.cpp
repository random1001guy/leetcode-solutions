class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int numDup = 0;
        int size = nums.size();
        int src = size-1;
        int dest = 0;
        
        for(int x : nums) {
            if(x == val)
                numDup++;
        }
        
        for(int i=0 ; i<size-numDup && src > dest; i++) {
            while(dest < size && nums[dest] != val)
                dest++;
            while(src >= 0 && nums[src] == val)
                src--;
            if(src >= 0 && dest < size)
                nums[dest++] = nums[src--]; 
        }
        return size-numDup;
    }
};