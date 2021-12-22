#include<stdio.h>
#include<graphics.h>
#include<time.h>
#include<conio.h>
#include<string.h>
int main()
{
int  gd=DETECT,gm;
int midx,midy;
long current_time;
char strftime[256];
initgraph(&gd,&gm,"C\\TC\\BGI");
midx=getmaxx() /2;
midy=getmaxy() /2;
while(!kbhit ())  {
cleardevice();
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
rectangle(midx -250,midy -40,midx +250,midy +40);
current_time =time(NULL);
strcpy(strftime, ctime(&current_time));
setcolor(RED);
settext justify(CENTER_TEXT,CENTER_TEXT);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
moveto(midx,midy);
outtext (strftime);
delay(1000);
}
getch();
closegraph();
return 0;
}
