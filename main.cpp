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
	while (true)
	{
		printf("�l����͂��Ă�������\n");
		scanf_s("%s", val,256);
		printf("���͂����l��\��\n");
		//�Ō���ɃZ����ǉ�
		Create(&head, val);
		//���X�g�ꗗ�̕\��
		index(&head);
	}
	system("pause");

	return	0;
}