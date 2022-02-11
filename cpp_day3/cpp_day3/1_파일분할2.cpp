//1_파일분할2

// 파일구조가 복잡해지면 헤더파일이 2번 include 되는 현상이 발생할 수 있다.
// 이를 방지하기 위해
#include "Point.h" // 1. 컴파일러가 Point.h 파일을 오픈해서 내용을 가져온다
#include "Point.h" // 2. 컴파일러가 Point.h 파일을 오픈해서 내용을 가져온다
					// 결국 Point.h 파일을 두번 Open 해서 읽어와야한다.
					// 컴파일 시간이 오래 걸린다.

// #Pragma once 가 있으면
// 최초에 Point.h를 open하고 pragma once가 있는 것을 확인하면
//  ==> Point.h를 include했었다고 기억하고 있다.
// 다시 #include Point,h를 만났을 때 파일을 open 하는 것이 아니라 해당 줄을 무시하게 된다.
// 즉, 컴파일 속도가 빨라진다.
// 단점 : C/C++ 표준이 아니다. 지원되지 않는 컴파일러도 있다.

int main() {

}