/*TQC C Exam-908(亂數) 試題說明：
利用亂數產生函數 srand()，產生100個介於1至1000的整數，將其印出。
印出時每10個一列，而且要給予適量的欄位寬，每個數字向右靠齊。
*/

//908 解答參考
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define RANGE 1000
void main(){
    int a[MAX],i,j;
    srand(time(NULL));
    for(i=0;i<MAX;i++){
        a[i]=(rand()%RANGE)+1;
        for(j=i-1;j>=0;j--)
            if(a[i]==a[j])
                i--;
    }
    for(i=0;i<MAX;i++){
    if(i%10)
            printf("  %4d", a[i]);
        else
            printf("%4d", a[i]);
        if(i%10==9) printf("\n");
    }
}
