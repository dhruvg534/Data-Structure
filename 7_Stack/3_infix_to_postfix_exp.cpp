/*
Infix, Postfix, Prefix expressions
here we will deal with binary expressions only

INFIX:
{
    INFIX EXPRESSION = <operand> <operator> <operand>  
    example  p + q , 1+3 , (a-1) +5 etc

    they follow some associativity and precidence rules

    operator       associativity
    (),{},[]           
    ^                  R->L
    *,/                L->R
    +,-                L->R

    example (5+1)*6 = (6)*6 = 6*6 = 36
    example 1+2*5+30/5 = 1+10+30/5 = 1+10+6 = 11 +6 = 17
    example 2^2^3 = 2^8 = 256

    prefix and postfix are preffered over infix because:- 
        they are less time and memory consuming
        computer doesn't have to go over the expression again and again to find higher precidence and then evaluate it


}

PREFIX
{
    Polish notation
    PREFIX EXPRESSION = <operator> <operand> <operand>
    example : a*b+c = *ab+c = +*abc
}

POSTFIX
{
    reverse polish notations
    POSTFIX EXPRESSION = <operand> <operand> <operator>
    example: a*b+c = ab*+c = ab*c+
}


RULES FOR INFIX TO POSTFIX CONVERSION:-
{
    1. Print operands as they arive
    2. If stack is empty or contains a left parathesis ‘(‘on top, push the incoming operator onto the stack.
    3. If incoming symbol s ‘(‘, Push it onto the stack.
    4. If incoming symbol is ‘)’, pop the stack and print the operator until left parathesis is found.
    5. If incoming symbol has higher precedence than the top of the stack, push it onto the stack.
    6. If incoming symbol has lower precedence than the top of the stack, pop and print the top, then test the incoming operator against the new top of the stack.
    7. If incoming operator has equal precedence with the top of the stack, use associativity rule.
        Accociativity if L->R then pop and print the top of the stack and push the incoming operator on tothe stack
        Associativity  if R->L then push the incoming operator
    8. At the end of the expression, pop and print all operators of the stack

    example: a+b/c = abc/+ ,
    example: a-b/c*d+e = abc/d*-e+
    example: k+l-m*n+(o^p)*w/u/v*t+q^j^s

    input                     stack            output   

    k                         empty              k
    +                           +                k
    l                           +                kl
    -                           -                kl+
    m                           -                kl+m
    *                           -*               kl+m
    n                           -*               kl+mn
    +                           +                kl+mn*-
    (                           +(               kl+mn*-
    o                           +(               kl+mn*-o
    ^                           +(^              kl+mn*-o
    p                           +(^              kl+mn*-op
    )                           +                kl+mn*-op^
    *                           +*               kl+mn*-op^
    w                           +*               kl+mn*-op^w
    /                           +/               kl+mn*-op^w*
    u                           +/               kl+mn*-op^w*u
    /                           +/               kl+mn*-op^w*u/
    v                           +/               kl+mn*-op^w*u/v
    *                           +*               kl+mn*-op^w*u/v/
    t                           +*               kl+mn*-op^w*u/v/t
    +                           +                kl+mn*-op^w*u/v/t*+
    q                           +                kl+mn*-op^w*u/v/t*+q
    ^                           +^               kl+mn*-op^w*u/v/t*+q
    j                           +^               kl+mn*-op^w*u/v/t*+qj
    ^                           +^^              kl+mn*-op^w*u/v/t*+q   
    s                           +^^              kl+mn*-op^w*u/v/t*+qs  
    nothing                     empty            kl+mn*-op^w*u/v/t*+qs^^+

    final postfix expression is kl+mn*-op^w*u/v/t*+qs^^+
}

RULES FOR INFIX TO PREFIX CONVERSION USING STACK
{
    1. First Reverse the infix expression. example "k+l-m*n+(o^p)*w/u/v*t+q^j^s" to "s^j^q+t*v/u/w*)p^o(+n*m-l+k" and now we will convert the new expression.
    2. Print operands as they arive
    3. If stack is empty or contains a right parathesis ‘)‘ on top, push the incoming operator onto the stack.
    4. If incoming symbol s ‘)‘, Push it onto the stack.
    5. If incoming symbol is ‘(’, pop the stack and print the operator until right parathesis is found.
    6. If incoming symbol has higher precedence than the top of the stack, push it onto the stack.
    7. If incoming symbol has lower precedence than the top of the stack, pop and print the top, then test the incoming operator against the new top of the stack.
    8. If incoming operator has equal precedence with the top of the stack, use associativity rule.
        Accociativity if L->R then push the incoming operator
        Associativity if R->L then pop and print the top of the stack and push the incoming operator on tothe stack
    9. At the end of the expression, pop and print all operators of the stack.
    10. Now again reverse the expression obtained and voila!!! prefix expression is obtained

    example: k+l-m*n+(o^p)*w/u/v*t+q^j^s
    Reverse the infix expression: s^j^q+t*v/u/w*)p^o(+n*m-l+k

    input       stack               output
    s           empty                 s
    ^              ^                  s
    j              ^                  sj
    ^           empty                 sj^^
    q           empty                 sj^^q
    +             +                   sj^^q
    t             +                   sj^^qt
    *             +*                  sj^^qt
    v             +*                  sj^^qtv
    /             +* /                sj^^qtv
    u             +* /                sj^^qtvu
    /             +* //               sj^^qtvu
    w             +* //               sj^^qtvuw
    *             +* //*              sj^^qtvuw
    )             +* //*)             sj^^qtvuw
    p             +* //*)             sj^^qtvuwp
    ^             +* //*)^            sj^^qtvuwp
    o             +* //*)^            sj^^qtvuwpo
    (             +* //*              sj^^qtvuwpo^
    +             ++                  sj^^qtvuwpo^* //*
    n             ++                  sj^^qtvuwpo^* //*n
    *             ++*                 sj^^qtvuwpo^* //*n  
    m             ++*                 sj^^qtvuwpo^* //*nm
    -             ++-                 sj^^qtvuwpo^* //*nm*
    l             ++-                 sj^^qtvuwpo^* //*nm*l
    +             ++-+                sj^^qtvuwpo^* //*nm*l
    k             ++-+                sj^^qtvuwpo^* //*nm*lk
    nothing       empty               sj^^qtvuwpo^* //*nm*lk+-++        

    the post fix expression is "++-+kl*mn*//*^opwuvtq^^js"
}
*/

#include <iostream>
using namespace std;

struct node
{
    char data;
    struct node* next;
};

struct node* head, *temp = head;

int cal_a_value(char a)
{
    int a_value;
    if (a == '('|| a=='{'||a=='[' || a ==')'|| a== '}' || a==']')
    {
        a_value = 0;
    }
    if (a == "^")
    {
        a_value = 1;
    }
    if(a=='/'|| a=='*')
    {
        a_value = 2;
    }
    if (a_value == '-'|| a_value == '+' )
    {
        a_value = 3;
    }
    
    return a_value;
}
void infix_to_postfix(string infix)
{
    char a = infix[0];
    int a_value_prev, a_value_curr = 0,
    while (a != NULL)
    {
        
    }
}

int main()
{
    printf("%c",cal_a_value(+)
    return 0;
}

