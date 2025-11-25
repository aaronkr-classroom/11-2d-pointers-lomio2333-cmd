//malloc_arr.c
//mem_arr.c
#include<stdio.h>
#include<malloc.h>


int main(void) {
	int* p_num_list,//변경
		count = 0,
		sum = 0,
		limit = 0,//추가
		i;

	printf("사용할 최대 개수를 입력:");
	scanf_s("%d", &limit);
	//사용자가 입력한 개수 만큼 정수를 저장할 수 있는 메모리를 할당
	p_num_list = (int*)malloc(sizeof(int) * limit);


	//최대 5회 입력 중간 9999 누르면 종료
	while (count < limit) {
		printf("숫자 입력(9999입력시 종료):");
		scanf_s("%d", p_num_list + count);//*p+1이랑 비슷함

		if (*(p_num_list+count) == 9999)break;

		count++; //입력 횟수 계산
	}

	//입력 횟수 만큼 숫자 출력
	for (i = 0;  i < count;i++) {
		if (i > 0)printf("+"); //num[0]= 3 + num[1] =5
		printf("%d",*(p_num_list+i));
		sum = sum + *(p_num_list + i);
	}
	printf("=%d\n",sum);
	free(p_num_list);//사용했던 메모리를 제거

	return 0;
}