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
	while (head_->next != nullptr)
	{
		head_ = head_->next;
		printf("%s\n", head_->str);
	}
}

int	main() {
	char val[256];
	//先頭のセルを宣言
	CELL	head;
	head.next = nullptr;

	int	scene = 0;

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
			index(&head);
			break;
		case	2:
			//要素の追加
			printf("値を入力してください\n");
			scanf_s("%s", val, 256);
			//最後尾にセルを追加
			Create(&head, val);
			break;
		case	3:
			//要素の削除
			break;
		}
		
		printf("入力した値を表示\n");
		

	}
	system("pause");

	return	0;
}