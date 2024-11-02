/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>

void print_array(int *nums,int n){ // function to print values array
    printf("\nValues of array: ");
    for (int i = 0; i < n; i++){
        printf("%d\t",nums[i]);
    }
    
}

//runtime error
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    int *plusOne;
    if(digits[digitsSize-1]!=9){
        plusOne = calloc(digitsSize,sizeof(int));
        for (int i = 0; i < digitsSize; i++)
        {
            if(i == (digitsSize-1))
                plusOne[i] = 1+digits[i];
            else
                plusOne[i] = digits[i];
        }
        
        *returnSize = digitsSize;
        return plusOne;
    }
}


int main()
{
    int numsSize;
    printf("Enter the size of array: ");
    scanf("%d",&numsSize);
    int *nums = malloc(numsSize*sizeof(int));
    printf("Enter the elements of array: ");
    for (int i = 0; i < numsSize; i++)
    {
        scanf("%d",&nums[i]);
    }
    int resultSize;
    int *result = plusOne(nums,numsSize,&resultSize);
    print_array(result,resultSize);
    // Free the dynamically allocated memory for result
    free(result);
    return 0;
}
