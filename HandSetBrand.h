#ifndef HANDSETBRAND_H
#define HANDSETBRAND_H

#include "HandSetSoft.h"

class HandSetBrand
{
public:
	HandSetBrand();
	virtual ~HandSetBrand(void);
public:
	void SetHandSetSoft(HandSetSoft* mp);
	virtual void Run() = 0;
protected:
	HandSetSoft* p_handsetsoft;
};

#endif