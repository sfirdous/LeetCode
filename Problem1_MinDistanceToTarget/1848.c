#include<stdio.h>
#include<stdlib.h>

int getMinDistance(int* nums, int numsSize, int target, int start) { //function to get min distance
    int index;
    for(int i = 0 ; i < numsSize ; ++i){ //iterating over array element to find the index of target
        if(target == nums[i]){
            index = i; // when index of target found set it to index variable
            break;  // get out of the loop when fist occurence of target 
        }
    }

    return abs(index - start); // return distance from start to target variable
}

void accept_array(int *nums,int n){ // function to accept values array
    printf("\nEnter the values of array: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&nums[i]);
    }
    
}

int main()
{
    int n;
    printf("\nEnter size of array: ");
    scanf("%d",&n); // accepting size of array from user

    int *array = calloc(n,sizeof(n)); // dynamically allocating the array
    accept_array(array,n); // accepting array values from user

    int target,start; 
    printf("\nEnter target and start: ");
    scanf("%d%d",&target,&start); // accepting target and start value from user

    int distance = getMinDistance(array,n,target,start); // caluculating the minimum distance
    printf("\n%d",distance); 

}