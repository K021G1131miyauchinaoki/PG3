#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef	struct cell
{
	char str[256];
	struct cell* next;
}CELL;
//�Z����V�K�쐬����֐�
void	Create(CELL* head_, const char* str_) {
	CELL* newCell;
	//�V�K�쐬����Z���̃|�C���^
	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->str, 256, str_);
	newCell->next = nullptr;

	//nullptr�̃|�C���^�܂Ŕ��
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
	//�擪�̃Z����錾
	CELL	head;
	head.next = nullptr;

	int	scene = 0;

	while (true)
	{
		switch (scene)
		{
		case	0:
			printf("[�v�f�̑���]\n");
			
			printf("1.�v�f�̈ꗗ�\��\n");
			printf("2.�Ō���ɗv�f�̑}��\n");
			printf("3.�Ō���̗v�f�̍폜\n");

			printf("----------------------------------------\n");
			printf("�����I�����Ă�������\n");

			scanf_s("%d", &scene);

			break;
		case	1:
			//���X�g�ꗗ�̕\��
			index(&head);
			break;
		case	2:
			//�v�f�̒ǉ�
			printf("�l����͂��Ă�������\n");
			scanf_s("%s", val, 256);
			//�Ō���ɃZ����ǉ�
			Create(&head, val);
			break;
		case	3:
			//�v�f�̍폜
			break;
		}
		
		printf("���͂����l��\��\n");
		

	}
	system("pause");

	return	0;
}