//TQC C Exam-702~710 參考解答
//=============================================
//702參考解答
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    char string[20];
    double output;
    printf("請輸入一數字的字串: ");
    scanf("%s",&string);
 
    output=atoi(string);
     printf("%s轉換後的整數為%3.0f\n", string, output);
//    system("PAUSE");
     return 0;
}
//=============================================
//704參考解答
#define TRIPLE(x) x*x*x
 
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int num, triple_num;
    printf("請輸入一個整數: ");
    scanf("%d", &num);
   
    triple_num = TRIPLE(num);
    printf("%d的三次方為%d\n",num, triple_num);
   
    triple_num = TRIPLE(5);
    printf("5的三次方為%d\n", triple_num);
 
//    system("PAUSE");
    return 0;
}
 
//=============================================
//706參考解答
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main ()
{
    int x, y;
    double result;
    printf("請輸入x, y的值: ");
    scanf("%d %d", &x, &y);
   
    result=exp(5)*(sqrt((pow(x, y)+log(100))))/pow(x, 2)*pow(y, 3);
    printf("result=%lf\n", result);
//    system("PAUSE");
     return 0;
}
//=============================================
//708參考解答
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define random(x) rand()%x+1
 
int main()
{
    int i, j;
    int x;
    printf("隨機數的最大值為: ");
    scanf("%d", &x);
    for (i=1; i<=5; i++) {
        for (j=1; j<=4; j++) {
            printf("%5d ", random(x));
        }
        printf("\n");
    }
//    system("PAUSE");
    return 0;
}
 
//=============================================
//710參考解答*****
#include <stdio.h>
#include <stdlib.h>
/* 若沒有定義Knum, 則加以定義為1000 */
#ifndef Knum
#define Knum 1000
#endif
/* 將Knum解除定義, 之後再定義為200 */
#undef Knum
#define Knum 200
 
int main ()
{
    /* 印出最後的Knum值 */
    printf("Knum = %d\n", Knum);
   
    /* 下列的變數d和i共用8個Bytes, 不是12個Bytes */
    union dataType {
        double d;
        int  i;
    };
    union dataType dT;
    printf("請輸入d的變數值: ");
    scanf("%lf", &dT.d);    
    /* 印出dT變數中的d和i */
    printf("%lf\n", dT.d);
    printf("請輸入i的變數值: ");
    scanf("%d",&dT.i);  
    /* 印出dT變數中的d和i */
    printf("%d ",dT.i);
//    system("PAUSE");
    return 0;
}
