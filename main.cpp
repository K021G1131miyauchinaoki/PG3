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
	int	age;
	while (true)
	{
		//vfΜν
		{
			for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
			{
				//Όϊι’wπν
				if (*itr == "Nishi-Nippori")
				{
					yamanoteLine.erase(itr);
					break;
				}
			}
			for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
			{
				//ΦQ[gEFCwπν
				if (*itr == "TakanawaGateway")
				{
					yamanoteLine.erase(itr);
					break;
				}
			}
		}

		printf("0Ε1970N,1Ε2019N,2Ε2022NΜwκπ\¦΅ά·\n");
		printf("IΉ·ιΫΝ3πόΝ΅Δ­Ύ³’\n");

		scanf_s("%d", &age);

		//vfΜΗΑ
		for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
		{
			//2019N@Όϊι’wπΗΑ
			if (age == 1)
			{
				if (*itr == "Tabata")
				{
					itr = yamanoteLine.insert(itr, "Nishi-Nippori");
					++itr;
				}
			}
			//2022N@Όϊι’w,ΦQ[gEFCwπΗΑ
			if (age == 2)
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
		if (age == 0 || age == 1 || age == 2)
		{
			for (std::list<const char*>::iterator itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr)
			{
				//1970NΝ»Μάά
				std::cout << *itr << "\n";
			}
		}
		//3ͺΎΑ½η[vπ²―ι
		else if (age==3)
		{
			break;
		}
		//»κΘOΜΜ
		else
		{
			printf("0,1,2ΜΗκ©πόΝ΅Δ­Ύ³’\n");
		}
	}

	system("Pause");
	return 0;
}