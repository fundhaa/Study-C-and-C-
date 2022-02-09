#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[10] = { 0 }; // stack -int 10개만큼 메모리를 할당
    int(*p)[10] = &a; // stack - * (4bytes) - 해석단위 int[10]
    printf("%p, %p, %d, %d\n\n", a, &a, sizeof(&a), sizeof(a));
    double dbArray[5][10] = { 0 }; // stack - double 5*10 크기만큼 연속적으로 메모리에 할당(400bytes)
    //시작위치 주소 + 변위 접근 [2][1] + 20 + 1
    dbArray[2][1] = 10.11;
    double** ppDoubleArray;//stack -주소값 크기만큼(32bit, 4bytes), double**, (double*), (double)
    // * ppDouble Array => double*
    // **ppDoubleArray => double
    ppDoubleArray = (double**)calloc(5, sizeof(double*)); // heap - 주소값 크기만큼(32bit, 4bytes) * 5개, 할당
    // pp DoubleArray -> double*의 시작주소
    
    for (int r = 0; r < 5; r++)
    {
        //Double*(더블포인터형)에 double로 만든 메모리 시작주소값을 넣음
        ppDoubleArray[r] = (double*)calloc(10, sizeof(double)); // heap - double 크기만큼 *10개 할당
    } //총 5번의 루프를 돌면 50개의 메모리 할당을 하고 13행의 다섯개에 주소를 저장해줌
    ppDoubleArray[2][1] = 100.11;
    printf("%f, %p\n", (*(ppDoubleArray + 2))[1], &(*(ppDoubleArray + 2))[1]);
    printf("%f, %p\n", *((*(ppDoubleArray + 2)) + 1), &*((*(ppDoubleArray + 2)) + 1));
    printf("%f, %p\n", *((*(ppDoubleArray + 2)) + 1), (*(ppDoubleArray + 2)) + 1);
}