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

typedef struct{
    student *student;
    int length;
}mystudent;

void InitList_Sq(mystudent *L){
    L->student =(int *)malloc(MAXSIZE *sizeof(int));
    if(!L->student) exit(ERROR);
    L->length=0；
}

int main(){
    mystudent L;
    Initilist_Sq(*L);
    printf("Ok")；
}
