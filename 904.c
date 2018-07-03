/*試題說明：
TQC C Exam-904(成績檔案讀取)
1.開啟CPD09-1.c ，利用fprintf函數，將下列學生的姓名及其對應的C語言分數，寫入專案資料夾的目錄下 score.dat檔案。
2.可以利用某一條件，讓寫入的動作結束，如當輸入分數為負的分數時，則結束寫入動作. 資料得輸入樣本如下:
    請輸入學生的姓名(分數輸入負分的分數時結束):Peter
    請輸入此學生C語言分數:90
    請輸入學生的姓名(分數輸入負分的分數時結束):Mary
    請輸入此學生C語言分數:80
    請輸入學生的姓名(分數輸入負分的分數時結束):Nancy
    請輸入此學生C語言分數:88
    請輸入學生的姓名(分數輸入負分的分數時結束):John
    請輸入此學生C語言分數:-2
(3)開啟CPD09.2c，將專案資料夾目錄下 score.dat檔案內容，利用fscanf將其讀出，再以printf印出。
*/
/*
檔案使用四步驟：
1.宣告檔案指標(只需宣告一次)
2.開啟檔案為 w寫入/r讀取 模式
3.從檔案將資料讀出/把資料寫入檔案內
4.關閉檔案指標
*/
//904 解答參考
//CPD09-1.c
#include<stdlib.h>
#include<stdio.h>
int main(){
    FILE *f; //宣告檔案指標f
    char name[20];
    int score;
    f=fopen("score.dat", "w"); //開啟檔案為寫入模式
    while(1){
    printf("請輸入學生的姓名(分數輸入負的分數時結束):");
    scanf("%s",&name);
    printf("請輸入此學生C語言分數:");
    scanf("%d",&score);
    if(score<0) break;
    fprintf(f,"%s %d",name,score); //將name，score資料寫入檔案內
 }
    fclose(f);//關閉檔案(指標)
 return 0;
}
 
//CPA09-2.c
#include<stdlib.h>
#include<stdio.h>
int main(){
    FILE *f;//宣告檔案指標f
    char name[20];
    int score;
    f=fopen("score.dat", "r"); //開啟檔案為讀取模式
    
    //依序從檔案讀出資料並顯示在螢幕
    while(fscanf(f,"%s %d",name,&score)!=EOF) //從檔案將name，score資料讀出
    printf("%s的C語言分數是%d\n",name,score); //顯示姓名，分數
    
    fclose(f); //關閉檔案
 return 0;
}
