
int searchInsert(int* nums, int numsSize, int target) {
    
    int begin = 0,end = numsSize-1;
    int   mid;
   
    while(begin<end)
    {
        mid = (begin+end)/2;
        // printf("%d\n",mid);
        if(nums[mid] == target){
            printf("found\n");
            return mid;

        }
        if(nums[mid] < target){
            begin = mid + 1;
        }else{
            end = mid - 1;
        }
    
    }

    return begin+1;
}