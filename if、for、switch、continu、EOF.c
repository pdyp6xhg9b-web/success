//#include<stdio.h>
//int main()
//{
//    
//    //int a =10;
// //   int age=18;
//    int age =21;
//    if (age<18)
//        printf("未成年\n");
//
//    else if(18<=age&&age<28)
//        printf("青年\n");
//    
//    else if(age>=28&&age<50)
//        printf("壮年\n");
//    
//    else
//        printf("老不死\n");
//    
//    
//    
//    return 0;
//    
//}
//#include<stdio.h>
//int main()
//{
//    int a=0;
//    int b=2;
//    if(a==1)
//        if(b==2)
//            printf("hehe\n");
//    else//就近匹配if;除非{}代码块
//        printf("haha\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int num =4;
//    
//    if (num=5)//=赋值;==判断相等;
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int num;
//    
//    printf("请输入数字:");
//    scanf("%d",&num);
//    if (num % 2==0)
//    {
//        printf("是偶数\n");
//    }
//    else
//    {
//        printf("是奇数\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int num;
//    
//    
//     printf("请输入数字:");
//     scanf("%d",&num);
//    
//     if (num % 2==0)
//     {
//         printf("是偶数\n");
//     }
//     else
//     {
//         printf("是奇数\n");
//     }
//    printf("1-1001之内的奇数是：");
//    for (int i=1;i<=100;i++)
//    {
//        if (i%2!=0)
//        {
//            printf(" %d ",i);
//        }
//    }
//    printf("\n");
//     return 0;
//}

#include<stdio.h>
int main()
{
    int n =1;
    int m=2;
    switch(n)
    {
        case 1:{
            m++;
        }
        case 2:{
            n++;
        }
        case 3:{
            switch(n)
            {
                case 1:{
                    n++;
                }
                case 2:{
                    m++;n++;break;
                }
            }
        }
        case 4:{
            m++;
            break;
        }
        default:{
            break;
        }
    }
    printf("m=%d,n=%d\n",m,n);
    return 0;
}
//continue跳本次，continue后面代码不执行，跳while看是不是要继续；
//putchar,getchar;EOF-end of file->-1;
