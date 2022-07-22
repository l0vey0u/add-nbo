#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char* argv[]) {
	uint32_t n1;
	uint32_t n2;
	if (argc != 3) {
		printf("usage: add-nbo <file1> <file2>\n");
	}
	FILE* f1 = fopen(argv[1], "r");
	FILE* f2 = fopen(argv[2], "r");
	fread(&n1, 4, 1, f1);
	fread(&n2, 4, 1, f2);
	fclose(f1);
	fclose(f2);
	n1 = htonl(n1);
	n2 = htonl(n2);
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", n1, n1, n2, n2, n1+n2, n1+n2);
	return 0;
}