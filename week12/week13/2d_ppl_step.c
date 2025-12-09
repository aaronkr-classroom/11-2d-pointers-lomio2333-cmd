//2d_ppl_step.c

#include<stdio.h>
#include<malloc.h>//추가

typedef unsigned char uc;

int main(void) {

	int age_step,ages, member, temp, sum;
	uc *p_limit_table;//변경
	uc **p;//변경

	printf("20대부터(?까지) 연령층이 몇 개인가요?");
	scanf_s("%d",&age_step);

	//연령별 인원수를 저장할 메모리를 만듦
	p_limit_table = (uc*)malloc(age_step);
	p = (uc**)malloc(sizeof(uc*) * age_step);

	//입력 받기
	for (ages = 0; ages < age_step; ages++) {
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", ages + 2);
		printf(" 이 연령대는 몇 명입니까");//추가

		scanf_s("%d", &temp);
		*(p_limit_table+ages) = (uc)temp;//추가

		*(p+ages) = (uc*)malloc (* (p_limit_table +ages));



		for (member = 0; member < *(p_limit_table + ages); member++)
			printf("#%d", member + 1);

		scanf_s("%d\n", &temp);
		*(p[ages] + member) = (uc)temp;

	}
	printf("\n\n연령별 평균 윗몸 일으키기 수\n");

	for (ages = 0; ages < age_step; ages++) {

		sum = 0;
		printf("%d0대", ages + 2);
		for (member = 0; member < *(p_limit_table + ages); member++) {
			sum = sum + *(*(p + ages) + member);

		}

		printf("%5.2f\n", (double)sum / *(p_limit_table+ages));
		free(*(p + ages));

	}


	//윗몸 일으키기 횟수를 저장하기 위해서 구성했던 메모리를 해제

	free(p);
	
	//연령별 인원수를 기억하기 위해서 사용했던 메모리를 해제

	free(p_limit_table);

	return 0;

}

