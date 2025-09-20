#include <stdio.h>
#include <string.h>
typedef struct bankaccount {
    char name[100];
    int acn;
    int nid;
} BA;
int main() {
    int numAccounts;
    printf("Enter the number of accounts you want to create: ");
    scanf("%d", &numAccounts);
    // Declare an array of bank accounts to store the data for multiple accounts
    BA accounts[numAccounts];
    for (int i = 0; i < numAccounts; i++) {
        printf("Account %d:\n",i+1);
        printf("Enter account holder's name: ");
        scanf("%s", accounts[i].name);
        printf("Enter account no.: ");
        scanf("%d", &accounts[i].acn);
        printf("Enter account holder's NID: ");
        scanf("%d", &accounts[i].nid);

    } printf("\n\n");
    for (int i=0;i<numAccounts;i++)
    {
        printf("Account %d :\n",i+1);
        printf("Account holder's name is %s\n", accounts[i].name);
        printf("Account no. is %d\n", accounts[i].acn);
        printf("NID: %d\n", accounts[i].nid);
    }
    return 0;
}
