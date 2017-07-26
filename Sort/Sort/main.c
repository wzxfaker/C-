//
//  main.c
//  Sort
//
//  Created by admin on 17/2/24.
//  Copyright © 2017年 gcg. All rights reserved.
//

#include <stdio.h>

/*
    选择排序：将最值出现在起始端，每比较一趟，就从第i个元素开始比较相邻的元素
    第1趟：在n个数中找到最大数与第一个交换
    第2趟：在剩下n-1个数中找到最大数与第二个数交换
        n-2与第三个…………
    第n-1趟：最终可实现数据排序
 
 */
void selectSort(int arr[10]) {
    for (int i = 0 ; i < 10; i++) {//比较趟数
        for (int j = i + 1;j < 10 ; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int tempArr[10] = {13,15,25,3,9,1,65,38,69,75};
    selectSort(tempArr);
    for (int i = 0 ; i < 10; i++) {
        printf("%d\n",tempArr[i]);
    }
    return 0;
}
