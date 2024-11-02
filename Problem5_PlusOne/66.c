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
   int number = 0;
   for(int i = 0;i<digitsSize;++i){
    number = number*10 + digits[i]; 
    printf("number: %d\n",number);
   }

   number += 1;
   printf("number: %d\n",number);
   int number2 = number;
    printf("number2: %d\n",number2);
    int count = 0 ;
   while(number2!=0){
    number2/=10;
    count++;
    printf("count: %d\n",count);
   }

   printf("count: %d\n",count);
   int *plusDigits = malloc(count*sizeof(int));
   for(int i = count-1; i >= 0;--i){
        plusDigits[i] = number%10;
         printf("plusDigits[%d]: %d\n",i,plusDigits[i]);
        number /= 10; 
   }

    *returnSize = count;

   return plusDigits;
}


int main()
{

    int numsSize = 1;
    int *nums = malloc(numsSize*sizeof(int));

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


