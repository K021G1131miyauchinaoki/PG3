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

//再帰と一般の比較関数
void	comparison(int	time_) {
	//時間
	int	time = time_;

	//再帰的な賃金
	int	recursionMoney = 100;
	int	recursionResult = 0;//再帰的な賃金の合計

	//一般的な賃金
	int	generalMoney = 1072;
	int	generalResult = 0;//一般的な賃金の合計

	//時給
	recursionMoney = HourlyWage(time);

	//賃金
	for (size_t i = 0; i < time; i++)
	{
		recursionResult += Wage(i + 1);
	}

	generalResult = generalMoney * time;


	printf("%d時間働いて\n", time);//何時間働いたか
	printf("\n");
	if (recursionMoney >= generalMoney)//どちらが高時給か
	{
		printf("再帰的な時給の方が高く%d円\n", recursionMoney);
		printf("一般的な時給の方が低く%d円\n", generalMoney);
	}
	else
	{
		printf("一般的な時給の方が高く%d円\n", generalMoney);
		printf("再帰的な時給の方が低く%d円\n", recursionMoney);
	}

	printf("\n");
	if (recursionResult >= generalResult)//それぞれの合計額
	{
		printf("再帰的な賃金の方が高く%d円\n", recursionResult);
		printf("一般的な賃金の方が低く%d円\n", generalResult);
	}
	else
	{
		printf("一般的な賃金の方が高く%d円\n", generalResult);
		printf("再帰的な賃金の方が低く%d円\n", recursionResult);
	}
}

int	main() {
	comparison(8);

	return	0;
}