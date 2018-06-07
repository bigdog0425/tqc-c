/*
試題說明：
1.輸入十個整數，並存於陣列 scoredata 中，接著將此陣列的名稱及陣列個數當作參數，
  傳送給名為 sorting 的排序函數之形式參數 data2 和 n。
  最後，請在 main() 主程式輸出此陣列排序前與排序後的元素值。
2.請在 sorting 函數中利用氣泡排序 (Bubble Sort) 的方法進行排序。
*/

//解答示範808
#include <stdio.h>
#include <stdlib.h>
int num[10];
 
int sorting(int data2[],int n){
    int i,j,temp;
        for(i=0;i<n-1;i++)
            for (j=0;j<n-i-1;j++){
                if(data2[j]>data2[j+1]){
                    temp=data2[j];
                    data2[j]=data2[j+1];
                    data2[j+1]=temp;
                }
            }
   
}
 
int main ()
{
    int i,j,c;
    printf("請輸入十個數...\n");
    for(i=0;i<10;i++){
        printf("第 %d 個: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("排序前: ");
    for(i=0;i<10;i++)
        printf(" %d",num[i]);
    printf("\n");
    sorting(num,i);
    printf("排序後: ");
    for(i=0;i<10;i++)
        printf(" %d",num[i]);
                     
    return 0;
}
