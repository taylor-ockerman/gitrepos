#include <stdio.h>

int main(int argc, const char* argv[]){
	size_t i;

	if(argc <= 0){
		fprintf(stderr, "no arguments\n");
		return 1;
	}

	for(i = 1; argv[i] != NULL; i++){
		printf("%s ", argv[i]);
	}
	
	printf("\n");

	return 0;
}