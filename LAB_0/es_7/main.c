#include <stdio.h>

int main(int argc, char **argv) {
    
	FILE *fp;
    
    if (argc!=4) return 1;
    
    fp=fopen(argv[3], "w");    
    if (fp==NULL) return 2;
    
    
    
	return 0;
}
