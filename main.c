#define MAXSIZE 10000
#define ERROR 0
#define OVERFLOW -2

typedef struct
{
    char id[20];
    char name[10];
    char sex;
    int age;
    char class;
}student;

void InitList_Sd(student *L){
    L->elem =(int *)malloc(MAXSIZE *sizeof(int));
    if(!L->elem) exit(OVERFLOW);
    L->length=0；
}