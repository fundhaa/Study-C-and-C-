// 2_template.cpp

// C 언어는 똑같은 이름의 함수를 만들수 없지만 C++은 가능하다.
// 파라미터 개수나 타입이 다르면 가능하다.

// 개발자 입장에서는 구현이 똑같은데 두개 만들어야하니 좀 피곤하다.
// 함수를 만들지 말고 함수를 찍어낼 때 사용할 틀(template)을 만들자.
/*
int square(int n) {	return n * n; }
double square(double n) { return n * n; }
*/
template<typename T>
T square(T n) { return n * n; }


// 사용자 입장에서는 square만 보면 돼서 참 편하다.
int main() {
	// 템플릿을 사용하는 정확한 표기법
	square<int>(3);			// int square(int) 함수 생성
	square<double>(3.4);	// double square(double) 함수 생성

	// 위 표기법이 정확한 표기법이지만, 타입인자 생략이 가능하다.
	// 생략시 함수 인자를 가지고 타입이 결정된다.

	square(3); // 3이 int 이므로 컴파일러가 square<int>(3)으로 변경
	//square(3.4);
}
// 코드 폭발(Code Bloat)

// tempalte 사용시 컴파일러가 너무 많은 버전의 함수를 생성해서 실행파일 크기가 커지고, 코드 메모리 사용량이 증가하는 현상
// 메모리가 부족한 임베디드 분야에서 조심해야 함
 // 하지만 요즘 임베디드에서도 template 많이 사용