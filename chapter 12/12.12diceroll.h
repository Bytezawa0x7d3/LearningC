extern int roll_count;
/* main()函数所在的文件包含该头文件后
   引用式声明会让编译器在其他文件中查找roll_count的定义
   从而在main()的文件中可以访问外部变量 */

int roll_n_dice(int dice, int sides);
// main()的文件包含该头文件 在main()首次调用该函数时 提供原型