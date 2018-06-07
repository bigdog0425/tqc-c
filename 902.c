/*試題說明：
(1)撰寫一個大樂透程式，從1至49的數字中，隨機產生6個數字。
(2)此6個數字不可重複。
*/

//902 解答參考
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 6
#define RANGE 49
void main(){
    int a[MAX],i,j;
    srand(time(NULL));
    for(i=0;i<MAX;i++){
        a[i]=(rand()%RANGE)+1;
        for(j=i-1;j>=0;j--)
            if(a[i]==a[j])
                i--;
    }
    printf("數字:");
    for(i=0;i<MAX;i++)
        printf(" %d", a[i]);
}
