//502題目
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    struct  circle {
        int x, y;
        double radius;
    }
   
    double area;
    struct circle c1={10, 10, 2.5};
   
    area = radius*c1.radius*3.14159;
   
    printf("此圓的圓心為(%d, %d), 面積為%.2f\n", x, y, area);
    system("PAUSE");
    return 0;
}
 
 
//502解答示範
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    struct  circle {
        int x, y;
        double radius;
    };
   
    double area;
    struct circle c1={10, 10, 2.5};
   
    area = c1.radius*c1.radius*3.14159;
   
    printf("此圓的圓心為(%d, %d), 面積為%.2f\n", c1.x, c1.y, area);
    system("PAUSE");
    return 0;
}
 
==================================================
//504解答示範
#include <stdio.h>
#include <stdlib.h>
struct rect {
    int length, width;
};
   
int callarea(struct rect *pr)
{
    int area;
    area = pr->length * pr->width;
    return area;
}
 
int main ()
{
    int area;
    struct rect r1={20, 18};
   
    area = callarea(&r1);
   
    printf("此矩形的長為%d, 寬為%d, 面積為%d\n", r1.length, r1.width, area);
    system("PAUSE");
     return 0;
}
 
==================================================
//506解答示範
struct circle {
    int x, y;
    double radius;
};
 
double callarea(struct circle *pr);
 
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{  
    double area;
    struct circle c1={10, 10, 8.5};
   
    area = callarea(&c1);
   
    printf("此圓的圓心為(%d,　%d), 半徑為%.2f, 面積為%.2f\n",
                c1.x, c1.y, c1.radius, area);
    system("PAUSE");
     return 0;
}
 
double callarea(struct circle *pr)
{
    double area;
    area = pr->radius * pr->radius * 3.14159;
    return area;
}
 
==================================================
//508解答示範
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    struct  company {
    char name[10];
    int hour;
    double pay;
    };
   
    struct company employee[5];    
   
    double salary[5];
    int i;
   
    for (i=0; i<5; i++)
    {
          printf("請輸入第%d位員工的姓名: ", i+1);
          scanf("%s", &employee[i].name);
          printf("請輸入第%d位員工的工作時數: ", i+1);
          scanf("%d", &employee[i].hour);
          printf("請輸入第%d位員工一小時的工資: ", i+1);
          scanf("%lf", &employee[i].pay);
    }
   
    for(i=0; i<5; i++)
    {
          salary[i]=employee[i].hour*employee[i].pay;
          printf("%-10s 的薪水為　%.2lf\n",
               employee[i].name, salary[i]);
    }
 
    system("PAUSE");
     return 0;
}
 
==================================================
//510解答示範
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    struct  circle {
        int x, y;
        int radius;
        struct circle *next;
    };
   
    struct circle *a, *b, *c, *current;    
   
    a = (struct circle *)malloc(sizeof(struct circle));
    printf("請輸入第一個圓的圓心(x, y): ");
    scanf("%d %d", &a->x, &a->y);
    printf("請輸入第一個圓的半徑: ");
    scanf("%d", &a->radius);
    a->next = NULL;
   
    b = (struct circle *)malloc(sizeof(struct circle));
    printf("請輸入第二個圓的圓心(x, y): ");
    scanf("%d %d", &b->x, &b->y);
    printf("請輸入第二個圓的半徑: ");
    scanf("%d", &b->radius);
    b->next = NULL;
    a->next= b;
   
    c = (struct circle *)malloc(sizeof(struct circle));
    printf("請輸入第三個圓的圓心(x, y): ");
    scanf("%d %d", &c->x, &c->y);
    printf("請輸入第三個圓的半徑: ");
    scanf("%d", &c->radius);
    c->next=NULL;
    b->next=c;
   
    current=a;
    int i=1;
    while (current != NULL) {
          printf("第%d個圓的圓心為(%d, %d), 半徑為%d\n",        
                  i, current->x, current->y, current->radius);
          i++;
            current=current->next;   
    }
     free(a);
     free(b);
     free(c);  
    system("PAUSE");   
    return 0;
}
