//
//  main.c
//  Stack
//
//  Created by admin on 21/07/2017.
//  Copyright © 2017 gcg. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

static int data[1024];//桟最多能保存1024个数据
static int count = 0;//目前已经放了多少个数（相当于栈顶位置）

bool isFullStack() {
    if (count >= 1024) {
        return 1;
    }
    return 0;
}

bool isEmptyStack() {
    if (count <= 0) {
        return 1;
    }
    return 0;
}

//数据入栈 push
void push(int x){
    if (!isFullStack()) {//防止数组越界
        data[count++] = x;
    }
}

int pop() {
    assert(!isEmptyStack());
    return data[--count];
}

//查看桟顶元素top
int top() {
    assert(!isEmptyStack());
    return data[count-1];
}


int main(int argc, const char * argv[]) {
    //入栈
    for (int i = 0; i < 10; i++) {
        push(i);
    }
    //出桟
    while (!isEmptyStack()) {
        printf("%d\n",top());
        pop();
    }
    return 0;
}
