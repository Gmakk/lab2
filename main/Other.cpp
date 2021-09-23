#include "Header.h"

int dialog(const char* msgs[], int N){
	int rc;
	int i, n;
	do {
		for (i = 0; i < N; ++i)
			puts(msgs[i]);
		puts("Make your choice:");
		n = getInt(&rc);
		if (n == 0)
			rc = 0;
	} while (rc < 0 || rc >= N);
	return rc;
}

template <class T>
int getPositiveNum(T& a) {
	do {
		std::cin >> a;
		if (!std::cin.good())
			return -1;
		if (a > 0)
			break;
		else
			std::cout << "Enter a positive number" << std::endl;
	} while (a <= 0);
	return 1;
}

int getInt(int* a) {
	int n = 0;
	while (n == 0) {
		n = scanf_s("%d", a);
		if (n < 0)
			return n;
		if (n == 0) {
			scanf_s("%*c", NULL);
			printf("%s", "Enter correct number\n");
		}
	}
	return n;
}