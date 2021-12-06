#include <stdio.h>
int sum(int a, int b){
int z;
z = a + b;
return z;
}
int main(){
    int x;
    int y;
    x = 33;
    y = 67;
    int result;
    result = sum(x,y);
    printf("result = %d", result);
}
