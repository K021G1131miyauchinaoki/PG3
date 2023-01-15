#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef	struct cell
{
	char str[256];
	struct cell* prev;
	struct cell* next;
}CELL;
//�Z����V�K�쐬����֐�
void	Create(CELL* head_, const char* str_, int iterator);

//�ꗗ�̕\��
void	index(CELL* head_);

//�w�肳�ꂽ�v�f��\��
void	Specification(CELL* element, int iterator);

//�v�f�̍폜
void	Delete(CELL* end_);

//�v�f�̕ҏW
void	Edit(CELL* element, int iterator);

CELL* getInsertCellAddress(CELL* endCELL, int iterator);

int	main() {
	char str[256];
	int	iterator = 0;
	CELL* insertCell;
	//�擪�̃Z����錾
	CELL	head;
	head.next = nullptr;

	int	scene = 0;
	int	display=0;

	Create(&head, "banana",114514);
	Create(&head, "apple", 114514);
	Create(&head, "orange", 114514);

	while (true)
	{
		switch (scene)
		{
		case	0:
			printf("[�v�f�̑���]\n");
			
			printf("1.�v�f�̕\��\n");
			printf("2.�v�f�̑}��\n");
			printf("3.�v�f�̕ҏW\n");
			printf("4.�v�f�̍폜\n");
			printf("5.�v�f�̕��ёւ��i�I�v�V�����j\n");

			printf("----------------------------------------\n");
			printf("�����I�����Ă�������\n");

			scanf_s("%d", &scene);
			display = 0;
			break;
		case	1://-----------�v�f�̕\��-----------
			switch (display)
			{
			case	0:
				printf("[�v�f�̕\��]\n");

				printf("1.�v�f�̈ꗗ�\��\n");
				printf("2.���Ԃ��w�肵�ėv�f��\��\n");
				printf("9.�v�f����ɖ߂�\n\n");

				printf("�����I�����Ă�������\n");
				scanf_s("%d", &display);
				if (display==9)
				{
					//�v�f�̑���ɖ߂�
					scene = 0;
				}

				break;
			case	1:
				printf("[�v�f�̈ꗗ�̕\��]\n");

				index(&head);
				printf("----------------------------------------\n");
				printf("0.�v�f�̕\���ɖ߂�\n");
				printf("1.�v�f�̑���ɖ߂�\n");
				scanf_s("%d", &display);
				if (display==1)
				{
					scene = 0;
				}

				break;
			case	2:
				printf("�w�肵���v�f�̕\��\n");
				printf("�v�f��ԍ��Ŏw�肵�Ă�������\n");
				scanf_s("%d", &iterator);
				Specification(&head,iterator);
				printf("----------------------------------------\n");
				printf("0.�v�f�̕\���ɖ߂�\n");
				printf("1.�v�f�̑���ɖ߂�\n");
				scanf_s("%d", &display);
				if (display == 1)
				{
					scene = 0;
				}

				break;
			}

			break;
		case	2://-----------�v�f�̒ǉ�-----------
			printf("���Ԗڂ̃Z���ɑ}�����܂����H\n114514�̏ꍇ�A�Ō���ɑ}�����܂�\n");
			scanf_s("%d", &iterator);
			printf("�l����͂��Ă�������\n");
			scanf_s("%s", str, 256);
			//�Ō���ɃZ����ǉ�
			insertCell = getInsertCellAddress(&head, iterator);
			Create(insertCell, str,iterator);
			printf("�v�f%s��}�����܂���\n",str);

			printf("----------------------------------------\n");
			scene = 0;
			break;
		case	3://-----------�v�f�̕ҏW-----------
			printf("�ҏW�������v�f�̔ԍ����w�肵�Ă�������\n");
			scanf_s("%d", &iterator);
			Edit(&head, iterator);

			scene = 0;

			break;
		case	4://-----------�v�f�̍폜-----------
			Delete(&head);

			printf("----------------------------------------\n");
			printf("0.������ʂ֖߂�\n");
			scanf_s("%d", &scene);
			break;
		case	5:

			break;
		}
	}
	system("pause");

	return	0;
}

//�v�f�̑}��
void	Create(CELL* head_, const char* str_, int iterator) {
	CELL* newCell;
	//�V�K�쐬����Z���̃|�C���^
	newCell = (CELL*)malloc(sizeof(CELL));
	strcpy_s(newCell->str, 256, str_);
	newCell->prev = head_;
	newCell->next = nullptr;
	if (iterator==114514)
	{
		//nullptr�̃|�C���^�܂Ŕ��
		while (head_->next != nullptr)
		{
			head_ = head_->next;
		}
	}
	else
	{
		if (head_->next)
		{
			CELL* nextCell = head_->next;
			nextCell->prev = newCell;
		}
	}
	
	head_->next = newCell;
}
CELL* getInsertCellAddress(CELL* endCELL, int iterator) {
	if (iterator!=114514)
	{
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
	}
	
	return	endCELL;
}

//�ꗗ�̕\��
void	index(CELL* head_) {
	int	num = 0;
	while (head_->next != nullptr)
	{
		head_ = head_->next;
		printf("%d:%s\n", num, head_->str);
		num++;
	}
	printf("\n");
	printf("�v�f�� %d\n", num);

}

//�w�肳�ꂽ�v�f��\��
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
		printf("�v�f���Ȃ����ߕ\���ł��܂���\n");
	}
	else
	{
		printf("%d:%s\n", iterator, element->str);
	}
}

//�v�f�̕ҏW
void	Edit(CELL* element, int iterator) {
	for (int i = 0; i < iterator + 1; i++)
	{
		if (element!=nullptr)
		{
			element = element->next;
		}
	}
	if (element == nullptr)
	{
		printf("%d�Ԗڂ̗v�f���Ȃ����ߕҏW�ł��܂���\n", iterator);
	}
	else	
	{
		char str[256];
		printf("%d�Ԗڂ̗v�f�̕ύX����l����͂��Ă�������\n", iterator);
		scanf_s("%s", &str, 256);
		strcpy_s(element->str, 256, str);
		printf("%d�Ԗڂ̗v�f�̒l��%s�ɕύX����܂���\n", iterator, element->str);
	}
}

//�v�f�̍폜
void	Delete(CELL* end_) {
	while (end_->next != nullptr)
	{
		end_ = end_->next;
	}
	end_->prev->next = nullptr;

	//printf("%s\n", end_->str);

	printf("�Ō���̗v�f���폜���܂���\n\n\n");
}

