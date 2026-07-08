////////////#include<string.h>
////////////#include<stdio.h>
////////////void test(){
////////////    int a=1;//局部变量；
////////////    a++;
////////////    printf("a=%d\n",a);
////////////}
////////////
////////////int main()
////////////{
////////////    //register int a=10;//把a定义为寄存器变量；
////////////    //typedef,类型定义
////////////    int i=0;
////////////    while(i<5)
////////////    {
////////////        test();
////////////        i++;
////////////    }
////////////    return 0;
////////////}
//////////
//////////#include<stdio.h>
//////////#include<string.h>
//////////void test()
//////////{
//////////    static int a=1;//a是一个静态局部变量，执行一次,生命周期变长;
//////////    a++;
//////////    printf("a=%d\n",a);
//////////}
////////// 
//////////int main()
//////////{
//////////    int i=0;
//////////    while (i<5)
//////////    {
//////////        test();
//////////        i++;
//////////    }
//////////    return 0;
//////////}
////////
////////#include<stdio.h>
////////#include<string.h>
////////
////////int g_val=2020;
////////
////////int main()
////////{
////////    extern int g_val;//全局变量;
////////    printf("g_val=%d\n",g_val);
////////    return 0;
////////}
//////
//////
//////#include<stdio.h>
//////int add(int x,int y)//定义函数
//////{
//////    int z=x+y;
//////    return z;
//////}
//////extern int add(int,int);//声明外部函数；
//////int main()
//////{
//////    int a =10;
//////    int b=20;
//////    int sum=add(a,b);
//////    printf("sum=%d\n",sum);
//////    return 0;
//////}
////#include<stdio.h>
////
//////宏的定义方式，#define 宏名 替换内容
////#define MAX(x,y)(x>y?x:y)///三目运算符，条件 ? 表达式1（条件为真 ） : 表达式2（else）
////int main()
////{
////    int a=10;
////    int b=20;
////    //函数
////    int max=MAX(a,b);
////    printf("max=%d\n",max);
////    //宏的方式;
////    max=MAX(a,b);
////    printf("max=%d\n",max);
////    return 0;
////}
//#include<stdio.h>
//int main()
//{
//    int a=10;//4个字节;
//    int *p = &a; // p是int类型指针，&a取出a的地址赋值给p,取地址;*解引用操作符
//    p = &a;//指针变量
//    printf("%p\n",p);
//    return 0;
//}
//
//
#include<stdio.h>
int main()
{
    char ch='w';
    char *pc =&ch;
    *pc='a';//*pc解引用：顺着pc存的地址找到ch，把里面的值改成'a'
    // 等价 ch = 'a';
    printf("%c\n",ch);//%c输出字符内容，%p输出地址;
    return 0;
}
//指针大小sizeof在32位平台（老古董）是4个字节，64位平台是8个字节；
