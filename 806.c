//製作一個九九乘法表並加上星星的符號，請以下列的方式撰寫。
// a.在主程式中，有一個提示訊息詢問使用者要幾乘幾的乘法表(最多10)，
//   接續詢問在乘法表上的上、下要印出多少個星星(*)，
//   將這兩個數值當作實際參數，分別傳給印出乘法表的multiply()函數，
//   以及印出星星的函數printStar()函數。
// b.列印出展開的九九乘法表，上下為輸入星星的數目。
// c.若輸入的乘法表數值超過10，則不列出乘法表，僅印出星星。

//解答示範806
#include <stdio.h>
#include <stdlib.h>
int i,j;
void printStar(int b){
    for(i=0;i<b;i++)
        printf("*");
    printf("\n");
}
void multtiply(int a){
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++)
            printf("%2d*%2d=%2d ",i,j,i*j);
        printf("\n");
       
    }
}
int main () {
    int a,b;
    printf("請輸入您要幾乘幾的乘法表(最多10):");
    scanf("%d",&a);
    printf("請輸入您要多少個星星:");
    scanf("%d",&b);
    printStar(b);
    if(a<=10) multtiply(a);
    printStar(b);  
   
    return 0;
}