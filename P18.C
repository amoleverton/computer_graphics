#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void boundary_fill(int x,int y,int bcolor,int fcolor);
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 setcolor(WHITE);
 line(200,200,300,300);
 line(300,300,220,470);
 line(220,470,170,470);
 line(170,470,100,300);
 line(100,300,200,200);
 boundary_fill(200,300,WHITE,YELLOW);
 getch();
 closegraph();
}

void boundary_fill(int x,int y,int bcolor,int fcolor)
{
 if(getpixel(x,y)!=bcolor)
 {
  delay(70);
  putpixel(x,y,fcolor);
  boundary_fill(x,y+1,bcolor,fcolor);
  boundary_fill(x+1,y,bcolor,fcolor);
  boundary_fill(x,y-1,bcolor,fcolor);
  boundary_fill(x-1,y,bcolor,fcolor);
 }
}
