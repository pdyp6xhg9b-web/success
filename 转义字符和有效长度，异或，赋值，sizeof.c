////#include <stdlib.h>
////#include <stdio.h>
////#include<string.h>
////int main()
////{
////    char arr1[]="abc";
////    char arr2[]={'a','b','c','\0'};
////    printf("%d\n",strlen(arr1));
////    printf("%d\n",strlen(arr2));
////    printf("okok\?\?\?\n");
////    printf("%c\n",'d');
////    printf("%c\n",'\"');
////    return 0;
////}
//
////
////
////#include<stdio.h>
////#include<string.h>
////
////int main()
////{
////    //printf("%d\n",strlen("c:\test\32\test.c"));
////    printf("%c\n",'\xdd');
////    return 0;
////}
//
//
//#include<stdio.h>
//#include<string.h>
//
//
//int main()
//{
//    
//    int input=0;
//    printf("加入比特\n");
//    printf("你要好好学习吗？(1,0):");
//    scanf("%d",&input);
//    if (input==1)
//        printf("好offer\n");
//    else
//        printf("回家卖烤红薯\n");
//    return 0;
//    
//    
//    
//}
//


#include<stdio.h>
#include<string.h>

int main(void)
{
    int a=3;
    int b=5;
    int c= a^b;
    //011
    //101
    //110
    //4 2 1
    //异或|，对应二进制相同则为0，相反为1；
    printf("%d\n",c);
    return 0;
    
    //=赋值，==判断相等,复合赋值符+=,^=...
    //单目操作符,
    //sixeof计算空间所占大小，int4
}

