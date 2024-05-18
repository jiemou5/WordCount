/*
#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[]) {

	printf("hello");
	FILE *fs;
	int n = 0;

	if ((fs = fopen(argv[2], "r")) == NULL) {
		puts("error\n");
		return 0;
	}

	if (argv[1][1] == 'c') {
		char chr[1024 * 1024];
		while (fscanf(fs, "%s", chr) != EOF) {
			for (int i = 1; i < strlen(chr); i++) {
				if (chr[i] == ',' && chr[i] != chr[i - 1])n++;
			}
			n++;
		}
		printf("µ¥´ÊÊý£º%d\n", n);
	}
	else if (argv[1][1] == 'w') {
		char c;
		while ((c = getc(fs))!=EOF) {
			n++;
		}
		printf("×Ö·ûÊý£º%d\n", n);
	}

	fclose(fs);
	return 0;
}
*/

