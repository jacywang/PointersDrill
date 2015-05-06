//
//  main.c
//  PointerDrill
//
//  Created by JIAN WANG on 5/6/15.
//  Copyright (c) 2015 JWANG. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a = 13;
    int b = 5;
    int c = 10;
    
    int *x = &a;
    int *y = &b;
    int *z = &c;
    int *i = &c;
    
    *x *= 2;
    *z += 1;
    i = y;
    *i += 4;
    
    printf("a-%d, b-%d, c-%d\n", a, b, c);
    
    
    
    
    return 0;
}
