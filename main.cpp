#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include <iostream>
#include<list>

int	main() {
	
	std::list<char[32]> yamanoteLine =
	{
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
	};


	std::list<char>b{
		'T','o','k','y','o','\0'											 //				
		,'K','a','n','d','a','\0'											 //_c
		,'A','k','i','h','a','b','a','r','a','\0'							 //Ht΄
		,'O','k','a','c','h','i','m','a','c','h','i','\0'					 //δk¬
		,'U','e','n','o','\0'												 //γμ
		,'U','g','u','i','s','u','d','a','n','i','\0'						 //ιςJ
		,'N','i','p','p','o','r','i','\0'									 //ϊι’
		//,'N','i','s','h','i','N','i','p','p','o','r','i','\0'				 //Όϊι’
		,'T','a','b','a','t','a','\0'										 //c[
		,'K','o','m','a','g','o','m','e','\0'								 //ξ
		,'S','u','g','a','m','o','\0'										 //
		,'O','t','s','u','k','a','\0'										 //εΛ
		,'I','k','e','b','u','k','u','r','o','\0'							 //rά
		,'M','e','j','i','r','o','\0'										 //Ϊ
		,'T','a','k','a','d','a','n','o','b','a','b','a','\0'				 //κnκ
		,'S','h','i','n','-','O','k','u','b','o','\0'						 //VεvΫ
		,'S','h','i','n','j','u','k','u','\0'								 //Vh
		,'Y','o','y','o','g','i','\0'										 //γXΨ
		,'H','a','r','a','j','u','k','u','\0'								 //΄h
		,'S','h','i','b','u','y','a','\0'									 //aJ
		,'E','b','i','s','u','\0'											 //bδυ
		,'M','e','g','u','r','o','\0'										 //Ϊ
		,'G','o','t','a','n','d','a','\0'									 //ά½c
		,'O','s','a','k','i','\0'											 //εϊ±
		,'S','h','i','n','a','g','a','w','a','\0'							 //iμ
		//,'T','a','k','a','n','a','w','a','G','a','t','e','w','a','y'	,'\0'//ΦQ[gEFC
		,'T','a','m','a','c','h','i','\0'									 //c¬
		,'H','a','m','a','m','a','t','s','u','c','h','o','\0'				 //lΌ¬
		,'S','h','i','m','b','a','s','h','i','\0'							 //V΄
		,'Y','u','r','a','k','u','c','h','o','\0'							 //Ly¬
	};
	for (std::list<char>::iterator itr = b.begin(); itr != b.end(); ++itr)
	{
		//printf("%d\n", b);
		std::cout << *itr << "";
		if (*itr == '\0')
		{
			std::cout << *itr << "\n";
		}
	}


	std::list<std::vector<char>>a;
	auto itr = b.begin();
	printf("\n");
	system("Pause");
	return 0;
}