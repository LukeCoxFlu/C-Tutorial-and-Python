#include <iostream>
#include <string>
int s = 6;
int howManySocksDoIHave()
{
	return 2;
}

int timestwovalues(int x, int y)
{
	return x * y;
}

int main()
{
//  ===========================================================================
	const int a = 6;
	char b = 'K';
	std::string B = "yEET aksduhiauh askjdhialsuda aosidjasidjoijia dasdhasd";
	float i = 9.89;
	bool o = true;
//  ===========================================================================
	int K = s;
//  ===========================================================================

//  ========    0 1 2 3  4
	int k[5] = {8,9,4,12,3};
	s = k[2];

//  ===========================================================================
	int sock = howManySocksDoIHave();
	int times = timestwovalues(a, s);

	std::cout << a << " X " << s << " = " << times;
	return 0;
}

