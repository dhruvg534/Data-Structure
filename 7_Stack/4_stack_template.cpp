#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int*s;
};


void create(struct stack* st)
{
    st->size = 20;
    st->top = -1;
    st->s = (int*)malloc(sizeof(int)*st->size);
}


void display(struct stack st)
{
    for(int i=0; i<= st.top;i++)
    {
        printf("%d\n", st.s[i]);
    }
}

void push(struct stack* st, int x)
{
    if(st->top == st->size-1)
        printf("OVERFLOW\n");
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(struct stack*st)
{
    int x=-1;
    if(st->top == -1)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        x= st->s[st->top];
        st->top--;
    }
    return x;
}

int peek(struct stack st, int index)
{
    int x=-1;
    if(st.top < index)
        printf("No value\n");
    else
        return st.s[index];
}

bool is_empty(struct stack st)
{
    if(st.top == -1)
        return true;
    else
        return false;
}

bool is_full(struct stack st)
{
    if(st.top == st.size-1)
        return true;
    else
        return false;
}

int main()
{
    struct stack st;
    create(&st);
    push(&st, 5);
    push(&st, 4);
    push(&st, 3);
    pop(&st);
    push(&st, 41);
    peek(st, 3);
    //cout<<is_empty(st)<<endl;
    display(st);
    

}