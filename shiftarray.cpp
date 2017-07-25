#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int n, d, i;
    scanf("%d %d", &n, &d);
    int arr[n];
    for ( i = n - d ; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - d; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        printf ("%d", arr[i]);
    }
    return 0;
}
