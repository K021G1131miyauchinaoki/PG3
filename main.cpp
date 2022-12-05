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
//�Z����V�K�쐬����֐�
void	Create(CELL* head_, const char* name_,int checkoutDate_,int returnDate_) {
	CELL* newCell;
	//�V�K�쐬����Z���̃|�C���^
	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->name, 256, name_);
	newCell->checkoutDate = checkoutDate_;
	newCell->returnDate = returnDate_;

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
	//�擪�̃Z����錾
	CELL	head;
	head.next = nullptr;
	while (true)
	{
		//�Ō���ɃZ����ǉ�
		printf("���O����͂��Ă�������\n");
		scanf_s("%s", name,256);
		printf("�ݏo������͂��Ă�������\n");
		scanf_s("%d", &checkoutDate);
		printf("�ԋp������͂��Ă�������\n");
		scanf_s("%d", &returnDate);
		Create(&head, name,checkoutDate,returnDate);
		//���X�g�ꗗ�̕\��
		printf("���͂����l��\��\n");
		index(&head);
	}
	system("pause");

	return	0;
}