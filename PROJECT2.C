#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void main()
{
    int gd = DETECT, gm;
    int i, maxx, midy;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    maxx = getmaxx();
    midy = getmaxy()/2;

    for (i=0; i < maxx-220; i=i+5)
    {
	cleardevice();

	//Roads
	setcolor(WHITE);
	line(0, midy-30, maxx, midy-30);
	line(0, midy + 37, maxx, midy + 37);

	//Sun
	setfillstyle(SOLID_FILL, YELLOW);
	circle(400,75,40);
	floodfill(400,76,WHITE);

	if(i>=maxx/2 && i<maxx-250)
	{
	     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	     outtextxy(0,midy+45,"Brakes are applied");
	     outtextxy(maxx-250,midy+45,"<--Friction");
	}
	else if(i>maxx-250)
	{
	     settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	     outtextxy(0,midy+45,"CAR STOPS!!!");
	     outtextxy(maxx-250,midy+45,"<--Friction");
	     outtextxy(maxx-250,midy+60,"Force-->");
	     outtextxy(maxx-320,midy-65,"Weight | ^ Reaction");
	     outtextxy(maxx-320,midy-45,"       v |         ");
	}

	//Body of the Car
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL, CYAN);
	line(i, midy + 23, i, midy);
	line(i, midy, 40 + i, midy - 20);
	line(40 + i, midy - 20, 80 + i, midy - 20);
	line(80 + i, midy - 20, 100 + i, midy);
	line(100 + i, midy, 120 + i, midy);
	line(120 + i, midy, 120 + i, midy + 23);
	line(0 + i, midy + 23, 18 + i, midy + 23);
	arc(30 + i, midy + 23, 0, 180, 12);
	line(42 + i, midy + 23, 78 + i, midy + 23);
	arc(90 + i, midy + 23, 0, 180, 12);
	line(102 + i, midy + 23, 120 + i, midy + 23);
	line(28 + i, midy, 43 + i, midy - 15);
	line(43 + i, midy - 15, 57 + i, midy - 15);
	line(57 + i, midy - 15, 57 + i, midy);
	line(57 + i, midy, 28 + i, midy);
	line(62 + i, midy - 15, 77 + i, midy - 15);
	line(77 + i, midy - 15, 92 + i, midy);
	line(92 + i, midy, 62 + i, midy);
	line(62 + i, midy, 62 + i, midy - 15);
	floodfill(5 + i, midy + 22, YELLOW);

	//Wheels
	setcolor(BLUE);
	setfillstyle(SOLID_FILL, DARKGRAY);
	circle(30 + i, midy + 25, 9);
	circle(90 + i, midy + 25, 9);
	floodfill(30 + i, midy + 25, BLUE);
	floodfill(90 + i, midy + 25, BLUE);

	delay(100);
    }
    getch();
    closegraph();

}