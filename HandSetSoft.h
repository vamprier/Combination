#ifndef HANDSETSOFT_H
#define HANDSETSOFT_H

#include <iostream>

using namespace std;


class HandSetSoft
{
public:
	HandSetSoft(void);
	virtual ~HandSetSoft(void);
	virtual void Run() = 0;
};

#endif