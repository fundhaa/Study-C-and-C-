// C표준 라이브러리 중 io(input output) .h 
#include <stdio.h>
// # -> 전처리가 수행해줌

//main 함수를 정의+구현
// 함수의 기본 모양
// 반환값의 종류    함수명    (함수 인자의 종류)
// int             main        void
//                  ---entry point
int main(void) {

	// 필요한 기능 구현
	// 표준 라이브러리에서 io - printf()
	printf("%d %d %c 체크 aab", 10, 30, 'a'); //"   " <- 문자열 포맷
	//      -- 형식지정자
	// escape seq --> \n 한칸 띄움 \t tab \\ = \문자(두개는 escape seq로 인식 안함)

	// 변수
	int a = 0;
	// int 라는 데이터타입으로 메모리를 할당
	// int 4바이트의 크기로 메모리를 할당하고 그 할당된 곳은 int 타입으로 사용하겠다 라는 의미
	double b = 10.002;
	// 8바이트의 크기로 메모리를 할당하고 그 할당된 곳은 double 타입으로 사용하겟다
	float c = 10.22f;
	// 4바이트의 크기로 메모리를 항당하고 그 할당된 곳은 float 타입으로 사용하겠다
	int *p = &a;
	// 4바이트 주소를 저장할 수 있는 크기로 할당하고 그 할당된 것은 포인터로 활용할 것이며 
	// int 타입으로 해석하겠다. 
	// (*p)    int     = &a 순서로 실행
	int e;
	e = 10; // <- 초기화 X
	// 작성한 리더럴은 코드에 직접 입력한 값 10.002 10.22등
	char ach = 'c';
	char* str = "happy";
	b = a;

	return 0; //함수 종료와 반환값을 전달 = return

}


//int calc_acc(int a, int b) {
//	int c;
//	c = a + b;
//	return c;
//}

// ctrl + shift + B 빌드
// ctrl + K+C(주석) ,  ctrl + K+U 주석해제
// F5 디버깅 시작