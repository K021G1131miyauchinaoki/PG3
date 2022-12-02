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
void	Create(CELL* head_, const char* str_);

//�ꗗ�̕\��
void	index(CELL* head_);

//�w�肳�ꂽ�v�f��\��
void	Specification(CELL* element, int iterator);

//�v�f�̍폜
void	Delete(CELL* end_);

CELL* getInsertCellAddress(CELL* endCELL, int iterator);

int	main() {
	char val[256];
	int	iterator = 0;
	//�擪�̃Z����錾
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
		case	1:
			//�v�f�̕\��
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

				index(&insertCell);
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
				Specification(&insertCell,iterator);
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
		case	2:
			//�v�f�̒ǉ�
			printf("�l����͂��Ă�������\n");
			scanf_s("%s", val, 256);
			//�Ō���ɃZ����ǉ�
			Create(&insertCell, val);
			printf("�v�f%s�����X�g�Ō���ɑ}�����܂���\n",val);

			printf("----------------------------------------\n");
			printf("0.������ʂ֖߂�\n");
			scanf_s("%d", &scene);
			break;
		case	3:

			break;
		case	4:
			//�v�f�̍폜
			Delete(&insertCell);

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


void	Create(CELL* head_, const char* str_) {
	CELL* newCell;
	//�V�K�쐬����Z���̃|�C���^
	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->str, 256, str_);
	newCell->prev = head_;
	newCell->next = nullptr;

	//nullptr�̃|�C���^�܂Ŕ��
	while (head_->next != nullptr)
	{
		head_ = head_->next;
	}
	head_->next = newCell;
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

void	Delete(CELL* end_) {
	while (end_->next != nullptr)
	{
		end_ = end_->next;
	}
	end_->prev->next = nullptr;

	//printf("%s\n", end_->str);

	printf("�Ō���̗v�f���폜���܂���\n\n\n");
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
