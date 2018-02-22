/*#ifndef SCORE_H
#define SCORE_H

#include <iostream>
#include <Windows.h>
using namespace std;

class scorecount
{
public:

	scorecount(){
		score=0;
	};

	void plusscore(int i)
	{
		score=score+i;
	};
	int getscore()
	{
		return score;
	};
	void printscore(int x,int y)
	{
		gotoxy(x,y);
		cout<<"score:"<<score;
	};
private:
	int score;
};

#endif*/