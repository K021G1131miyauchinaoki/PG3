#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include <iostream>
#include<list>

int	main() {
	//RθόΜwΌ
	std::list<const	char*> yamanoteLine={
			  "Tokyo"				//				
			, "Kanda"			//_c
			, "Akihabara"		//Ht΄
			, "Okachimachi"		//δk¬
			, "Ueno"			//γμ
			, "Uguisudani"		//ιςJ
			, "Nippori"			//ϊι’
			//NishiNippori		//Όϊι’
			, "Tabata"			//c[
			, "Komagome"		//ξ
			, "Sugamo"			//
			, "Otsuka"			//εΛ
			, "Ikebukuro"		//rά
			, "Mejiro"			//Ϊ
			, "Takabanobaba"	//κnκ
			, "Shin-Okubo"		//VεvΫ
			, "Sinjuku"			//Vh
			, "Yoyogi"			//γXΨ
			, "Harajuku"		//΄h
			, "Shibuya"			//aJ
			, "Ebisu"			//bδυ
			, "Meguro"			//Ϊ
			, "Gotanda"			//ά½c
			, "Osaki"			//εϊ±
			, "Sinagawa"		//iμ
			//TakanawaGateway	//ΦQ[gEFC
			, "Tamachi"			//c¬
			, "Hamamatsucho"	//lΌ¬
			, "Shimbashi"		//V΄
			, "Yurakucho"		//Ly¬
	};
	//Nγ
	int	era = 1970;
	while (true)
	{

		//vfΜΗΑ
		for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
		{
			//2019N@Όϊι’wπΗΑ
			if (era == 2019)
			{
				if (*itr == "Tabata")
				{
					itr = yamanoteLine.insert(itr, "Nishi-Nippori");
					++itr;
				}
			}
			//2022N@Όϊι’w,ΦQ[gEFCwπΗΑ
			if (era == 2022)
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
		//`ζ
		//Nγ
		printf("%dN\n", era);
		for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
		{
			//wΌ
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