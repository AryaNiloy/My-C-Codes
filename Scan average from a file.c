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

    // Read each line from the input file and write it to the output file
    while (fgets(data, sizeof(data), fp_in) != NULL) { //fgets has 3 parameters.First one is where to store,second one is size allocation for storing,third one is pointer that points to the file to be read from
        // Print the line to the console (it will include the newline character)
        printf("%s\n", data);

        // Write the line to the output file (it will include the newline character)
        fputs(data, fp_out);//fputs has 2 parameters. first one is where to put from and second one is the pointer that points to the file to be written to
    }

    // Close both files
    fclose(fp_in);
    fclose(fp_out);

    printf("\nFile content copied successfully to %s\n", newscan);

    return 0;
}
