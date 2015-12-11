//
//  main.c
//  Insert Sort
//
//  Created by Rex Ma on 15/12/11.
//  Copyright © 2015年 Rex Ma. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[11];
    
    for (int i = 1; i < 11; i++) {
        a[i] = rand();
    }
    
    for (int j = 2; j < 11; j++) {
        //这里我不想开辟单独的数值，所以以a[0]保存暂存信息
        a[0] = a[j];
        for (int p = j; p > 0 && a[0] < a[j-1]; p--)
            a[j] = a[j-1];
        a[j] = a[0];
    }
    
    for (int k = 1; k < 11; k++) {
        printf("%d\n",a[k]);
    }
    
    return 0;
}
