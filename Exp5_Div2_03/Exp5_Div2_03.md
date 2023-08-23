Boundary Fill(4 Connected)


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bf(int,int,int,int);
void main()
{
 int gd = DETECT , gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 rectangle(50,50,100,100);
 bf(70,70,10,15);
 getch();
 closegraph();
 }

void bf(int x,int y,int fcolor,int bcolor)
{
 int ccolor = getpixel(x,y);
 if((ccolor!=fcolor) && (ccolor!=bcolor))
 {
  putpixel(x,y,fcolor);
  delay(5);
   bf(x,y-1,fcolor,bcolor);
   bf(x,y+1,fcolor,bcolor);
   bf(x-1,y,fcolor,bcolor);
   bf(x+1,y,fcolor,bcolor);
 }
}

Output : 
 





Boundary Fill(8 Connected)


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bf(int,int,int,int);
void main()
{
 int gd = DETECT , gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 rectangle(50,50,100,100);
 bf(70,70,10,15);
 getch();
 closegraph();
 }

void bf(int x,int y,int fcolor,int bcolor)
{
 int ccolor = getpixel(x,y);
 if((ccolor!=fcolor) && (ccolor!=bcolor))
 {
  putpixel(x,y,fcolor);
  delay(5);
   bf(x+1,y+1,fcolor,bcolor);
   bf(x+1,y,fcolor,bcolor);
   bf(x+1,y-1,fcolor,bcolor);
   bf(x,y-1,fcolor,bcolor);
   bf(x-1,y-1,fcolor,bcolor);
   bf(x+1,y,fcolor,bcolor);
   bf(x-1,y+1,fcolor,bcolor);
   bf(x,y+d1,fcolor,bcolor);
 }
}

Output : 
 



Flood Fill(4 connected)


#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void ff(int,int,int,int);

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 rectangle(50,50,100,100);
 ff(70,70,0,15);
 getch();
 closegraph();
}

void ff(int x,int y,int ocolor,int ncolor)
{
 if(getpixel(x,y)==ocolor)
 {
  putpixel(x,y,ncolor);
  delay(5);
  ff(x,y-1,ocolor,ncolor);
  ff(x,y+1,ocolor,ncolor);
  ff(x-1,y,ocolor,ncolor);
  ff(x+1,y,ocolor,ncolor);
 }
}

Output : 
 



Flood Fill (8 Connected)


#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void ff(int,int,int,int);

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 rectangle(50,50,100,100);
 ff(70,70,0,15);
 getch();
 closegraph();
}

void ff(int x,int y,int ocolor,int ncolor)
{
 if(getpixel(x,y)==ocolor)
 {
  putpixel(x,y,ncolor);
  delay(5);
  ff(x+1,y+1,ocolor,ncolor);
  ff(x+1,y,ocolor,ncolor);
  ff(x+1,y-1,ocolor,ncolor);
  ff(x,y-1,ocolor,ncolor);
  ff(x-1,y-1,ocolor,ncolor);
  ff(x+1,y,ocolor,ncolor);
  ff(x-1,y+1,ocolor,ncolor);
  ff(x,y+1,ocolor,ncolor);
 }
}


Output :
 


