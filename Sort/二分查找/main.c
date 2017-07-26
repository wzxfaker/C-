//
//  main.c
//  二分查找
//
//  Created by admin on 21/07/2017.
//  Copyright © 2017 gcg. All rights reserved.
//

#include <stdio.h>

/*
    拆分查找：优化查找时间         使用条件：1.在数组中使用  2.数组必须是有序的   时间复杂度：log2n
    原理：1.数组必须是有序的
         2.必须已知min和max
         3.动态计算mid的值，取出mid对应的值进行比较
         4.如果mid对应的值大于要查找的值，那么max要变小为mid-1
         5.如果mid对应的值小于要查找的值，那么min要变大为mid+1
*/

//找不到就返回-1
int bSearch(int arr[],int length,int target){
    int min = 0,max = length-1,mid;
    while (min <= max) {
        mid = (min + max)/2;
        if (target > arr[mid]) {
            min = mid+1;
        }else if (target < arr[mid]){
            max = mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}

//递归
int recurSearch(int arr[],int low,int high,int target) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high)/2;
    if (arr[mid] > target) {
        return recurSearch(arr, low, mid-1, target);
    }
    if (arr[mid] < target) {
        return recurSearch(arr, mid+1, high, target);
    }
    return mid;
}

//用二分查找法找寻边界值
int bSearchUpperBound(int arr[],int low,int high,int target) {
    if (low > high || target >= arr[high]) {
        return -1;
    }
    int mid = (low + high)/2;
    while (high > low) {
        if (arr[mid] > target) {
            high = mid-1;
        }else{
            low = mid+1;
        }
        mid = (low + high)/2;
    }
    return mid;
}


int main(int argc, const char * argv[]) {
    int tempArr[7] = {2,3,5,7,11,13,17};
    int key = bSearchUpperBound(tempArr, 0, 6, 3);
    printf("%d\n",tempArr[key]);
    return 0;
}
