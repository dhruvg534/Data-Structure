//   https://www.youtube.com/watch?v=lOsmPMihcTM&list=PL-Jc9J83PIiHOV7lm2uSw4ZiVsIRsGS6r&index=6

//convertsion from decimal to anybase

#include<iostream>
using namespace std;

int conversion(int number, int base)
{
    int rem = 0;
    int rno = 0;
    int ans =0;
    while(number)
    {
        rem = number% base;
        rno = rno*10 + rem;
        number = number/base;

    }

    while(rno)
    {
        rem = rno% 10;
        ans = ans*10 +rem;
        rno = rno/10;
    }
    return ans;


}

int recursion_conversion(int number, int base)
{
    if (number)
    {
        int rem, no ;
        no = recursion_conversion( number/base, base);
        no = no*10 + (number%base);

        return no;
    }
    return 0;
}

int main()
{
    cout<<conversion (67, 8)<<endl;
    cout<<recursion_conversion (634, 8);
    return 0;
}