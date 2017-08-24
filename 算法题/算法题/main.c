//
//  main.c
//  算法题
//
//  Created by admin on 18/08/2017.
//  Copyright © 2017 gcg. All rights reserved.
//

#include <stdio.h>

static int test(int n){
    switch (n) {
        case 1:
            return 0;
            break;
        case 2:
            return 1;
            break;
        case 3:
            return 2;
            break;
        default:
            return test(n-1)+test(n-2);
            break;
    }
}


int main(int argc, const char * argv[]) {
    printf("%d\n",test(6));//使用递归当数量过大时有可能造成溢出
    //使用循环
    int m,n,a[100] = {0,0,1,2};//假设有100阶，可以输出当中的值
    for (int i = 4; i < 100; i++) {
        a[i] = a[i-1] + a[i-2];
    }
    scanf("%d",&n);
    while (n--) {
        scanf("%d",&m);
        printf("%d\n",a[m]);
    }
    
    return 0;
}
