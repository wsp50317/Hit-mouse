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

	menu mn; //�ŧimn��class menu���@�ܼ�
	howtoplay howtoplay1;
	startgame startgame1;
	goexit goexit1;
	ed ed1;
	char menuChoose; //�}�l����ܪ��ʧ@
	PlaySound(TEXT("pekagu.wav"),NULL,SND_FILENAME|SND_ASYNC);
	Opening Opening1;
	Opening1.Play();//����OP�e��
	for(;;) //�i�@�����Ƭݭn�C�������٬O�n���C��
	{
		mn.beginning(); //�_�l�e��
		menuChoose=getch(); //�ϥΪ̿�ܪ��ﶵ
			if(menuChoose=='1'){//�C��
				system("cls");//��s����
				showByReference(startgame1);
				system("cls");				
				continue;
			}

			if(menuChoose=='2'){ //�C������
				system("cls");
				showByReference(howtoplay1);
				system("cls");
				continue;
			}

			if(menuChoose=='3'){//���}
				showByReference(goexit1);//�����NŲ���}
			}

			if(menuChoose=='4'){//����u�@�H���W��
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
