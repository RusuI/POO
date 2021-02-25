
#include <iostream>
#include "NumberList.h"

int main()
{
    NumberList num;
    num.Init();
    num.Add(5);
    num.Add(8);
    num.Add(2);
    num.Add(2);
    num.Add(1);
    num.Sort();
    num.Print();
}


