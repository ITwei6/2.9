//#define square(x) (x)*(x) //定义宏
//int main()
//{
//	printf("%d ", square(5+1));//替换过去的
//	return 0; 
//}
#define Max(x,y) ((x)>(y)?(x):(y))
#define MAX 100

//int main()
//{
//#if !defined(MAX)
//	printf("heheh");
//#endif
//	return 0;
//}
//int main()
 //{
//#ifndef MAX
//	printf("heheh");
//#	endif
//}
//	return 0;
//宏定义的
// 条件指令：
//
//查找方式上的区别
// 头文件包含
//""   方式先在本地代码目录文件下查找，找不到就道标准库里查找
//<>   直接去标准库里查找

//嵌套文件包含--重复包含
//#ifndef _NO_  //第一次如果没有定义，定义一下
////
//   //第二次就不能定义了 不能使用了 
//#define _NO_
//#endif
//2.#pragma once 可以避免头文件重复引用
//---XMind
#define SWAP(x) (((x&0x55555555)<<1)+(x&0xaaaaaaaa>>1))
int main()
{


	return 0;
}