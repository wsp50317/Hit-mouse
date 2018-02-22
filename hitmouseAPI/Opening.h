
/*¨Ï¥ÎOpening¸Ì­±ªºPlay¨ç¦¡¨Ó¼½©ñOP ¤w¸g¦bCLASS¸Ì­±©ñ¤J¼½­µ¼Öªº¨ç¦¡*/
#ifndef OPENING_H
#define OPENING_H
#include<iostream>
#include<Windows.h>
#include "picture.h"
#include <conio.h>
using namespace std;
#include<MMSystem.h>
#pragma comment(lib, "Winmm.lib") 
void gotoxy(int xpos, int ypos)
	{
	  COORD scrn;
	  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	  scrn.X = xpos; scrn.Y = ypos;
	  SetConsoleCursorPosition(hOuput,scrn);
	}

class Opening : public picture{
public:
	int stop;
	 picture pu;
	void OpDoor()/*¶}ªùµ{¦¡*/{
	     for(int z=0;z<12;z++)
	{  
       int x=500-z*45;
	for(int i=0;i<22;i++)
	{
		for(int j=0;j<23;j++)
		{
		    if(j>=11-z&&j<=11+z)
			{	
				cout<<"  ";
			    continue;
			}
				cout<<"¡½";
			
		}
	  cout<<endl;
	} 
	Sleep(x);
	system("cls");
    for(int i=0;i<22;i++)
	{
		for(int j=0;j<24;j++)
		{
		    cout<<"  ";
		}
	  cout<<endl;
	}

	 Sleep(x);
	system("cls");		 
    }
	
	}
	void Forest(){
	 for(int s=0;s<20;s++)
	{
	   int x=300-s*10;
	cout<<"   ¡½    ¡½         ¡½       ¡½               "<<endl;
	cout<<"¡½         ¡½        ¡½    ¡½                 "<<endl;
	cout<<"   ¡½     ¡½      ¡½         ¡½          |    "<<endl;
	cout<<"     ¡½ ¡½          ¡½     ¡½         |       "<<endl;
	cout<<"       ¡½¡½   |       ¡½ ¡½    |              "<<endl;
	cout<<"   |     ¡½      |      ¡½¡½     |            "<<endl;
	cout<<"             |            ¡½               |  "<<endl;
	cout<<"                    |                 |       "<<endl;
	cout<<"      ¤H       |                |             "<<endl;
	cout<<"     ¤ì¤ì        ¡µ           |          |    "<<endl;
	cout<<"    ¤ì¤ì¤ì      ¦Ì¦Ì      |        |          "<<endl;
	cout<<"   ¤ì¤ì¤ì¤ì    ¦Ì¦Ì¦Ì                 |       "<<endl;
	cout<<"     ¤ì¤ì  |  ¦Ì¦Ì¦Ì¦Ì   |                    "<<endl;
	cout<<"    ¤ì¤ì¤ì       ¡¼           |               "<<endl;
	cout<<"   ¤ì¤ì¤ì¤ì             ¢~------------------- "<<endl;
	cout<<"  ¤ì¤ì¤ì¤ì¤ì      |     /         _    _    _ "<<endl;
	cout<<" ¤ì¤ì¤ì¤ì¤ì¤ì          /                      "<<endl;
	cout<<"¤ì¤ì¤ì¤ì¤ì¤ì¤ì        /        /     ¢~------ "<<endl;
	cout<<"     ¡¼¡¼            /               /        "<<endl;
	cout<<"     ¡¼¡¼           /        /      /         "<<endl;
	cout<<"                   /               /          "<<endl;
	cout<<"                  /        /      (           "<<endl;

	 Sleep(x);
	 system("cls");    

	cout<<"         |            |                   |   "<<endl;
	cout<<"                |                             "<<endl;
	cout<<"    |                             |           "<<endl;
	cout<<"                           |                  "<<endl;
	cout<<"            |                   |        |    "<<endl;
	cout<<"     |                                        "<<endl;
	cout<<"             |                                "<<endl;
	cout<<"                       |              |       "<<endl;
	cout<<"      ¤H                     |                "<<endl;
	cout<<"     ¤ì¤ì        ¡µ                 |         "<<endl;
	cout<<"    ¤ì¤ì¤ì      ¦Ì¦Ì       |                  "<<endl;
	cout<<"   ¤ì¤ì¤ì¤ì    ¦Ì¦Ì¦Ì                   |     "<<endl;
	cout<<"     ¤ì¤ì     ¦Ì¦Ì¦Ì¦Ì           |          | "<<endl;
	cout<<"    ¤ì¤ì¤ì       ¡¼                           "<<endl;
	cout<<"   ¤ì¤ì¤ì¤ì             ¢~------------------- "<<endl;
	cout<<"  ¤ì¤ì¤ì¤ì¤ì            /         _    _    _ "<<endl;
	cout<<" ¤ì¤ì¤ì¤ì¤ì¤ì          /                      "<<endl;
	cout<<"¤ì¤ì¤ì¤ì¤ì¤ì¤ì        /        /     ¢~------ "<<endl;
	cout<<"     ¡¼¡¼            /               /        "<<endl;
	cout<<"     ¡¼¡¼           /        /      /         "<<endl;
	cout<<"                   /               /          "<<endl;
	cout<<"                  /        /      (           "<<endl;
 
	Sleep(200);
	 system("cls");

	 for(int p=0;p<23;p++)
	 {
	    cout<<"                                              "<<endl;
	 }
	 if(kbhit()){stop = getch();}
	  Sleep(20);
	 system("cls");
	}
	
	}
	void gethit(){
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                ¢¨¢i¢i¢©                  "<<endl;
	cout<<"               ¢i¢i¢i¢i¢i                 "<<endl;
	cout<<"             £`¢i¡ó¢i¡ó¢i3                "<<endl;
	cout<<"             ¢¨¢i¢i¤f¢i¢i¢©               "<<endl;
	cout<<"           ¢¨¢i ¢¨    ¢© ¢i¢©             "<<endl;
	cout<<"           ¢i¢i ¢i    ¢i ¢i¢i             "<<endl;
	cout<<"           ¢i¢i ¢ª¢e¢e¢« ¢i¢i             "<<endl;
	cout<<"           ¢i¢i  ¢o   ¢o ¢i¢i             "<<endl;
	cout<<"          (oooo)        (oooo)            "<<endl;

	Sleep(1000);
	for(int we=0;we<15;we++)
	{	
		gotoxy(0,0);
    cout<<"                                          "<<endl;
	cout<<"             ¢~        ¢¡                 "<<endl;
	cout<<"               ¢¨¢i¢i¢©                   "<<endl;
	cout<<"               ¢i    ¢i                   "<<endl;
	cout<<"               ¢ª¢i¢i¢«                   "<<endl;
	cout<<"             ¢¢        ¢£                 "<<endl;

	Sleep(100);
	
	gotoxy(0,0);
	cout<<"            ¢~          ¢¡               "<<endl;
	cout<<"              ¢¨¢i¢i¢i¢©                 "<<endl;
	cout<<"              ¢i      ¢i                 "<<endl;
	cout<<"              ¢i      ¢i                 "<<endl;
	cout<<"              ¢ª¢i¢i¢i¢«                 "<<endl;
	cout<<"            ¢¢          ¢£               "<<endl;

	Sleep(100);
	}


	for(int run=0;run<9;run++)
{	
	if(run>0)
	{
		gotoxy(0,run-1);
		cout<<"                                          "<<endl;
	}
	gotoxy(0,run);
	cout<<"      ¢i¢i¢i¢i                            "<<endl;
	cout<<"  ¢z¢{¢i    ¢i                            "<<endl;
	cout<<"  ¢x¢x¢i    ¢i¢©¢b¢b¢b¢b¢b¢b¢b¢b¡¶        "<<endl;
	cout<<"  ¢x¢x¢i    ¢i¢«¢v¢v¢v¢v¢v¢v¢v¢v¡¿        "<<endl;
	cout<<"  ¢|¢}¢i    ¢i                            "<<endl;
	cout<<"      ¢i¢i¢i¢i                            "<<endl;
    if(run==0)

	Sleep(400);

	Sleep(300);
}
	gotoxy(0,23);
	system("cls");
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"      ¢i¢i¢i¢i                            "<<endl;
	cout<<"  ¢z¢{¢i    ¢i                            "<<endl;
	cout<<"  ¢x¢x¢i    ¢i¢©¢b¢b¢b¢b¢b¢b¢b¢b¡¶        "<<endl;
	cout<<"  ¢x¢x¢i    ¢i¢«¢v¢v¢v¢v(oooo)¢v¡¿        "<<endl;
	cout<<"  ¢|¢}¢i    ¢i           ¢i¢i             "<<endl;
	cout<<"      ¢i¢i¢i¢i           ¢i¢i             "<<endl;
	cout<<"        (oooo)  ¢¨¢i¢i¢© ¢i¢i             "<<endl;
	cout<<"         ¢i¢i  ¢i¢i¢i¢i¢i¢i¢i             "<<endl;
	cout<<"         ¢i¢i£`¢i >¢i< ¢i3 ¢i             "<<endl;
	cout<<"         ¢i¢i  ¢i¢i¤f¢i¢i¢i¢«             "<<endl;
	cout<<"         ¢ª¢i¢© ¢¨     ¢©¢«               "<<endl;
	cout<<"           ¢ª¢« ¢i     ¢i                 "<<endl;
	cout<<"                ¢ª¢e-¢e¢«                 "<<endl;
	cout<<"                  ¢o  ¢o                  "<<endl;
	
	for(int week=0;week<6;week++)
	{	   
		gotoxy(0,17);
		if(week%2==1)
		{
			
			cout<<"         ¢i¢i£`¢i >¢i< ¢i3 ¢i             "<<endl;
		    
		}
		else
		{
			cout<<"         ¢i¢i£`¢i¡ó¢i¡ó¢i3 ¢i             "<<endl;

		}
		gotoxy(0,23);
	
	    Sleep(100);
	}

	Sleep(2000);
	
	 system("cls");
	 if(kbhit()){stop = getch();}
     Sleep(100);	
}
    void brkdown(){
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                      ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	cout<<"                      ¢i¢i   | H  |   ¢i¢i  "<<endl;
	cout<<"                      ¢i¢i   |    |   ¢i¢i  "<<endl;
	cout<<"                      ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	cout<<"                      ¢i¢iùá¢i¢i¢i¢iùá¢i¢i  "<<endl;
	cout<<"                      ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	cout<<"                      ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	cout<<"                      ¢i¢iùá¢i¢i¢i¢iùá¢i¢i  "<<endl;
	cout<<"                      ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	cout<<"                      ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	cout<<"                      ¢i¢iùá¢i¢i¢i¢iùá¢i¢i  "<<endl;
	cout<<"    ¢¨¢i¢i¢i¢©        ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	cout<<"  ¢¨¢i¢«  ¢ª¢i¢©      ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	cout<<"¢i¢i¢i¢w¡³¢w¢i¢i¢i    ¢i¢iùó¢i¢i¢i¢iùá¢i¢i  "<<endl;
	cout<<"¢ª¢i¢i¢©  ¢¨¢i¢i¢«    ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	cout<<"  ¢iùá¢i¢i¢iùá¢i      ¢i¢i¢i¢iùàùâ¢i¢i¢i¢i  "<<endl;
	cout<<"  ¢i¢i|¤T¤T|¢i¢i      ¢i¢i¢i¢iùàùâ¢i¢i¢i¢i  "<<endl;
	cout<<"      |    |           |                |   "<<endl;
	cout<<"      | ¡U |           |        |       |   "<<endl;
//----------------------------------------------------
	for(int wave=0;wave<40;wave++)
{	int s=wave%3+20;
	gotoxy(s,4);
	cout<<"  ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	gotoxy(s,5);
	cout<<"  ¢i¢i   | H  |   ¢i¢i  "<<endl;
	gotoxy(s,6);
	cout<<"  ¢i¢i   |    |   ¢i¢i  "<<endl;
	gotoxy(s,7);
	cout<<"  ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	gotoxy(s,8);
	cout<<"  ¢i¢iùá¢i¢i¢i¢iùá¢i¢i  "<<endl;
	gotoxy(s,9);
	cout<<"  ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	gotoxy(s,10);
	cout<<"  ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	gotoxy(s,11);
	cout<<"  ¢i¢iùá¢i¢i¢i¢iùá¢i¢i  "<<endl;
	gotoxy(s,12);
	cout<<"  ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	gotoxy(s,13);
	cout<<"  ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	gotoxy(s,14);
	cout<<"  ¢i¢iùá¢i¢i¢i¢iùá¢i¢i  "<<endl;
	gotoxy(s,15);
	cout<<"  ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	gotoxy(s,16);
	cout<<"  ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	gotoxy(s,17);
	cout<<"  ¢i¢iùó¢i¢i¢i¢iùá¢i¢i  "<<endl;
	gotoxy(s,18);
	cout<<"  ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	gotoxy(s,19);
	cout<<"  ¢i¢i¢i¢iùàùâ¢i¢i¢i¢i  "<<endl;
	gotoxy(s,20);
	cout<<"  ¢i¢i¢i¢iùàùâ¢i¢i¢i¢i  "<<endl;
    gotoxy(0,23);
	Sleep(100);
}
//-------------------------------------------------/
	for(int brk=0;brk<15;brk++)
{	gotoxy(22,3+brk);
	cout<<"                      "<<endl;
	gotoxy(22,4+brk);
	cout<<"¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i  "<<endl;
	gotoxy(22,5+brk);
	cout<<"¢i¢i   | H  |   ¢i¢i  "<<endl;
	gotoxy(22,6+brk);
	cout<<"¢i¢i   |    |   ¢i¢i  "<<endl;
    if(brk!=14)
	{gotoxy(21,7+brk);
  cout<<"£`ùùùùùùùùùùùùùùùùùùùù3"<<endl;
  }
	else

	Sleep(1200);
	gotoxy(0,23);

	Sleep(150);
}
    system("cls");
	
	}
	void wow(){
	 
	//--------------------------------------------------------------
	cout<<"¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i"<<endl;
	cout<<"¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i"<<endl;
	cout<<"                                            ¢i"<<endl;
	cout<<"           ¢n                    ¢n         ¢i"<<endl;
	cout<<"           ¢n                    ¢n         ¢i"<<endl;
	cout<<"           ¢n                    ¢n         ¢i"<<endl;
	cout<<"           ¢n¢e¢e¢e¢e¢e¢e¢e¢e¢e¢e¢n         ¢i"<<endl;
	cout<<"           ¢n                    ¢n         ¢i"<<endl;
   cout<<"\\          ¢n                    ¢n       / ¢i"<<endl;
   cout<<" \\         ¢n                    ¢n      /  ¢i"<<endl;
   cout<<"  \\                                     /   ¢i"<<endl;
   cout<<"   \\                                   /    ¢i"<<endl;
   cout<<"    \\                                 /     ¢i"<<endl;
   cout<<"     \\                               /      ¢i"<<endl;
	cout<<"                                            ¢i"<<endl;
	cout<<"                                            ¢i"<<endl;
	cout<<"                                            ¢i"<<endl;
	cout<<"                                            ¢i"<<endl;
	cout<<"                                            ¢i"<<endl;
	cout<<"                                            ¢i"<<endl;
	cout<<"                                            ¢i"<<endl;
	cout<<"¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i"<<endl;
	cout<<"¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i"<<endl;

	Sleep(500);
	pu.selectmouse(15,11,0);

	Sleep(1000);
	pu.selectmouse(15,11,4);

	Sleep(1000);
	pu.selectmouse(15,11,6);

	Sleep(300);
	pu.selectmouse(15,11,1);

	Sleep(4000);
	pu.selectmouse(15,11,7);
	gotoxy(0,23);

	Sleep(1000);
	system("cls");
	}
	void shake(){
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"          ¢¨¢i¢i¢©                          "<<endl;
	cout<<"      ¢¨¢i¢i¢i¢i¢i¢©                        "<<endl;
	cout<<"    ¢¨¢i¢i¢i¢i¢i¢i¢i¢©                      "<<endl;
	cout<<"    ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢b                    "<<endl; 
	cout<<"    ¢ª¢i¢ª¢i¢i¢i¢i¢i  ¡E)                   "<<endl;
	cout<<"      ¢i£`¢i¢i¢i¢i¢i¢i¢©¢b                  "<<endl;
	cout<<"      ¢i¢i¢i¢i¢i¢i¢«¢b¢b¢b¢j                "<<endl;
	cout<<"      ¢i¢i¢i¢i¢i¢i¢© ¢b¢b¢b¢j               "<<endl;
	cout<<"      ¢i¢i¢i¢i¢i¢i                          "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;

	Sleep(1500);
	system("cls");
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"          ¢¨¢i¢i¢©                          "<<endl;
	cout<<"      ¢¨¢i¢i¢i¢i¢i¢©                        "<<endl;
	cout<<"    ¢¨¢i¢i¢i¢i¢i¢i¢i¢©                      "<<endl;
	cout<<"    ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢b                    "<<endl; 
	cout<<"    ¢ª¢i¢ª¢i¢i¢i¢i¢i  ¡E)                   "<<endl;
	cout<<"      ¢i£`¢i¢i¢i¢i¢i¢i¢©¢b                  "<<endl;
	cout<<"      ¢i¢i¢i¢i¢i¢i¢«¢b¢b¢b¢j                "<<endl;
	cout<<"      ¢i¢i¢i¢i¢i¢i                          "<<endl;
	cout<<"      ¢i¢i¢i¢i¢i¢i                          "<<endl;
	cout<<"      ¢i¢i¢i¢i¢i¢i                          "<<endl;
	cout<<"      ¢i¢i¢i¢i¢i¢i ¢b¢b¢b¢b                 "<<endl;
	cout<<"      ¢i¢i¢i¢i¢i¢i¢© ¢b¢b¢b|                "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;
	cout<<"                                            "<<endl;

	Sleep(800);
	for(int shk=0;shk<30;shk++)
	{
	    int s=shk%3;
		gotoxy(21+s*2,11);
		cout<<"  ¡E)      ";   
	    Sleep(200);
		gotoxy(0,23);
	}

	Sleep(500);
	system("cls");
	
	}
	void runrun(){
	   for(int ru=0;ru<6;ru++)
	{	
	cout<<"   ¢¨¢i¢i¢i¢i¢i¢©             ¢b¢b¢b¢b          "<<endl;
	cout<<" ¢¨¢i¢i¢i¢i¢i¢i¢i¢©          |¢b¢b¢b¢b|         "<<endl;
	cout<<" ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢b     ¢i¢i¢i¢i¢i¢i¢i¢i      "<<endl;
	cout<<" ¢ª¢i¢ª¢i¢i¢i¢i¢i  ¡E)    ¢i            ¢i      "<<endl;
	cout<<"   ¢i£`¢i¢i¢i¢i¢i¢i¢©¢b   ¢i            ¢i      "<<endl;
	cout<<"   ¢i¢i¢i¢i¢i¢i¢«¢b¢b¢b¢j ¢i¢i¢i¢i¢i¢i¢i¢i      "<<endl;
	cout<<"   ¢i¢i¢i¢i¢i¢i¢© ¢b¢b¢b¢j      ¢ª¢«            "<<endl;
	cout<<"   ¢i¢i¢i¢i¢i¢i¢i¢i              |¢l            "<<endl;
	cout<<"   ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¤G¢j           "<<endl;
	cout<<"   ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¤T¢j           "<<endl;
	cout<<"   ¢i¢i¢i¢i¢i¢«    ¢j            |¢l            "<<endl;
	cout<<"   ¢i¢i¢i¢i¢i   ¢w¢£             |¢l            "<<endl;
	cout<<"   ¢i¢i¢i¢i¢i  ¢w¢£              |¢l            "<<endl;
	cout<<"   ¢i¢i¢i¢i¢i¢©  ¢£              |¢l            "<<endl;
	cout<<"   ¢i¢i¢i¢i¢i¢i¢i¢i¢©            |¢l            "<<endl;
	cout<<"   ¢i¢i¢i¢i¢i¢i¢i¢i¢i            |¢l            "<<endl;
	cout<<"   ¢i¢i¢i¢i¢i¢i¢i¢i¢i            |¢l            "<<endl;
	cout<<"    ¢i¢i¢i     ¢i¢i¢i            |¢l            "<<endl;
	cout<<"    ¢i¢i¢i     ¢i¢i¢i           ¢¨¢©            "<<endl;
	cout<<"    ¢i¢i¢i     ¢ª¢i¢«           ¢ª¢«            "<<endl;
	cout<<"    ¢i¢i¢i                                      "<<endl;
	cout<<"    ¢ª¢i¢«                                      "<<endl;

	Sleep(800);
	system("cls");
	cout<<"               ¢¨¢i¢i¢i¢i¢i¢©                   "<<endl;
	cout<<"             ¢¨¢i¢i¢i¢i¢i¢i¢i¢©                 "<<endl;
	cout<<" ¢w¢w¢w¢w¢w  ¢i¢i¢i¢i¢i¢i¢i¢i¢i¢b               "<<endl;
	cout<<"             ¢ª¢i¢ª¢i¢i¢i¢i¢i  ¡E)              "<<endl;
	cout<<" ¢w¢w¢w¢w¢w¢w  ¢i£`¢i¢i¢i¢i¢i¢i¢©¢b             "<<endl;
	cout<<"               ¢i¢i¢i¢i¢i¢i¢«¢b¢b¢b¢j           "<<endl;
	cout<<" ¢w¢w¢w¢w¢w    ¢i¢i¢i¢i¢i¢i¢© ¢b¢b¢b¢j          "<<endl;
	cout<<"               ¢i¢i¢i¢i¢i¢i¢i¢p                 "<<endl;
	cout<<" ¢w¢w¢w¢w¢w¢w  ¢i¢i¢i¢i¢i¢i¢i¢p¢i¢i¢i¢i¤G¢j     "<<endl;
	cout<<"               ¢i¢i¢i¢i¢i¢i¢i¢p¢i¢i¢i¢i¤T¢j     "<<endl;
	cout<<" ¢w¢w¢w¢w      ¢i¢p¢i¢p¢i¢«   ¢j                "<<endl;
	cout<<"               ¢i¢p¢i¢p¢i  ¢w¢£        ¢i¢i¢i¢i "<<endl;
	cout<<" ¢w¢w¢w¢w¢w¢w  ¢i¢p¢i¢p¢i ¢w¢£         ¢i    ¢i ¢b"<<endl;
	cout<<"               ¢i¢p¢i¢p¢i¢©¢£          ¢i    ¢i|  |"<<endl;
	cout<<"¢w ¢¨¢©¢c¢c¢c¢c¢i¢p¢i¢p¢i¢i¢i¢i¢©¢c¢c¢¨¢i    ¢i|  |"<<endl;
	cout<<"¢w ¢ª¢«¢w¢w¢w¢w¢i¢i||||¢w¢w¢w¢w¢w¢w¢w¢ª¢i    ¢i|  |"<<endl;
	cout<<"               ¢i¢i¢i¢i¢i¢i¢i¢i¢i      ¢i    ¢i|  |"<<endl;
	cout<<" ¢w¢w¢w¢w¢w¢w   ¢i¢i¢i     ¢i¢i¢i      ¢i    ¢i ¢w "<<endl;
	cout<<"                ¢i¢i¢i     ¢i¢i¢i      ¢i¢i¢i¢i "<<endl;
	cout<<"                ¢i¢i¢i     ¢ª¢i¢«               "<<endl;
	cout<<"¢w¢w¢w¢w¢w¢w¢w  ¢i¢i¢i                          "<<endl;
	cout<<"                ¢ª¢i¢«                          "<<endl;

	Sleep(800);
	system("cls");
	}
	}
	void appear(){
	cout<<"                    ¢¨¢i¢i¢©                  "<<endl;
	cout<<"                   ¢i¢i¢i¢i¢i                 "<<endl;
	cout<<"                 £`¢i¡ó¢i¡ó¢i3                "<<endl;
	cout<<"                 ¢¨¢i¢i¤f¢i¢i¢©               "<<endl;
	cout<<"               ¢¨¢i ¢¨     ¢©¢i¢©             "<<endl;
	cout<<"               ¢i¢i ¢i     ¢i¢i¢i             "<<endl;
	cout<<"    ¢i¢i¢i¢i   ¢i¢i ¢ª¢e-¢e¢«¢i¢i             "<<endl;
	cout<<"¢z¢{¢i    ¢i   ¢i¢i   ¢o  ¢o ¢i¢i             "<<endl;
	cout<<"¢x¢x¢i    ¢i¢©(oooo)¢b¢b¢b¢b(oooo)¢b¢b¡¶      "<<endl;
	cout<<"¢x¢x¢i    ¢i¢«¢v¢v¢v¢v¢v¢v¢v¢v¢v¢v¢v¢v¡¿      "<<endl;
	cout<<"¢|¢}¢i    ¢i                                  "<<endl;
	cout<<"    ¢i¢i¢i¢i                                  "<<endl;
	cout<<"                                              "<<endl;
	cout<<"¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b"<<endl;
	cout<<"                                              "<<endl;
	cout<<"                                              "<<endl;
	cout<<"                                              "<<endl;
	cout<<"                                              "<<endl;
	cout<<"                                              "<<endl;
	cout<<"                                              "<<endl;
	cout<<"                                              "<<endl;
	cout<<"                                              "<<endl;

	Sleep(500);

    for(int clr=0;clr<20;clr++)
	{
	cout<<"                                              "<<endl;

	Sleep(100);
	}
	system("cls");
	for(int y=0;y<7;y++)
	{
	    for(int x=0;x<4;x++)
		{
			pu.selectmouse(x*14,y*6,0);
		
		    Sleep(200);
		}
	}
	for(int y=0;y<7;y++)
	{
	    for(int x=0;x<4;x++)
		{
			pu.selectmouse(x*14,y*6,1);
		
		    Sleep(100);
		}
	}

	Sleep(500);
	system("cls");
	
	     }
	void end(){
	  cout<<"    ¢b¢b¢b¢b                               "<<endl;
	cout<<"   |¢b¢b¢b¢b|                              "<<endl;
	cout<<"¢i¢i¢i¢i¢i¢i¢i¢i                           "<<endl;
	cout<<"¢i            ¢i                           "<<endl;
	cout<<"¢i            ¢i                           "<<endl;
	cout<<"¢i¢i¢i¢i¢i¢i¢i¢i                           "<<endl;
	cout<<"      ¢ª¢«                                 "<<endl;
	cout<<"       |¢l                                 "<<endl;
	cout<<"       |¢l                                 "<<endl;
	cout<<"       |¢l                                 "<<endl;
	cout<<"       |¢l                                 "<<endl;
	cout<<"       |¢l                                 "<<endl;
	cout<<"       |¢l                                 "<<endl;
	cout<<"       |¢l                                 "<<endl;
	cout<<" ¢i¢i¢i¤G¢j                                "<<endl;
	cout<<" ¢i¢i¢i¤T¢j                                "<<endl;
	cout<<"       |¢l                                 "<<endl;
	cout<<"       |¢l                                 "<<endl;
	cout<<"      ¢¨¢©                                 "<<endl;
	cout<<"      ¢ª¢«                                 "<<endl;
	cout<<"                                           "<<endl;
	cout<<"                                           "<<endl;
	pu.selectmouse(30,15,1);
	gotoxy(0,23);

	Sleep(1500);
	system("cls");
	cout<<"       ¢ª¢i¢ª¢i¢i¢i¢i¢i  ¡E)      ¢¡  ¢¡ "<<endl;
	cout<<"         ¢i£`¢i¢i¢i¢i¢i¢i¢©¢b            "<<endl;
	cout<<"         ¢i¢i¢i¢i¢i¢i¢«¢b¢b¢b¢j    )   )     "<<endl;
	cout<<"         ¢i¢i¢i¢i¢i¢i¢© ¢b¢b¢b¢j               "<<endl;
	cout<<"         ¢i¢i¢i¢i¢i¢i¢i¢i                  "<<endl;
	cout<<"         ¢i¢i¢i¢i¢i¢i¢i¢i          |  |       "<<endl;
	cout<<"         ¢i¢p¢i¢p¢i¢«   ¢j                "<<endl;
	cout<<"         ¢i¢p¢i¢p¢i  ¢w¢£        ¢i¢i¢i¢i "<<endl;
	cout<<"         ¢i¢p¢i¢p¢i ¢w¢£         ¢i    ¢i ¢b"<<endl;
	cout<<"         ¢i¢p¢i¢p¢i¢©¢£          ¢i    ¢i|  |"<<endl;
	cout<<" ¢c¢c¢c¢c¢i¢p¢i¢p¢i¢i¢i¢i¢©¢c¢c¢¨¢i    ¢i|  |"<<endl;
	cout<<" ¢w¢w¢w¢w¢i¢i||||¢w¢w¢w¢w¢w¢w¢w¢ª¢i    ¢i|  |"<<endl;
	cout<<"         ¢i¢i¢i¢i¢i¢i¢i¢i¢i      ¢i    ¢i|  |"<<endl;
	cout<<"          ¢i¢i¢i     ¢i¢i¢i      ¢i    ¢i ¢w "<<endl;
	cout<<"          ¢i¢i¢i     ¢i¢i¢i      ¢i¢i¢i¢i "<<endl;
	cout<<"          ¢i¢i¢i     ¢i¢i¢i                    "<<endl;
	cout<<"          ¢i¢i¢i     ¢i¢i¢i                    "<<endl;
	cout<<"          ¢i¢i¢i     ¢i¢i¢«                    "<<endl;
	cout<<"          ¢i¢i¢i   ¢¨¢i¢«                  "<<endl;
	cout<<"                                           "<<endl;
	
	pu.selectmouse(30,15,1);
	gotoxy(0,23);

	Sleep(400);
	pu.selectmouse(30,15,3);
	gotoxy(0,23);

	Sleep(1500);
	system("cls");

	for(int y=0;y<7;y++)
	{
	    for(int x=0;x<4;x++)
		{
			pu.selectmouse(x*14,y*6,1);
		
		}
	}
	for(int y=0;y<7;y++)
	{
	    for(int x=0;x<4;x++)
		{
			pu.selectmouse(x*14,y*6,3);
		
		    Sleep(50);
		}
	}

	Sleep(500);
	system("cls");

	for(int win=0;win<5;win++)
	{
	cout<<"    ¢i¢i¢i¢i                            "<<endl;
	cout<<"¢z¢{¢i    ¢i                            "<<endl;
	cout<<"¢x¢x¢i    ¢i¢©¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¢b¡¶      "<<endl;
	cout<<"¢x¢x¢i    ¢i¢«(oooo)¢v¢v¢v¢v(oooo)¢v¢v¡¿        "<<endl;
	cout<<"¢|¢}¢i    ¢i   ¢i¢i          ¢i¢i             "<<endl;
	cout<<"    ¢i¢i¢i¢i   ¢i¢i          ¢i¢i             "<<endl;
	cout<<"               ¢i¢i ¢¨¢i¢i¢© ¢i¢i             "<<endl;
	cout<<"               ¢i¢i¢i¢i¢i¢i¢i¢i¢i             "<<endl;
	cout<<"               ¢i£`¢i >¢i< ¢i3 ¢i             "<<endl;
	cout<<"               ¢ª¢i¢i¢i¤f¢i¢i¢i¢«             "<<endl;
	cout<<"                 ¢ª ¢¨     ¢©¢«               "<<endl;
	cout<<"                    ¢i     ¢i                 "<<endl;
	cout<<"                    ¢ª¢e-¢e¢«                 "<<endl;
	cout<<"                      ¢o  ¢o                  "<<endl;
     
	Sleep(400);
	gotoxy(0,23);
	system("cls");

	cout<<"                                           "<<endl;
	cout<<"                                           "<<endl;
	cout<<"                                           "<<endl;
	cout<<"                                           "<<endl;
	cout<<"                                           "<<endl;
	cout<<"                                              "<<endl;
	cout<<"                    ¢¨¢i¢i¢©                  "<<endl;
	cout<<"                   ¢i¢i¢i¢i¢i                 "<<endl;
	cout<<"                 £`¢i¡ó¢i¡ó¢i3                "<<endl;
	cout<<"                 ¢¨¢i¢i¤f¢i¢i¢©               "<<endl;
	cout<<"               ¢¨¢i ¢¨     ¢©¢i¢©             "<<endl;
	cout<<"               ¢i¢i ¢i     ¢i¢i¢i             "<<endl;
	cout<<"    ¢i¢i¢i¢i   ¢i¢i ¢ª¢e-¢e¢«¢i¢i             "<<endl;
	cout<<"¢z¢{¢i    ¢i   ¢i¢i   ¢o  ¢o ¢i¢i             "<<endl;
	cout<<"¢x¢x¢i    ¢i¢©(oooo)¢b¢b¢b¢b(oooo)¢b¢b¡¶      "<<endl;
	cout<<"¢x¢x¢i    ¢i¢«¢v¢v¢v¢v¢v¢v¢v¢v¢v¢v¢v¢v¡¿      "<<endl;
	cout<<"¢|¢}¢i    ¢i                                  "<<endl;
	cout<<"    ¢i¢i¢i¢i                                  "<<endl;

	Sleep(400);
	gotoxy(0,23);
	if(win==4)
		break;
	system("cls");
	}
	for(int clos=0;clos<12;clos++)
	{
	   gotoxy(0,clos);
	   cout<<"¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i"<<endl;
	   gotoxy(0,22-clos);
	   cout<<"¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i¢i"<<endl;

	   gotoxy(0,23);
	   if(kbhit()){stop = getch();}
	   Sleep(200);
	}
	Sleep(300);
	system("cls");
	}
	void Play(){
	    PlaySound(TEXT("pekagu.wav"),NULL,SND_FILENAME|SND_ASYNC); 
		OpDoor();
		 Forest();	 
		 brkdown();
		 wow();
		 shake();
		 gethit();
		 runrun();
	     appear();
		 end();
	}

};

#endif