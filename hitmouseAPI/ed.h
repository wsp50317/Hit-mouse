#ifndef ED_H
#define ED_H
#include<iostream>
#include<Windows.h>
using namespace std;
#include<MMSystem.h>
#pragma comment(lib, "Winmm.lib") 
/*void gotoxy(int xpos, int ypos)
	{
	  COORD scrn;
	  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	  scrn.X = xpos; scrn.Y = ypos;
	  SetConsoleCursorPosition(hOuput,scrn);
	};*/
class ed{
public:
	void playinged(){
	   PlaySound(TEXT("ed.wav"),NULL,SND_FILENAME|SND_ASYNC);
	Sleep(2000);
	cout<<"                                        "<<endl;
	cout<<"                                    "<<endl;
	cout<<"                                    "<<endl;
	cout<<"                                  "<<endl;
	cout<<"                                "<<endl;
	cout<<"                                           "<<endl;
	cout<<"                           "<<endl;
	cout<<"                             "<<endl;
	cout<<"                              "<<endl;
	cout<<"                           "<<endl;
	cout<<"                               "<<endl;
	cout<<"                             "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                                          "<<endl;
	cout<<"                ���i�i��                  "<<endl;
	cout<<"               �i�i�i�i�i                 "<<endl;
	cout<<"             �`�i��i��i3                "<<endl;
	cout<<"             ���i�i�f�i�i��               "<<endl;
	cout<<"           ���i ��     ���i��             "<<endl;
	cout<<"           �i�i �i     �i�i�i             "<<endl;
	cout<<"           �i�i ���e-�e���i�i             "<<endl;
	cout<<"           �i�i   �o  �o �i�i             "<<endl;
	cout<<"          (oooo)        (oooo)            "<<endl;
	Sleep(300);
    gotoxy(0,1);
	cout<<"              Presnt from                 "<<endl;
	Sleep(500);
	gotoxy(0,5);
	cout<<"            "<<"�p";Sleep(400);cout<<"�]";Sleep(400);
    cout<<"��";Sleep(400);cout<<"�X";Sleep(400);cout<<"�]";Sleep(400);cout<<"�u";Sleep(400);cout<<"�@";Sleep(400);cout<<"�{";Sleep(400);
	Sleep(1600);
	gotoxy(0,1);
	cout<<"              Group number                "<<endl;
	gotoxy(0,5);
	cout<<"                                          "<<endl;
	Sleep(500);
	gotoxy(0,5);
	cout<<"                 "<<"�d�Ƭ�"<<endl; Sleep(200);
	gotoxy(0,6);
	cout<<"                 "<<"�\����"<<endl; Sleep(200);
	gotoxy(0,7);
	cout<<"                 "<<"������"<<endl; Sleep(200);
	gotoxy(0,8);
	cout<<"                 "<<"���ɺd"<<endl; Sleep(200);
	gotoxy(0,23);
    Sleep(4000);
	gotoxy(0,0);
	cout<<"                                        "<<endl;
	cout<<"                                    "<<endl;
	cout<<"                                    "<<endl;
	cout<<"                                  "<<endl;
	cout<<"                                "<<endl;
	cout<<"                                           "<<endl;
	cout<<"                           "<<endl;
	cout<<"                             "<<endl;
	cout<<"                              "<<endl;
	cout<<"                           "<<endl;
	cout<<"                               "<<endl;
	cout<<"                             "<<endl;
	gotoxy(0,1);
    cout<<"              Game Desinger              "<<endl;
	gotoxy(0,4);
	cout<<"                 ";cout<<"�d";Sleep(400);cout<<"��";Sleep(400);cout<<"��";Sleep(400);
	gotoxy(0,23);
	Sleep(5000);

	gotoxy(0,0);
	cout<<"                                        "<<endl;
	cout<<"                                    "<<endl;
	cout<<"                                    "<<endl;
	cout<<"                                  "<<endl;
	cout<<"                                "<<endl;
	cout<<"                                           "<<endl;
	cout<<"                           "<<endl;
	cout<<"                             "<<endl;
	cout<<"                              "<<endl;
	cout<<"                           "<<endl;
	cout<<"                               "<<endl;
	cout<<"                             "<<endl;
	gotoxy(0,1);
    cout<<"               Anime Maker              "<<endl;
	gotoxy(0,4);
	cout<<"                 ";cout<<"�\";Sleep(400);cout<<"��";Sleep(400);cout<<"��";Sleep(400);
	gotoxy(0,23);
	Sleep(5000);
	gotoxy(0,0);
	cout<<"                                        "<<endl;
	cout<<"                                    "<<endl;
	cout<<"                                    "<<endl;
	cout<<"                                  "<<endl;
	cout<<"                                "<<endl;
	cout<<"                                           "<<endl;
	cout<<"                           "<<endl;
	cout<<"                             "<<endl;
	cout<<"                              "<<endl;
	cout<<"                           "<<endl;
	cout<<"                               "<<endl;
	cout<<"                             "<<endl;
	gotoxy(0,1);
    cout<<"               Meun Maker              "<<endl;
	gotoxy(0,4);
	cout<<"                 ";cout<<"��";Sleep(400);cout<<"��";Sleep(400);cout<<"��";Sleep(400);
	gotoxy(0,23);
	Sleep(5000);

	gotoxy(0,0);
	cout<<"                                        "<<endl;
	cout<<"                                    "<<endl;
	cout<<"                                    "<<endl;
	cout<<"                                  "<<endl;
	cout<<"                                "<<endl;
	cout<<"                                           "<<endl;
	cout<<"                           "<<endl;
	cout<<"                             "<<endl;
	cout<<"                              "<<endl;
	cout<<"                           "<<endl;
	cout<<"                               "<<endl;
	cout<<"                             "<<endl;
	gotoxy(0,1);
    cout<<"              Game Artist              "<<endl;
	gotoxy(0,4);
	cout<<"                 ";cout<<"��";Sleep(400);cout<<"��";Sleep(400);cout<<"�d";Sleep(400);
	gotoxy(0,23);
	Sleep(5000);
	gotoxy(0,0);
	cout<<"                                        "<<endl;
	cout<<"                                    "<<endl;
	cout<<"                                    "<<endl;
	cout<<"                                  "<<endl;
	cout<<"                                "<<endl;
	cout<<"                                           "<<endl;
	cout<<"                           "<<endl;
	cout<<"                             "<<endl;
	cout<<"                              "<<endl;
	cout<<"                           "<<endl;
	cout<<"                               "<<endl;
	cout<<"                             "<<endl;
	gotoxy(0,1);
    cout<<"           THANKS FOR           "<<endl;
	gotoxy(0,4);
	cout<<"                 ";cout<<"YOUR";Sleep(500);cout<<"  "<<"PLAY";Sleep(400);cout<<".";Sleep(400);
	Sleep(5000);
	for(int w=0;w<20;w++)
	{
	
		gotoxy(0,16);
	        if(w%2==1)
			cout<<"             �`�i >�i< �i3                "<<endl;
			else
            cout<<"             �`�i��i��i3                "<<endl;

		gotoxy(0,23);
		Sleep(300);
	}
	system("cls");
	
	}
};

#endif