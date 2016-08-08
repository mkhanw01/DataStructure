#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <math.h>

void planetMotion(int xrad, int yrad, int midx, int midy, int x[60], int y[60])
{
	int i, j = 0;
	for (i = 360; i > 0; i = i - 6)
	{
		x[j] = midx - (xrad * cos((i * 3.14) / 180));
		y[j++] = midy - (yrad * sin((i * 3.14) / 180));
	}
	return;
 }
  int main() {
	int gdriver = DETECT, gmode, err;
	int i = 0, midx, midy;
	int xrad[9], yrad[9], x[9][60], y[9][60];
	int pos[9], planet[9], tmp;
	initgraph(&gdriver, &gmode, "../bgi");
	err = graphresult();
	if (err != grOk)
	{
		printf("Graphics Error: %s",
		grapherrormsg(err));
		return 0;
	}
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;
	planet[0] = 7;
	planet[1] = planet[0] + 1;
	pos[0] = 0 * 6;
	xrad[0] = 60, yrad[0] = 30;
		xrad[1] = xrad[0] + 30;
		yrad[1] = yrad[0] + 15;

	planetMotion(xrad[0], yrad[0], midx, midy, x[0], y[0]);
	while (!kbhit())
	{
		setcolor(WHITE);
		ellipse(midx, midy, 0, 360, xrad[0], yrad[0]);
		/* sun at the mid of the solar system */
		setcolor(RED);
		setfillstyle(SOLID_FILL, RED);
		circle(midx, midy, 20);
		floodfill(midx, midy, RED);
		setcolor(YELLOW);
		outtextxy(midx, midy,"SUN");

		setcolor(GREEN);
		setfillstyle(SOLID_FILL, GREEN);
		pieslice(x[0][pos[0]], y[0][pos[0]], 0, 360, planet[0]);
		setcolor(RED);
		outtextxy(x[0][pos[0]], y[0][pos[0]],"Earth");

		setcolor(WHITE);
		ellipse(x[0][pos[0]], y[0][pos[0]], 0, 360, planet[0]*3,planet[0]*3 );
		planetMotion(planet[0]*3,planet[0]*3 ,x[0][pos[0]], y[0][pos[0]], x[1], y[1]);
		setcolor(BLUE);
		setfillstyle(SOLID_FILL, BLUE);
		pieslice(x[1][pos[1]], y[1][pos[1]], 0, 360, planet[1]);
		setcolor(GREEN);
		outtextxy(x[1][pos[1]], y[1][pos[1]],"Moon");
		/* checking for one complete rotation */
		for (i = 0; i < 2; i++)
		 {
			if (pos[i] <= 0)
			{
				pos[i] = 59;
			}
			else
			{
				pos[i] = pos[i] - 1;
			}
		}
	       delay(100);

		cleardevice();
	}
	closegraph();
	return 0;
  }

