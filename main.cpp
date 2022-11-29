#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include <iostream>
#include<list>

typedef	struct cell
{
	int	val;
	struct cell* next;
}CELL;
//セルを新規作成する関数
void	Create(CELL* head_, int val_) {
	CELL* nextCell;
	//新規作成するセルのポインタ
	nextCell = (CELL*)malloc(sizeof(CELL));

	nextCell->val = val_;
	nextCell->next = nullptr;

	while (head_->next != nullptr)
	{
		head_ = head_->next;
	}
	head_->next = nextCell;
}

void	index(CELL*head_){
	while (head_->next != nullptr)
	{
		head_ = head_->next;
		printf("%d\n", head_->val);
	}
}

int	main() {
	int	val;
	//先頭のセルを宣言
	CELL	head;
	head.next = nullptr;
	while (true)
	{
		printf("値を入力してください\n");
		scanf_s("%d", &val);
		printf("入力した値を表示\n");
		//最後尾にセルを追加
		Create(&head, val);
		//リスト一覧の表示
		index(&head);
	}
	return	0;
}