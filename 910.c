/*TQC C Exam-910(動態記憶體配置) 試題說明：
(1)利用動態記憶體配置的方式，試圖建立三個節點(node)，分別為a，b，c的鏈結串列。
(2)節點的資料型態為結構，包含三個項目，分別為學生姓名，分數及指向本身結構的指標。
(3)此三個節點所形成的鏈結串列如下:
   a.□□□  -> b.□□□ -> c.□□□ --NULL
(4)請以一個迴圈印出此鏈結串列每一節的內容
(5)程式完成正確釋放記憶體
*/

//910 解答參考
#include <stdio.h>
#include <stdlib.h>

//建立學生資料結構(姓名，分數，下一個學生指標) 
struct student{
    char name[20];
    int score;
    struct student *next;
} *a,*b,*c,*current; //建立a b c current四個學生結構指標
 
int main () {
//    struct student *a,*b,*c,*current;
    //建立a學生結構指標
    a=malloc(sizeof(struct student)); //取得a同學記憶體空間
    printf("請輸入第一位學生的姓名: ");
    scanf("%s",&a->name);
    printf("分數: ");
    scanf("%d",&a->score);
    a->next=NULL; //將a結尾(下一位同學)設定為無
 
    //建立b學生結構指標
    b=malloc(sizeof(struct student));
    printf("請輸入第二位學生的姓名: ");
    scanf("%s",&b->name);
    printf("分數: ");
    scanf("%d",&b->score);
    a->next=b; //將a結尾(下一位同學)設定為b
    b->next=NULL; //將b結尾(下一位同學)設定為無
    
    //建立c學生結構指標
    c=malloc(sizeof(struct student));
    printf("請輸入第三位學生的姓名: ");
    scanf("%s",&c->name);
    printf("分數: ");
    scanf("%d",&c->score);
    b->next=c; //將b結尾(下一位同學)設定為c
    c->next=NULL; //將c結尾(下一位同學)設定為無
 
    current=a; //設定當前指標為a
    printf("\n輸出. . .\n");
 
    //輸出三位學生資料
    while(current!=NULL){
        printf("學生: %s\n",current->name);
        printf("分數: %d\n\n",current->score);
        current=current->next;
    }
 
    free(a);//釋放記憶體
    free(b);//釋放記憶體
    free(c);//釋放記憶體
    return 0;
}
