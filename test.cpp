#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int v1 = 5, v2 = 15;
    int *p1, *p2;
    p1 = &v1;  // p1 = dia chi cua v1
    p2 = &v2;  // p2 = dia chi cua v2
    *p1 = 10;  // gia tri cua bien tro boi p1 = 10
    *p2 = *p1; // gtri cua bien tro boi p2 =
    // gtri cua bien tro boi p1
    p1 = p2;  // p1 = p2 (value of pointer is copied)
    *p1 = 20; // gia tri cua bien tro boi p1 = 20
    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;
    getch();
    return 0;
}