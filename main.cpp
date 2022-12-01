#include<stdio.h>
#include<stdlib.h>

typedef	struct cell
{
	int	val;
	struct cell* prev;
	struct cell* next;
}CELL;
//セルを新規作成する関数
void	Create(CELL* currentCell, int val_) {
	CELL* newCell;
	//新規作成するセルのポインタ
	newCell = (CELL*)malloc(sizeof(CELL));
	newCell->val = val_;
	newCell->prev = currentCell;
	newCell->next = currentCell->next;

	if (currentCell->next)
	{
		CELL* nextCell = currentCell->next;
		nextCell->prev = newCell;
	}
	currentCell->next = newCell;
}

void	index(CELL*end_){
	int	no = 1;
	while (end_->next != nullptr)
	{
		end_ = end_->next;
		printf("%d ", no);
		printf("%p ", end_->prev);
		printf("%5d ", end_->val);
		printf("(%p) ", end_);
		printf("%p\n", end_->next);
	}
	printf("\n");
}

CELL* getInsertCellAddress(CELL* endCELL, int iterator) {
	for (int i = 0; i < iterator; i++)
	{
		if (endCELL->next) {
			endCELL = endCELL->next;
		}
		else
		{
			break;
		}
	}
	return	endCELL;
}

int	main() {
	int	iterator;
	int	inputValue;
	CELL* insertCell;
	//先頭のセルを宣言
	CELL	head;
	head.next = nullptr;
	while (true)
	{
		printf("何番目のセルの後ろに挿入しますか？\n");
		scanf_s("%d", &iterator);
		
		printf("挿入する値を入力してください\n");
		scanf_s("%d", &inputValue);
		
		//最後尾にセルを追加
		insertCell = getInsertCellAddress(&head,iterator);
		Create(insertCell, inputValue);
		//リスト一覧の表示
		index(&head);
	}
	return	0;
}