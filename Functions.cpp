#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    
   int max_of_four = a;
    
    if (b>max_of_four)
        max_of_four=b;
    
    if (c>max_of_four)
        max_of_four=c;
    
    if (d>max_of_four)
        max_of_four=d;
    
    return max_of_four;
};

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
