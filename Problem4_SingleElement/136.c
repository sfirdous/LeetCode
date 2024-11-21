#include<stdio.h>
#include<stdlib.h>

int singleNumber(int* nums, int numsSize) {

    if(numsSize>1){
    int single = 0;
    for(int i = 1 ; i < numsSize;++i)
    {
        if(nums[single] == nums[i]){
            single++;
        }
    }  

    return nums[single]; 
    }
    return nums[0];
}

int main()
{
  
}