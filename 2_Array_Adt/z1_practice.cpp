#include <iostream>
using namespace std;

int main()
{
    int testcase;
    scanf("%d", &testcase);
    while(testcase)
    {
        testcase--;
        int x, cscore = 0, nscore = 0;
        scanf("%d", &x);
        char character;
        int i=0;
        while(i<14)
        {
            i++;
            scanf("%1c", &character);
            if(character == 'C')
            {
                cscore += 2;
                cout<<"fuck 1"<<endl;
            }
            else if(character == 'N')
            {
                nscore += 2;
                cout<<"fuck2"<<endl;
            }
            else if (character == 'D')
            {
                cscore++;
                nscore++;
                cout<<"fuck 3"<<endl;

            }
        }
        cout<<cscore<<endl<<nscore<<endl;
        if(cscore > nscore)
        {
            printf("%d", 60*x);

        }
        else if(cscore == nscore)
        {
            printf("%d", 55*x);
        }
        else
            printf("%d", 45*x);
        
        printf("\n");

    }
    return 0;
}