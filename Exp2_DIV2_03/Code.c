#include<stdio.h>
#include<conio.h>
#include<graphics.h>


void main()
{
int x,y,dx,dy,p,x1,x2,y1,y2;
int gd=DETECT , gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the value for x1 and x2 \n");
scanf("%d %d ",&x1,&x2);
printf("Enter the value for y1 and y2 \n");
scanf("%d %d",&y1,&y2);


dx = x2 - x1;
dy = y2 - y1;
p = 2*dy - dx;


while(x<=x2)
{
 putpixel(x1,y1,BLUE);
 x++;
 if(p<0)
 {
  p = p + 2*dy;
 }
 else
 {
  y++;
  p = p + 2*dy - 2*dx;
 }
}
getch();
closegraph();
}
