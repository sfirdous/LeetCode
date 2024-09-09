#include<stdio.h>
#include<stdlib.h>

int getMinDistance(int* nums, int numsSize, int target, int start) {
    int index;
    for(int i = 0 ; i < numsSize ; ++i){
        if(target == nums[i]){
            index = i;
            break;
        }
    }

    return abs(index - start);
}

void accept_array(int *nums,int n){
    printf("\nEnter the values of array: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&nums[i]);
    }
    
}

int main()
{
    int n;
    printf("\nEnter size of array: ");
    scanf("%d",&n);

    int *array = calloc(n,sizeof(n));
    accept_array(array,n);

    int target,start;
    printf("\nEnter target and start: ");
    scanf("%d%d",&target,&start);

    int distance = getMinDistance(array,n,target,start);
    printf("\n%d",distance);

}