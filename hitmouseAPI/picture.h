#ifndef PICTURE_H
#define PICTURE_H

#include<Windows.h>
using namespace std;

class picture
{
public:
	//friend class mouse;

	//-----------GOTOXY函式------------------

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

	void Print(int type) //12345是頭，0是黑色空白，6是眼白，7是眼球，8是w，9是石頭，10是GG圖，11、12是靠北臉
	{
		if(type==0)
		{
			cout<<"　";
		}
		else if(type==1)
		{
			SetColor(ColorCode(4,0));
			cout<<"▄";
			SetColor(ColorCode(7,0));
		}
		else if(type==2)
		{
			SetColor(ColorCode(4,0));
			cout<<"▆";
			SetColor(ColorCode(7,0));
		}
		else if(type==3)
		{
			SetColor(ColorCode(4,0));
			cout<<"█";
			SetColor(ColorCode(7,0));
		}
		else if(type==4)
		{
			SetColor(ColorCode(4,0));
			cout<<"▆";
			SetColor(ColorCode(7,0));
		}
		else if(type==5)
		{
			SetColor(ColorCode(4,0));
			cout<<"▃";
			SetColor(ColorCode(7,0));
		}
		else if(type==6)
		{
			SetColor(ColorCode(8,15));
			cout<<"▎";
			SetColor(ColorCode(7,0));
		}
		else if(type==7)
		{
			SetColor(ColorCode(0,15));
			cout<<"▎";
			SetColor(ColorCode(7,0));
		}
		else if(type==8)
		{
			SetColor(ColorCode(0,4));
			cout<<"ω";
			SetColor(ColorCode(7,0));
		}
		else if(type==9)
		{
			SetColor(ColorCode(8,0));
			cout<<"●";
			SetColor(ColorCode(7,0));
		}
		else if(type==10)
		{
			SetColor(ColorCode(14,0));
			cout<<"█";
			SetColor(ColorCode(7,0));
		}
		else if(type==11)
		{
			SetColor(ColorCode(0,4));
			cout<<"╯";
			SetColor(ColorCode(7,0));
		}
		else if(type==12)
		{
			SetColor(ColorCode(0,4));
			cout<<"╰";
			SetColor(ColorCode(7,0));
		}
		else if(type==13)
		{
			SetColor(ColorCode(10,0));
			cout<<"█";
			SetColor(ColorCode(7,0));
		}
		else if(type==14)
		{
			SetColor(ColorCode(12,0));
			cout<<"▄";
			SetColor(ColorCode(7,0));
		}
		else if(type==15)
		{
			SetColor(ColorCode(12,0));
			cout<<"▆";
			SetColor(ColorCode(7,0));
		}
		else if(type==16)
		{
			SetColor(ColorCode(12,0));
			cout<<"█";
			SetColor(ColorCode(7,0));
		}
		else if(type==17)
		{
			SetColor(ColorCode(12,0));
			cout<<"▆";
			SetColor(ColorCode(7,0));
		}
		else if(type==18)
		{
			SetColor(ColorCode(12,0));
			cout<<"▃";
			SetColor(ColorCode(7,0));
		}
		else if(type==19)
		{
			SetColor(ColorCode(4,0));
			cout<<"╭";
			SetColor(ColorCode(7,0));
		}
		else if(type==20)
		{
			SetColor(ColorCode(4,0));
			cout<<"─";
			SetColor(ColorCode(7,0));
		}
		else if(type==21)
		{
			SetColor(ColorCode(4,0));
			cout<<"╮";
			SetColor(ColorCode(7,0));
		}
		else if(type==22)
		{
			SetColor(ColorCode(4,0));
			cout<<"│";
			SetColor(ColorCode(7,0));
		}
		else if(type==23)
		{
			SetColor(ColorCode(12,0));
			cout<<"▉";
			SetColor(ColorCode(7,0));
		}
		else if(type==24)
		{
			SetColor(ColorCode(0,12));
			cout<<"▎";
			SetColor(ColorCode(7,0));
		}
		else if(type==25)
		{
			SetColor(ColorCode(4,0));
			cout<<"█";
			SetColor(ColorCode(7,0));
		}
		else if(type==26)
		{
			SetColor(ColorCode(0,4));
			cout<<"▏";
			SetColor(ColorCode(7,0));
		}
		else if(type==27)
		{
			SetColor(ColorCode(8,15));
			cout<<"囗";
			SetColor(ColorCode(7,0));
		}
	}
	

	//----------------------------------------

	void selectmouse(int x,int y,int A)	//x與y為設定顯示位址// //-------A為0會出現洞，1會出現一般鼠，2會出現靠北鼠，3會出現敲中時的GG圖，4會出現蘿蔔，5會出現三地鼠-------//
	{
		 //宣告每一種狀況的樣子

		int frame[7][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}}; //這是什麼都沒有的框框

		int non[7][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,9,9,9,9,9,0},{9,0,0,0,0,0,9},{9,9,9,9,9,9,9},{0,9,9,9,9,9,0}};//這是沒地鼠的樣子
		int com[7][7]={{0,1,2,3,4,5,0},{0,3,6,3,6,3,0},{0,3,7,3,7,3,0},{0,3,3,3,3,3,0},{9,3,3,8,3,3,9},{9,9,9,9,9,9,9},{0,9,9,9,9,9,0}};//這是一般鼠
		int hit[7][7]={{0,10,10,10,10,10,0},{0,10,0,0,0,10,0},{0,10,0,0,0,0,0},{0,10,0,0,10,10,0},{9,10,10,10,0,10,9},{9,9,9,9,9,10,9},{0,9,9,9,9,9,0}};//這是GG的圖樣
		int Db[7][7]={{0,1,2,3,4,5,0},{0,3,3,3,3,3,0},{0,3,11,3,12,3,0},{0,3,3,3,3,3,0},{9,3,3,8,3,3,9},{9,9,9,9,9,9,9},{0,9,9,9,9,9,0}};//這是靠北臉

		int lobo[7][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,13,0,13,0,13,0},{0,14,15,16,17,18,0},{9,16,16,16,16,16,9},{9,9,9,9,9,9,9},{0,9,9,9,9,9,0}};//這是蘿蔔
		int tri[7][7]={{0,0,0,0,0,0,0},{0,0,19,20,21,0,0},{0,19,20,21,22,0,0},{0,22,0,22,20,21,0},{9,22,0,22,0,22,9},{9,9,9,9,9,9,9},{0,9,9,9,9,9,0}};//這是三地鼠
		int loboout[7][7]={{0,13,0,13,0,13,0},{0,14,15,16,17,18,0},{0,16,16,16,16,16,0},{0,26,25,16,16,23,0},{9,24,16,16,16,23,9},{9,9,9,9,9,9,9},{0,9,9,9,9,9,0}};//蘿蔔被拔
		int www[7][7]={{0,1,2,3,4,5,0},{0,3,3,3,3,3,0},{0,3,11,3,12,3,0},{0,3,3,3,3,3,0},{9,3,3,27,3,3,9},{9,9,9,9,9,9,9},{0,9,9,9,9,9,0}};//囧囧臉
		//-------實作註解-----//

		// 初始狀態：全黑
		/*for(int i=0;i<7;i++)
		{
			for(int j=0;j<7;j++)
			{
				Print(frame[i][j]);
			}
			cout << endl;
		}*/

		//實作：輸入0會出現洞，1會出現一般鼠，2會出現靠北鼠，3會出現敲中時的GG圖，4會出現蘿蔔，5會出現三地鼠，6代表蘿蔔被拔
			gotoxy(x,y);
			for(int i=0;i<7;i++)
			{
				gotoxy(x,y+i);
				for(int j=0;j<7;j++)
				{
					if(A==0)
					{	
						//gotoxy(i+10,j+10);
						Print(non[i][j]);
					}
					else if(A==1)
					{
						Print(com[i][j]);
					}
					else if(A==2)
					{Print(Db[i][j]);}
					else if(A==3)
					{Print(hit[i][j]);}
					else if(A==4)
					{Print(lobo[i][j]);}
					else if(A==5)
					{Print(tri[i][j]);}
					else if(A==6)
					{Print(loboout[i][j]);}
					else if(A==7)
					{Print(www[i][j]);}
				}
				//cout << endl;
			}
	}
};

#endif