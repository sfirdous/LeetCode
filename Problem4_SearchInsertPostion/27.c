
int searchInsert(int* nums, int numsSize, int target) {
    
    int begin = 0,end = numsSize-1; //assign begin and end values
    int   mid; //declare a variable to caluculate middle value
   
    while(begin<end)
    {
        mid = (begin+end)/2; //calculate mid index for each part
        if(nums[mid] == target){
            return mid; //return mid if target found

        }
        if(nums[mid] < target){ //if mid value is smaller target is present in the lower part 
            begin = mid + 1;
        }else{
            end = mid - 1; //else target is present in upper half
        }
    
    }

    return begin+1; //if the element is not in the array it is present at this index except for [1,3,5,7] and target = 7
}