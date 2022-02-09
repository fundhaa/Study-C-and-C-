// 8_string.cpp
#include <iostream>

using namespace std;

// C 문자열
// => '\0'으로 끝나는 char 배열
/*
int main()
{
	char str1[6] = "hello";
	const char* str2 = "hello";

	//문자열 비교
	if (strcmp(str1, str2) == 0) {
		cout << "동일한 문자열" << endl;
	}

	//문자열 복사
	strcpy(str1, "world");
	cout << str1 << endl;

	//문자열 잇기
	char temp[32] = "hello";
	strcat(temp, str1);
	
	cout << temp << endl;

	//문자열 길이
	cout << strlen(temp) << endl;
}
*/

// C++ 문자열은 어떤 함수 같은걸 쓰지 않아도 직관적으로 비교, 복사, 이음 등을 할 수 있다.
#include <string> // std::string

int main()
{
	string s1 = "hello";
	string s2 = "hello";
	if (s1 == s2) {
		cout << "동일한 문자열" << endl;
	}

	s1 = "world";
	cout << s1 << endl;

	string s3 = s1 + s2;
	cout << s3 << endl;

	cout << s3.size() << endl;
}
