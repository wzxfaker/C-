//
//  main.c
//  ReplaceBlank
//
//  Created by X on 2018/3/22.
//  Copyright © 2018年 gcg. All rights reserved.
//

#include <stdio.h>

void replaceBlank(char string[],int length);

int main(int argc, const char * argv[]) {
//    replaceBlank("thank you very much",30);
    char str[] = "thank you very much";
    replaceBlank(str, 30);
    printf("%s",str);
    return 0;
}

//lenth为字符数组string的总容量
void replaceBlank(char string[],int length){
    if (string == NULL && length <= 0) {
        return ;
    }
    //originalLenth为字符串string的实际长度
    int originalLenth = 0;
    int numOfBlank = 0;
    int i = 0;
    while (string[i] != '\0') {
        originalLenth++;
        if (string[i] == ' ') {
            numOfBlank++;
        }
        i++;
    }
    int newLength = originalLenth + numOfBlank*2;
    if (newLength > length) {
        return;
    }
    int indexOfOriginal = originalLenth;
    int indexOfNew = newLength;
    while (indexOfOriginal >= 0 && indexOfNew > indexOfOriginal) {
        if (string[indexOfOriginal] == ' ') {
            string[indexOfNew--] = '0';
            string[indexOfNew--] = '2';
            string[indexOfNew--] = '%';
        }else{
            string[indexOfNew--] = string[indexOfOriginal];
        }
        indexOfOriginal--;
    }
}
