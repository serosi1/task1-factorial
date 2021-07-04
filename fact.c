#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long int ull;

ull fact(ull);

int main(int argc, char **argv) {
	char *end;
	ull n = strtoull(argv[1], &end, 10);
	printf("%llu! = %llu\n", n, fact(n)); 
	return 0;
}

ull fact(ull n) {
	if (n == 0) return 1;
	return fact(n - 1) * n;
}
