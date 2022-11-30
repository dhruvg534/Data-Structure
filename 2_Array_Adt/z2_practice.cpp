//https://www.youtube.com/watch?v=TJvWrEMuO5k&list=PL-Jc9J83PIiHOV7lm2uSw4ZiVsIRsGS6r&index=3

// find the frequency of the no in a number

#include <iostream>
using namespace std;

int main()
{
    int number;
    scanf("%d", &number);
    int key, count =0;
    scanf("%d", &key);

    int rem =0;
    while(number)
    {
        rem = number %10;
        if(key == rem)
            count ++;
        number = number /10;

    }
    cout<<count<<endl;
    return 0;
}