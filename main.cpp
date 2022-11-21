#include<stdio.h>

template<typename Type>

Type	Min(Type a, Type b) {
	if (a <= b) {
		return	static_cast<Type>(a);
	}
	return	static_cast<Type>(b);

}


template<>
char	Min(char a, char b) {
	printf("charŒ^ˆÈŠO‚ð‘ã“ü‚µ‚Ä‚­‚¾‚³‚¢");

	return	0;
}

int	main() {
	printf("%d\n", Min<int>(11, 4));
	printf("%f\n", Min<float>(5.0f, 6.1f));
	printf("%lf\n", Min<double>(1.123, 8.111));
	Min<char>('a', 'b');

	return	0;
}