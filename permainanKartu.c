#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

long long a, b, c;
long long ronde = 0;

scanf("%lld", &a);
scanf("%lld", &b);
scanf("%lld", &c);

while(a!=b && a!=c && b!=c) {   
    if(a>b && a>c){
        a--;
        if(b>c){
        c++;
        }else if(b<c){b++;}
    }
    if(b>a && b>c){
        b--;
        if(a>c){
        c++;
        }else if(a<c){a++;}
    }
    if(c>a && c>b){
        c--;
        if(a>b){
        b++;
        }else if(a<b){a++;}

    }
    ronde++;
}

printf("%lld\n", ronde);
    
    return 0;
}
