#ifndef OCCURTIME_H
#define OCCURTIME_H
#include <iostream>
using namespace std;

class occurtime
{
public:
	occurtime()
	{
		time=0;
		start=0;
	}
	void startoccurtime()
	{
		start=1;
	}
	void timeplus()
	{
		if(start==1)
		{
			time++;
		}
	}
	void stoptime()
	{
		time=0;
		start=0;
	}
	int gettime()
	{
		return time;
	}
private:
	int time;
	int start;
};

#endif