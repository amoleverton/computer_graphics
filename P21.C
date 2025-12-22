#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 int x1,y1,x2,y2,x3,y3;
 int new_x1,new_y1,new_x2,new_y2,new_x3,new_y3;
 int tx,ty;
 printf("\n Enter the coordinates of vertices of triangle : ");
 scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
 printf("\n Enter the translation distances tx and ty : ");
 scanf("%d%d",&tx,&ty);
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 new_x1 = x1+tx;
 new_y1 = y1+ty;
 new_x2 = x2+tx;
 new_y2 = y2+ty;
 new_x3 = x3+tx;
 new_y3 = y3+ty;
 setcolor(RED);
 line(x1,y1,x2,y2);
 line(x2,y2,x3,y3);
 line(x3,y3,x1,y1);
 setcolor(YELLOW);
 line(new_x1,new_y1,new_x2,new_y2);
 line(new_x2,new_y2,new_x3,new_y3);
 line(new_x3,new_y3,new_x1,new_y1);
 getch();
 closegraph();
}
