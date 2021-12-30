#include <stdio.h>
int sum = 0, con;
int main(){
        for (int con = 1;con <= 97;con++) {
                sum = sum + con;
        }
  printf("%d",sum);
}