#include<iostream>
using namespace std;

/*add commas between groups of 3 digits with remainder on left side*/
string addCommas(string in)
{
    const int length = in.length();
    if(length < 4)
    {
        return in;
    }
    int inserted = 0;
    int i = length % 3;
    if(i == 0)
    {
        i = 3;
    }
    for(; i < length + inserted; i = i + 4)
    {
        in.insert(i, ",");
        inserted++;
    }
    return in;
}
