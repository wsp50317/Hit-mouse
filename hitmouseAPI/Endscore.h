#ifndef ENDSCORE_H
#define ENDSCORE_H


#include<iostream>
#include<Windows.h>
#include<cstdlib>
#include<ctime>
#include <iomanip>
#include <iomanip>
using namespace std;

//-----------GOTOXY�禡------------------
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

	//-----------�����C�⪺�禡---------------

	void SetColor(unsigned short ForeColor=4,unsigned short BackGroundColor=0)
	//�����Ѽ��q�\�ȡA�ϥ��i�H����0/1/2�ӰѼ�
	{
		HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hCon,ForeColor|BackGroundColor);
	};
	int ColorCode(int f,int b)
	{
		return f + 16*b;
	}

	//--------�U�ؤ���C��Ϊ�����X----------

	void Print(int type)
	{
		if(type==0)
		{
			cout<<"�@";
		}
		else if(type==1)
		{
			SetColor(ColorCode(15,0));
			cout<<"��";
			SetColor(ColorCode(7,0));
		}
		else if(type==2)
		{
			SetColor(ColorCode(15,0));
			cout<<"�i";
			SetColor(ColorCode(7,0));
		}
		else if(type==3)
		{
			SetColor(ColorCode(15,0));
			cout<<"��";
			SetColor(ColorCode(7,0));
		}
		else if(type==4)
		{
			SetColor(ColorCode(0,15));
			cout<<"��";
			SetColor(ColorCode(7,0));
		}
		else if(type==5)
		{
			SetColor(ColorCode(15,0));
			cout<<"��";
			SetColor(ColorCode(7,0));
		}
		else if(type==6)
		{
			SetColor(ColorCode(0,15));
			cout<<"��";
			SetColor(ColorCode(7,0));
		}
		else if(type==7)
		{
			SetColor(ColorCode(15,0));
			cout<<"��";
			SetColor(ColorCode(7,0));
		}
		else if(type==11)
		{
			SetColor(ColorCode(15,0));
			cout<<"��";
			SetColor(ColorCode(7,0));
		}
		else if(type==12)
		{
			SetColor(ColorCode(15,0));
			cout<<"��";
			SetColor(ColorCode(7,0));
		}
		else if(type==13)
		{
			SetColor(ColorCode(15,0));
			cout<<"��";
			SetColor(ColorCode(7,0));
		}
		else if(type==14)
		{
			SetColor(ColorCode(15,0));
			cout<<"�@";
			SetColor(ColorCode(7,0));
		}
		else if(type==15)
		{
			SetColor(ColorCode(12,0));
			cout<<"��";
			SetColor(ColorCode(7,0));
		}
		else if(type==16)
		{
			SetColor(ColorCode(15,0));
			cout<<"��";
			SetColor(ColorCode(7,0));
		}
		else if(type==17)
		{
			SetColor(ColorCode(15,0));
			cout<<"�g";
			SetColor(ColorCode(7,0));
		}
		else if(type==18)
		{
			SetColor(ColorCode(15,0));
			cout<<"�a";
			SetColor(ColorCode(7,0));
		}
	}

	void printendscore(int x)
	{
		PlaySound(TEXT("Victory!.wav"),NULL,SND_LOOP | SND_ASYNC);
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

		};  //�@�빫

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

		}; //�ͮ�


		/*//��X���Ʈ榡
		cout<<endl<<endl<<endl;
		cout<<"�@�@�@�@�@�@�@�@������������������"<<endl;
		cout<<"�@�@�@�@�@�@�@�@��SCORE�G<<"<< setw(10)<<x<<"��"<<endl;
		cout<<"�@�@�@�@�@�@�@�@������������������"<<endl;*/
		//--------------------------------------------
	


		//-------------�L�������L���j��-------------
		int whilecount=3;
		while(1){


			//�Ĥ@��
			cout<<endl<<endl<<endl;
			cout<<"�@�@�@�@�@�@�@�@������������������"<<endl;
			cout<<"�@�@�@�@�@�@�@�@��SCORE�G"<< setw(7)<<x<<"��"<<endl;
			cout<<"�@�@�@�@�@�@�@�@������������������"<<endl;

			gotoxy(0,10);

			for(int i=0;i<11;i++)
			{
				for(int j=0;j<11;j++)
				{
					Print(pika[i][j]);
				}
				cout << endl;
			};

			if(whilecount>0){
				gotoxy(30,15);
				cout<<"����"<<whilecount<<"�����⦸���N�����}";
			}
			else{
				gotoxy(30,15);
				cout<<"�Ы��⦸���N��H���}";
				if(kbhit()){
					gotoxy(30,15);
					system("pause");
					break;
				}
			}

			whilecount--;
			Sleep(1000);
			system("cls");


			//�ĤG��
			cout<<endl<<endl<<endl;
			cout<<"�@�@�@�@�@�@�@�@������������������"<<endl;
			cout<<"�@�@�@�@�@�@�@�@��SCORE�G"<< setw(7)<<x<<"��"<<endl;
			cout<<"�@�@�@�@�@�@�@�@������������������"<<endl;

			gotoxy(0,10);

			for(int i=0;i<11;i++)
			{
				for(int j=0;j<11;j++)
				{
					Print(pikaangry[i][j]);
				}
				cout << endl;
			};

			//�������q�q
			gotoxy(24,17);
			Print(18);
			gotoxy(27,14);
			Print(18);

			if(whilecount>0){
				gotoxy(35,16);
				cout<<"����"<<whilecount<<"�����⦸���N�����}";
			}
			else{
				gotoxy(35,16);
				cout<<"�Ы��⦸���N��H���}";
				if(kbhit()){
					gotoxy(35,16);
					system("pause");
					break;
				}
			}

			Sleep(1000);
			system("cls");

			whilecount--;

		};//�����o�ӵL���j��
	}
};

#endif