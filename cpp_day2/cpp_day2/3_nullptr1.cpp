// 3_nullptr1 - 54page
int main()
{
	// literal : 10, 3.4 등 프로그램에서 사용하는 값
	int n1 = 10; // 정상 10은 정수(int)
	int* p1 = 10; // error
	
	int n2 = 0; // 정상 0은 정수
	int* p2 = 0; // 정상

	// C++11에서 "포인터 0"을 의미하는 키워드 등장
	int* p3 = nullptr;
	int n3 = nullptr; // error. nullptr은 포인터 초기화에만 사용됨.
}