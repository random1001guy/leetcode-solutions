class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int numZeros = 0;
        int size = arr.size();
        int newLastEle;        
        int count = 0;
        int i;
        bool flag = false;
        
        if(size < 2)
            return;
        
        for(i=0 ; i<size && count < size ; i++){
            if(arr[i] == 0 && count != size-1) {
                count++;
                if(count == size - 1)
                    flag = true;
            }
            count++;
        }
        
        if(i == size)
            return;
        
        int r = size-1;
        int l = i-1;
        
        //cout << l << " " << r << " " << numZeros;
        
        while(l<r && r>0 && l >= 0){
            arr[r--] = arr[l];
            if(arr[l] == 0 && (r!=size-2 || flag)){
                arr[r--] = 0;
            }
            l--;
        }
        
        return;
    }
};