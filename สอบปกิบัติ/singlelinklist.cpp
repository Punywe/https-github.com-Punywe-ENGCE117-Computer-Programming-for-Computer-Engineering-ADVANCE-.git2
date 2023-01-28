//นาย ปุณยวีร์ ตาสอน 65543206023-5 sec.1
//https://www.youtube.com/watch?v=7kvVOmAB5CA&ab_channel=PoonyaweTason
#include <stdio.h>

struct NumberNode
{
    int number ;
    struct NumberNode *next ;
};

void SaveNode( struct NumberNode *num, int n) ;
void AddNode(struct NumberNode **start, int n);
void ShowAll(struct NumberNode *start);
void ShowBack(struct NumberNode *start);
void UpdateNode(struct NumberNode **start, int search_num, int update_num);
void SwapNode(struct NumberNode **start ,int n1 , int n2);
int main(){
    struct NumberNode *start; 
    start = NULL;
    AddNode( &start, 10 );
    AddNode( &start, 20 );
    AddNode( &start, 30 );
    AddNode( &start, 40 );

    printf("this Show all :");
    ShowAll(start); 
    printf("this Show Back :");
    ShowBack(start);
    printf("\n");
    printf("this UpdeatNode :");
    UpdateNode( &start, 10, 99 );
    ShowAll(start); 
    UpdateNode( &start, 99, 10 );
    printf("this SwapNode(20,30) :");
    SwapNode(&start ,20 ,30);
    ShowAll(start);
    printf("this SwapNode(10,40) :");
    SwapNode(&start ,10 ,40);
    ShowAll(start);

    printf("-----------------------------------------");
    return 0 ;
}

void SaveNode( struct NumberNode *num, int n){
    num->number = n ;
    num->next = NULL;
}

void AddNode(struct NumberNode **start, int n){
    if(*start == NULL){
        *start = new struct NumberNode;
        SaveNode(*start, n);
    }else{
        struct NumberNode *Just = *start;
        while(Just->next != NULL){
            Just = Just->next;
        }
        Just->next = new struct NumberNode;
        SaveNode(Just->next, n);
    }
}

void ShowAll(struct NumberNode *start){
    struct NumberNode *Just = start;
    while(Just != NULL){
        printf("%d ", Just->number);
        Just = Just->next;
    }
    printf("\n");
}

void UpdateNode(struct NumberNode **start, int search_num, int update_num){
    struct NumberNode *Just = *start;
    while(Just != NULL){
        if(Just->number == search_num){
           Just->number = update_num;
            break;
        }
        Just = Just->next;
    }
}
void SwapNode(NumberNode **start, int n1, int n2)
{
    NumberNode *Just = *start, *Val1 = NULL, *Val2 = NULL;

    while (Just != NULL)
    {
        if (Just->number == n1)
        {
            Val1 = Just;
        }
        else if (Just->number == n2)
        {
            Val2 = Just;
        }

        Just = Just->next;
    }
    // Swap the values
    int temp = Val1->number;
    Val1->number = Val2->number;
    Val2->number = temp;
}
void ShowBack(struct NumberNode *start)
{
    if (start == NULL)
        return;
    ShowBack(start->next);
    printf("%d ", start->number);
}