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




////�Z����V�K�쐬����֐�
//void	Create(CELL* head_, const char* str_) {
//	CELL* newCell;
//	//�V�K�쐬����Z���̃|�C���^
//	newCell = (CELL*)malloc(sizeof(CELL));
//
//	strcpy_s(newCell->str, 256, str_);
//	newCell->next = nullptr;
//
//	//nullptr�̃|�C���^�܂Ŕ��
//	while (head_->next != nullptr)
//	{
//		head_ = head_->next;
//		newCell->prev = head_;
//	}
//	head_->next = newCell;
//}
//
////�v�f�̕\��
//void	index(CELL*head_){
//	int	num = 0;
//	while (head_->next != nullptr)
//	{
//		head_ = head_->next;
//		printf("%d:%s\n", num, head_->str);
//		num++;
//	}
//	printf("\n");
//	printf("�v�f�� %d\n", num);
//}
//
////�v�f�̍폜
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
//	printf("�Ō���̗v�f���폜���܂���\n\n\n");
//}

//int	main() {
//	char val[256];
//	//�擪�̃Z����錾
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
//			printf("[�v�f�̑���]\n");
//
//			printf("1.�v�f�̈ꗗ�\��\n");
//			printf("2.�Ō���ɗv�f�̑}��\n");
//			printf("3.�Ō���̗v�f�̍폜\n");
//
//			printf("----------------------------------------\n");
//			printf("�����I�����Ă�������\n");
//
//			scanf_s("%d", &scene);
//
//			break;
//		case	1:
//			//���X�g�ꗗ�̕\��
//			printf("�v�f�̈ꗗ�\��\n");
//			index(&head);
//			printf("----------------------------------------\n");
//			printf("0.������ʂ֖߂�\n");
//			scanf_s("%d", &scene);
//
//			break;
//		case	2:
//			//�v�f�̒ǉ�
//			printf("�l����͂��Ă�������\n");
//			scanf_s("%s", val, 256);
//			//�Ō���ɃZ����ǉ�
//			Create(&head, val);
//			printf("�v�f%s�����X�g�Ō���ɑ}�����܂���\n", val);
//
//			printf("----------------------------------------\n");
//			printf("0.������ʂ֖߂�\n");
//			scanf_s("%d", &scene);
//			break;
//		case	3:
//			//�v�f�̍폜
//			Delete(&head);
//
//			printf("----------------------------------------\n");
//			printf("0.������ʂ֖߂�\n");
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