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
int num[10]; //建立全域變數(共用變數)

//泡泡排序函式
int sorting(int data2[],int n){ //引數：1.要排序的數字陣列 2.排序個數
    int i,j,temp; 
  //將最大的數字排到最後，執行N-1次
        for(i=0;i<n-1;i++)
          //比較目前數字是否比後一個數字大，若目前大於後一個數字則交換
            for (j=0;j<n-i-1;j++){
                if(data2[j]>data2[j+1]){
                  //前後數字交換
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

    //鍵盤輸入10個數字
    for(i=0;i<10;i++){
        printf("第 %d 個: ",i+1);
        scanf("%d",&num[i]);
    }
    //印出排序前的10個數字   
    printf("排序前: ");
    for(i=0;i<10;i++)
        printf(" %d",num[i]);
    printf("\n");
    sorting(num,i); //呼叫排序函式進行資料排序

    //印出排序前的10個數字
    printf("排序後: ");
    for(i=0;i<10;i++)
        printf(" %d",num[i]);
                     
    return 0; //回傳程式執行完畢
}
