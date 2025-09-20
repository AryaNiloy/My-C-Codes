#include <stdio.h>
#include<string.h>

struct nametype{
    char fname[20];
    char lname[20];
};

struct student {
    int id;
    struct nametype name;

};

int main() {
    struct student one;
    scanf("%d",&one.id);
    scanf("%s",one.name.fname);
    scanf("%s",one.name.lname);
    printf("ID: %d\n", one.id);
    printf("Name: %s %s\n", one.name.fname,one.name.lname);
    return 0;
}
//if you want to print the first word only in any situation//
/*while (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0') {
        putchar(sentence[i]);
        i++;
    }*/
/*The issue you're encountering arises because scanf("%s", ...)
only reads input up to the first whitespace (like a space). So when
 you input "Niloy Pramanik", scanf("%s", one.name.fname) captures
 "Niloy" as the first name, and "Pramanik" is left in the input buffer.
  As a result, the next scanf("%s", one.name.lname) immediately picks
  "Pramanik" as the last name without giving you the chance to type anything.*/
