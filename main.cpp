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
	while (true)
	{
		printf("値を入力してください\n");
		scanf_s("%s", val,256);
		printf("入力した値を表示\n");
		//最後尾にセルを追加
		Create(&head, val);
		//リスト一覧の表示
		index(&head);
	}
	system("pause");

	return	0;
}