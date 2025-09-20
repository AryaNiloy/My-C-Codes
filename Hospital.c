#include<stdio.h>
typedef struct {
    int id;
    char name[50];
    int age;
    char gender[10];
    char bloodGroup[5];
    char contactNumber[15];
    char address[100];
    char disease[50];
    char doctorAssigned[50];
    char admissionDate[20];
    char dischargeDate[20];
    char status[20]; // e.g., "Admitted", "Discharged"
} patient;

void patiententry()
{ patient p[100];
FILE *file=fopen("Patient.txt","r");
int count =0;
while(fscanf(file,"%d %s %d %s %s %s %s",p[count].id,p[count].name,
p[count].age,p[count].gender,p[count].bloodGroup,p[count].contactNumber,p[count].address,
p[count].disease,p[count].doctorAssigned,p[count].admissionDate,p[count].dischargeDate,p[count].status)!=7)
{
    count++;
}
fclose(file);
if (file==NULL)
{
    printf("Error");
    return;
}
FILE *wfile=fopen("Patient.txt","w+");
for(int i=0;i<count;i++);
    printf("Enter patient id");



}



int main()
{
}
