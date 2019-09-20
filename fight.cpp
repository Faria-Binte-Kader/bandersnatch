#include<graphics.h>
#include<stdio.h>
#include<conio.h>

main()
{    int i, j = 0,k;

    int gd=DETECT,gm;

    initgraph(&gd, &gm,NULL);
    DWORD screenwidth= GetSystemMetrics(SM_CXSCREEN);
    DWORD screenheight= GetSystemMetrics(SM_CXSCREEN);
    initwindow(screenwidth, screenheight, "", -2,-3);

    /* for( i = 0 ; i <= 160 ; i = i + 10 )
   {setcolor(RED);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   outtextxy(150,330-i,"Welcome to Bandersnatch");
   delay(20);
   if(i==160)
    break;
   cleardevice();}
   delay(10);
for( j = 0 ; j<= 160 ; j = j + 10)
   {setcolor(RED);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   outtextxy(150,370-i,"Let us start!");
   delay(10);
   if(i==160)
    break;
   cleardevice();}
delay(5000);
cleardevice();*/

    setcolor(GREEN);      //Dragonmanstart
    rectangle(200,200,300,300);
    int points[]= {200,200,120,250,200,300,200,200};
    drawpoly(4,points);
    int points1[]= {300,200,380,250,300,300,300,200};
    drawpoly(4,points1);
    line(170,170,200,200);
    line(330,170,300,200);
    line(330,170,170,170);
    line(200,200,250,250);
    line(300,200,250,250);
    line(170,170,170,130);
    line(170,130,220,170);
    line(330,130,330,170);
    line(330,130,280,170);
    rectangle(200,300,240,340);
    rectangle(260,300,300,340); //dragonmanend
 delay(20);
    setcolor(WHITE); //playerstart
    circle(600,450,70);
    line(530,450,600,470);
    line(600,470,690,470);
    line(690,470,670,450);
    line(530,520,670,520);
    line(530,520,510,530);
    line(510,530,510,650);
    line(530,520,530,650);
    line(670,520,510,630);
    line(670,540,670,520);
    line(670,580,670,520);
    line(670,580,530,690);
    int points2[]={510,630,500,670,530,690,510,630};
    drawpoly(4, points2);
    line(670,560,700,540);
    line(670,550,700,530);
    line(700,540,700,530);
    //setfillstyle(SOLID_FILL, YELLOW);
    //floodfill(600,470,YELLOW);



   for(i=0,j=0; i<=300; i=i+10,j=j+5)
        {setcolor(RED);
    circle(250+i,250+i,20+j);
    setfillstyle(SOLID_FILL, RED);
    floodfill(250+i,250+i,RED);
    delay(50);
    if(i==300)
        break;
        k=j;
        }
        delay(30);
        cleardevice();

        setcolor(GREEN);      //Dragonmanstart
    rectangle(200,200,300,300);
    int points3[]= {200,200,120,250,200,300,200,200};
    drawpoly(4,points3);
    int points5[]= {300,200,380,250,300,300,300,200};
    drawpoly(4,points5);
    line(170,170,200,200);
    line(330,170,300,200);
    line(330,170,170,170);
    line(200,200,250,250);
    line(300,200,250,250);
    line(170,170,170,130);
    line(170,130,220,170);
    line(330,130,330,170);
    line(330,130,280,170);
    rectangle(200,300,240,340);
    rectangle(260,300,300,340); //dragonmanend
delay(500);
setcolor(WHITE); //playerstart
    circle(600,450,70);
    line(530,450,600,470);
    line(600,470,690,470);
    line(690,470,670,450);
    line(530,520,670,520);
    line(530,520,510,530);
    line(510,530,510,650);
    line(530,520,530,650);
    line(670,520,510,630);
    line(670,540,670,520);
    line(670,580,670,520);
    line(670,580,530,690);
    int points4[]={510,630,500,670,530,690,510,630};
    drawpoly(4, points4);
    line(670,560,700,540);
    line(670,550,700,530);
    line(700,540,700,530);

    /*for(i=300; i>=0,k>=0; i=i-10,k=k-5)//for taking super power
        {setcolor(RED);
    circle(550-i,550-i,320-k);
   // setfillstyle(SOLID_FILL, RED);
    //floodfill(550-i,500-i,RED);
    delay(50);
    if(i==0)
        break;
    }*/


    getch();
}
