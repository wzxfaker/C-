//
//  main.c
//  RotateArray
//
//  Created by admin on 29/08/2017.
//  Copyright © 2017 gcg. All rights reserved.
//

#include <stdio.h>

void _swap(int *nums,int p,int q){
    int temp = nums[p];
    nums[p] = nums[q];
    nums[q] = temp;
}

void _reverse(int *nums,int startIdx,int endIdx){
    int numsCount = sizeof(nums)/sizeof(nums[0]);
//    int numsCount = 10;
    if(startIdx < 0 || endIdx > numsCount || endIdx < startIdx){
        return;
    }
    while(startIdx < endIdx){
        _swap(nums,startIdx,endIdx);
        startIdx++;
        endIdx--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    int numsCount = 10;
    _reverse(nums,0,5);
    _reverse(nums,0,k-1);
    _reverse(nums,k,numsCount-1);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    rotate(a, 10, 3);
    for (int i = 0; i < 10; i++) {
        printf("%d",a[i]);
    }
    return 0;
}



