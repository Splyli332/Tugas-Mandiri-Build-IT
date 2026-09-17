#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007

// Fungsi pembanding untuk qsort
int compare(const void *a, const void *b) {
    long long x = *(const long long*)a;
    long long y = *(const long long*)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    long long *arr = (long long*)malloc(n * sizeof(long long));
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    qsort(arr, n, sizeof(long long), compare);

    long long total = ((n % MOD) * ((n - 1) % MOD) / 2) % MOD;

    long long sama = 1;
    for (long long i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            sama++;
        } else {
            if (sama > 1) {
                long long invalid = ((sama % MOD) * ((sama - 1) % MOD) / 2) % MOD;
                total = (total - invalid + MOD) % MOD;
            }
            sama = 1; 
        }
    }

    if (sama > 1) {
        long long invalid = ((sama % MOD) * ((sama - 1) % MOD) / 2) % MOD;
        total = (total - invalid + MOD) % MOD;
    }

    printf("%lld\n", total);

    free(arr);
    return 0;
}