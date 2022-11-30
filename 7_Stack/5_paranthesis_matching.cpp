#include <iostream>
using namespace std;

struct stack
{
    int size ;
    int top;
    char*s;
};

void create(struct stack*st)
{
    st->size=20;
    st->top= -1;
    st->s= (char*)malloc(sizeof (char)* st->size);

}

void push(struct stack *st, char x)
{
    if(st->top == st->size-1)
        printf("OVERFLOW\n");
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(struct stack* st)
{
    char x= -1;
    if(st->top == -1)
        printf("UNDERFLOW\n");
    else
    {  
        x= st->s[st->top];
        st->top--;
    }
    return x;
}

bool is_empty_(struct stack st)
{
    if(st.top == -1)
    {
        return true;
    }
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

bool balanced(char* exp)
{
    struct stack st;
    create(&st);
    for(int i=0; exp[i]!= '\0'; i++)
    {
        if(exp[i] == '(')
            push(&st, exp[i]);
        else if(exp[i] == ')')
        {
            if( is_empty_(st) )
                return false;
            else
                pop(&st);
        }
    }
    if(is_empty_(st))
        return true;
    else
        return false;
}

int main ()
{
    char array[20];
    gets(array);
    cout<< balanced(array) <<endl;

}