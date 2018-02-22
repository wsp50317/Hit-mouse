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
  //�_�l�e����
  void beginning()//�_�l�e��
  {
	  cout << "\n\n\n"/*diglett*/
		     << "              ������ ������ ������ ��     ������ ������ ������\n"
		     << "              ��  ��   ��   ��     ��     ������   ��     ��  \n"
		     << "              ��  ��   ��   ��  �� ��     ��       ��     ��  \n"
		     << "              ������ ������ ������ ������ ������   ��     ��  \n\n"
			 << "              _____________________    _______________________\n"
			 << "             (                     )  (                        )\n"
			 << "            /       ������������          ������������         \\\n"
			 << "           /  _____�X�X�X�X�X�X___     ___�X�X�X�X�X�X_______   \\\n"
			 << "          /  /          _____     �X_�X      _____           \\  \\\n"
			 << "         /  /         /       |             /       |         \\  \\\n"
			 << "        /  /         |    ��   |           |   ��    |         \\  \\\n"
			 << "       /  |            �ááá�             �ááá�            \\  \\\n"
			 << "       |  |     ��  �i  �i  �i  �i  �i  �i  �i  �i  �i  �i  ��   |  | \n\n"
			 << "                   P r e s s  ' 1 '  :  S t a r t  G a m e       \n"
			 << "        �i�i                                                     �i�i\n"
		     << "      �i�i�i�i     P r e s s  ' 2 '  :  H o w  T o  P l a y    �i�i�i�i\n"
			 << "        �i�i                                                     �i�i\n"
		     << "                   P r e s s  ' 3 '  :  E x i t                  \n\n"
			 << "                ��  �i  �i  �i  �i  �i  �i  �i  �i  �i  �i  ��"
			 << "                                                                     \n"
			 << "                                                                     \n"
			 << "                                                                     \n"
			 << "                                                                      \n"
			 << "                   P r e s s  ' 4 '  :  �u �@ �H �� �W ��                    \n"
			 << endl;
  }

};

class howtoplay
{
public:
  //�C�����ѡ�
  virtual void show()//�C������
  {
	cout << "\n\n\n"
		 << "    ��  �� ������ �� �� ��   ������ ������   ������ ��       ��   ��  ��   \n"
		 << "    ������ ��  ��  ������      ��   ��  ��   ������ ��     ������ ������  \n"
		 << "    ��  �� ������   ����       ��   ������   ��     ������ ��  ��   ��      \n\n"
	     << "              _____________________    _______________________\n"
		 << "             (                     )  (                        )\n"
	     << "            /       ������������          ������������         \\\n"
		 << "           /  _____�X�X�X�X�X�X___     ___�X�X�X�X�X�X_______   \\\n"
		 << "          /  /          _____     �X_�X      _____           \\  \\\n"
		 << "         /  /         /       |             /       |         \\  \\\n"
		 << "        /  /         |    �H   |           |   �H    |         \\  \\\n"
		 << "       /  |            �ááá�             �ááá�            \\  \\\n"
		 << "       |  |     ��  �i  �i  �i  �i  �i  �i  �i  �i  �i  �i  ��   |  | \n\n"
		 << "               1 . �C �� �E �c �� �A �� �� �� �� �L �� 1 ~ 9   \n"
		 << "        �i�i                                                     �i�i\n"
	     << "      �i�i�i�i   2 . �a �� �_ �X �� �A �� �U �� �r �� �� ��    �i�i�i�i\n"
		 << "        �i�i                                                     �i�i\n"
	     << "              3 . �Y �� �� �� �� �� �S �� �� �a ���Alife �� - 1    \n\n" 
		 << "                ��  �i  �i  �i  �i  �i  �i  �i  �i  �i  �i  ��"
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