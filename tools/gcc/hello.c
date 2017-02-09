// gcc -E hello.c 只预编译
// gcc -S hello.c 只编译不汇编 生成汇编代码 hello.s
// gcc -c hello.c 只编译不链接 生成目标文件 hello.o
// gcc -g hello.c 包含调试信息 生成可执行文件 a.out
// gcc hello.c -o hello 生成可执行文件 并将其命名为 hello
//

// $whereis stdio.h 查看stdio.h的路径
// gcc -I. hello.c -o hello 在当前目录下搜索头文件
// #include <hello.h>

// #include "hello.h" 
// gcc 先在当前目录下查找头文件 再在系统路径中查找头文件

#include <stdio.h>
// gcc 直接在系统路径中查找头文件

// $gcc -static hello.c -o hello 
// /usr/bin/ld: cannot find -lc
// collect2: error: ld returned 1 exit status
// 安装静态库: 
// sudo yum install glibc-static

int main()
{
  printf("Hello World!\n"); 

  return 0; 
}
