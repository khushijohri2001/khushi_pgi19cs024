#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>

void main()
{
 int gd=DETECT,gm;
 int i,j,e,f;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");



 while(!kbhit())
 {
   //RAIN
   e= getmaxx();
   f= getmaxy();
   for(j=0; j<100; j++)
   {
     outtextxy(random(e),random(f),"|");

   }


 //house
 line(100,100,150,50);
 line(150,50,200,100);

 line(150,50,350,50);
 line(350,50,400,100);

 rectangle(100,100,200,200);
 rectangle(200,100,400,200);
 rectangle(130,130,170,200);
 rectangle(250,120,350,180);

 //color
 setfillstyle(2,20);
 floodfill(131,131,WHITE);
 floodfill(201,101,WHITE);

 setfillstyle(10,3);
 floodfill(181,101,WHITE);
 floodfill(150,52,WHITE);
 floodfill(163,55,WHITE);
 floodfill(251,121,WHITE);


   delay(50);
   cleardevice();
   }



 getch();
 closegraph();
 }
