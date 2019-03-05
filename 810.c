/*試題說明
1.有二個 3*3 二維陣列的矩陣，請先輸入這兩個矩陣的資料，將此兩個矩陣相乘計算乘積，
  並將乘積置於矩陣三，最後印出這三個矩陣。
*/

//解答示範810
#include <stdio.h>
#include <stdlib.h>
#define MAX 3 //定義MAX為3

int main (){
    int i,j,m1[MAX][MAX],m2[MAX][MAX]; //宣告兩個2維陣列(矩陣)
    //使用者輸入矩陣一
    printf("請輸入矩陣一...\n");
    for(i=0;i<3;i++)
            for(j=0;j<3;j++){
                printf("m1[%d][%d]: ",i,j);
                scanf("%d",&m1[i][j]);
            }
  
    //使用者輸入矩陣二
    printf("請輸入矩陣二...\n");
        for(i=0;i<3;i++)
            for(j=0;j<3;j++){
                printf("m2[%d][%d]: ",i,j);
                scanf("%d",&m2[i][j]);
            }
    //分行列印出矩陣一
    printf("\n矩陣一\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf(" %2d",m1[i][j]);
        printf("\n");      
            }
    //分行列印出矩陣二
    printf("\n矩陣二\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf(" %2d",m2[i][j]);
        printf("\n");
            }
  
    //分行列印出矩陣三
    printf("\n矩陣三\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf(" %2d",m1[i][j]*m2[i][j]); //將矩陣1*矩陣2顯示為矩陣3
        printf("\n");
            }
    return 0;
}
