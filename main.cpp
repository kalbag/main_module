#include "foo.h"        // from sub1

#include "bar.h"        // from sub2

#include <iostream>

int main()
{
    Foo f{ 3.14, 1, 2, "akalbag" };
    Bar b{ 3.14, 2.65 };
    std::cout << "Hello world!" << std::endl;
    return 0;
}
