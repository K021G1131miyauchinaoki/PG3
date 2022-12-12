#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef	struct cell
{
	char	station[256];
	struct cell* prev;
	struct cell* next;
}CELL;
//�Z����V�K�쐬����֐�
void	Create(CELL* currentCell,const char*	station_) {
	CELL* newCell;
	//�V�K�쐬����Z���̃|�C���^
	newCell = (CELL*)malloc(sizeof(CELL));
	strcpy_s(newCell->station, 256, station_);
	//newCell->prev = currentCell;
	newCell->next = currentCell->next;

	if (currentCell->next)
	{
		CELL* nextCell = currentCell->next;
		nextCell->prev = newCell;
	}
	currentCell->next = newCell;
}

void	index(CELL*end_){
	int	no = 1;
	while (end_->next != nullptr)
	{
		end_ = end_->next;
		printf("%s\n", end_->station);
	}
	printf("\n");
	/*while (end_->prev != nullptr)
	{
		end_ = end_->next;
		printf("%s\n", end_->station);
	}*/
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

int	main() {
	int	iterator;
	char	inputStation[256];
	CELL* insertCell;
	//�擪�̃Z����錾
	CELL	head;
	head.next = nullptr;
	while (true)
	{
		printf("���Ԗڂ̃Z���̌��ɑ}�����܂����H\n");
		scanf_s("%d", &iterator);
		
		printf("�}������l����͂��Ă�������\n");
		scanf_s("%d", &inputStation);
		
		//�Ō���ɃZ����ǉ�
		insertCell = getInsertCellAddress(&head,iterator);
		Create(insertCell, inputStation);
		//���X�g�ꗗ�̕\��
		index(&head);
	}
	return	0;
}