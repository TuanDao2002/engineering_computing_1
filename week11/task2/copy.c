#include <stdio.h>

int copy(char const *infile, char const *outfile) {
    FILE* fi = fopen(infile, "r");
    if (fi == NULL) {
        return 0;
    }

    FILE* fo = fopen(outfile, "w");
    if (fo == NULL) {
        return 0;
    }

    for (int ch = fgetc(fi); ch != EOF; ch = fgetc(fi)) {
        fputc(ch, fo);
    }    

    fclose(fi);
    fclose(fo);

    return 1;
}

int main(int argc, const char* argv[]) {
    if (argc != 3) {
        printf("There must be only 2 filenames\n");
        return -1;
    }

    if (copy(argv[1], argv[2])) {
        printf("Copy from %s to %s successful\n", argv[1], argv[2]);
    } else {
        printf("Copy from %s to %s failed\n", argv[1], argv[2]);
    }
    return 0;
}