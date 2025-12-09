//normal struct with direct access
// #include<stdio.h>
// #include<string.h>

// struct student
// {
//     char name[10];
//     int age;
//     float marks;
// };

// int main(){
//     struct student s;

//     strcpy(s.name,"Hanvitha");
//     s.age = 22;
//     s.marks = 78.5;
    
//     printf("%s\n",s.name);
//     printf("%d\n",s.age);
//     printf("%f",s.marks);

//     return 0;

// }

////////////////////////typedef with struct////////////////////////////////
// #include<stdio.h>
// #include<string.h>
// #include<stdint.h>

// typedef struct
// {
//     uint32_t id;
//     char grade;
// } student_t;

// int main(){
//     // student_t s = {1000, 'A'};
//     student_t s;

//     s.id = 1000;
//     s.grade = 'A';

//     printf("%u\n%c",s.id,s.grade);
//     return 0;
// }

////////////////////struct indirect access/////////////////////
// #include<stdio.h>
// #include<stdint.h>
// #include<string.h>

// struct student {
//     char name[10];
//     float marks;
// };

// void main(){
//     struct student s;
//     struct student *p = &s;

//     strcpy(p->name,"Hanvitha");
//     p->marks = 95.5;

//     printf("%s\n", p->name);
//     printf("%f\n", p->marks);
// }


///////////////////////malloc for struct/////////////////
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct sample{
    int a;
    char c;
};

void main(){
    struct sample *s = malloc(sizeof(struct sample));

    s->a = 5;
    s->c = 'A';

    printf("%d\n",s->a);
    printf("%c",s->c);
}