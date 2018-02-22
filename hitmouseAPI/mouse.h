#ifndef MOUSE_H
#define MOUSE_H
#include<Windows.h>
#include<MMSystem.h>
#pragma comment(lib, "Winmm.lib") 
#include <string>
#include "picture.h"
#include "score.h"


using namespace std;

class mouse : public picture
{
public:
	mouse(int x,int y){
		placeX=x;
		placeY=y;
		sethole();
		mice=0;//�O�o�ܼƭn��l��
		carrot=0;
		}
	void sethole(){
		mice=0;
		carrot=0;
		selectmouse(placeX,placeY,0);//�]�a�}
	}
	void setmouse(){
		mice=1;
		selectmouse(placeX,placeY,1);
	}
	int getmouse(){
		return mice;
	}
	void hitmouse(){
		selectmouse(placeX,placeY,3);
		Sleep(100);
		sethole();
	}

	void nohit(){
		selectmouse(placeX,placeY,2);
		Sleep(1000);
		sethole();
	}

	void setcarrot()
	{
		carrot=1;
		selectmouse(placeX,placeY,4);
	}

	int getcarrot()
	{
		return carrot;
	}

	void pulloutcarrot(){
		selectmouse(placeX,placeY,6);
		Sleep(1000);
		sethole();
	}

	void nopullout(){
		sethole();
	}
private:
	int mice;//���q��
	int carrot;//�ڽ�
	int placeX;
	int placeY;
};

#endif