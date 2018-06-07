/*TQC C Exam-910(動態記憶體配置) 試題說明：
(1)利用動態記憶體配置的方式，試圖建立三個節點(node)，分別為a，b，c的鏈結串列。
(2)節點的資料型態為結構，包含三個項目，分別為學生姓名，分數及指向本身結構的指標。
*/

//910 解答參考
#include <stdio.h>
#include <stdlib.h>
 
struct student{
    char name[20];
    int score;
    struct student* next;
} *a,*b,*c,*current;
 
int main () {
//    struct student *a,*b,*c,*current;
    a=malloc(sizeof(struct student));
    printf("請輸入第一位學生的姓名: ");
    scanf("%s",&a->name);
    printf("分數: ");
    scanf("%d",&a->score);
    a->next=NULL;
    b=malloc(sizeof(struct student));
    printf("請輸入第二位學生的姓名: ");
    scanf("%s",&b->name);
    printf("分數: ");
    scanf("%d",&b->score);
    a->next=b;
    b->next=NULL;
    c=malloc(sizeof(struct student));
    printf("請輸入第三位學生的姓名: ");
    scanf("%s",&c->name);
    printf("分數: ");
    scanf("%d",&c->score);
    b->next=c;
    c->next=NULL;
    current=a;
    printf("\n輸出. . .\n");
    while(current!=NULL){
        printf("學生: %s\n",current->name);
        printf("分數: %d\n\n",current->score);
        current=current->next;
    }
    free(a);
    free(b);
    free(c);
    return 0;
}
