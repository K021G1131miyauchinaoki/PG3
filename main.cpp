#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef	struct cell
{
	char name[256];
	int checkoutDate;
	int returnDate;
	struct cell* next;
}CELL;
//セルを新規作成する関数
void	Create(CELL* head_, const char* name_,int checkoutDate_,int returnDate_) {
	CELL* newCell;
	//新規作成するセルのポインタ
	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->name, 256, name_);
	newCell->checkoutDate = checkoutDate_;
	newCell->returnDate = returnDate_;

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
		printf("%s\n", head_->name);
		printf("%d\n", head_->checkoutDate);
		printf("%d\n", head_->returnDate);
		printf("\n");
	}
}

int	main() {
	char name[256];
	int checkoutDate;
	int returnDate;
	//先頭のセルを宣言
	CELL	head;
	head.next = nullptr;
	while (true)
	{
		//最後尾にセルを追加
		printf("名前を入力してください\n");
		scanf_s("%s", name,256);
		printf("貸出日を入力してください\n");
		scanf_s("%d", &checkoutDate);
		printf("返却日を入力してください\n");
		scanf_s("%d", &returnDate);
		Create(&head, name,checkoutDate,returnDate);
		//リスト一覧の表示
		printf("入力した値を表示\n");
		index(&head);
	}
	system("pause");

	return	0;
}