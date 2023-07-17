#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <graphics.h>
void TrianguloSierpinski(void);
int main(void)
{
int gd=VGA;
int gm=VGAHI;
initgraph(&gd, &gm, "C:\\BC5\\BGI");
TrianguloSierpinski();
getch();
}
void TrianguloSierpinski(void)
{
char Direct;
int iterate;
unsigned int x1, y1, x2, y2;
x1 = x2 = 320;
y1 = y2 = 0;
for(iterate = 0; iterate < 20000; iterate++)
{
Direct = rand()%3;
if(Direct == 0)
{
x1 = (x2 + 320) / 2;
y1 = (y2 + 0) / 2;
}
else if(Direct == 1)
{
x1 = (x2 + 0) / 2;
y1 = (y2 + 480) / 2;
}
else if(Direct == 2)
{
x1 = (x2 + 640) / 2;
y1 = (y2 + 480) / 2;
}
rectangle(x1, y1, x1+1, y1+1); 
x2 = x1;
y2 = y1;

      delay(1);
}
      
}
