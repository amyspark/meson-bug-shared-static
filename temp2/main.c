#include <stdio.h>

extern float boo();

int main(int argc, char** argv)
{
    printf("%i %f\n", argc, boo());
    return 0;
}
