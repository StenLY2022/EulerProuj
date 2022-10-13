#include <iostream>

//-----------------
// other
//-----------------
using namespace::std;
//-----------------
//-----------------

int main()
{
    Setocale(LC_ALL , "RUSSIAN");
    //------
    unsigned long long result = 0;// we write the result of a variable
    //------
    int i = 1;
    while(i <= 1000)
    {
        i++;
        if((i % 3) || (i % 5))
           {
               continue;
           };
        result += i;


    };
    cout << result;



    return 0;
}
