#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

typedef int (*newType)(int num);

typedef void (*PFunc)(int*);

void	callback(int* num) {
	//��������
	srand(time(nullptr));
	int	randNum = rand() % 6 + 1;

	if (randNum % 2 == *num % 2)
	{
		printf("%d�Ȃ̂Ő���\n", randNum);
	}
	else
	{
		printf("%d�Ȃ̂ŕs����\n", randNum);
	}
}

void	setTimeout(PFunc p, int answer, int second) {
	printf("���ʂ�...\n");
	Sleep(second * 1000);

	p(&answer);
}

int main()
{
	//���[�U�̓���
	int answer;
	while (true)
	{
		printf("�������Ǝv���Ȃ�0���A����Ǝv���Ȃ�1����͂��Ă�������\n");

		scanf_s("%d", &answer);
		if (answer == 0 || answer == 1)
		{
			break;
		}
		else
		{
			printf("0�܂���1����͂��Ă�������\n");
		}
	}

	PFunc p = callback;

	setTimeout(p, answer, 3);

	system("pause");

	return 0;

}