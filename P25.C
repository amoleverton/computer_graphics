#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 int x1,y1,x2,y2,z;
 int new_x1,new_y1,new_x2,new_y2;
 int tx,ty;
 printf("\n Enter the coordinates of x1,y1,x2,y2 and z : ");
 scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&z);
 printf("\n Enter the values of translation distances tx and ty : ");
 scanf("%d%d",&tx,&ty);
 new_x1 = x1+tx;
 new_y1 = y1+ty;
 new_x2 = x2+tx;
 new_y2 = y2+ty;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 setcolor(YELLOW);
 bar3d(x1,y1,x2,y2,z,1);
 setcolor(GREEN);
 bar3d(new_x1,new_y1,new_x2,new_y2,z,1);
 getch();
 closegraph();
}