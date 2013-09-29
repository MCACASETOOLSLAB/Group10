//Final Version of the Monitor Module:: with graphics.
//By Gaurav Kushwaha(205112085)
/*
Implementing Monitors in Process Synchronization With Graphical User Interface.
*/

#include<iostream>
#include<conio.h>
#include<windows.h>
//#include"graph.cpp"

using namespace std;


void house1()
{ 
     system ( "color 03" );
     cout<<"\n-------------------------------------------------------------------------";
     cout<<"\n\t\t\t\t     /\\ ";
     cout<<"\n\t\t\t\t    /  \\ ";
     cout<<"\n\t\t\t\t   / _  \\ ";
     cout<<"\n\t\t\t\t  / |0|  \\ ";
     cout<<"\n\t\t\t\t /   -    \\ ";
     cout<<"\n\t\t\t\t|----------| ";
     cout<<"\n\t\t\t\t|          | ";                                                                                                                 
     cout<<"\n\t\t\t\t| Husband  | ";
     cout<<"\n\t\t\t\t|          | ";     cout<<"\tMILK IS OVER";
     cout<<"\n\t\t\t\t|   Wife   | ";
     cout<<"\n\t\t\t\t|__________| ";
     cout<<"\n\t\t\t\t|  HOUSE   | ";
     cout<<"\n\t\t\t\t|__________| ";
     cout<<"\n\t\t\t\t        |  | ";
     cout<<"\n\t\t\t\t        |  | ";
     cout<<"\n\t\t\t\t         \\  \\ ";
     cout<<"\n\t\t\t\t          \\  \\ ";
     Sleep(3000);
     
}

void house2()
{ 
     system ( "color 02" );
     cout<<"\n-------------------------------------------------------------------------";
     cout<<"\n\t\t\t\t     /\\ ";
     cout<<"\n\t\t\t\t    /  \\ ";
     cout<<"\n\t\t\t\t   / _  \\ ";
     cout<<"\n\t\t\t\t  / |0|  \\ ";
     cout<<"\n\t\t\t\t /   -    \\ ";
     cout<<"\n\t\t\t\t|----------| ";
     cout<<"\n\t\t\t\t|          | ";
     cout<<"\n\t\t\t\t|          | ";           cout<<"\tHUSBAND NOTIFIES WATCHMAN";                                                   
     cout<<"\n\t\t\t\t|          | ";           
     cout<<"\n\t\t\t\t|   Wife   | ";           cout<<"\tWATCHMAN ACTS AS THE MONITOR";
     cout<<"\n\t\t\t\t|__________| ";
     cout<<"\n\t\t\t\t|  HOUSE   | ";
     cout<<"\n\t\t\t\t|__________| ";
     cout<<"\n\t\t\t\t        |  | ";
     cout<<"\n\t\t\t\t        |  | ";
     cout<<"\n\t\t\t\t         \\  \\ ";
     cout<<"\n\t\t\t\t          \\  \\ ";
     Sleep(3000);
     
}

void house3()
{ 
     system ( "color 06" );
     cout<<"\n-------------------------------------------------------------------------";
     cout<<"\n\t\t\t\t     /\\ ";
     cout<<"\n\t\t\t\t    /  \\ ";
     cout<<"\n\t\t\t\t   / _  \\ ";
     cout<<"\n\t\t\t\t  / |0|  \\ ";
     cout<<"\n\t\t\t\t /   -    \\ ";
     cout<<"\n\t\t\t\t|----------| ";
     cout<<"\n\t\t\t\t|          | ";
     cout<<"\n\t\t\t\t| Husband  | ";
     cout<<"\n\t\t\t\t|          | ";         cout<<"\tWIFE NOTIFIES WATCHMAN";
     cout<<"\n\t\t\t\t|          | ";         
     cout<<"\n\t\t\t\t|__________| ";         cout<<"\tWATCHMAN ACTS AS THE MONITOR";
     cout<<"\n\t\t\t\t|  HOUSE   | ";
     cout<<"\n\t\t\t\t|__________| ";
     cout<<"\n\t\t\t\t        |  | ";
     cout<<"\n\t\t\t\t        |  | ";
     cout<<"\n\t\t\t\t         \\  \\ ";
     cout<<"\n\t\t\t\t          \\  \\ ";
     Sleep(3000);
     
}

void house4()
{ 
     system ( "color 04" );
     cout<<"\n-------------------------------------------------------------------------";
     cout<<"\n\t\t\t\t     /\\ ";
     cout<<"\n\t\t\t\t    /  \\ ";
     cout<<"\n\t\t\t\t   / _  \\ ";
     cout<<"\n\t\t\t\t  / |0|  \\ ";
     cout<<"\n\t\t\t\t /   -    \\ ";
     cout<<"\n\t\t\t\t|----------| ";
     cout<<"\n\t\t\t\t|          | ";                                                                                                                 
     cout<<"\n\t\t\t\t| Husband  | ";
     cout<<"\n\t\t\t\t|          | ";     cout<<"\tMILK IS AVAILABLE";
     cout<<"\n\t\t\t\t|   Wife   | ";
     cout<<"\n\t\t\t\t|__________| ";
     cout<<"\n\t\t\t\t|  HOUSE   | ";
     cout<<"\n\t\t\t\t|__________| ";
     cout<<"\n\t\t\t\t        |  | ";
     cout<<"\n\t\t\t\t        |  | ";
     cout<<"\n\t\t\t\t         \\  \\ ";
     cout<<"\n\t\t\t\t          \\  \\ ";
     Sleep(3000);
     
}

void husb()
{
     house1();
     cout<<"\n-------------------------------------------------------------------------";
     cout<<"\n\t Inside House  ";       cout<<"\t\t\t\t\tOutside House  ";
     cout<<"\n\n\t   HUSBAND  ";        cout<<"\t\tHOUSE DOOR  ";
     cout<<"\n\t   ......   ";          cout<<"\t\t   ||   ";
     cout<<"\n\t <. @  @ .> ";          cout<<"\t\t   ||   ";
     cout<<"\n\t  .  ||  .  ";          cout<<"\t\t   ||   ";
     cout<<"\n\t  .  __  .  ";          cout<<"\t\t   ||   ";
     cout<<"\n\t   ......   ";          cout<<"\t\t   ||   ";
     cout<<"\n\t     ..     ";          cout<<"\t\t   ||   ";
     cout<<"\n\t     ..     ";          cout<<"\t\t   ||   ";
     
     Sleep(2000);
     //system("cls");
     
     house2();
     cout<<"\n-------------------------------------------------------------------------";
     cout<<"\n\t Inside House  ";       cout<<"\t\t\t\t\tOutside House  ";
     cout<<"\n\n\t\t\t\tHOUSE DOOR";    cout<<"\t\t   HUSBAND  ";
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t   ......   ";
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t <. @  @ .> ";    
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t  .  ||  .  ";
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t  .  __  .  ";
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t   ......   ";
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t     ..     ";
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t     ..     ";
     cout<<"\n\n\t\t\tHusband goes out to fetch Milk...\n";
     cout<<"\n-------------------------------------------------------------------------";
     
     Sleep(2000);
     //system("cls");
     
     house4();     
      
}    

void wif()
{
     house1();
     cout<<"\n-------------------------------------------------------------------------";
     cout<<"\n\t Inside House  ";       cout<<"\t\t\t\t\tOutside House  ";
     cout<<"\n\n\t    WIFE  ";          cout<<"\t\tHOUSE DOOR  ";
     cout<<"\n\t   ......   ";          cout<<"\t\t   ||   ";
     cout<<"\n\t <. @  @ .> ";          cout<<"\t\t   ||   ";
     cout<<"\n\t  .  ||  .  ";          cout<<"\t\t   ||   ";
     cout<<"\n\t  .  <>  .  ";          cout<<"\t\t   ||   ";
     cout<<"\n\t   ......   ";          cout<<"\t\t   ||   ";
     cout<<"\n\t     ..     ";          cout<<"\t\t   ||   ";
     cout<<"\n\t     ..     ";          cout<<"\t\t   ||   ";
     
     Sleep(3000);
     //system("cls");
     
     house3();
     cout<<"\n-------------------------------------------------------------------------";
     cout<<"\n\t Inside House  ";       cout<<"\t\t\t\t\tOutside House  ";
     cout<<"\n\n\t\t\t\tHOUSE DOOR";    cout<<"\t\t    WIFE  ";
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t   ......   ";
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t <. @  @ .> ";    
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t  .  ||  .  ";
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t  .  <>  .  ";
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t   ......   ";
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t     ..     ";
     cout<<"\n\t\t\t\t   ||   ";        cout<<"\t\t     ..     ";
     cout<<"\n\n\t\t\tWife goes out to fetch Milk...\n";
     cout<<"\n-------------------------------------------------------------------------";
     
     Sleep(3000);
     //system("cls");
     
     house4();      
}

int watchman=0;     //Acting as the monitor
int milk=0;         //Acting as the Shared Resource needed

class husband
{
      public:
             void check_milk();
             void wait();
             void signal();

}h;

void husband::check_milk()
{
     cout<<"\n\t\t\tHusband looks for milk in the fridge...\n";
     Sleep(1000);

     if(milk==0)
     {
                cout<<"\n\t\t\t\tMilk not available....\n";
                Sleep(1000);
                if(watchman==0)
                {
                              wait();
                }
                else
                if(watchman==1)
                {
                              cout<<"\nWife is out to get milk... Lets wait for milk...\n";
                }
     }
     else
     if(milk==1)
     {
                cout<<"\n\t\t\tMilk found... \n\nHusband: Lets prepare tea...\n";
                Sleep(1000);
     }

}

void husband::wait()
{
     cout<<"\n\t\t\tHusband goes out to get milk...\n";
     Sleep(1000);
                              watchman=1;
                              husb();
     signal();
}

void husband::signal()
{
     cout<<"\n\t\tHusband brings milk and keeps in the fridge...\n";
     milk=1;
     watchman=0;
     Sleep(1000);
}


class wife
{
      public:
             void check_milk();
             void wait();
             void signal();

}w;

void wife::check_milk()
{
     cout<<"\n\t\t\tWife looks for milk in the fridge...\n";
     Sleep(1000);

     if(milk==0)
     {
                cout<<"\n\t\t\t\tMilk not available....\n";
                Sleep(1000);
                if(watchman==0)
                {
                              wait();
                }
                else
                if(watchman==1)
                {
                              cout<<"\nHusband is out to get milk... Lets wait for milk...\n";
                }
     }
     else
     if(milk==1)
     {
                cout<<"\n\t\t\tMilk found... \n\nWife: Lets prepare tea...\n";
                Sleep(1000);
     }

}

void wife::wait()
{
     cout<<"\n\t\t\tWife goes out to get milk...\n";
     Sleep(1000);
                              watchman=1;
                              wif();                             
     signal();
}

void wife::signal()
{
     cout<<"\n\t\tWife brings milk and keeps in the fridge...\n";
     milk=1;
     watchman=0;
     Sleep(1000);
}

void driver()
{
    int choice;

    while(1)
    {
            cout<<"\n\n";
            system("pause");
            system("cls");
            system("color 07");
            
            cout<<"\n*************** PROCESS SYNCHRONIZATION TUTORIAL ****************\n";
            cout<<"\n\tImplementing Monitors in Process Synchronization\n";
            cout<<"\n_________________________________________________________________\n";
            cout<<"\n1. Check availability of Milk.\n";
            cout<<"\n2. Change Milk status.\n";
            cout<<"\n3. Husband wakes up.\n";
            cout<<"\n4. Wife wakes up.\n";
            cout<<"\n5. To Exit.\n";
            cin>>choice;

            switch(choice)
            {
                          case 1: if(milk)
                                          cout<<"\nMilk is available...\n";
                                  else
                                          cout<<"\nMilk is not available...\n";
                                  break;

                          case 2: if(milk)
                                  {
                                      milk=0;
                                      cout<<"\nMilk is over...\n";
                                  }
                                  else
                                  {
                                      milk=1;
                                      cout<<"\nMilk is available now...\n";
                                  }
                                  break;

                          case 3: h.check_milk();
                                  break;

                          case 4: w.check_milk();
                                  break;

                          case 5: cout<<"\n\nExiting";
                                  for(int i=0;i<5;i++)
                                  {
                                          cout<<".";
                                          Sleep(250);
                                  }
                                  exit(0);
                                  break;

                          default: cout<<"\nWrong choice entered...\n";
                                   break;
            }
    }
}


int main()
{
    driver();

    getch();
    return 0;
}
