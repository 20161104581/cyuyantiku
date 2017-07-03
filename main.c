//
//  main.c
//  cyuyantiku
//
//  Created by 20161104581 on 17/6/19.
//  Copyright © 2017年 20161104581. All rights reserved.
//
#include<stdio.h>
int main()
{
    int i,a,b,c,m,n,flag;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        flag=1;
        for(i=m;i<=n;i++)
        {
            a=i%10;
            b=i/10%10;
            c=i/100;
            if(a*a*a+b*b*b+c*c*c==i)
            {
                printf("%d",i);
                flag=0;
            }
        }
        if(flag)
            printf("no\n");
        else
            printf("\n");
    }
        return 0;
}
