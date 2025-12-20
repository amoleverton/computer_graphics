#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void flood_fill(int x,int y,int interior_color, int fcolor);
void main()
{
 int gd=DETECT,gm;
 int interior_color;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 setcolor(WHITE);
 line(300,100,200,200);
 line(300,100,400,200);
 line(200,200,400,200);
 interior_color = getpixel(310,120);
 flood_fill(310,120,interior_color,GREEN);
 getch();
 closegraph();
}
void flood_fill(int x, int y,int interior_color,int fcolor)
{
 if(getpixel(x,y)==interior_color)
 {
 delay(70);
 putpixel(x,y,fcolor);
 flood_fill(x+1,y,interior_color,fcolor);
 flood_fill(x,y+1,interior_color,fcolor);
 flood_fill(x-1,y,interior_color,fcolor);
 flood_fill(x,y-1,interior_color,fcolor);
}
}