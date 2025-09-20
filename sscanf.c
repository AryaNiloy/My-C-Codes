#include<stdio.h>
int main() {
    FILE *fp_in, *fp_out;
    char *input_file = "in3.txt";
    char *output_file = "out3.txt";
    char line[80];
    int num1, num2, sum;
    fp_in = fopen(input_file, "r");
    if (fp_in == NULL) {
        printf("Could not open input file\n");
        return 1;
    }
    fp_out = fopen(output_file, "w");
    if (fp_out == NULL) {
        printf("Could not open output file\n");
        fclose(fp_in);
        return 1;
    }
    fgets(line, 80, fp_in);
    printf("Line: %s\n", line);
    sscanf(line, "%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum of %d & %d is %d\n", num1, num2, sum);
    fprintf(fp_out, "Sum of %d & %d is %d\n", num1, num2, sum);
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
