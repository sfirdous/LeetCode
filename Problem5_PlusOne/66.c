#include<stdio.h>
#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int returnSize) {
   int number = 0;
   for(int i = 0;i<digitsSize;++i){
    number = number*10 + digits[i]; 
   }

   number += 1;
   int number2 = number;
   returnSize = 0;
   while(number2!=0){
    number2/=10;
    returnSize++;
   }

   int *rPlusDigits = malloc(returnSize*sizeof(int));
   int *plusDigits = malloc(returnSize*sizeof(int));
   for(int i = 0 ; i < returnSize;++i){
        rPlusDigits[i] = number%10;
        number /= 10; 
   }

    int j;
   for(int i = 0,j = returnSize -1;j>=0,i<returnSize;++i,--j){
    plusDigits[i] = rPlusDigits[j];
   }

   return plusDigits;
}
