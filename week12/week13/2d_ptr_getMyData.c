//2d_ptr_malloc.c
#include<stdio.h>
#include<malloc.h>

//포인터 변수 q는 p 변수의 주소 값 저장
void GetMyData(int** q) {
	//할당된 메모리 주소 값을 포인터 q가 가리키는
	//main 함수의 p에 저장
	*q = (int*)malloc(8);



}



int main(void) {
	int* p;//p는 초기화되지 않아서 쓰레기 값을 저장
	GetMyData(&p);//포인터 변수 p의 주소 값을 전달
	*p = 5;//할당된 메모리의 첫 4바이트에 값 5를 넣는다

	printf("p(주소):%p\t",p);
	printf("p(값):%d\n",*p);

	free(p);// 할당된 동적 메모리를 해제



}