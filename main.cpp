#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include <iostream>
#include<list>

int	main() {
	//山手線の駅名
	std::list<const	char*> yamanoteLine={
			  "Tokyo"				//東京				
			, "Kanda"			//神田
			, "Akihabara"		//秋葉原
			, "Okachimachi"		//御徒町
			, "Ueno"			//上野
			, "Uguisudani"		//鶯谷
			, "Nippori"			//日暮里
			//NishiNippori		//西日暮里
			, "Tabata"			//田端
			, "Komagome"		//駒込
			, "Sugamo"			//巣鴨
			, "Otsuka"			//大塚
			, "Ikebukuro"		//池袋
			, "Mejiro"			//目白
			, "Takabanobaba"	//高場馬場
			, "Shin-Okubo"		//新大久保
			, "Sinjuku"			//新宿
			, "Yoyogi"			//代々木
			, "Harajuku"		//原宿
			, "Shibuya"			//渋谷
			, "Ebisu"			//恵比寿
			, "Meguro"			//目黒
			, "Gotanda"			//五反田
			, "Osaki"			//大﨑
			, "Sinagawa"		//品川
			//TakanawaGateway	//高輪ゲートウェイ
			, "Tamachi"			//田町
			, "Hamamatsucho"	//浜松町
			, "Shimbashi"		//新橋
			, "Yurakucho"		//有楽町
	};
	//年代
	int	era;
	while (true)
	{
		//要素の削除
		{
			for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
			{
				//西日暮里駅を削除
				if (*itr == "Nishi-Nippori")
				{
					yamanoteLine.erase(itr);
					break;
				}
			}
			for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
			{
				//高輪ゲートウェイ駅を削除
				if (*itr == "TakanawaGateway")
				{
					yamanoteLine.erase(itr);
					break;
				}
			}
		}

		printf("0で1970年,1で2019年,2で2022年の駅一覧を表示します\n");
		printf("終了する際は3を入力してください\n");

		scanf_s("%d", &era);

		//要素の追加
		for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
		{
			//2019年　西日暮里駅を追加
			if (era == 1)
			{
				if (*itr == "Tabata")
				{
					itr = yamanoteLine.insert(itr, "Nishi-Nippori");
					++itr;
				}
			}
			//2022年　西日暮里駅,高輪ゲートウェイ駅を追加
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

		//描画
		if (era == 0 || era == 1 || era == 2)
		{
			for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
			{
				//1970年はそのまま
				std::cout << *itr << "\n";
			}
		}
		//3がだったらループを抜ける
		else if (era==3)
		{
			break;
		}
		//それ以外の数字の時
		else
		{
			printf("0,1,2のどれかを入力してください\n");
		}
	}

	system("Pause");
	return 0;
}