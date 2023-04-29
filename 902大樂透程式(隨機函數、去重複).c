/*TQC C Exam-902(大樂透)試題說明：
(1)撰寫一個大樂透程式，從1至49的數字中，隨機產生6個數字。
(2)此6個數字不可重複。
*/

//902 解答參考
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //使用time函數
#define MAX 6 //定義最大隨機數字個數
#define RANGE 49 //定義最大隨機數字範圍

void main(){
    int a[MAX],i,j; //a[MAX]：存放隨機數的陣列
    srand(time(NULL)); //隨機產生亂數種子
    
    //取出不重複的6個數字
    for(i=0;i<MAX;i++){
        a[i]=(rand()%RANGE)+1; //隨機取出(0~48)+1的數字，既隨機取出1~49數字

        //去除重複數字：對每一個已經產生的陣列數字做檢查，如有重複則回到上一個數字重取
        for(j=i-1;j>=0;j--) 
            if(a[i]==a[j])
                i--;
    }
    //列印亂數取出的6個數字
    printf("數字:");
    for(i=0;i<MAX;i++)
        printf(" %d", a[i]);
}
