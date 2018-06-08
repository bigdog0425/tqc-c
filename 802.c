/*試題說明
1.利用while迴圈撰寫一個程式，讓使用者輸入職稱代號，選擇1.[教授]、
  2.[副教授]、3.[助理教授]或者4.[都不是]，5.[結束]，則結束此迴圈程式，
  如果輸入其他職稱代號，則顯示[您的職稱沒有在這選項內]。
2.請以switch...case作為選擇敘述，若選擇5.[結束]，則結束此迴圈程式。
*/

//解答示範802
#include <stdio.h> //導入io函數集
#include <stdlib.h> //導入常用基本函式庫
 
int main() { 
    int num; //宣告整數變數num，用來儲存使用者輸入職稱選項
    while(1){ //不斷執行迴圈
        printf("(1)教授\n(2)副教授\n(3)助理教授\n(4)都不是\n(5)結束\n");
        printf("請輸入您的職稱代號:");
        scanf("%d",&num); //儲存職稱代號到 num
        if(num==5) break; //當輸入選項為5時結束迴圈
        
        //依選項顯示 Ex:1.[教授]、2.[副教授]、3.[助理教授]、4.[都不是]、5.[結束]
        switch(num){ 
            case 1:
                printf("\n您的職稱是教授\n");
                break; //離開switch
            case 2:
                printf("\n您的職稱是副教授\n");
                break; //離開switch
            case 3:
                printf("\n您的職稱是助理教授\n");
                break; //離開switch
            case 4:
                printf("\n您的職稱沒有在這選項內\n");
                break; //離開switch
            default:
                printf("\n您的職稱沒有在這選項內\n");
        }
    }
   
    return 0;
}
