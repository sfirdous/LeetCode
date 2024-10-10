#include<stdio.h>
#include<stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
    int index = 0;  // Index to place non-val elements
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[index] = nums[i];  // Move non-val elements to the front
            index++;
        }
    }
    return index;  // The new size of the array without `val`
}