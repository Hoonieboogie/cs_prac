// pass_prod.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int lit_pass = 3333; //initializing = 2번 칠 필요 없 b/c 메모리 값 바로
	int input_pass; 
	printf("password:");
	scanf("%d", &input_pass);
	if (input_pass == lit_pass)
	{
		printf("true\n");

	} else {
		printf("false\n");
	}
    return 0;
}

