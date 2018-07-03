//TQC C Exam-602解答示範
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main ()
{
    char str2[]="Apple iPod";
    char str4[]="Apple iPad";
    int n;
   
    n=strcmp(str2, str4);
    if (n>0) {
    printf("%s大於%s\n", str2, str4);
    } else if (n==0) {
    printf("%s等於%s\n", str2, str4);
 
    } else {
    printf("%s小於%s\n", str2, str4);
 
    }
 
    n=strncmp(str2, str4, 5);
    if (n>0) {
    printf("%s前五個字元大於%s前五個字元\n", str2, str4);
    } else if (n==0) {
    printf("%s前五個字元等於%s前五個字元\n", str2, str4);
       
    } else {
    printf("%s前五個字元小於%s前五個字元\n", str2, str4);
    }
    system("PAUSE");
    return 0;
}
 
//TQC C Exam-604
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
 
int main ()
{
    char ch, ch2;
    printf("請輸入一小寫的英文字母: ");
    ch=getche();
   
    //將下列的字元轉為大寫
    ch2=tolower(ch);
    printf("%c的大寫是%c", ch, ch2);
   
    /*
    while (ch != '\n') {
    continue;
    }
    */
    //將下列的字元轉為小寫
    printf("\n請輸入一大寫的英文字母: ");
    scanf("%c", &ch);
    ch2=toupper(ch);
    printf("%c的小寫是%c", ch, ch2);
   
    system("PAUSE");
    return 0;
}
 
//解答參考604
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
 
int main ()
{
    char ch, ch2;
    printf("請輸入一小寫的英文字母: ");
    ch=getche();
   
    //將下列的字元轉為大寫
    ch2=toupper(ch);
    printf("\n%c的大寫是%c", ch, ch2);
   
    /*
    while (ch != '\n') {
    continue;
    }
    */
    //將下列的字元轉為小寫
    printf("\n請輸入一大寫的英文字母: ");
    scanf("%c", &ch);
    ch2=tolower(ch);
    printf("%c的小寫是%c", ch, ch2);
   
    system("PAUSE");
    return 0;
}
 
/***********************************************/
//TQC C Exam-605
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main ()
{
    char ch, ch2;
    printf("請輸入一小寫的英文字母: ");
    scanf("%c", ch);
   
    //將下列的字元轉為大寫
    ch2=toUpper(ch);
    printf("%c的大寫是%c", ch, ch2);
   
   
     while (getchar() != 'NULL') {
         continue;
     }
     
   
    //將下列的字元轉為小寫
    printf("\n請輸入一大寫的英文字母: ");
    scanf("%c", ch);
    ch2=toLower(ch);
    printf("%c的小寫是%c", ch, ch2);
   
    system("PAUSE");
    return 0;
}
 
//解答參考605
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main ()
{
    char ch, ch2;
    printf("請輸入一小寫的英文字母: ");
    scanf("%c", &ch);
   
    //將下列的字元轉為大寫
    ch2=toupper(ch);
    printf("%c的大寫是%c", ch, ch2);
   
   
     while (getchar() == 'NULL') {
         continue;
     }
     
   
    //將下列的字元轉為小寫
    printf("\n請輸入一大寫的英文字母: ");
    scanf("%c", &ch);
    ch2=tolower(ch);
    printf("%c的小寫是%c\n", ch, ch2);
   
    system("PAUSE");
    return 0;
}
 
/***********************************************/
//TQC C Exam-606
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
int main ()
{
     FILE *fptr;
    char ch;
    fptr=fopen("character.dat", "w");
    printf("請輸入一字元: ");
    scanf("%c", &ch);
   
    //將一行多餘的字元丟掉
    while (getchar() != '\n') {
    continue;
    }
   
   
    while (ch != '*') {
    fprintf("%c", ch);
    printf("請輸入一字元: ");
    scanf("%c", &ch);
    //將一行多餘的字元丟掉
    while (getchar() != '\n') {
    continue;
    }  
    }
   
     fclose(*fptr);
   
    fptr=fopen("character.dat", "r");
    printf("\n以下是您輸入的資料:\n");
    while (fscanf("%c", ch) == EOF)
    {
    printf("%3c\n", ch);
    }
    system("PAUSE");
    return 0;
}
 
//解答參考606
#include <stdio.h>
#include <stdlib.h>
int main (){
 FILE *fptr;
 char ch;
 fptr=fopen("character.dat", "w");
 printf("請輸入一字元: ");
 scanf("%c", &ch);
 while (getchar() != '\n') {
  continue;
 }
 while (ch != '*') {
  fprintf(fptr,"%c",ch);
  printf("請輸入一字元: ");
  scanf("%c", &ch);
  //將一行多餘的字元丟掉
  while (getchar() != '\n') {
   continue;
  }
 }
 fclose(fptr);
 fptr=fopen("character.dat", "r");
 printf("\n以下是您輸入的資料:\n");
 while (fscanf(fptr,"%c", &ch) != EOF){
  printf("%3c\n", ch);
 }
 system("PAUSE");
 return 0;
}
/***********************************************/
//TQC C Exam-607
 
 
//解答參考607
 
/***********************************************/
//TQC C Exam-608
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    char str[12]="Apple iPhone 4";
    char sttr[]={'i', 'P', 'a', 'd'};
    char *pstr="Apple iPod";
 
    printf("str字串如下: %s\n", str);
    printf("sttr字串如下: %s\n", sttr);
 
    printf("pstr字串如下: %s\n", pstr);
    system("PAUSE");
    return 0;
}
 
//解答參考608
#include <stdio.h>
#include <stdlib.h>
int main ()
{
 char str[]="Apple iPhone 4";
 char sttr[]={'i', 'P', 'a', 'd','\0'};
 char *pstr="Apple iPod";
 printf("str字串如下: %s\n", str);
 printf("sttr字串如下: %s\n",sttr);
 printf("pstr字串如下: %s\n", pstr);
 system("PAUSE");
 return 0;
}
/***********************************************/
//TQC C Exam-609
 
//解答參考609
 
/***********************************************/
//TQC C Exam-610
 
//解答參考610
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
 FILE *fptr;
 char name[20];
 int score;
 fptr=fopen("score.dat", "w");
 printf("請輸入姓名: ");
 scanf("%s", name);
 printf("請輸入分數: ");
 scanf("%d", &score);
 while (score != -100) {
 fprintf(fptr,"%s %d", name, score);
 printf("請輸入姓名: ");
 scanf("%s", name);
 printf("請輸入分數: ");
 scanf("%d", &score);  
 }
 fclose(fptr);
 fptr=fopen("score.dat", "r");
 printf("\n以下是您輸入的資料:\n");
 while (fscanf(fptr,"%s %d", name, &score) !=EOF)
 printf("%-10s %3d\n", name, score);
 system("PAUSE");
 return 0;
}
