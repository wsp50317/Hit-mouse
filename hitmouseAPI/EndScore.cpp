#ifndef ENDSCORE_H
#define ENDSCORE_H


#include<iostream>
#include<Windows.h>
#include<cstdlib>
#include<ctime>
#include <iomanip>
#include <iomanip>
using namespace std;

//-----------GOTOXY函式------------------
class endscore
{
public:

	void gotoxy(int xpos, int ypos)
	{
	  COORD scrn;
	  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	  scrn.X = xpos; scrn.Y = ypos;
	  SetConsoleCursorPosition(hOuput,scrn);
	}

	//-----------控制顏色的函式---------------

	void SetColor(unsigned short ForeColor=4,unsigned short BackGroundColor=0)
	//給予參數默許值，使它可以接受0/1/2個參數
	{
		HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hCon,ForeColor|BackGroundColor);
	};
	int ColorCode(int f,int b)
	{
		return f + 16*b;
	}

	//--------各種方塊顏色形狀的輸出----------

	void Print(int type)
	{
		if(type==0)
		{
			cout<<"　";
		}
		else if(type==1)
		{
			SetColor(ColorCode(15,0));
			cout<<"◣";
			SetColor(ColorCode(7,0));
		}
		else if(type==2)
		{
			SetColor(ColorCode(15,0));
			cout<<"█";
			SetColor(ColorCode(7,0));
		}
		else if(type==3)
		{
			SetColor(ColorCode(15,0));
			cout<<"◢";
			SetColor(ColorCode(7,0));
		}
		else if(type==4)
		{
			SetColor(ColorCode(0,15));
			cout<<"◢";
			SetColor(ColorCode(7,0));
		}
		else if(type==5)
		{
			SetColor(ColorCode(15,0));
			cout<<"◣";
			SetColor(ColorCode(7,0));
		}
		else if(type==6)
		{
			SetColor(ColorCode(0,15));
			cout<<"◣";
			SetColor(ColorCode(7,0));
		}
		else if(type==7)
		{
			SetColor(ColorCode(15,0));
			cout<<"◥";
			SetColor(ColorCode(7,0));
		}
		else if(type==11)
		{
			SetColor(ColorCode(15,0));
			cout<<"●";
			SetColor(ColorCode(7,0));
		}
		else if(type==12)
		{
			SetColor(ColorCode(15,0));
			cout<<"ˋ";
			SetColor(ColorCode(7,0));
		}
		else if(type==13)
		{
			SetColor(ColorCode(15,0));
			cout<<"ˊ";
			SetColor(ColorCode(7,0));
		}
		else if(type==14)
		{
			SetColor(ColorCode(15,0));
			cout<<"ｗ";
			SetColor(ColorCode(7,0));
		}
		else if(type==15)
		{
			SetColor(ColorCode(12,0));
			cout<<"○";
			SetColor(ColorCode(7,0));
		}
		else if(type==16)
		{
			SetColor(ColorCode(15,0));
			cout<<"＃";
			SetColor(ColorCode(7,0));
		}
		else if(type==17)
		{
			SetColor(ColorCode(15,0));
			cout<<"μ";
			SetColor(ColorCode(7,0));
		}
		else if(type==18)
		{
			SetColor(ColorCode(15,0));
			cout<<"ζ";
			SetColor(ColorCode(7,0));
		}
	}

	void printendscore(int x)
	{
		int pika[11][11]={
			{0,1,0,0,0,0,0,0,0,0,0},
			{0,2,1,0,0,0,0,0,0,0,3},
			{0,2,6,5,0,0,0,0,0,3,2},
			{0,2,0,6,2,2,2,2,2,4,2},
			{0,2,0,0,0,0,0,0,0,7,2},
			{2,0,0,0,12,0,13,0,0,0,2},
			{2,0,0,11,0,0,0,11,0,0,2},
			{2,0,15,0,0,14,0,0,15,0,2},
			{2,0,0,0,0,0,0,0,0,0,2},
			{0,2,0,0,0,0,0,0,0,2,0},
			{0,0,2,2,2,2,2,2,2,0,0}

		};  //一般鼠

		int pikaangry[11][11]={
			{0,1,0,0,0,0,0,0,0,0,0},
			{0,2,1,0,0,0,0,18,0,0,3},
			{0,2,6,5,0,0,0,0,0,3,2},
			{0,2,0,6,2,2,2,2,2,4,2},
			{0,2,0,0,0,0,0,0,0,7,2},
			{2,0,0,0,12,0,13,0,0,0,2},
			{2,0,0,16,0,0,0,16,0,0,2},
			{2,0,15,0,0,17,0,0,15,0,2},
			{2,0,0,0,0,0,0,0,0,0,2},
			{0,2,0,0,0,0,0,0,0,2,0},
			{0,0,2,2,2,2,2,2,2,0,0}

		}; //生氣鼠


		//輸出分數格式
		cout<<endl<<endl<<endl;
		cout<<"　　　　　　　　˙˙˙˙˙˙˙˙˙"<<endl;
		cout<<"　　　　　　　　˙SCORE：<<"<< setw(10)<<x<<"˙"<<endl;
		cout<<"　　　　　　　　˙˙˙˙˙˙˙˙˙"<<endl;
		//--------------------------------------------
	


		//-------------印鼠鼠的無限迴圈-------------

		while(1){

		//第一款

		gotoxy(0,10);

		for(int i=0;i<11;i++)
		{
			for(int j=0;j<11;j++)
			{
				Print(pika[i][j]);
			}
			cout << endl;
		};

		Sleep(1000);
		//system("cls");

		//第二款

		gotoxy(0,10);

		for(int i=0;i<11;i++)
		{
			for(int j=0;j<11;j++)
			{
				Print(pikaangry[i][j]);
			}
			cout << endl;
		};

		//鼠鼠的電電
		gotoxy(24,17);
		Print(18);
		gotoxy(27,14);
		Print(18);

		Sleep(1000);
		//system("cls");

		};//結束這個無限迴圈
	}
};

#endif