#include<stdio.h>
struct student
{
char rollNo[5];
char name[15];
int mark1,mark2,mark3;
float avgMarks;
};
typedef struct student stud;

void insertStudentDetails(stud *); //Function Declaration
void printStudentDetails(stud *s); //Function Declaration

int main(void)
{

stud s[5];
insertStudentDetails(s);
printStudentDetails(s);
return 0;
}

void insertStudentDetails(stud *s)
{
        for(int i=0;i<5;i++)
        {
                printf("Enter the Roll No. Of Student:");
                scanf("%s",s[i].rollNo);
                printf("Enter the Name of the student:");
                scanf("%s",s[i].name);
                printf("Enter the 3 subjects marks:");
                scanf("%d%d%d",&s[i].mark1,&s[i].mark2,&s[i].mark3);
                s[i].avgMarks=(s[i].mark1+s[i].mark2+s[i].mark3)/3;

        }
}

void printStudentDetails(stud *s)
{
        for(int i=0;i<5;i++)
        {
                printf("student Details : %d\n",i+1);
                printf("\n___________________________\n");
                printf("Student RollNo: %s\n",s[i].rollNo);
                printf("Student Name:%s\n",s[i].name);
                printf("Student Marks:%d ; %d  ;%d\n",s[i].mark1,s[i].mark2,s[i].mark3);
                printf("Average Marks: %.2f\n",s[i].avgMarks);

        }
}
