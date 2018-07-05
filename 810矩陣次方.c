#include <stdio.h>
#include <stdlib.h>
#define MAX 3 //定義MAX為3

int main (){
    int i,j,k,s,m1[MAX][MAX],m2[MAX][MAX]; //宣告兩個2維陣列(矩陣)
    //使用者輸入矩陣一
    printf("請輸入矩陣一...\n");
    for(i=0;i<3;i++)
            for(j=0;j<3;j++){
                printf("m1[%d][%d]: ",i,j);
                scanf("%d",&m1[i][j]);
            }
  
    //使用者輸入矩陣二
    printf("請輸入矩陣二...\n");
        for(i=0;i<3;i++)
            for(j=0;j<3;j++){
                printf("m2[%d][%d]: ",i,j);
                scanf("%d",&m2[i][j]);
            }
    //分行列印出矩陣一
    printf("\n矩陣一\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf(" %2d",m1[i][j]);
        printf("\n");      
            }
    //分行列印出矩陣二
    printf("\n矩陣二\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf(" %2d",m2[i][j]);
        printf("\n");
            }
  
    //分行列印出矩陣二
    printf("\n矩陣三\n");
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){ 
        	
        	//計算m1矩陣的m2矩陣次方數並存為S 
			s=1;            	
        	for (k=0;k<m2[i][j];k++)  
        		s=s*m1[i][j];
        		       		
            printf(" %2d",s); //將次方S顯示 (S=m1矩陣的m2矩陣次方)
        } 
		printf("\n");
            }
    system("PAUSE") ;       
    return 0;
}
