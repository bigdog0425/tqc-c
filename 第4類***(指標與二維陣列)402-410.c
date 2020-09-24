//TQC C Exam-402解答示範
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int num=100;
    int *pointer;
    *pointer=num;
   
    printf("num=%d, *pointer=%d\n", num, *pointer);
    system("PAUSE");
    return 0;
}
 
/*-------------------------------------------------------------*/
//TQC C Exam-404解答示範
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int arr[2][3];
    int i, j;
   
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
              printf("請輸入陣列arr[%d][%d]元素值:\n", i, j);
              scanf("%d", &arr[i][j]);
        }
    }
   
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
              printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
        }
    }
   
    //另一種表示方法
    printf("\n另一種表示方法\n");
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
            printf("arr[%d][%d]=%d\n", i, j, *(arr[i]+j));
        }
    }
       
    //第三種表示方法
    printf("\n第三種表示方法\n");
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
            printf("arr[%d][%d]=%d\n", i, j, *(*(arr+i)+j));
        }
    }
   
    system("PAUSE");
    return 0;
}
 
/*-------------------------------------------------------------*/
//TQC C Exam-406參考解答
#include <stdio.h>
#include <stdlib.h>
 
void change(int *, int *);
 
int main ( )
{
    int i=100, j=200;
    printf("交換前i與j的值: \n");
    printf("i=%d, j=%d\n", i, j);
   
    change(&i, &j);
    printf("交換後i與j的值: \n");
    printf("i=%d, j=%d\n", i, j);
   
    system("PAUSE");
    return 0;
}
 
void change(int *x, int *y)
{
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
}
 
/*-------------------------------------------------------------*/
//TQC C Exam-408 參考解答
#include <stdio.h>
#include <stdlib.h>
 
int Max(int *p, int n)
{
        int i, maxi_value=*p;
        for (i=0; i<=n; i++) {
         if (maxi_value < *(p+i)) {
            maxi_value=*(p+i);
         }
    }
    return maxi_value;
}
 
int main ( )
{
    int arr[5];
    int maximum, i;
   
    for (i=0; i<5; i++) {
          printf("請輸入arr[%d]元素值: ", i);
          scanf("%d", &arr[i]);
    }
   
    printf("\n陣列的元素值分別如下:\n");
    for (i=0; i<5; i++) {
          printf("arr[%d]=%d\n", i, arr[i]);
    }
   
    maximum=Max(arr, 5);
    printf("\n此陣列的最大值為%d\n", maximum);
   
    system("PAUSE");
    return 0;
}
 
/*-------------------------------------------------------------*/
//TQC C Exam-410參考解答
#include <stdio.h>
#include <stdlib.h>
 
int Max(int p[][3], int x, int y)
{
        int i, j, maxi_value=p[0][0];
        for (i=0; i<x; i++) {
         for (j=0; j<y; j++) {
            if (maxi_value < p[i][j]) {
               maxi_value = p[i][j];
            }
         }
    }
    return maxi_value;
}
 
 
int main ( )
{
    int arr2[2][3];
    int maximum, i, j;
   
    for (i=0; i<2; i++) {
          for (j=0; j<3; j++) {
              printf("請輸入arr[%d][%d]: ", i, j);
              scanf("%d", &arr2[i][j]);
          }
    }
   
    printf("\n陣列之值如下:\n");
    for (i=0; i<2; i++) {
          for (j=0; j<3; j++) {
              printf("arr[%d][%d]=%d\n", i, j, arr2[i][j]);
    }
    }
   
    maximum=Max(arr2, 2, 3);
    printf("\n此陣列的最大值為%d\n", maximum);
   
    system("PAUSE");
    return 0;
}
