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
	int	era = 1970;
	while (true)
	{

		//�v�f�̒ǉ�
		for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
		{
			//2019�N�@�����闢�w��ǉ�
			if (era == 2019 && *itr == "Tabata")
			{
				itr = yamanoteLine.insert(itr, "Nishi-Nippori");
				++itr;
			}
			
			//2022�N�@�����闢�w,���փQ�[�g�E�F�C�w��ǉ�
			if (era == 2022 && *itr == "Tamachi")
			{
				itr = yamanoteLine.insert(itr, "TakanawaGateway");
				++itr;
			}
		}
		//�`��
		//�N��
		printf("%d�N\n", era);
		for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
		{
			//�w��
			std::cout << *itr << "\n";
		}

		printf("\n\n\n");

		if (era == 1970)era = 2019;
		else if (era == 2019)era = 2022;
		else break;
	}

	system("Pause");
	return 0;
}