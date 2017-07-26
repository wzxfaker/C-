//
//  main.c
//  insert_sort
//
//  Created by admin on 26/07/2017.
//  Copyright © 2017 gcg. All rights reserved.
//

#include <stdio.h>

/*
 插入排序：取数组中的元素与已排序的元素逐一比较，大于temp时，该数后移，当遇到比自己大的小的时候跳出循环，赋值即可
 
 */

void insertSort(int *arr,int first,int last){
    int temp;
    for (int i = first+1; i < last; i++) {
        temp = arr[i];
        int j = i-1;
        //与已排序的数逐一比较，大于temp时，该数后移
        while ((j >= 0) && (arr[j] > temp)) {
            arr[j+1] = arr[j];
            j--;
        }
        //存在大于temp的数
        if (j != i-1) {
            arr[j+1] = temp;
        }
    }
}

int main(int argc, const char * argv[]) {
    int a[5] = {36,5,20,15,1};
    insertSort(a, 0, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}
