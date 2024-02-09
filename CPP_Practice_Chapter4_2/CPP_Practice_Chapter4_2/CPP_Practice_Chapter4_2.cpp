// CPP_Practice_Chapter4_2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	for (int nIndex = 1; nIndex<=5; nIndex ++)
	{
		for (int nSpace = 1; nSpace < (6 - nIndex); nSpace ++)
		{
			cout << " ";
		}

		for (int nIndex2 = 1; nIndex2 <= (nIndex * 2 - 1); nIndex2 ++)
		{
			cout << nIndex2;
		}
		cout << endl;
	}

	int i = 0 , j = 0 , k = 0;
	for (i = 5; i >0 ; i--)
	{
		for (j = 5; j > i; j-- )
		{
			cout << " ";
		}
		for (k = 1; k < (i*2); k++)
		{
			cout << k;
		}
		cout << endl;
	}

	return 0;
}

