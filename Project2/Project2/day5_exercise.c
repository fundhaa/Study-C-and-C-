#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[10] = { 0 }; // stack -int 10����ŭ �޸𸮸� �Ҵ�
    int(*p)[10] = &a; // stack - * (4bytes) - �ؼ����� int[10]
    printf("%p, %p, %d, %d\n\n", a, &a, sizeof(&a), sizeof(a));
    double dbArray[5][10] = { 0 }; // stack - double 5*10 ũ�⸸ŭ ���������� �޸𸮿� �Ҵ�(400bytes)
    //������ġ �ּ� + ���� ���� [2][1] + 20 + 1
    dbArray[2][1] = 10.11;
    double** ppDoubleArray;//stack -�ּҰ� ũ�⸸ŭ(32bit, 4bytes), double**, (double*), (double)
    // * ppDouble Array => double*
    // **ppDoubleArray => double
    ppDoubleArray = (double**)calloc(5, sizeof(double*)); // heap - �ּҰ� ũ�⸸ŭ(32bit, 4bytes) * 5��, �Ҵ�
    // pp DoubleArray -> double*�� �����ּ�
    
    for (int r = 0; r < 5; r++)
    {
        //Double*(������������)�� double�� ���� �޸� �����ּҰ��� ����
        ppDoubleArray[r] = (double*)calloc(10, sizeof(double)); // heap - double ũ�⸸ŭ *10�� �Ҵ�
    } //�� 5���� ������ ���� 50���� �޸� �Ҵ��� �ϰ� 13���� �ټ����� �ּҸ� ��������
    ppDoubleArray[2][1] = 100.11;
    printf("%f, %p\n", (*(ppDoubleArray + 2))[1], &(*(ppDoubleArray + 2))[1]);
    printf("%f, %p\n", *((*(ppDoubleArray + 2)) + 1), &*((*(ppDoubleArray + 2)) + 1));
    printf("%f, %p\n", *((*(ppDoubleArray + 2)) + 1), (*(ppDoubleArray + 2)) + 1);
}