#include <stdio.h>
struct st_rec
{
    int wgt;
    float hgt;
} stud1 = {43, 23.4};
int main()
{
    struct st_rec stud2 = {98, 43.2};
    printf("record of student1 %d %f\n", stud1.wgt, stud1.hgt);
    struct
    {
        int weight;
        float height;
    } student1 = {22, 99.9},
      student2 = {33, 8.9};
    printf("weight of student1 %d height of student1 %f\nweight of student2 %d height of student2 %f", student1.weight, student1.height, student2.weight, student2.height);
    struct st_re
    {
        int wt;
        float ht;
    };
    struct st_re stu1 = {60, 12.3};
    struct st_re stu2 = {65, 18.3};
    printf("\ninfo of student1 is %d %f", stu1.wt, stu1.ht);
    return 0;
}
