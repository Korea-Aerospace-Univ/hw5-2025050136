#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int found=0;

    for (int i = 1 ; i<= (N/900) ; i++) {
        for (int j = 2 ; j <= (N/750) ; j+=2) {
            for (int k = 1 ; k <= (N/200) ; k++) {

                if (900 * i + 750 * j + 200 * k == N) {
                    if (k < i || k < j) {
                        printf("%d %d %d\n", i, j, k);
                        found = 1;
                    }
                }

            }
        }
    }

    if (found==0) {
        printf("none");
    }

    return 0;
}
