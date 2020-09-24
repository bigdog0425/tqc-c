//題目302
  //程式輸入一個分數後，利用adjust函數，加以調整學生的分數。若分數大於等於60分，加5分，否則一律加10分。
#include <stdio.h>
#include <stdlib.h>
int adjust(int); //宣告一個副程式adjust(參數為整數)，回傳結果為整數
int main ()
{
    int score, final;
    printf("請輸入您的分數: ");
    scanf("%d", &score);
   
    adjust(score);
 
    printf("調整後的分數: %d", final);
    system("PAUSE");
    return 0;
}
 
int adjust(int score)
{
    if (score >= 60)
        temp = score + 10;
    else
        temp = score + 5;
 
    return temp;
}
 
 
//解答示範
#include <stdio.h>
#include <stdlib.h>
int adjust(int);
int main ()
{
    int score, final;
    printf("請輸入您的分數: ");
    scanf("%d", &score);
     
    printf("調整後的分數: %d", adjust(score));
    system("PAUSE");
    return 0;
}
 
int adjust(int score)
{
    if (score <= 60)
        score= score + 10;
    else
        score= score + 5;
 
    return score;
}
 
===================================
//TQC C Exam-304
  //本題為測驗儲存類別auto與static變數之差異。
#include <stdio.h>
#include <stdlib.h>
 
void callFun();
int main()
{
    int i;
    for (i=1; i<=5; i++) {
          callFun();
    }
 
    system("PAUSE");
    return 0;
}
 
void callFun()
{
    int ai=100, si=100;
    ai++;
    si++;
    printf("ai=%d, si=%d", ai, si);
}
 
//解答示範304
#include <stdio.h>
#include <stdlib.h>
 
void callFun();//宣告一副程式callfun，完成後無傳回值(void)
int main()
{
    int i;
   
    for (i=1; i<=5; i++) {
        callFun();
    }
 
    system("PAUSE");
    return 0;
}
 
void callFun()
{
    auto int ai=100;
    static int si=100;
    ai++;
    si++;
    printf("ai=%d, si=%d\n", ai, si);
}
 

/******************************************************/
//TQC C Exam-306
//將6個整數元素以設定的方式置於一個arr陣列，將其加總後予以印出。
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int arr[5]={10, 20, 30, 40, 50, 60}; 
    int i, total=0;
    for (i=1; i<6; i++) {
          total += arr[i];
    }
   
    printf("總和為%f\n", total);
    system("PAUSE");
    return 0;
}
 
//解答示範306
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int arr[6]={10,20,30,40,50,60}; //宣告一整數陣列，並給予初值
    int i, total=0;
    for (i=0; i<6; i++) {
          total=total+arr[i];
    }
   
    printf("總和為%d\n", total);
    system("PAUSE");
    return 0;
}

/******************************************************/
//TQC C Exam-308
  //以輸入的方式給予陣列的初始值，之後呼叫sum函數，加總陣列的每一個元素。
#include <stdio.h>
#include <stdlib.h>
 
double sum(double a[], int n);
int main ()
{
    double arr[5];
    int i, total;
   
    for(i=0; i<5; i++) {
          printf("請輸入陣列arr[%d]元素值: ", i);
          scanf("%lf", arr[i]);
    }
   
    for(i=0; i<5; i++)
          printf("arr[%d]=%.2f\n", i, arr[i]);
   
    total=sum(arr);
    printf("此陣列的總和為%.2f\n", total);
    system("PAUSE");
    return 0;
}
 
double sum(int a[], int n)
{
    int k;
    double tot;
    for(k=1; k<n; k++)
        tot += a[k];
    return tot;
}
 
//解答示範308
#include <stdio.h>
#include <stdlib.h>
 
double sum(double a[], int n); //宣告sum副程式(參數為雙精浮點數a[],整數n)，傳回值為雙精浮點數
int main ()
{
    double arr[5], total;
    int i;
   
    for(i=0; i<5; i++) {
        printf("請輸入陣列arr[%d]元素值: ", i);
        scanf("%lf", &arr[i]);
    }
   
    for(i=0; i<5; i++)
          printf("arr[%d]=%.2f\n", i, arr[i]);
   
    total=sum(arr,i);
    printf("此陣列的總和為%.2lf\n", total);
    system("PAUSE");
    return 0;
}
 
double sum(double a[], int n)
{
    int k;
    double tot;
    for(k=0; k<n; k++)
        tot += a[k];
    return tot;
}
 
/******************************************************/
//TQC C Exam-310
  //程式欲輸出陣列每一個元素的值，及其在記憶體的位址。
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int arr[5]={100, 200, 300, 400, 500};
    int i;
   
    printf("\n陣列元素的值如下:\n");
    for (i=1; i<5; i++)
    {
         printf("arr[%d]=%d\n", i, arr[i]);
    }
   
    printf("\n陣列元素的位址如下:\n");
    for (i=1; i<5; i++)
    {
         printf("&arr[%d]=%p\n", i, &arr[i]);
    }
   
    printf("\n陣列元素的位址如下:\n");
    for (i=1; i<5; i++)
    {
         printf("&arr[%d]=%p\n", i, &arr+i);
    }
   
    system("PAUSE");
    return 0;
}
 
//解答示範310
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int arr[5]={100, 200, 300, 400, 500};
    int i;
   
    printf("\n陣列元素的值如下:\n");
    for (i=0; i<5; i++)
    {
         printf("arr[%d]=%d\n", i, arr[i]); //顯示陣列內的內容(值)
    }
   
    printf("\n陣列元素的位址如下:\n");
    for (i=0; i<5; i++)
    {
         printf("&arr[%d]=%p\n", i, &arr[i]);//&arr[i]：以陣列編號的方式取得位址
    }
   
    printf("\n陣列元素的位址如下:\n");
    for (i=0; i<5; i++)
    {
         printf("&arr[%d]=%p\n", i, &arr+i);//&arr+i：以增加變數數量的方式取得位址
    }
   
    system("PAUSE");
    return 0;
}

/******************************************************/
//TQC C Exam-305
//CPD03-1.c的程式如下：
#include <stdio.h>
#include <stdlib.h>
int x, y;
 
int callTotal();
int main()
{
    int tot;
   
    printf("請輸入x, y的值: ");
    scanf("%d %d", &x, &y);
    tot=callTotal();
    printf("%d+%d=%d\n", x, y, tot);
   
    system("PAUSE");
    return 0;
}
 
//CPD03-2.c的程式如下：
int callTotal()
{
    int sum,x,y;
    sum = x+y;
    return sum;
}
 
//解答示範305
#include <stdio.h>
#include <stdlib.h>
int x, y;
 
int callTotal(int,int);
int main()
{
    int tot;
   
    printf("請輸入x, y的值: ");
    scanf("%d %d", &x, &y);
    tot=callTotal(x,y);
    printf("%d+%d=%d\n", x, y, tot);
   
    system("PAUSE");
    return 0;
}
 
int callTotal(int x,int y)
{
    int sum;
    sum = x+y;
    return sum;
}
 
/******************************************************/
//TQC C Exam-307
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    double arr2[2][3], total=0.0;
    int i, j;
   
    for (i=0; i<=2; i++)
        for (j=0; j<=3; j++) {
            printf("請輸入arr[%d][%d]的值: ", i, j);
            scanf("%f", arr2[i][j]);
            total += arr2[i][j];
        }
   
    printf("總和為%.2f\n", total);
    system("PAUSE");
    return 0;
}
 
//解答示範307
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    double arr2[2][3], total=0.0;
    int i, j;
   
    for (i=0; i<2; i++)
        for (j=0; j<3; j++) {
            printf("請輸入arr[%d][%d]的值: ", i, j);
            scanf("%lf", &arr2[i][j]);
            total += arr2[i][j];
        }
   
    printf("總和為%.2f\n", total);
    system("PAUSE");
    return 0;
}
 
/******************************************************/
//TQC C Exam-309
#include <stdio.h>
#include <stdlib.h>
 
int max(double a[], int n);
int main ()
{
    int arr[5], i, maximum;
   
    for(i=0; i<5; i++) {
         printf("請輸入陣列arr[%d]元素值: ", i);
         scanf("%d\n", &arr[i]);
    }
   
    for(i=0; i<5; i++)
         printf("arr[%d]=%d\n", i, arr[i]);
   
    maximum=max(arr, 5);
    printf("此陣列最大值為%d\n", maximum);
    system("PAUSE");
    return 0;
}
 
int max(int a[], int n)
{
    int k, M;
    M=a[0];
    for(k=1; k<n; k++){
        if (a[k]<M) {
            M=a[k];
        }
    }
    return M;
}
 
//解答示範309
#include <stdio.h>
#include <stdlib.h>
 
int max(int a[], int n);
int main ()
{
    int arr[5], i, maximum;
   
    for(i=0; i<5; i++) {
         printf("請輸入陣列arr[%d]元素值:", i);
         scanf("%d\n", &arr[i]);
    }
   
    for(i=0; i<5; i++)
         printf("arr[%d]=%d\n", i, arr[i]);
   
    maximum=max(arr, 5);
    printf("此陣列最大值為%d\n", maximum);
    system("PAUSE");
    return 0;
}
 
int max(int a[], int n)
{
    int k, M;
    M=a[0];
    for(k=1; k<n; k++){
        if (a[k]>M) {
            M=a[k];
        }
    }
    return M;
}
 
