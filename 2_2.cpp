#include <stdio.h>
int power(int base, int pow) {
        int anw = 1;
        for (int i = 1;i <= pow;i++){
                anw = anw * base;
        }
        return anw;
}
int main() {
 printf("%d", power(2,5));
}
