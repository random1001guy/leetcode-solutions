class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        int leftIndx = 0;
        int rightIndx = size-1;
        vector<int> squaredNums;
        
        while(leftIndx <= rightIndx) {
            if(abs(nums[leftIndx]) >= abs(nums[rightIndx])) {
                squaredNums.push_back(nums[leftIndx]*nums[leftIndx]);
                leftIndx++;
            }
            else {
                squaredNums.push_back(nums[rightIndx]*nums[rightIndx]);
                rightIndx--;
            }
        }
        
        //reverse the array in place
        leftIndx = 0;
        rightIndx = size - 1;
        int temp;
        while(leftIndx <= rightIndx) {
            temp = squaredNums[leftIndx];
            squaredNums[leftIndx++] = squaredNums[rightIndx];
            squaredNums[rightIndx--] = temp;
        }
        
        return squaredNums;
    }
};