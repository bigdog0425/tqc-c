//�s�@�@�ӤE�E���k��å[�W�P�P���Ÿ��A�ХH�U�C���覡���g�C
// a.�b�D�{�����A���@�Ӵ��ܰT���߰ݨϥΪ̭n�X���X�����k��(�̦h10)�A
//   ����߰ݦb���k��W���W�B�U�n�L�X�h�֭ӬP�P(*)�A
//   �N�o��Ӽƭȷ�@��ڰѼơA���O�ǵ��L�X���k��multiply()��ơA
//   �H�ΦL�X�P�P�����printStar()��ơC
// b.�C�L�X�i�}���E�E���k��A�W�U����J�P�P���ƥءC
// c.�Y��J�����k��ƭȶW�L10�A�h���C�X���k��A�ȦL�X�P�P�C

//�ѵ��ܽd806
#include <stdio.h>
#include <stdlib.h>
int i,j;
void printStar(int b){
    for(i=0;i<b;i++)
        printf("*");
    printf("\n");
}
void multtiply(int a){
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++)
            printf("%2d*%2d=%2d ",i,j,i*j);
        printf("\n");
       
    }
}
int main () {
    int a,b;
    printf("�п�J�z�n�X���X�����k��(�̦h10):");
    scanf("%d",&a);
    printf("�п�J�z�n�h�֭ӬP�P:");
    scanf("%d",&b);
    printStar(b);
    if(a<=10) multtiply(a);
    printStar(b);  
   
    return 0;
}