#include<iostream.h>
void add(int, int);

int main()
{
    int a = 5,b=5;
    add(a,b);
}

void add(int, int)
{
    int c;
    c = a+b;

    add(a,b);
}