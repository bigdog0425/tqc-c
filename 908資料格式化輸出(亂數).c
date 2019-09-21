/*TQC C Exam-908(亂數) 試題說明：
利用亂數產生函數 srand()，產生100個介於1至1000的整數，將其印出。
印出時每10個一列，而且要給予適量的欄位寬，每個數字向右靠齊。
*/

//908 解答參考
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100 //定義產生的數字個數
#define RANGE 1000 //定義隨機數的最大範圍

void main(){
    int a[MAX],i,j;
    srand(time(NULL)); //隨機設定亂數種子
    //取得亂數並檢查是否重複
    for(i=0;i<MAX;i++){
        a[i]=(rand()%RANGE)+1;
        for(j=i-1;j>=0;j--)
            if(a[i]==a[j])
                i--;
    }
    //印出隨機亂數，印出時每10個一列，資料靠右
    for(i=0;i<MAX;i++){
        printf("%4d", a[i]);
		if(i%10==9) printf("\n"); //每10個數字換行
    }
}

