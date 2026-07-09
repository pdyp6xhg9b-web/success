#include<stdio.h>



//结构体;
    
    //创建一个结构体；// 结构体模板写在main外面
    struct book{//变量.成员名
        char name[20];//c语言程序设计；
        short price;//55
        
      
    
    };
    
   //.结构体变量.成员
   //-结构体指针->成员
    
    
int main()
{
    //利用结构体类型-创建一个该类型的结构体变量；
    struct book b1={"c语言程序设计",55};//创建结构体变量b1
    struct book* pb = &b1;//定义结构体指针pb，指向b1（写在b1之后）
    // printf("书名：%s\n",b1.name);
    //  printf("价格：%d\n",b1.price);
    //  b1.price=15;
    //  printf("newprice=%d\n",b1.price);
    
    // 两种指针访问成员写法，等价
    printf("方式1 (*pb).name：%s\n", (*pb).name);//.：普通变量访问成员
    printf("方式2 pb->name：%s\n", pb->name);//->：指针专用访问符号
    
    return 0;
    
    
}
    
    
    
//    double d=3.14;
//    double* pd = &d;
//    *pd =5.5;
//    printf("%lf\n",d);
//    
//    
//    int a=10;
//    //printf("%p\n",&a);
//    int* p=&a;//p是一个变量，指针变量;类型int*
//   // printf("%p\n",p);
//    *p=20;//*解引用操作符，间接访问操作符；
//    printf("a=%d\n",a);
//    return 0;
//}
