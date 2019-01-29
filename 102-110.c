//102題目
#include <stdio.h>
#include <stdlib.h>
 
int main()
{  
    double a, b;
    printf("請輸入兩個浮點數:");
    scanf("%d %d", a, b);
    total = a+b;
    printf("total=%f", total);
    system("PAUSE");
    return 0;
}
 
 
 
//102解答示範
#include <stdio.h>
#include <stdlib.h>
 
int main()
{  
    float a, b,total;
    printf("請輸入兩個浮點數:");
    scanf("%f %f", &a, &b);
    total = a+b;
    printf("total=%f\n", total);
    system("PAUSE");
    return 0;
}
 
/*-------------------------------------------------------------*/
//TQC C Exam-104
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int unit;
    double price=23.34;
    int total;
    printf("請問您要買幾瓶蘋果汁? ");
    scanf("%d", unit);
    total = unit*price;
    printf("我買了%d瓶100%的蘋果汁\n", unit);
    printf("花了%f元", total);
    system("PAUSE");
    return 0;
}
 
//104解答參考
#include <stdio.h>
#include <stdlib.h>

int main() 
{
     int unit;
     double price=23.34; 
     double total;
     printf("請問您要買幾瓶蘋果汁? ");
     scanf("%d", &unit);
     total = unit*price;
     printf("我買了%d瓶100%的蘋果汁\n", unit);
     printf("花了%lf元", total);
     return 0;
}
 
/*-------------------------------------------------------------*/
//TQC C Exam-105
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int a, b, c, total;
    double average;
    printf("請輸入第一個整數? ");
    scanf("%d", &a);
    printf("請輸入第二個整數? ");
    scanf("%d", &b);    
    printf("請輸入第三個整數? ");
    scanf("%d", &b);
   
    total = a+b+c;
    average = total/3;
   
    printf("%d+%d+%d=%d\n", a, b, total);
    printf("平均數為%.2f", average);
    system("PAUSE");
    return 0;
}
 
 
//105參考解答
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int a, b, c, total;
    double average;
    printf("請輸入第一個整數? ");
    scanf("%d", &a);
    printf("請輸入第二個整數? ");
    scanf("%d", &b);    
    printf("請輸入第三個整數? ");
    scanf("%d", &c);
   
    total = a+b+c;
    average = (float)total/3;
   
    printf("%d+%d+%d=%d\n", a, b,c, total);
    printf("平均數為%.2f", average);
    system("PAUSE");
    return 0;
}
 
/*-------------------------------------------------------------*/
//TQC C Exam-106
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int a, b, c, d;
    printf("請輸入第一個整數? ");
    scanf("%d", &a);
    printf("請輸入第二個整數? ");
    scanf("%d", &b);    
    printf("請輸入第三個整數? ");
    scanf("%d", &c);
    printf("請輸入第四個整數? ");
    scanf("%d", &d);
   
    printf("此式的餘數為%d\n", a+b/2-c+d/2 % 2);
    system("PAUSE");
    return 0;
}
 
//解答參考106
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int a, b, c, d;
    printf("請輸入第一個整數? ");
    scanf("%d", &a);
    printf("請輸入第二個整數? ");
    scanf("%d", &b);    
    printf("請輸入第三個整數? ");
    scanf("%d", &c);
    printf("請輸入第四個整數? ");
    scanf("%d", &d);
   
    printf("此式的餘數為%d\n", ((a+b)/2-(c+d)/2) % 2);
    system("PAUSE");
    return 0;
}
 
/*-------------------------------------------------------------*/
//TQC C Exam-107
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int a, b, c, d, e, f;
    printf("請輸入第一個整數? ");
    scanf("%d", &a);
    printf("請輸入第二個整數? ");
    scanf("%d", &b);    
    printf("請輸入第三個整數? ");
    scanf("%d", &c);
    printf("請輸入第四個整數? ");
    scanf("%d", &d);
    printf("請輸入第五個整數? ");
    scanf("%d", &e);
    printf("請輸入第六個整數? ");
    scanf("%d", f);
   
    printf("\n向右靠齊\n");
    printf("%10d %10d %10d\n", a, b, c);
    printf("%10d %10d %10d", d, e, f);
   
    printf("\n\n向左靠齊\n");
    printf("%10d %10d %10d\n", a, b, c);
    printf("%10d %10d %10d", d, e, f);
 
    system("PAUSE");
    return 0;
}
 
//107解答參考
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int a, b, c, d, e, f;
    printf("請輸入第一個整數? ");
    scanf("%d", &a);
    printf("請輸入第二個整數? ");
    scanf("%d", &b);    
    printf("請輸入第三個整數? ");
    scanf("%d", &c);
    printf("請輸入第四個整數? ");
    scanf("%d", &d);
    printf("請輸入第五個整數? ");
    scanf("%d", &e);
    printf("請輸入第六個整數? ");
    scanf("%d", &f);
   
    printf("\n向右靠齊\n");
    printf("%10d %10d %10d\n", a, b, c);
    printf("%10d %10d %10d", d, e, f);
   
    printf("\n\n向左靠齊\n");
    printf("%-10d %-10d %-10d\n", a, b, c);
    printf("%-10d %-10d %-10d", d, e, f);
 
    system("PAUSE");
    return 0;
}
 
/*-------------------------------------------------------------*/
//TQC C Exam-108
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    double a, b, c, d, e, f;
    printf("請輸入第一個浮點數: ");
    scanf("%f", &a);
    printf("請輸入第二個浮點數: ");
    scanf("%f", &b);    
    printf("請輸入第三個浮點數: ");
    scanf("%f", &c);
    printf("請輸入第四個浮點數: ");
    scanf("%f", &d);
    printf("請輸入第五個浮點數: ");
    scanf("%f", &e);
    printf("請輸入第六個浮點數: ");
    scanf("%f", &f);
   
    printf("\n向右靠齊\n");
    printf("%10f %10f %10f\n", a, b, c);
    printf("%10f %10f %10f\n", d, e, f);
   
    printf("\n\n向左靠齊\n");
    printf("%-10f %-10f %-10f\n", a, b, c);
    printf("%-10f %-10f %-10f\n", d, e, f);
   
    system("PAUSE");
    return 0;
}
 
//解答參考108
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    double a, b, c, d, e, f;
    printf("請輸入第一個浮點數: ");
    scanf("%lf", &a);
    printf("請輸入第二個浮點數: ");
    scanf("%lf", &b);  
    printf("請輸入第三個浮點數: ");
    scanf("%lf", &c);
    printf("請輸入第四個浮點數: ");
    scanf("%lf", &d);
    printf("請輸入第五個浮點數: ");
    scanf("%lf", &e);
    printf("請輸入第六個浮點數: ");
    scanf("%lf", &f);
   
    printf("\n向右靠齊\n");
    printf("%10.2f %10.2f %10.2f\n", a, b, c);
    printf("%10.2f %10.2f %10.2f\n", d, e, f);
   
    printf("\n\n向左靠齊\n");
    printf("%-10.2f %-10.2f %-10.2f\n", a, b, c);
    printf("%-10.2f %-10.2f %-10.2f\n", d, e, f);
   
    system("PAUSE");
    return 0;
}
 
/*-------------------------------------------------------------*/
//TQC C Exam-109
#include <stdio.h>
#include <stdlib.h>
 
int main () {
    int score;
   
    printf("請輸入您的分數: ");
    scanf("%d", &score);
    if (60<=score<=100) {
        printf("及格");
    }
    else {
        printf("不及格");
    }
   
    int x;
    printf("\n\n請輸入x值: ");
    scanf("%d", &x);
    if (x%2 = 0) {
         printf("%d是偶數", x);
    }
    else {
         printf("%d是奇數", x);
    }
 
    system("PAUSE");
    return 0;
}
 
//解答參考109
#include <stdio.h>
#include <stdlib.h>
 
int main () {
    int score;
   
    printf("請輸入您的分數: ");
    scanf("%d", &score);
    if (60<=score and score<=100) {
        printf("及格");
    }
    else {
        printf("不及格");
    }
   
    int x;
    printf("\n\n請輸入x值: ");
    scanf("%d", &x);
    if (x%2 == 0) {
         printf("%d是偶數", x);
    }
    else {
         printf("%d是奇數", x);
    }
 
    system("PAUSE");
    return 0;
}
 
/*-------------------------------------------------------------*/
//TQC C Exam-110
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int a, b, c;
    printf("請輸入變數a的值: ");
    scanf("%d", &a);
    printf("請輸入變數b的值: ");
    scanf("%d", &b);  
    printf("請輸入變數c的值: ");
    scanf("%d", &c);
   
    //判斷a是否大於等於60且小於100，若是，則輸出1, 否則，輸出0
    printf("%d\n", 60<=a || a<100);
   
    //先將b加1後，再除以10.
    printf("%f\n", b++/10.);
   
    //判斷a是否大於c，若是，則印出a，否則，印出c
    printf("%d\n", a>c?c:a);
   
    system("PAUSE");
    return 0;
}
 
//解答參考110
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int a, b, c;
    printf("請輸入變數a的值: ");
    scanf("%d", &a);
    printf("請輸入變數b的值: ");
    scanf("%d", &b);  
    printf("請輸入變數c的值: ");
    scanf("%d", &c);
   
    //判斷a是否大於等於60且小於100，若是，則輸出1, 否則，輸出0
    printf("%d\n", 60<=a && a<100?1:0);
   
    //先將b加1後，再除以10.
    printf("%f\n", (b+1)/10.);
   
    //判斷a是否大於c，若是，則印出a，否則，印出c
    printf("%d\n", a>c?a:c);
   
    system("PAUSE");
    return 0;
}
