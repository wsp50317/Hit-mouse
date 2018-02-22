#ifndef FRAME_H
#define FRAME_H
#include <iostream>
#include <string>
#include<Windows.h>
using namespace std;

class frame
{
public:

	void gotoxy(int xpos, int ypos)
	{
	  COORD scrn;
	  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	  scrn.X = xpos; scrn.Y = ypos;
	  SetConsoleCursorPosition(hOuput,scrn);
	}

	void printframe()
	{
		for(int i=0;i<34;i++)
		{
			gotoxy(0,i);
			cout<<"¢i";
			gotoxy(72,i);
			cout<<"¢i";
		}
		for(int i=0;i<37;i++)
		{
			gotoxy(i*2,0);
			cout<<"¢i";
			gotoxy(i*2,34);
			cout<<"¢i";
		}
	}

private:
};

#endif