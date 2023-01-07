#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int static_store = 30; // 静态内存
const char * pcg = "String Literal"; // 静态内存

int main(void)
{
    int auto_store = 40; // 自动内存
    char auto_string[] = "Auto char array"; // 自动内存
    int * pi; // 自动内存
    char * pcl; // 自动内存

    pi = (int *) malloc(sizeof(int)); // pi指向动态分配内存
    *pi = 35;
    pcl = (char *) malloc(strlen("Dynamic String") + 1); // 根据字符串长度分配动态内存
    strcpy(pcl, "Dynamic String"); // 使用函数才能“赋值”字符串

    // 具有静态存储期的变量 位于静态存储区 地址相邻
    printf("static_store: %d at %p\n", static_store, &static_store);
    printf("%s at %p\n", pcg, pcg);
    printf("%s at %p\n", "Quoted String", "Quoted String");

    // 具有自动存储期的变量 位于自动存储期 地址相邻
    printf("auto_store: %d at %p\n", auto_store, &auto_store);
    printf("%s at %p\n", auto_string, auto_string);

    // 自动分配内存的对象 位于自动分配存储期 地址相邻
    printf("%s at %p\n", pcl, pcl);
    printf("*pi: %d at %p\n", *pi, pi);

    free(pi);
    free(pcl);

    return 0;
}