#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>


void main()
{
int x1,y1,x2,y2,dy,dx,steps,xn,yn,i;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("Enter the values of x1 & y1\n");
scanf("%d %d",&x1,&y1);
printf("Enter the values of x2 &y2\n");
scanf("%d %d",&x2,&y2);


dx=x2-x1;
dy=y2-y1;


if(abs(dx)>abs(dy))
{
steps=abs(dx);
}
else
{
steps=abs(dy);
}
xn=dx/steps;
yn=dy/steps;




for(i=0;i<=steps;i++)
{
putpixel(x1,y1,RED);
x1=x1+xn;
y1=y1+yn;


}
getch();
closegraph();
}

