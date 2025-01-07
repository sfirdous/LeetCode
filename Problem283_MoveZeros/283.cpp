class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        vector<int> temp(size,0);
        int k = 0;

        for(int i = 0 ; i < size ; ++i){
            if(nums[i] != 0){
                temp[k] = nums[i];
                cout << temp[k] << endl;
                k++;
                
            }
        }

        nums = temp;

    }

    void moveZeroesInPlace(vector<int>& nums) {
        int size = nums.size();
        int j;
        for(int i = 0 ; i < size ; ++i){
            if(nums[i] == 0){
                j = i+1;
                while(j < size){
                    if(nums[j] != 0){
                        swap(nums[i],nums[j]);
                        break;
                    }
                    j++;
                }
            }
        }    

    }
};
