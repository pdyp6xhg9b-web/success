//#include<stdio.h>
//int main()
//{
//    /*
//    int ch=0;
//    while((ch=getchar())!=EOF)//文件结束标志;
//    {
//        putchar(ch);
//    }
//     */
////    char password[20]={0};
////    printf("请输入密码:>");
////    scanf("%s",password);
////    
////    
//    
//    int ret =0;
//    int ch;
//    char password[20]={0};
//    printf("请输入密码：");
//    scanf("%s",password);
//   
//    while ((ch=getchar()!='\n'))
//           {
//        ;
//    }
//    
//    printf("请确认(Y/N):>");
//           ret = getchar();
//           if (ret=='Y')
//           {
//        printf("确认成功");
//    
//    }
//           else{
//        printf("确认失败");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int ch=0;
//    while((ch=getchar()!=EOF))
//    {
//        if (ch<'0'||ch>'9')
//            continue;
//        putchar(ch);
//    }
//          return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int i=0;
//    for(i=1;i<=10;i++)//初始化 判断 调整
//        printf("%d ",i);
//        return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i=0;
//    for(i=1;i<=10;i++)
//    {
//        if(i==5)
//            continue;//breake是1234;
//        printf("%d ",i);
//    }
//    return 0;
//}
//

//#include<stdio.h>
//int main()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int i =0;
//    for (i=0;i<10;i++)//左闭右开
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    for(;;)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}//恒正，无限死循环，不停打印

//
//#include<stdio.h>
//int main()
//{
//    int i=0;
//    int j=0;
//    for(;i<10;i++)
//    {
//        for (;j<10;j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int i=1;
//    do//循环内容;
//    {
//        if (i==5)
//            continue;
//        
//        printf("%d ",i);
//        i++;
//    }
//    while(i<=100);//判断条件;
//    return 0;
//}

//while 先判断，后执行,先判后做，可能 0 次
//while(条件)
//{
//    循环体;
//}
//
//do while 先执行，后判断,先做后判，最少 1 次
//do
//{
//    循环体;
//}while(条件); // 末尾分号不能丢


//for 集初始化、条件、自增一体,专门用来固定次数循环
//for(初始化;判断条件;增量)
//{
//    循环体;
//}


//n的阶乘！
#include<stdio.h>
int main()
{
    int i=0;
    int n=0;
    int ret=1;//return result，求累乘（阶乘）：结果变量初始化为 1，
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ret=ret * i;
    }
    printf("ret =%d\n",ret);
    return 0;
}
