#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct node
{
    int info;
    struct node* next;
};
struct node* list = NULL;

void insertRandomValues(){
struct node* p;
srand(time(NULL));

for (int i = 1; i <= 30; i++){
int randomx = 1 + rand() % 100;
if (list == NULL)
{
    p = (struct node*)malloc(sizeof(struct node));
    p ->info = randomx;
    p ->next = NULL;
    list = p;
}
else{
    p = (struct node*)malloc(sizeof(struct node));
    p ->info = randomx;
    p-> next = list;
    list = p;
}

}
}


void deletionGreaterValuesAtRight(){
struct node* p;
struct node* q;
struct node* o;
if (list == NULL)
{
    printf("No node to delete\n");
}
else{
    p = list;
   
    while (p->next != NULL)
    {
        q = p->next;
        if (q->info > p->info && p == list)
        {
            free(p);
            list = q;
            p = q;
        }
        else if (q->info > p->info)
        {
            o->next = p->next;
            free(p);
            p = q;
        }
        else{
        o = p;
        p = p->next;
        }
    }
}
}

void display(){
struct node* p;
p = list;
int i = 0;
if (list == NULL)
{
    printf("No node to show\n");
}
printf("Displaying NODES:\n");
while (p != NULL)
{
    printf("%d) %d\n", i + 1, p->info);
    p = p -> next;
    i++;
}
}

int main(){
 int opt, x, value;
 do
 {
    printf("Press 1 to insert 30 random values in the linked list\n2 for deletion\n3 to dislpay\n-1 to terminate\n");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
    insertRandomValues(x);
    break;
    case 2:
    deletionGreaterValuesAtRight();
    break;  
    case -1:
    printf("Program  Ended!\n");
    break;
    case 3:
    display();
    break;
    default:
    printf("Invald key!\n");
        break;
    }

 } while (opt != -1);
 
}