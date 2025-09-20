#include<stdio.h>
#include<string.h>

int main() {
    FILE *fp_in, *fp_out;
    char data[500];
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

    // Read from the input file and write to the output file using fscanf and fprintf
    while (fscanf(fp_in, "%499[^\n]\n", data) == 1) { //fscanf reads until a newline is found
        // Print the line to the console (it will not include the newline character)
        printf("%s\n", data);

        // Write the line to the output file (it will not include the newline character)
        fprintf(fp_out, "%s\n", data);
    }

    // Close both files
    fclose(fp_in);
    fclose(fp_out);

    printf("\nFile content copied successfully to %s\n", newscan);

    return 0;
}

