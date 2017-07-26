//
//  main.c
//  quick_sort
//
//  Created by admin on 26/07/2017.
//  Copyright © 2017 gcg. All rights reserved.
//

#include <stdio.h>

/*
    快速排序：一般取数组中第一个数为key，然后i=0，j=arr.count-1,使j递减并与key进行比较，如果a[j]<key,则把a[j]赋值给a[i],然后从i递增与key进行比较，如果a[i]>key,则把a[i]赋值给a[j],i递增，j递减，知道i=j停止，第一次循环使key左边的数都比key小，右边的都比key大，然后递归调用即可
 */

void quickSort(int *arr,int left,int right) {
    if (left >= right) {
        return;
    }
    int i = left,j = right,key = arr[left];
    while (i < j) {
        while (i < j && key <= arr[j]) {
            j--;
        }
        arr[i] = arr[j];
        
        while (i < j && arr[i] <= key) {
            i++;
        }
        arr[j] = arr[i];
    }
    arr[i] = key;
    quickSort(arr, left, i-1);
    quickSort(arr, i+1, right);
}

int main(int argc, const char * argv[]) {
    int a[9] = {36,5,20,15,1,23,35,30,3};
    quickSort(a, 0, 9);
    for (int i = 0; i < 9; i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}
