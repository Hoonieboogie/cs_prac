// programming_prac.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{	
	int integer = 3;
	char character; character = 'h';
	char str[] = "asdf";
	float deci_sfig = 1.27f;
	//bool b; b = (integer == 3);
	int sum = integer + 3;
	int min = integer - 5;

	printf("%d \n", min);
	int in_number;
	scanf("%d", &in_number); 
	/*
	scanf 정수 한개를 받아서 in_number에 저장시켜줌
	*/
	printf("%d\n", in_number); // in_number를 출력


	int a, b;
	printf("A, B : ");
	scanf("%d %d", &a, &b);
	int result;
	result = a+b; 
	//\n는 줄바꿈, %d는 정수값 받음
	printf("result +: %d\n", result);
	result = a-b;
	printf("result -: %d\n", result);
	result = a*b ;
	printf("result *: %d\n", result);
	result = a/b;
	printf("result /: %d\n", result);

	result = a + b;
	if (result == 3) {
		printf("reuslt == 3 is true");
	}
	else
		if (result == 5) {
		printf("reuslt == 5 is true");
	}
	else {
		printf("reuslt == 3 or result == 5 is false");
	}
		
    return 0;
}

