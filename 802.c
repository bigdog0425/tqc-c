/*
1.利用while迴圈撰寫一個程式，讓使用者輸入職稱代號，選擇1.[教授]、
  2.[副教授]、3.[助理教授]或者4.[都不是]，5.[結束]，則結束此迴圈程式，
  如果輸入其他職稱代號，則顯示[您的職稱沒有在這選項內]。
2.請以switch...case作為選擇敘述，若選擇5.[結束]，則結束此迴圈程式。
*/

//解答示範802
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int num;
    while(1){
        printf("(1)教授\n(2)副教授\n(3)助理教授\n(4)都不是\n(5)結束\n");
        printf("請輸入您的職稱代號:");
        scanf("%d",&num);
        if(num==5) break;
        switch(num){
            case 1:
                printf("\n您的職稱是教授\n");
                break;
            case 2:
                printf("\n您的職稱是副教授\n");
                break;
            case 3:
                printf("\n您的職稱是助理教授\n");
                break;
            case 4:
                printf("\n您的職稱沒有在這選項內\n");
                break;
            default:
                printf("\n您的職稱沒有在這選項內\n");
        }
    }
   
    return 0;
}
