#ifndef HANDSETADDRESSLIST_H
#define HANDSETADDRESSLIST_H



#include "handsetsoft.h"

class HandSetAddressList : public HandSetSoft
{
public:
	HandSetAddressList(void);
	~HandSetAddressList(void);
	virtual void Run();
};

#endif