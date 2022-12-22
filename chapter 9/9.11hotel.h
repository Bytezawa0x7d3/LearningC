#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "**************************************"

int menu(void);
int getnights(void);
void showprice(double rate, int nights);

/* 头文件用于存储函数原型和常量
   因为这些信息需要置于main函数所在文件的顶部
   这样使用头文件还方便维护
   如果需要修改数值 仅需更改一处头文件内容 */