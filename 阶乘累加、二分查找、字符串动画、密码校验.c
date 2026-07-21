//#include<stdio.h>
//int main()
//{
//    int i =0;
//    int n=0;
//    int ret =1;
//    int sum =0;
//    for(n=1;n<=10;n++)
//    {
//        ret =ret * n;
//        sum =sum + ret;
//    }
//    printf("sum=%d\n",sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    // 有序数组，二分查找只能用于有序序列
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    //二分查找算法
//
//    // 计算数组元素总个数
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int k=7;        // 需要查找的目标数字
//    int left = 0;   // 查找区间左边界下标
//    int right = sz-1;//查找区间右边界下标
//    int findFlag = 0;//标记是否找到，0=未找到
//
//    // 循环：区间有效就持续缩小范围查找
//    while(left <= right)
//    {
//        // 每次循环重新计算中间下标
//        int mid=(left+right)/2;
//        if(arr[mid]> k)
//        {
//            // 中间值更大，目标在左半边，右边界前移
//            right = mid-1;
//        }
//        else if(arr[mid]<k)
//        {
//            // 中间值更小，目标在右半边，左边界后移
//            left = mid +1;
//        }
//        else
//        {
//            // 匹配成功，打印下标
//            printf("找到了，下标是%d\n",mid);
//            findFlag = 1;
//            break; // 找到后跳出循环
//        }
//    }
//    // 循环走完还没找到，提示不存在
//    if(findFlag == 0)
//    {
//        printf("数组中没有数字%d\n",k);
//    }
//    return 0;
//}




//[a b c \0]
// 0 1 2  3
//    4-2
//
//#include<stdio.h>
//#include<string.h>
//#include<unistd.h>
//#include<stdlib.h>
//
//int main()
//{
//    char arr1[] = "weclome to bit!!!!";
//    char arr2[] = "##################";
//    int left = 0;
//    int right = strlen(arr1)-1;
//    
//    while(left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//
//        // <span style="background-color:#90EE90">✅1. \r 回到本行最左侧覆盖，去掉\n就不会新建行</span>
//        printf("\r%s", arr2);
//        // <span style="background-color:#90EE90">✅2. Mac必须加，强制刷新输出缓存，文字实时变化</span>
//        fflush(stdout);
//
//        sleep(1);
//        left++;
//        right--;
//    }
//    // 动画结束换行，不让终端提示符贴在文字后面
//    printf("\n");
//    return 0;
//}


#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char password[20]={0};
    for(i=0;i<3;i++)
    {
        printf("请输入密码：>");
        scanf("%s",password);
        if(strcmp(password,"123456")==0)
        {
            printf("登陆成功TOP\n");
            break;
        }
    }
    if(i==3)
        printf("密码错误\n");
    return 0;
}
