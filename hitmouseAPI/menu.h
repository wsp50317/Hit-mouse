#ifndef MENU_H
#define MENU_H
#include <string>
#include "picture.h"
#include "score.h"
#include "API.h"


using namespace std;

class menu
{
public:
  //起始畫面↓
  void beginning()//起始畫面
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
			 << "                   P r e s s  ' 1 '  :  S t a r t  G a m e       \n"
			 << "        ██                                                     ██\n"
		     << "      ████     P r e s s  ' 2 '  :  H o w  T o  P l a y    ████\n"
			 << "        ██                                                     ██\n"
		     << "                   P r e s s  ' 3 '  :  E x i t                  \n\n"
			 << "                ◣  █  █  █  █  █  █  █  █  █  █  ◢"
			 << "                                                                     \n"
			 << "                                                                     \n"
			 << "                                                                     \n"
			 << "                                                                      \n"
			 << "                   P r e s s  ' 4 '  :  工 作 人 員 名 單                    \n"
			 << endl;
  }

};

class howtoplay
{
public:
  //遊戲講解↓
  virtual void show()//遊戲講解
  {
	cout << "\n\n\n"
		 << "    ■  ■ ■■■ ■ ■ ■   ■■■ ■■■   ■■◣ ■       ■   ■  ■   \n"
		 << "    ■■■ ■  ■  ■■■      ■   ■  ■   ■■■ ■     ■■■ ■■■  \n"
		 << "    ■  ■ ■■■   ■■       ■   ■■■   ■     ■■■ ■  ■   ■      \n\n"
	     << "              _____________________    _______________________\n"
		 << "             (                     )  (                        )\n"
	     << "            /       ■■■■■■          ■■■■■■         \\\n"
		 << "           /  _____——————___     ___——————_______   \\\n"
		 << "          /  /          _____     —_—      _____           \\  \\\n"
		 << "         /  /         /       |             /       |         \\  \\\n"
		 << "        /  /         |    ？   |           |   ？    |         \\  \\\n"
		 << "       /  |            ￣￣￣￣             ￣￣￣￣            \\  \\\n"
		 << "       |  |     ◤  █  █  █  █  █  █  █  █  █  █  ◥   |  | \n\n"
		 << "               1 . 遊 戲 九 宮 格 ， 對 應 到 鍵 盤 的 1 ~ 9   \n"
		 << "        ██                                                     ██\n"
	     << "      ████   2 . 地 鼠 冒 出 時 ， 按 下 數 字 鍵 打 擊    ████\n"
		 << "        ██                                                     ██\n"
	     << "              3 . 吃 到 紅 蘿 蔔 或 沒 打 到 地 鼠，life 值 - 1    \n\n" 
		 << "                ◣  █  █  █  █  █  █  █  █  █  █  ◢"
		 << endl;
	system("pause");
  }
};

class startgame : public howtoplay
{
public:
	virtual void show()
	{
		API1.setlevel();
		system("cls");
		API1.gamestart();
	}
private:
	API API1;
};

class goexit : public startgame
{
public:
	virtual void show()
	{
		exit(1);
	}
};

void showByReference(howtoplay &x){
	  x.show();
};
#endif