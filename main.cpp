#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef	struct cell
{
	char str[256];
	struct cell* prev;
	struct cell* next;
}CELL;
//セルを新規作成する関数
void	Create(CELL* head_, const char* str_);

//一覧の表示
void	index(CELL* head_);

//指定された要素を表示
void	Specification(CELL* element, int iterator);

//要素の削除
void	Delete(CELL* end_);

CELL* getInsertCellAddress(CELL* endCELL, int iterator);

int	main() {
	char val[256];
	int	iterator = 0;
	//先頭のセルを宣言
	CELL	insertCell;
	insertCell.next = nullptr;

	int	scene = 0;
	int	display=0;

	Create(&insertCell, "banana");
	Create(&insertCell, "apple");
	Create(&insertCell, "orange");

	while (true)
	{
		switch (scene)
		{
		case	0:
			printf("[要素の操作]\n");
			
			printf("1.要素の表示\n");
			printf("2.要素の挿入\n");
			printf("3.要素の編集\n");
			printf("4.要素の削除\n");
			printf("5.要素の並び替え（オプション）\n");

			printf("----------------------------------------\n");
			printf("操作を選択してください\n");

			scanf_s("%d", &scene);
			display = 0;
			break;
		case	1:
			//要素の表示
			switch (display)
			{
			case	0:
				printf("[要素の表示]\n");

				printf("1.要素の一覧表示\n");
				printf("2.順番を指定して要素を表示\n");
				printf("9.要素操作に戻る\n\n");

				printf("操作を選択してください\n");
				scanf_s("%d", &display);
				if (display==9)
				{
					//要素の操作に戻る
					scene = 0;
				}

				break;
			case	1:
				printf("[要素の一覧の表示]\n");

				index(&insertCell);
				printf("----------------------------------------\n");
				printf("0.要素の表示に戻る\n");
				printf("1.要素の操作に戻る\n");
				scanf_s("%d", &display);
				if (display==1)
				{
					scene = 0;
				}

				break;
			case	2:
				printf("指定した要素の表示\n");
				printf("要素を番号で指定してください\n");
				scanf_s("%d", &iterator);
				Specification(&insertCell,iterator);
				printf("----------------------------------------\n");
				printf("0.要素の表示に戻る\n");
				printf("1.要素の操作に戻る\n");
				scanf_s("%d", &display);
				if (display == 1)
				{
					scene = 0;
				}

				break;
			}

			break;
		case	2:
			//要素の追加
			printf("値を入力してください\n");
			scanf_s("%s", val, 256);
			//最後尾にセルを追加
			Create(&insertCell, val);
			printf("要素%sをリスト最後尾に挿入しました\n",val);

			printf("----------------------------------------\n");
			printf("0.初期画面へ戻る\n");
			scanf_s("%d", &scene);
			break;
		case	3:

			break;
		case	4:
			//要素の削除
			Delete(&insertCell);

			printf("----------------------------------------\n");
			printf("0.初期画面へ戻る\n");
			scanf_s("%d", &scene);
			break;
		case	5:

			break;
		}
	}
	system("pause");

	return	0;
}


void	Create(CELL* head_, const char* str_) {
	CELL* newCell;
	//新規作成するセルのポインタ
	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->str, 256, str_);
	newCell->prev = head_;
	newCell->next = nullptr;

	//nullptrのポインタまで飛ぶ
	while (head_->next != nullptr)
	{
		head_ = head_->next;
	}
	head_->next = newCell;
}

//一覧の表示
void	index(CELL* head_) {
	int	num = 0;
	while (head_->next != nullptr)
	{
		head_ = head_->next;
		printf("%d:%s\n", num, head_->str);
		num++;
	}
	printf("\n");
	printf("要素数 %d\n", num);

}

//指定された要素を表示
void	Specification(CELL* element, int iterator) {
	for (int i = 0; i < iterator+1; i++)
	{
		if (i<=iterator)
		{
			element = element->next;	
		}
		
	}
	if (element == nullptr)
	{
		printf("要素がないため表示できません\n");
	}
	else
	{
		printf("%d:%s\n", iterator, element->str);
	}
}

void	Delete(CELL* end_) {
	while (end_->next != nullptr)
	{
		end_ = end_->next;
	}
	end_->prev->next = nullptr;

	//printf("%s\n", end_->str);

	printf("最後尾の要素を削除しました\n\n\n");
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
