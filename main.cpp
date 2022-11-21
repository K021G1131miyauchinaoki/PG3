#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<functional>

int main()
{
	//0か1の選択
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

	//答え合わせ
	std::function<void()>ResultDisplay = [answer]() {
		//乱数処理
		srand(time(nullptr));
		int	randNum = rand() % 6 + 1;
		randNum % 2 == answer ? printf("%dなので正解\n", randNum) : printf("%dなので不正解\n", randNum);
	};

	//タイムアウト
	std::function<void(std::function<void()>p, int second)>setTimeout = [=](std::function<void()>p, int second) {
		printf("結果は\n");
		Sleep(second * 1000);
		p();
	};

	setTimeout(ResultDisplay, 3);

	system("pause");

	return 0;

}