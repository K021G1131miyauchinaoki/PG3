#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<functional>

int main()
{
	//0��1�̑I��
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

	//�������킹
	std::function<void()>ResultDisplay = [answer]() {
		//��������
		srand(time(nullptr));
		int	randNum = rand() % 6 + 1;
		randNum % 2 == answer ? printf("%d�Ȃ̂Ő���\n", randNum) : printf("%d�Ȃ̂ŕs����\n", randNum);
	};

	//�^�C���A�E�g
	std::function<void(std::function<void()>p, int second)>setTimeout = [=](std::function<void()>p, int second) {
		printf("���ʂ�\n");
		Sleep(second * 1000);
		p();
	};

	setTimeout(ResultDisplay, 3);

	system("pause");

	return 0;

}