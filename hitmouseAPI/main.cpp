#include <iostream>
#include <conio.h>
#include <time.h>
#include "frame.h"
#include "mouse.h"
#include "picture.h"
#include "API.h"
#include "score.h"
#include "menu.h"
#include "Opening.h"
#include "ed.h"
#include "EndScore.h"

using namespace std;


int main(){
	/*endscore endscore1;
	endscore1.printendscore(100);*/

	menu mn; //宣告mn為class menu的一變數
	howtoplay howtoplay1;
	startgame startgame1;
	goexit goexit1;
	ed ed1;
	char menuChoose; //開始選單選擇的動作
	PlaySound(TEXT("pekagu.wav"),NULL,SND_FILENAME|SND_ASYNC);
	Opening Opening1;
	Opening1.Play();//炫砲OP畫面
	for(;;) //可一直重複看要遊戲說明還是要玩遊戲
	{
		mn.beginning(); //起始畫面
		menuChoose=getch(); //使用者選擇的選項
			if(menuChoose=='1'){//遊玩
				system("cls");//刷新頁面
				showByReference(startgame1);
				system("cls");				
				continue;
			}

			if(menuChoose=='2'){ //遊戲說明
				system("cls");
				showByReference(howtoplay1);
				system("cls");
				continue;
			}

			if(menuChoose=='3'){//離開
				showByReference(goexit1);//按任意鑑離開
			}

			if(menuChoose=='4'){//撥放工作人員名單
				system("cls");
				ed1.playinged();
				system("cls");
			}
			else{
				system("cls");	
				continue;
			}

	}
}
