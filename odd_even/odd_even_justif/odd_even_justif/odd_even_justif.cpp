// odd_even_justif.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num;
	scanf("%d", &num);// %d는 정수라는 포맷임, &num <- 이 변수에다가 넣어주는 pt
	if (num % 2 == 0)
	{
		printf("even\n");
	}
	else {
		printf("odd\n");
	}
    return 0;
}

