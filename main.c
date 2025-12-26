#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char *w1[] = {"table", "chair", "desk", "pen", "biscut", "mug", "book", "laptop"};
const char *w2[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"};
const char *w3[] = {"is awsome", "is great", "is beutiful", "is ugly", "is poorly made"};


int main () {
	srand(time(NULL));
	int v1 = rand() % (sizeof(w1) / sizeof(w1[0]));
	int v2 = rand() % (sizeof(w2) / sizeof(w2[0]));
	int v3 = rand() % (sizeof(w3) / sizeof(w3[0]));

	printf("%s %s %s\n", w1[v1], w2[v2], w3[v3]);
	return 0;
}
