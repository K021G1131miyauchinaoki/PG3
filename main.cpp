#include<stdio.h>
int	Wage(int time) {

	if (time <= 1)
	{
		return(100);
	}
	return	(Wage(time - 1) * 2 - 50);
}

int	HourlyWage(int time) {
	if (time <= 1)
	{
		return(100);
	}
	return	 HourlyWage(time - 1) * 2 - 50;
}

//�ċA�ƈ�ʂ̔�r�֐�
void	comparison(int	time_) {
	//����
	int	time = time_;

	//�ċA�I�Ȓ���
	int	recursionMoney = 100;
	int	recursionResult = 0;//�ċA�I�Ȓ����̍��v

	//��ʓI�Ȓ���
	int	generalMoney = 1072;
	int	generalResult = 0;//��ʓI�Ȓ����̍��v

	//����
	recursionMoney = HourlyWage(time);

	//����
	for (size_t i = 0; i < time; i++)
	{
		recursionResult += Wage(i + 1);
	}

	generalResult = generalMoney * time;


	printf("%d���ԓ�����\n", time);//�����ԓ�������
	printf("\n");
	if (recursionMoney >= generalMoney)//�ǂ��炪��������
	{
		printf("�ċA�I�Ȏ����̕�������%d�~\n", recursionMoney);
		printf("��ʓI�Ȏ����̕����Ⴍ%d�~\n", generalMoney);
	}
	else
	{
		printf("��ʓI�Ȏ����̕�������%d�~\n", generalMoney);
		printf("�ċA�I�Ȏ����̕����Ⴍ%d�~\n", recursionMoney);
	}

	printf("\n");
	if (recursionResult >= generalResult)//���ꂼ��̍��v�z
	{
		printf("�ċA�I�Ȓ����̕�������%d�~\n", recursionResult);
		printf("��ʓI�Ȓ����̕����Ⴍ%d�~\n", generalResult);
	}
	else
	{
		printf("��ʓI�Ȓ����̕�������%d�~\n", generalResult);
		printf("�ċA�I�Ȓ����̕����Ⴍ%d�~\n", recursionResult);
	}
}

int	main() {
	comparison(8);

	return	0;
}