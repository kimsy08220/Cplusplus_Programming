#include <iostream>

int main()
{
	int cnt = 0;
	for (int i = 1; i <= 10; i++)
		cnt += i;

	std::cout << "1에서 10까지 더한 ";
	std::cout << "결과는 " << cnt << "입니다.\n";
	return 0;
}