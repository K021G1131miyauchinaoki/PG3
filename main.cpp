#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include <iostream>
#include<list>

typedef	struct cell
{
	int	val;
	struct Cell* next;
}CELL;
//セルを新規作成する関数
void	Create(CELL* head_, int val_) {
	CELL* nextCell;
	//新規作成するセルのポインタ
	nextCell = (CELL*)malloc(sizeof(CELL));

	nextCell->val = val_;
	nextCell->next = nullptr;
}

int	main() {
	//先頭のセルを宣言
	CELL	head;
	head.next = nullptr;
}