#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;


scanf("%d", &n);

long long jumlah=0;
long long nilai;
for(int i=0;i<n;i++){
scanf("%lld", &nilai);
    jumlah += nilai;
}
jumlah = llabs(jumlah);

printf("%lld", jumlah);
