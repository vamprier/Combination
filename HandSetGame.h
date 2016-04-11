#ifndef HANDSETGAME_H
#define HANDSETGAME_H


#include "handsetsoft.h"

class HandSetGame : public HandSetSoft
{
public:
	HandSetGame(void);
	~HandSetGame(void);
	virtual void Run();
};

#endif