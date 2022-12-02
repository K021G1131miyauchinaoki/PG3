#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef	struct cell
{
	char str[256];
	struct cell* next;
}CELL;
//セルを新規作成する関数
void	Create(CELL* head_, const char* str_) {
	CELL* newCell;
	//新規作成するセルのポインタ
	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->str, 256, str_);
	newCell->next = nullptr;

	//nullptrのポインタまで飛ぶ
	while (head_->next != nullptr)
	{
		head_ = head_->next;
	}
	head_->next = newCell;
}

void	index(CELL* head_) {
	int	num = 0;
	while (head_->next != nullptr)
	{
		head_ = head_->next;
		printf("%d:%s\n",num, head_->str);
		num++;
	}
	printf("\n");
	printf("要素数 %d\n", num);

}

int	main() {
	char val[256];
	//先頭のセルを宣言
	CELL	head;
	head.next = nullptr;

	int	scene = 0;

	Create(&head, "banana");
	Create(&head, "apple");
	Create(&head, "orange");

	while (true)
	{
		switch (scene)
		{
		case	0:
			printf("[要素の操作]\n");
			
			printf("1.要素の一覧表示\n");
			printf("2.最後尾に要素の挿入\n");
			printf("3.最後尾の要素の削除\n");

			printf("----------------------------------------\n");
			printf("操作を選択してください\n");

			scanf_s("%d", &scene);

			break;
		case	1:
			//リスト一覧の表示
			printf("要素の一覧表示\n");
			index(&head);
			printf("----------------------------------------\n");
			printf("0.初期画面へ戻る\n");
			scanf_s("%d", &scene);

			break;
		case	2:
			//要素の追加
			printf("値を入力してください\n");
			scanf_s("%s", val, 256);
			//最後尾にセルを追加
			Create(&head, val);
			printf("要素%sをリスト最後尾に挿入しました\n",val);

			printf("----------------------------------------\n");
			printf("0.初期画面へ戻る\n");
			scanf_s("%d", &scene);
			break;
		case	3:
			//要素の削除


			printf("----------------------------------------\n");
			printf("0.初期画面へ戻る\n");
			scanf_s("%d", &scene);
			break;
		}
		
		printf("入力した値を表示\n");
		

	}
	system("pause");

	return	0;
}