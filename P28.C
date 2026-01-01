#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;
 int x1,y1,x2,y2,z;
 int new_x1,new_y1,new_x2,new_y2,new_z;
 int sx,sy,sz;
 printf("\n Enter the coordinates of x1,y1,x2,y2 and z : ");
 scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&z);
 printf("\n Enter the values of scaling factors sx,sy and sz : ");
 scanf("%d%d%d",&sx,&sy,&sz);
 new_x1 = x1*sx;
 new_y1 = y1*sy;
 new_x2 = x2*sx;
 new_y2 = y2*sy;
 new_z = z*sz;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 setcolor(YELLOW);
 bar3d(x1,y1,x2,y2,z,1);
 setcolor(GREEN);
 bar3d(new_x1,new_y1,new_x2,new_y2,new_z,1);
 getch();
 closegraph();
}