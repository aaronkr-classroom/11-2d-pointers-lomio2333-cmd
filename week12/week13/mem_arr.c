//mem_arr.c
#include<stdio.h>

#define MAX_COUNT 5

int main(void) {
	int num[MAX_COUNT],
		count = 0,
		sum = 0,
		i;

	//최대 5회 입력 중간 9999 누르면 종료
	while (count < MAX_COUNT) {
		printf("숫자 입력(9999입력시 종료):");
		//scanf_s("%d",&num[count]);//밑에와 같은 표현
		scanf_s("%d", num + count);//*p+1이랑 비슷함

		if (num[count] == 9999)break;

		count++; //입력 횟수 계산
	}

	//입력 횟수 만큼 숫자 출력
	for (i = 0;  i < count;i++) {
		if (i > 0)printf("+"); //num[0]= 3 + num[1] =5
		printf("%d",num[i]);
		sum = sum + num[i];
	}
	printf("=%d\n",sum);

	return 0;
}