//
//  main.cpp
//  Home Work 7
//
//  Created by Ho Tsung Kai on 2019/3/27.
//  Copyright © 2019 Ho Tsung Kai. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int i , n , sum=0 ;
    printf("請輸入您要算的數字：");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=i;
    printf("總和為 %d \n",sum);
    return 0;
}
