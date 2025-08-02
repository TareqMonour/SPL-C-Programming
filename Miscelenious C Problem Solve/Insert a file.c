#include<stdio.h>
int main()
 {

	FILE *f;
	char c=0;
	int br=0;

	if ((f=fopen("fajl.htm", "r+"))==NULL) {
		exit(1);
	}

	while ((c=fgetc(f))!=EOF) {

		if (c=='&') {
				fputs("blah", f);
				printf("Job done.\n");
		}
	}

	fclose(f);

	return 0;

}
