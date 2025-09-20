#include<stdio.h>

int main() {
    FILE *fp_in, *fp_out;
    int ch;
    char *scan = "average.txt";
    char *newscan = "newscan.txt";

    // Open the input file in read mode
    fp_in = fopen(scan, "r");
    if (fp_in == NULL) {
        printf("Error: Cannot open file %s\n", scan);
        return 1;
    }

    // Open the output file in write mode
    fp_out = fopen(newscan, "w");
    if (fp_out == NULL) {
        printf("Error: Cannot open file %s\n", newscan);
        fclose(fp_in);
        return 1;
    }

    // Read each character from the input file and write it to the output file
    while ((ch = getchar(fp_in)) != EOF) {
        // Print the character to the console
        putchar(ch);

        // Write the character to the output file
        fputc(ch, fp_out);
    }

    // Close both files
    fclose(fp_in);
    fclose(fp_out);

    printf("\nFile content copied successfully to %s\n", newscan);

    return 0;
}

