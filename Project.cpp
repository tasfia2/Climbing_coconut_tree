#include<bits/stdc++.h>
#include <graphics.h>
using namespace std;
int a, b, c, d, e, f, g, h;


void background();
void background2();

int main()
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, " ");

    background();

    // Man climbing animation.
    d = 0; // vertical position
    for (c = 0; c < 75; c++)
    {
        // Drawing the man climbing
        setcolor(WHITE);
        circle(290, 325 - d, 7);
        circle(294, 323 - d, 1);
        line(292, 328 - d, 294, 328 - d);
        line(290, 333 - d, 290, 338 - d);
        line(293, 333 - d, 293, 338 - d);
        rectangle(287, 340 - d, 294, 355 - d);

        // Leg animation
        line(287, 355 - (d - 1), 305, 370 - (d - 1));
        line(294, 355 - (d - 1), 304, 366 - (d - 1));

        if (c % 3 == 0)
        {
            // Hand animation
            line(289, 345 - d, 305, 340 - d);
            line(290, 342 - d, 305, 338 - d);
            delay(200);
            line(289, 345 - d, 305, 340 - d + 3);
            line(290, 342 - d, 305, 338 - d + 3);
            delay(200);
        }

        // Leg animation
        line(287, 355 - d, 305, 370 - d);
        line(294, 355 - d, 304, 366 - d);

        d = d + 2;
        delay(10);
        cleardevice();
        background();
    }

    background();
    setcolor(WHITE);
    // Man top
    circle(290, 325 - d, 7);
    circle(294, 323 - d, 1);
    line(292, 328 - d, 294, 328 - d);
    line(290, 333 - d, 290, 338 - d);
    line(293, 333 - d, 293, 338 - d);
    rectangle(287, 340 - d, 294, 355 - d);

    // Leg
    line(287, 355 - (d - 1), 305, 370 - (d - 1));
    line(294, 355 - (d - 1), 304, 366 - (d - 1));

    // hand
    line(289, 345 - d, 305, 347 - d);
    line(290, 342 - d, 288, 321 - d);

    delay(500);
    e = 0;
    // Falling coconut
    for (c = 0; c < 90; c++)
    {
        setcolor(GREEN);
        circle(285, 160 + e, 10);
        floodfill(286, 162 + e, GREEN);
        setcolor(BROWN);
        line(285, 150 + e, 276, 145 + e);
        line(285, 150 + e, 293, 145 + e);

        e = e + 3;
        delay(20);
        cleardevice();
        background2();

        setcolor(WHITE);
        // Man top
        circle(290, 325 - d, 7);
        circle(294, 323 - d, 1);
        line(292, 328 - d, 294, 328 - d);
        line(290, 333 - d, 290, 338 - d);
        line(293, 333 - d, 293, 338 - d);
        rectangle(287, 340 - d, 294, 355 - d);

        // Leg
        line(287, 355 - (d - 1), 305, 370 - (d - 1));
        line(294, 355 - (d - 1), 304, 366 - (d - 1));

        // Hand
        line(289, 345 - d, 305, 340 - d);
        line(290, 342 - d, 305, 338 - d);
    }

    setcolor(GREEN);
    circle(285, 160 + e, 10);
    floodfill(286, 162 + e, GREEN);
    setcolor(BROWN);
    line(285, 150 + e, 276, 145 + e);
    line(285, 150 + e, 293, 145 + e);
    delay(1000);

    // Man coming down
    f = 0;
    for (c = 0; c < 60; c++)
    {
        setcolor(WHITE);
        // Man top
        circle(290, 325 - d + f, 7);
        circle(294, 323 - d + f, 1);
        line(292, 328 - d + f, 294, 328 - d + f);
        line(290, 333 - d + f, 290, 338 - d + f);
        line(293, 333 - d + f, 293, 338 - d + f);
        rectangle(287, 340 - d + f, 294, 355 - d + f);

        // Leg
        line(287, 355 - d + f, 305, 370 - d + f);
        line(294, 355 - d + f, 304, 366 - d + f);

        // Hand
        line(289, 345 - d + f, 305, 340 - d + f);
        line(290, 342 - d + f, 305, 338 - d + f);
        f = f + 3;
        delay(20);
        cleardevice();
        setcolor(GREEN);
        circle(285, 160 + e, 10);
        floodfill(286, 162 + e, GREEN);
        setcolor(BROWN);
        line(285, 150 + e, 276, 145 + e);
        line(285, 150 + e, 293, 145 + e);
        background2();
    }

    setcolor(WHITE);
    // Man reached down
    circle(290, 325 - d + f, 7);
    circle(294, 323 - d + f, 1);
    line(292, 328 - d + f, 294, 328 - d + f);
    line(290, 333 - d + f, 290, 338 - d + f);
    line(293, 333 - d + f, 293, 338 - d + f);
    rectangle(287, 340 - d + f, 294, 355 - d + f);

    // Leg
    line(287, 355 - d + f, 305, 370 - d + f);
    line(294, 355 - d + f, 304, 366 - d + f);

    // Hand
    line(289, 345 - d + f, 305, 340 - d + f);
    line(290, 342 - d + f, 305, 338 - d + f);

    getch();
}

void background()
{
    // Draw the background with clouds, tree, and leaves.
    // Left cloud
    ellipse(40, 30, 60, 240, 10, 15);
    ellipse(65, 20, 345, 165, 20, 15);
    ellipse(105, 27, 340, 160, 20, 15);
    ellipse(109, 42, 230, 50, 20, 10);
    ellipse(66, 46, 163, 340, 31, 17);

    // Right cloud
    ellipse(450, 30, 60, 240, 10, 15);
    ellipse(475, 20, 345, 165, 20, 15);
    ellipse(512, 27, 340, 160, 20, 15);
    ellipse(518, 42, 230, 50, 20, 10);
    ellipse(476, 46, 163, 340, 31, 17);

    // Sky color
    line(0, 90, 750, 90);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(50, 50, WHITE);

    setcolor(BROWN);
    line(300, 150, 300, 400);
    line(320, 150, 320, 400);
    b = 0;
    for (a = 0; a < 10; a++)
    {
        setcolor(BROWN);
        line(300, 155 + b, 320, 155 + b);
        b = b + 25;
    }

    // 1st leaf
    setcolor(GREEN);
    line(295, 140, 240, 130);
    line(240, 130, 180, 160);
    line(180, 160, 210, 155);
    line(210, 155, 205, 160);
    line(205, 160, 235, 150);
    line(235, 150, 225, 158);
    line(225, 158, 275, 145);

    // 2nd leaf
    setcolor(GREEN);
    line(325, 145, 385, 130);
    line(385, 130, 420, 160);
    line(420, 160, 395, 155);
    line(395, 155, 400, 160);
    line(400, 160, 365, 150);
    line(365, 150, 370, 155);
    line(370, 155, 330, 150);

    line(296, 130, 220, 110);
    line(220, 110, 200, 140);
    line(200, 140, 215, 135);
    line(325, 135, 390, 100);
    line(390, 100, 410, 130);
    line(410, 130, 400, 125);
    line(390, 115, 410, 142);
    line(410, 142, 400, 140);

    line(300, 120, 390, 80);
    line(390, 80, 400, 110);
    line(310, 110, 260, 80);
    line(260, 80, 230, 110);
    circle(285, 160, 10);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(286, 162, GREEN);
    line(285, 150, 276, 145);
    line(285, 150, 293, 145);
    circle(280, 157, 10);
    floodfill(271, 158, GREEN);
    circle(275, 157, 10);
    circle(330, 159, 10);
    floodfill(329, 157, GREEN);
    circle(330, 164, 10);
    circle(335, 160, 10);
}


void background2()
{
//full sun
 setcolor(WHITE);
setfillstyle(SOLID_FILL,YELLOW);
circle(300,50,20);
floodfill(300,50,WHITE);

//left cloud
ellipse(40,30,60,240,10,15);
ellipse(65,20,345,165,20,15);
ellipse(105,27,340,160,20,15);
ellipse(109,42,230,50,20,10);
ellipse(66,46,163,340,31,17);

//right cloud
ellipse(450,30,60,240,10,15);
ellipse(475,20,345,165,20,15);
ellipse(512,27,340,160,20,15);
ellipse(518,42,230,50,20,10);
ellipse(476,46,163,340,31,17);

//sky color
setcolor(WHITE);
line(0,90,750,90);
setfillstyle(SOLID_FILL,BLUE);
floodfill(50,50,WHITE);

setcolor(BROWN);
line(300,150,300,400);
line(320,150,320,400);
b=0;
for(a=0;a<10;a++)
{
setcolor(BROWN);
line(300,155+b,320,155+b);
b=b+25;
}

//1st leaf
setcolor(GREEN);
line(295,140,240,130);
line(240,130,180,160);
line(180,160,210,155);
line(210,155,205,160);
line(205,160,235,150);
line(235,150,225,158);
line(225,158,275,145);

//2nd leaf
setcolor(GREEN);
line(325,145,385,130);
line(385,130,420,160);
line(420,160,395,155);
line(395,155,400,160);
line(400,160,365,150);
line(365,150,370,155);
line(370,155,330,150);

line(296,130,220,110);
line(220,110,200,140);
line(200,140,215,135);
line(325,135,390,100);
line(390,100,410,130);
line(410,130,400,125);
line(390,115,410,142);
line(410,142,400,140);

line(300,120,390,80);
line(390,80,400,110);
line(310,110,260,80);
line(260,80,230,110);
circle(280,157,10);
setfillstyle(SOLID_FILL,GREEN);
floodfill(271,158,GREEN);
circle(275,157,10);
circle(330,159,10);
floodfill(329,157,GREEN);
circle(330,164,10);
circle(335,160,10);
}
