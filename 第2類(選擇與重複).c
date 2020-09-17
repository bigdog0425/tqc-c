/*202題目
1.輸入一個分數，判斷此分數若大於60分，則加10分，否則加5分，最後列印出調整後的分數。
2.題目已提供程式碼片段，執行結果如參考畫面，程式碼有語法、邏輯或其他項目上的錯誤，請全數修正。

請輸入分數：70
調整後的分數為80
*/

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int score, adjust;
    printf("請輸入分數:");
    scanf("%d", score);
    if (score >= 60);
        adjust = score+10;
    else
        adjust = score+5;
    printf("調整後的分數為%d", adjust);
   
    system("PAUSE");
    return 0;
}
 
//202解答示範
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int score, adjust;
    printf("請輸入分數:");
    scanf("%d", &score);
    if (score >= 60)
        adjust = score+10;
    else
        adjust = score+5;
    printf("調整後的分數為%d", adjust);
   
    system("PAUSE");
    return 0;
}
 
=================================================
//TQC C Exam-204：
 //利用switch...case判斷您的身分，輸入U代表大學生，M代表研究生、P代表博士生。
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    char ch;
   
    printf("請問您的身份:以字母表示分別如下：\nU:表示大學生，M:表示研究生，P:表示博士生 ");
    scanf("%c", ch);
    switch (ch) {
        case U:
            printf("您是大學生\n");
        case M:
            printf("您是研究生\n");
        case P:
            printf("您是博士生\n");
        default
            printf("您輸入身份不正確\n");
    }
    system("PAUSE");
        return 0;
}
 
//204參考解答
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    char ch;
   
    printf("請問您的身份:以字母表示分別如下：\nU:表示大學生，M:表示研究生，P:表示博士生 ");
    scanf("%c", &ch);
    switch (ch) {
        case 'U':{
            printf("您是大學生\n");
            break;
        }
        case 'M':{
            printf("您是研究生\n");
            break;
        }
 
        case 'P':{
            printf("您是博士生\n");
            break;
        }
               
        default:
            printf("您輸入身份不正確\n");
    }
    system("PAUSE");
        return 0;
}
 
=================================================
//TQC C Exam-206：
 //使用while迴圈，計算1加到100的總和。
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int i=1, total=0;
   while (i <= 100)
{
        i++;
        total += i;
   }
   printf("1加到100的總和:%d\n", total);
    system("PAUSE");
   return 0;
}
 
 
//206參考解答
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int i=1, total=0;
    while (i <= 100){
        total += i;
        i++;
    }
    printf("1加到100的總和:%d\n", total);
    system("PAUSE");
    return 0;
}
 
=================================================
//TQC C Exam-208
 //使用for迴圈，計算1到100的偶數和。
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int i, total;
    for (i=1; i<100; i++);
        total += i;
   
    printf("1到100的偶數和: %d\n", total);
    system("PAUSE");
     return 0;
}
 
//208參考解答
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int i, total=0;
    for (i=2; i<=100; i+=2)
        total += i;
 
    printf("1到100的偶數和: %d\n", total);
    system("PAUSE");
    return 0;
}
 
=================================================
//TQC C Exam-210：
 //使用do....while迴圈，計算1到100的偶數和。
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int i=1, total;
    do {
    i+=2;
    total += i;
    } while (i<100);
   
     printf("1到100的偶數和: %d\n", total);
    system("PAUSE");
     return 0;
}
 
//210參考解答
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int i=2, total=0;
    do {
    total += i;
    i+=2;
    } while (i<=100);
   
    printf("1到100的偶數和: %d\n", total);
    system("PAUSE");
    return 0;
}


=================================================
//TQC C Exam-205
 //利用switch...case和for迴圈，判斷每一候選人的得票數及廢票，假設有十個人投票。
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
     int i,  num;
    int num1=0, num2=0, num3=0, num4=0, others=0;
   
    for (i=1; i<10; i++) {
    printf("\n班長候選人如下:\n1: 小王\n2: 小李\n3: 小蔡\n4: 小陳\n");
     printf("請問您要選哪位候選人(1-4):");
    scanf("%d", &num);
    switch (num) {
             case 1:
                num1++;
                break;
             case 2:
                num1++;
                break;
             case 3:
                num2++;
                break;
             case 4:
                num4++;
                break;
             default:
                printf("您輸入的號碼不正確\n");
         }
         printf("目前得票數\n小王:%d, 小李:%d, 小蔡:%d, 小陳:%d, 廢票:%d\n",
               num1, num2, num3, num4, others);
    }
 
    system("PAUSE");
      return 0;
}
 
//205參考解答
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int i,  num;
    int num1=0, num2=0, num3=0, num4=0, others=0;
   
    for (i=1; i<10; i++) {
        printf("\n班長候選人如下:\n1: 小王\n2: 小李\n3: 小蔡\n4: 小陳\n");
        printf("請問您要選哪位候選人(1-4):");
        scanf("%d", &num);
        switch (num) {
             case 1:{
                num1++;
                break;
             }
               
             case 2:{
                num2++;
                break;
             }
               
             case 3:{
                num3++;
                break;
             }
               
             case 4:{
                num4++;
                break;
             }
 
                   
             default:{
                printf("您輸入的號碼不正確\n");
                others++;
             }
               
         }
         printf("目前得票數\n小王:%d, 小李:%d, 小蔡:%d, 小陳:%d, 廢票:%d\n",
               num1, num2, num3, num4, others);
    }
 
    system("PAUSE");
    return 0;
}

=================================================
//TQC C Exam-207
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int i=2, total=0;
   
   while (i < 100)
    {
     total += i;
     i++;
}
   
    printf("1加到100的總和:%d\n", total);
    system("PAUSE");
    return 0;
}
 
//207參考解答
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int i=1, total=0;
   
   while (i <= 100)
    {
     total += i;
     i++;
}
   
    printf("1加到100的總和:%d\n", total);
    system("PAUSE");
    return 0;
}
  
=================================================
//TQC C Exam-209
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int i=1, total;
    do {
    i++;
    total += i;
    } while (i<=100)
   
    printf("1到100的奇數和: %d\n", total);
    system("PAUSE");
     return 0;
}
 
//209參考解答
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int i=1, total=0;
    do {
        total += i;
        i+=2;
    } while (i<=100);
   
    printf("1到100的奇數和: %d\n", total);
    system("PAUSE");
     return 0;
}
 
