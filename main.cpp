#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include <iostream>
#include<list>

int	main() {
	//�R����̉w��
	std::list<const	char*> yamanoteLine={
			  "Tokyo"				//����				
			, "Kanda"			//�_�c
			, "Akihabara"		//�H�t��
			, "Okachimachi"		//��k��
			, "Ueno"			//���
			, "Uguisudani"		//��J
			, "Nippori"			//���闢
			//NishiNippori		//�����闢
			, "Tabata"			//�c�[
			, "Komagome"		//�
			, "Sugamo"			//����
			, "Otsuka"			//���
			, "Ikebukuro"		//�r��
			, "Mejiro"			//�ڔ�
			, "Takabanobaba"	//����n��
			, "Shin-Okubo"		//�V��v��
			, "Sinjuku"			//�V�h
			, "Yoyogi"			//��X��
			, "Harajuku"		//���h
			, "Shibuya"			//�a�J
			, "Ebisu"			//�b���
			, "Meguro"			//�ڍ�
			, "Gotanda"			//�ܔ��c
			, "Osaki"			//����
			, "Sinagawa"		//�i��
			//TakanawaGateway	//���փQ�[�g�E�F�C
			, "Tamachi"			//�c��
			, "Hamamatsucho"	//�l����
			, "Shimbashi"		//�V��
			, "Yurakucho"		//�L�y��
	};
	//�N��
	int	era;
	while (true)
	{
		//�v�f�̍폜
		{
			for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
			{
				//�����闢�w���폜
				if (*itr == "Nishi-Nippori")
				{
					yamanoteLine.erase(itr);
					break;
				}
			}
			for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
			{
				//���փQ�[�g�E�F�C�w���폜
				if (*itr == "TakanawaGateway")
				{
					yamanoteLine.erase(itr);
					break;
				}
			}
		}

		printf("0��1970�N,1��2019�N,2��2022�N�̉w�ꗗ��\�����܂�\n");
		printf("�I������ۂ�3����͂��Ă�������\n");

		scanf_s("%d", &era);

		//�v�f�̒ǉ�
		for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
		{
			//2019�N�@�����闢�w��ǉ�
			if (era == 1)
			{
				if (*itr == "Tabata")
				{
					itr = yamanoteLine.insert(itr, "Nishi-Nippori");
					++itr;
				}
			}
			//2022�N�@�����闢�w,���փQ�[�g�E�F�C�w��ǉ�
			if (era == 2)
			{
				if (*itr == "Tabata")
				{
					itr = yamanoteLine.insert(itr, "Nishi-Nippori");
					++itr;
				}
				if (*itr == "Tamachi")
				{
					itr = yamanoteLine.insert(itr, "TakanawaGateway");
					++itr;
				}
			}
		}

		//�`��
		if (era == 0 || era == 1 || era == 2)
		{
			for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
			{
				//1970�N�͂��̂܂�
				std::cout << *itr << "\n";
			}
		}
		//3���������烋�[�v�𔲂���
		else if (era==3)
		{
			break;
		}
		//����ȊO�̐����̎�
		else
		{
			printf("0,1,2�̂ǂꂩ����͂��Ă�������\n");
		}
	}

	system("Pause");
	return 0;
}