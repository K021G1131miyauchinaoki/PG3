#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include <iostream>
#include<list>

typedef	struct cell
{
	int	val;
	struct Cell* next;
}CELL;
//�Z����V�K�쐬����֐�
void	Create(CELL* head_, int val_) {
	CELL* nextCell;
	//�V�K�쐬����Z���̃|�C���^
	nextCell = (CELL*)malloc(sizeof(CELL));

	nextCell->val = val_;
	nextCell->next = nullptr;
}

int	main() {
	//�擪�̃Z����錾
	CELL	head;
	head.next = nullptr;
}