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
//�Z����V�K�쐬����֐�
void	Create(CELL* head_, int val_) {
	CELL* nextCell;
	//�V�K�쐬����Z���̃|�C���^
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
	//�擪�̃Z����錾
	CELL	head;
	head.next = nullptr;
	while (true)
	{
		printf("�l����͂��Ă�������\n");
		scanf_s("%d", &val);
		printf("���͂����l��\��\n");
		//�Ō���ɃZ����ǉ�
		Create(&head, val);
		//���X�g�ꗗ�̕\��
		index(&head);
	}
	return	0;
}