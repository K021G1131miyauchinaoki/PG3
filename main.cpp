#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include <iostream>
#include<list>

typedef	struct user
{
	char id[256];
	char name[256];
	char classNum[256];
	
}User;

typedef struct  priority {
	int hight = 1;
	int normal = 0;
	int low = -1;
}Priority;

typedef struct task {
	char title[256];
	char sentence[256];
	char start[256];
	char end[256];
	char timeLimit[256];
	User* user;
	Priority* priority;
}Task;




////セルを新規作成する関数
//void	Create(CELL* head_, const char* str_) {
//	CELL* newCell;
//	//新規作成するセルのポインタ
//	newCell = (CELL*)malloc(sizeof(CELL));
//
//	strcpy_s(newCell->str, 256, str_);
//	newCell->next = nullptr;
//
//	//nullptrのポインタまで飛ぶ
//	while (head_->next != nullptr)
//	{
//		head_ = head_->next;
//		newCell->prev = head_;
//	}
//	head_->next = newCell;
//}
//
////要素の表示
//void	index(CELL*head_){
//	int	num = 0;
//	while (head_->next != nullptr)
//	{
//		head_ = head_->next;
//		printf("%d:%s\n", num, head_->str);
//		num++;
//	}
//	printf("\n");
//	printf("要素数 %d\n", num);
//}
//
////要素の削除
//void	Delete(CELL* end_) {
//
//	while (end_->next != nullptr)
//	{
//		end_ = end_->next;
//	}
//	end_->prev->next = nullptr;
//
//	//printf("%s\n", end_->str);
//
//	printf("最後尾の要素を削除しました\n\n\n");
//}

//int	main() {
//	char val[256];
//	//先頭のセルを宣言
//	CELL	head;
//	head.next = nullptr;
//
//	int	scene = 0;
//
//	Create(&head, "banana");
//	Create(&head, "apple");
//	Create(&head, "orange");
//
//	while (true)
//	{
//		switch (scene)
//		{
//		case	0:
//			printf("[要素の操作]\n");
//
//			printf("1.要素の一覧表示\n");
//			printf("2.最後尾に要素の挿入\n");
//			printf("3.最後尾の要素の削除\n");
//
//			printf("----------------------------------------\n");
//			printf("操作を選択してください\n");
//
//			scanf_s("%d", &scene);
//
//			break;
//		case	1:
//			//リスト一覧の表示
//			printf("要素の一覧表示\n");
//			index(&head);
//			printf("----------------------------------------\n");
//			printf("0.初期画面へ戻る\n");
//			scanf_s("%d", &scene);
//
//			break;
//		case	2:
//			//要素の追加
//			printf("値を入力してください\n");
//			scanf_s("%s", val, 256);
//			//最後尾にセルを追加
//			Create(&head, val);
//			printf("要素%sをリスト最後尾に挿入しました\n", val);
//
//			printf("----------------------------------------\n");
//			printf("0.初期画面へ戻る\n");
//			scanf_s("%d", &scene);
//			break;
//		case	3:
//			//要素の削除
//			Delete(&head);
//
//			printf("----------------------------------------\n");
//			printf("0.初期画面へ戻る\n");
//			scanf_s("%d", &scene);
//			break;
//		}
//	}
//	system("pause");
//
//	return	0;
//}

int main() {

	system("pause");

	return 0;
}