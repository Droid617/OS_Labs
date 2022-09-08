#include <stdio.h>

int main(int argc, char** argv){

	FILE* file;
	char line[256];
	
	if((file = fopen(argv[1], "r")) != NULL){
		while(fgets(line, 256, file) != NULL){
			printf("%s", line);
		}

		fclose(file);
	}
	else{
		printf("cat: %s: No such file or directory", argv[1]);
	}	

	return 0;
}
