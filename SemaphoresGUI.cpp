
/*
implementing Semaphores with Busy waiting. With  wife keep on cheking the door if her husband has arrived or not.

With Graphical User Interface

*/




#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

//using namespace std;

int door=1;  //semaphor
int milk=0;
int gdriver=DETECT,gmode;
//initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");


void house()
{

int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
for(int i=16;i>=14; i--)
{

//delay(900);
setcolor(i);
line(216,110,410,110);

}
for(int i1=16;i1>=14; i1--)
{

//delay(900);
setcolor(i1);
line(216,110,216,250);

}

for(int i2=16;i2>=14; i2--)
{

//delay(900);
setcolor(i2);
line(216,250,410,250);
}
for(int i3=16;i3>=14; i3--)
{

//delay(900);
setcolor(i3);
line(410,110,410,250);
}
for(int i4=16;i4>=14; i4--)
{

//delay(900);
setcolor(i4);
line(216,120,410,120);
	       }for(int i5=16;i5>=14; i5--)
{

//delay(900);
setcolor(i5);
line(216,110,313,10);   }
for(int i6=16;i6>=14; i6--)
{

//delay(900);
setcolor(i6);
line(410,110,313,10);
}for(int i7=16;i7>=14; i7--)
{

//delay(900);
setcolor(i7);
line(250,250,250,150);   }
for(int i8=16;i8>=14; i8--)
{

//delay(900);
setcolor(i8);
line(300,250,300,150);
}for(int i9=16;i9>=14; i9--)
{

//delay(900);
setcolor(i9);
line(250,150,300,150);
 }for(int i10=16;i10>=14; i10--)
{

//delay(900);
setcolor(i10);

line(320,150,320,200);   }
for(int i11=16;i11>=14; i11--)
{

//delay(900);
setcolor(i11);
line(390,150,390,200);  }for(int i111=16;i111>=14; i111--)
{

//delay(900);
setcolor(i111);
line(320,150,390,200);   }
for(int i12=16;i12>=14; i12--)
{

//delay(900);
setcolor(i12);
line(320,200,390,150);
}for(int i13=16;i13>=14; i13--)
{

//delay(900);
setcolor(i13);
line(320,150,390,150);
}for(int i14=16;i14>=14; i14--)
{

//delay(900);
setcolor(i14);
line(320,200,390,200);  }
for(int i15=16;i15>=14; i15--)
{

//delay(900);
setcolor(i15);
circle(313,60,10);       }
for(int i16=16;i16>=14; i16--)
{

//delay(900);
setcolor(i16);

line(410,120,480,90);
}
for(int i17=16;i17>=14; i17--)
{

//delay(900);
setcolor(i17);
line(313,10,480,90);
}
for(int i18=16;i18>=14; i18--)
{
//delay(900);
setcolor(i18);
line(410,250,480,220);
}
for(int i19=16;i19>=14; i19--)
{

//delay(900);
setcolor(i19);
line(480,90,480,220);     }for(int i20=16;i20>=14; i20--)
{

//delay(900);
setcolor(i20);

line(410,110,468,87);      }

for(int i28=16;i28>=14; i28--)
{

//delay(900);
setcolor(i28);

arc(185,275,300,20,70);
}for(int i29=16;i29>=14; i29--)
{

//delay(900);
setcolor(i29);
arc(235,275,300,20,70);
 }

 //getch();
}

/*********************** husband's face *************************/
void husFace(int i)
{

//int gd=DETECT,gm;
//initgraph(&gdriver,&gmode,"c:\Turboc3\bgi");
setcolor(GREEN);
//setbkcolor(0);
/*-------------------CHIN------------------------*/

ellipse(298-i,244-i,160,380,60,80);

/*----------------- HAIR ------------------------*/

arc(300-i,219-i,400,140,80);
ellipse(355-i,190-i,270,438,10,28);
arc(359-i,188-i,169,265,30);
ellipse(288-i,190-i,180,360,40,20);
ellipse(239-i,193-i,96,370,8,25);

/*---------------Eye Brows-------------------------*/

/*arc(282-i,255-i,89,130,40);
arc(278-i,259-i,80,120,40);
//arc(314-i,255-i,405,92,40);
//arc(319-i,259-i,420,100,40);
line(310-i,215-i,310,220);
line(284-i,215-i,284,219);
  */
/*-------------------Eyes--------------------------*/

setfillstyle(SOLID_FILL,WHITE);
ellipse(320-i,230-i,0,360,10,5);
ellipse(275-i,230-i,0,360,10,5);
fillellipse(320-i,230-i,10,5);
fillellipse(275-i,230-i,10,5);
setfillstyle(SOLID_FILL,BLACK);
ellipse(320-i,230-i,0,360,4,4);
ellipse(275-i,230-i,0,360,4,4);
fillellipse(320-i,230-i,5,5);
fillellipse(275-i,230-i,5,5);

/*------------------Nose----------------------*/

ellipse(280-i,220-i,270,0,10,40);
ellipse(315-i,220-i,180,270,10,40);
ellipse(285-i,260-i,100,285,8,7);
ellipse(310-i,260-i,255,70,8,7);
circle(320-i,230-i,2);
circle(275-i,230-i,2);
arc(297-i,257-i,228,689,15);

/*---------------------MOUTH--------------------*/

ellipse(298-i,290-i,0,360,30,7);
//line(270-i,290-i,326,290);

/*----------------------Ears--------------------*/

ellipse(234-i,240-i,0,330,4,20);
ellipse(362-i,240-i,220,170,4,20);
//getch();
//clearviewport();
//closegraph();
//restorecrtmode();

}


class Husband
{
      public:
	     int checkDoor()
	     {
	      return door;
	     }

	     void wait()
	     {
	      if(door==0)
	      {
	       cout<<"Husband is waiting"<<endl;
	       }
	      else
	      {
		door=0;
		cout<<"Husband has gone out to get the milk"<<endl;

	      }
	     }
	      void signal()
	      {
	       door=1;
	       if(milk==0)
	       {
		cout<<endl<<"Husband got the milk"<<endl;
		cout<<endl<<"Wife:: My husband is the Best!!"<<endl;
		milk=1;
		}

	      }
};

class Wife
{
  public:
	 void wait()
         {
          if(door==0)
	  cout<<"Wife is Waiting"<<endl;
           
	   else
           {
            door=0;
	     cout<<"Wife has gone out to get the Milk"<<endl;

	   }

         }
         
         void signal()
         {
	  door=1;
	  if(milk==0)
          {
            cout<<"Wife got the milk"<<endl;         
	   cout<<"Husband:: My wife is the best!!"<<endl;
           milk=1;
           }
	 }
};

int main()
{
    Husband h;
    Wife w;
    clrscr();

//    int gd=DETECT,gm;
    initgraph(&gdriver,&gmode,"c:\\Turboc3\\bgi");
    int waitCount=5,j=10;
    house();

    h.wait();
    while(waitCount!=0)
    {
     w.wait();
     husFace(-j);
     sleep(1);
     waitCount--;
     j=j+30;
     }
    h.signal();
    w.signal();


getch();
return 0;
}
