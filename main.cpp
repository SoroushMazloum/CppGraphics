#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>

#include <graphics.h>

int main()
{
    clrscr();
    cout<<"Geting thigs ready! Please wait a sec..."<<endl;
    delay(1000);
    int Gd = DETECT, Dm;
    initgraph(&Gd, &Gm, "c\\TURBOC3\\BGI");
    int x = getmaxx();
    int y = getmaxy();
    while (!kbhit())
    {
        putpixel(random(x), random(y), random(20));
        setcolor(random(20));
        line(random(x), random(y), random(x), random(y));
    }
    getch();
    getch();
    closegraph();
    cout<<"Precess Compelete, Press any key to exit..."<<endl;
    clrscr();
    return 0;
}
