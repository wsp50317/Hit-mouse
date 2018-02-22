#ifndef API_H
#define API_H
#include <iostream>
#include <conio.h>
#include "frame.h"
#include "mouse.h"
#include <time.h>
#include "picture.h"
#include <Windows.h>
#include "occurtime.h"
#include "Endscore.h"

class API
{
public:
	//-----------GOTOXY函式------------------

	void gotoxy(int xpos, int ypos)
	{
	  COORD scrn;
	  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	  scrn.X = xpos; scrn.Y = ypos;
	  SetConsoleCursorPosition(hOuput,scrn);
	}

	//-------------------------------------------
	
		void Initialize()
	{
		score=0;
		life=3;
		gotoxy(3,31);
		cout<<"score:"<<score;
		gotoxy(3,32);
		cout<<"life:"<<life;
	}

	void scoreplus(int x)
	{
		score+=x;
		gotoxy(3,31);
		cout<<"score:"<<score;
	}

	void lifeminer()
	{
		life--;
		gotoxy(3,32);
		cout<<"life:"<<life;
	}

	int getlife()
	{
		return life;
	}

	void setlevel()
	{
	  cout << "\n\n\n"/*diglett*/
		     << "              ■■◣ ■■■ ◢■■ ■     ■■■ ■■■ ■■■\n"
		     << "              ■  ■   ■   ■     ■     ■■■   ■     ■  \n"
		     << "              ■  ■   ■   ■  ■ ■     ■       ■     ■  \n"
		     << "              ■■◤ ■■■ ◥■■ ■■■ ■■■   ■     ■  \n\n"
			 << "              _____________________    _______________________\n"
			 << "             (                     )  (                        )\n"
			 << "            /       ■■■■■■          ■■■■■■         \\\n"
			 << "           /  _____——————___     ___——————_______   \\\n"
			 << "          /  /          _____     —_—      _____           \\  \\\n"
			 << "         /  /         /       |             /       |         \\  \\\n"
			 << "        /  /         |    ●   |           |   ●    |         \\  \\\n"
			 << "       /  |            ￣￣￣￣             ￣￣￣￣            \\  \\\n"
			 << "       |  |     ◤  █  █  █  █  █  █  █  █  █  █  ◥   |  | \n\n"
			 << "                   P r e s s  ' 1 '  :  蘿 蔔 級                        \n"
			 << "        ██                                                     ██\n"
		     << "      ████     P r e s s  ' 2 '  :  地 鼠 級               ████\n"
			 << "        ██                                                     ██\n"
		     << "                   P r e s s  ' 3 '  :  超 地 鼠 級                  \n\n"
			 << "                ◣  █  █  █  █  █  █  █  █  █  █  ◢"
			 << endl;
		char selectlevel;
		while(1){
			selectlevel=getch();
			if(selectlevel=='1')
			{
				level=500;
				break;
			}
			else if(selectlevel=='2')
			{
				level=200;
				break;
			}
			else if(selectlevel=='3')
			{
				level=50;
				break;
			}
		}
	}

	int getlevel()
	{
		return level;
	}

	void gamestart()
	{
		PlaySound(TEXT("battle.wav"),NULL,SND_LOOP | SND_ASYNC);
		char control=0;
		char press=0;
		char pick=0;
		int ramdom=0;
		int delay=10;
		int carrotlive=30;
		Initialize();
		f1.printframe();
		mouse mouse9(50,3);
		mouse mouse6(50,12);
		mouse mouse3(50,22);
		mouse mouse8(30,3);
		mouse mouse5(30,12);
		mouse mouse2(30,22);
		mouse mouse7(10,3);
		mouse mouse4(10,12);
		mouse mouse1(10,22);
		occurtime mousetime1;
		occurtime carrottime1;
		occurtime mousetime2;
		occurtime carrottime2;
		occurtime mousetime3;
		occurtime carrottime3;
		occurtime mousetime4;
		occurtime carrottime4;
		occurtime mousetime5;
		occurtime carrottime5;
		occurtime mousetime6;
		occurtime carrottime6;
		occurtime mousetime7;
		occurtime carrottime7;
		occurtime mousetime8;
		occurtime carrottime8;
		occurtime mousetime9;
		occurtime carrottime9;

		srand(time(NULL));

		while(1){
			/*gotoxy(10,30);
			cout<<"mouse.gettime():"<<mousetime1.gettime()<<"       carrot.gettime():"<<carrottime1.gettime()<<endl;*/
			///物體的出現///

			gotoxy(10,30);
			//1//
			ramdom=(rand()%getlevel());
			if(ramdom==1 || ramdom==2)
			{
				if(mouse1.getmouse()==0 && mouse1.getcarrot()==0){
					mouse1.setmouse();
					mousetime1.startoccurtime();
				}
				else if(mouse1.getmouse()==1 && mousetime1.gettime()>delay){
					mouse1.nohit();
					mousetime1.stoptime();
					lifeminer();
				}
			}
			if(ramdom==3)
			{
				if(mouse1.getmouse()==0 && mouse1.getcarrot()==0){
					mouse1.setcarrot();
					carrottime1.startoccurtime();
				}
			}
			if(carrottime1.gettime()>carrotlive){
				mouse1.nopullout();
				carrottime1.stoptime();
			}
			
			///

			//2//
			ramdom=(rand()%getlevel());
			if(ramdom==1 || ramdom==2)
			{
				if(mouse2.getmouse()==0 && mouse2.getcarrot()==0){
					mouse2.setmouse();
					mousetime2.startoccurtime();
				}
				else if(mouse2.getmouse()==1 && mousetime2.gettime()>delay){
					mouse2.nohit();
					mousetime2.stoptime();
					lifeminer();
				}
			}
			if(ramdom==3)
			{
				if(mouse2.getmouse()==0 && mouse2.getcarrot()==0){
					mouse2.setcarrot();
					carrottime2.startoccurtime();
				}
			}
			if(carrottime2.gettime()>carrotlive){
				mouse2.nopullout();
				carrottime2.stoptime();
			}
			
			///

			//3//
			ramdom=(rand()%getlevel());
			if(ramdom==1 || ramdom==2)
			{
				if(mouse3.getmouse()==0 && mouse3.getcarrot()==0){
					mouse3.setmouse();
					mousetime3.startoccurtime();
				}
				else if(mouse3.getmouse()==1 && mousetime3.gettime()>delay){
					mouse3.nohit();
					mousetime3.stoptime();
					lifeminer();
				}
			}
			if(ramdom==3)
			{
				if(mouse3.getmouse()==0 && mouse3.getcarrot()==0){
					mouse3.setcarrot();
					carrottime3.startoccurtime();
				}
			}
			if(carrottime3.gettime()>carrotlive){
				mouse3.nopullout();
				carrottime3.stoptime();
			}
			
			///

			//4//
			ramdom=(rand()%getlevel());
			if(ramdom==1 || ramdom==2)
			{
				if(mouse4.getmouse()==0 && mouse4.getcarrot()==0){
					mouse4.setmouse();
					mousetime4.startoccurtime();
				}
				else if(mouse4.getmouse()==1 && mousetime4.gettime()>delay){
					mouse4.nohit();
					mousetime4.stoptime();
					lifeminer();
				}
			}
			if(ramdom==3)
			{
				if(mouse4.getmouse()==0 && mouse4.getcarrot()==0){
					mouse4.setcarrot();
					carrottime4.startoccurtime();
				}
			}
			if(carrottime4.gettime()>carrotlive){
				mouse4.nopullout();
				carrottime4.stoptime();
			}
			
			///

			//5//
			ramdom=(rand()%getlevel());
			if(ramdom==1 || ramdom==2)
			{
				if(mouse5.getmouse()==0 && mouse5.getcarrot()==0){
					mouse5.setmouse();
					mousetime5.startoccurtime();
				}
				else if(mouse5.getmouse()==1 && mousetime5.gettime()>delay){
					mouse5.nohit();
					mousetime5.stoptime();
					lifeminer();
				}
			}
			if(ramdom==3)
			{
				if(mouse5.getmouse()==0 && mouse5.getcarrot()==0){
					mouse5.setcarrot();
					carrottime5.startoccurtime();
				}
			}
			if(carrottime5.gettime()>carrotlive){
				mouse5.nopullout();
				carrottime5.stoptime();
			}
			
			///

			//6//
			ramdom=(rand()%getlevel());
			if(ramdom==1 || ramdom==2)
			{
				if(mouse6.getmouse()==0 && mouse6.getcarrot()==0){
					mouse6.setmouse();
					mousetime6.startoccurtime();
				}
				else if(mouse6.getmouse()==1 && mousetime6.gettime()>delay){
					mouse6.nohit();
					mousetime6.stoptime();
					lifeminer();
				}
			}
			if(ramdom==3)
			{
				if(mouse6.getmouse()==0 && mouse6.getcarrot()==0){
					mouse6.setcarrot();
					carrottime6.startoccurtime();
				}
			}
			if(carrottime6.gettime()>carrotlive){
				mouse6.nopullout();
				carrottime6.stoptime();
			}
			
			///

			//7//
			ramdom=(rand()%getlevel());
			if(ramdom==1 || ramdom==2)
			{
				if(mouse7.getmouse()==0 && mouse7.getcarrot()==0){
					mouse7.setmouse();
					mousetime7.startoccurtime();
				}
				else if(mouse7.getmouse()==1 && mousetime7.gettime()>delay){
					mouse7.nohit();
					mousetime7.stoptime();
					lifeminer();
				}
			}
			if(ramdom==3)
			{
				if(mouse7.getmouse()==0 && mouse7.getcarrot()==0){
					mouse7.setcarrot();
					carrottime7.startoccurtime();
				}
			}
			if(carrottime7.gettime()>carrotlive){
				mouse7.nopullout();
				carrottime7.stoptime();
			}
			
			///

			//8//
			ramdom=(rand()%getlevel());
			if(ramdom==1 || ramdom==2)
			{
				if(mouse8.getmouse()==0 && mouse8.getcarrot()==0){
					mouse8.setmouse();
					mousetime8.startoccurtime();
				}
				else if(mouse8.getmouse()==1 && mousetime8.gettime()>delay){
					mouse8.nohit();
					mousetime8.stoptime();
					lifeminer();
				}
			}
			if(ramdom==3)
			{
				if(mouse8.getmouse()==0 && mouse8.getcarrot()==0){
					mouse8.setcarrot();
					carrottime8.startoccurtime();
				}
			}
			if(carrottime8.gettime()>carrotlive){
				mouse8.nopullout();
				carrottime8.stoptime();
			}
			
			///

			//9//
			ramdom=(rand()%getlevel());
			if(ramdom==1 || ramdom==2)
			{
				if(mouse9.getmouse()==0 && mouse9.getcarrot()==0){
					mouse9.setmouse();
					mousetime9.startoccurtime();
				}
				else if(mouse9.getmouse()==1 && mousetime9.gettime()>delay){
					mouse9.nohit();
					mousetime9.stoptime();
					lifeminer();
				}
			}
			if(ramdom==3)
			{
				if(mouse9.getmouse()==0 && mouse9.getcarrot()==0){
					mouse9.setcarrot();
					carrottime9.startoccurtime();
				}
			}
			if(carrottime9.gettime()>carrotlive){
				mouse9.nopullout();
				carrottime9.stoptime();
			}
			
			///

			if(kbhit()){control = getch();}
			if(control=='1'){
				if(mouse1.getmouse()==1)
				{
					mouse1.hitmouse();
					scoreplus(100);
					mousetime1.stoptime();
				}
				if(mouse1.getcarrot()==1)
				{
					mouse1.pulloutcarrot();
					lifeminer();
					carrottime1.stoptime();
				}
				control=NULL;
			}
			if(control=='2'){
				if(mouse2.getmouse()==1)
				{
					mouse2.hitmouse();
					scoreplus(100);
					mousetime2.stoptime();
				}
				if(mouse2.getcarrot()==1)
				{
					mouse2.pulloutcarrot();
					lifeminer();
					carrottime2.stoptime();
				}
				control=NULL;
			}
			if(control=='3'){
				if(mouse3.getmouse()==1)
				{
					mouse3.hitmouse();
					scoreplus(100);
					mousetime3.stoptime();
				}
				if(mouse3.getcarrot()==1)
				{
					mouse3.pulloutcarrot();
					lifeminer();
					carrottime3.stoptime();
				}
				control=NULL;
			}
			if(control=='4'){
				if(mouse4.getmouse()==1)
				{
					mouse4.hitmouse();
					scoreplus(100);
					mousetime4.stoptime();
				}
				if(mouse4.getcarrot()==1)
				{
					mouse4.pulloutcarrot();
					lifeminer();
					carrottime4.stoptime();
				}
				control=NULL;
			}
			if(control=='5'){
				if(mouse5.getmouse()==1)
				{
					mouse5.hitmouse();
					scoreplus(100);
					mousetime5.stoptime();
				}
				if(mouse5.getcarrot()==1)
				{
					mouse5.pulloutcarrot();
					lifeminer();
					carrottime5.stoptime();
				}
				control=NULL;
			}
			if(control=='6'){
				if(mouse6.getmouse()==1)
				{
					mouse6.hitmouse();
					scoreplus(100);
					mousetime6.stoptime();
				}
				if(mouse6.getcarrot()==1)
				{
					mouse6.pulloutcarrot();
					lifeminer();
					carrottime6.stoptime();
				}
				control=NULL;
			}
			if(control=='7'){
				if(mouse7.getmouse()==1)
				{
					mouse7.hitmouse();
					scoreplus(100);
					mousetime7.stoptime();
				}
				if(mouse7.getcarrot()==1)
				{
					mouse7.pulloutcarrot();
					lifeminer();
					carrottime7.stoptime();
				}
				control=NULL;
			}
			if(control=='8'){
				if(mouse8.getmouse()==1)
				{
					mouse8.hitmouse();
					scoreplus(100);
					mousetime8.stoptime();
				}
				if(mouse8.getcarrot()==1)
				{
					mouse8.pulloutcarrot();
					lifeminer();
					carrottime8.stoptime();
				}
				control=NULL;
			}
			if(control=='9'){
				if(mouse9.getmouse()==1)
				{
					mouse9.hitmouse();
					scoreplus(100);
					mousetime9.stoptime();
				}
				if(mouse9.getcarrot()==1)
				{
					mouse9.pulloutcarrot();
					lifeminer();
					carrottime9.stoptime();
				}
				control=NULL;
			}

			////////////////遊戲結束判斷//////////////
			if(getlife()<1)
			{
				break;
			}
			////////////////////////
			Sleep(50);
			//////////////timer///////////////
			mousetime1.timeplus();
			mousetime2.timeplus();
			mousetime3.timeplus();
			mousetime4.timeplus();
			mousetime5.timeplus();
			mousetime6.timeplus();
			mousetime7.timeplus();
			mousetime8.timeplus();
			mousetime9.timeplus();
			carrottime1.timeplus();
			carrottime2.timeplus();
			carrottime3.timeplus();
			carrottime4.timeplus();
			carrottime5.timeplus();
			carrottime6.timeplus();
			carrottime7.timeplus();
			carrottime8.timeplus();
			carrottime9.timeplus();
		}
		/////////////跳脫while，印出遊戲結束////////////
		system("CLS");
		endscore1.printendscore(score);
		PlaySound(TEXT("pekagu.wav"),NULL,SND_FILENAME|SND_ASYNC);

	}
private:
	int score;
	int life;
	int level;
	frame f1;
	endscore endscore1;
};
#endif