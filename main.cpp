#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

typedef int (*newType)(int num);

typedef void (*PFunc)(int*);

void	callback(int* num) {
	//乱数処理
	srand(time(nullptr));
	int	randNum = rand() % 6 + 1;

	if (randNum % 2 == *num % 2)
	{
		printf("%dなので正解\n", randNum);
	}
	else
	{
		printf("%dなので不正解\n", randNum);
	}
}

void	setTimeout(PFunc p, int answer, int second) {
	printf("結果は...\n");
	Sleep(second * 1000);

	p(&answer);
}

int main()
{
	//ユーザの答え
	int answer;
	while (true)
	{
		printf("偶数だと思うなら0を、奇数だと思うなら1を入力してください\n");

		scanf_s("%d", &answer);
		if (answer == 0 || answer == 1)
		{
			break;
		}
		else
		{
			printf("0または1を入力してください\n");
		}
	}

	PFunc p = callback;

	setTimeout(p, answer, 3);

	system("pause");

	return 0;

}