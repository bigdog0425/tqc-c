/*試題說明
輸入六個浮點數，並存於data陣列中，接著將此陣列的名稱及陣列個數當作參數，
傳送給計算平均數average函式之參數arr2及n，
之後再回傳結果給主程式，輸出此陣列每一個元素的值(取到小數點第2位)
及其平均數(取到小數點第2位)。
*/

//解答示範804
#include <stdio.h>
#include <stdlib.h>
#define MAX 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double average(double a[]){
    int i;
    double sum=0,avg;
    for(i=0;i<MAX;i++)
        sum+=a[i];
    avg=sum/MAX ;
    return(avg);
   
}
int main(int argc, char *argv[]) {
    int i;
    double a[MAX];
    for(i=0;i<MAX;i++){
        printf("請輸入第%d個浮點數:",i+1);
        scanf("%lf",&a[i]);
    }
    printf("\n您輸入的陣列值如下\n");
    for(i=0;i<MAX;i++)
        printf("data[%d]:%.2lf\n",i,a[i]);
    printf("\n平均:%.2lf",average(a));
   
    return 0;
}
