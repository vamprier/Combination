// Combination.cpp : 定义控制台应用程序的入口点。
//
#include "HandSetBrandN.h"
#include "HandSetBrandM.h"
#include "HandSetGame.h"
#include "HandSetAddressList.h"

int main(int argc, char* argv[])
{
	//
	HandSetSoft* game = new HandSetGame();
	HandSetSoft* addresslist = new HandSetAddressList();
	//
	HandSetBrand* mobileN = new HandSetBrandN();
	mobileN->SetHandSetSoft(game);
	mobileN->Run();
	mobileN->SetHandSetSoft(addresslist);
	mobileN->Run();

	HandSetBrand* mobileM = new HandSetBrandM();
	mobileM->SetHandSetSoft(game);
	mobileM->Run();
	mobileM->SetHandSetSoft(addresslist);
	mobileM->Run();

	cin.ignore();

	return 0;
}

