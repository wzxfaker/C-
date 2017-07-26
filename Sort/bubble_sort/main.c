//
//  main.c
//  bubble_sort
//
//  Created by admin on 17/2/24.
//  Copyright © 2017年 gcg. All rights reserved.
//

#include <stdio.h>

/*
    冒泡排序：比较相邻元素，将最值排到最右边。每比一趟，比较次数就少一次，到length-i-1后边的就是拍好序的元素
        相邻元素两两比较，比较完一趟，最值出现在末尾
        第1趟：依次比较相邻两个数，不断交换、逐个推进，最值最后出现在第n个元素位置
        第2趟：依次比较相邻两个数，不断交换、逐个推进，最值最后出现在第n-1个元素位置
        ………………
        第n-1趟：最值最后出现在第2个位置
 
 */
void bubbleSort(int *arr,int length){
    for (int i = 0; i < length-1; i++) {//比较length趟
        for (int j = 0; j < length-i-1; j++) {//比较次数
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int a[5] = {36,5,20,15,1};
    bubbleSort(a, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d\n",a[i]);
    }
}
