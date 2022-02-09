#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
	for (int i = 0l; i < 10; ++i) {
		cout << x[i] << endl;
	}
	// C++11: ranged-for // foreach라고도 함
	// 배열 안의 값들을 하나씩 다 꺼내고 싶다면 아래 방법이 유용하다.
	for (int e : x) {
		cout << e << endl;
	}
	std::string s = "helloworld";
	for (char e : s) {
		cout << e << endl;
	}
}