#include <stdio.h>
#include <stdbool.h>

static inline bool check_input(int n){
    return 0 <= n && n <= 9;
}

void read_row(int x, int y, int a[x][y]){
    for (int r = 0; r < x; ++r){
        printf("Enter row %d: ", r);
        for (int c = 0; c < y; ++c){
            int value;
            if(1 != scanf("%d", &value) || check_input(value) == false){
                printf("Values outside of range.\n");
                while(getchar() != '\n'); //clear inputs;
                --r;
                break;
            }
            a[r][c] = value;
        }
    }
}

void compute_row_count(int x, int y, int a[x][y], int counts[]){
    //memset(counts, 0, sizeof(int)*10);
    for (int r = 0; r < x; ++r){
        for (int c = 0; c < y; ++c){
            ++counts[a[r][c]];
        }
    }
}

void print_total_count(int counts[]){
    printf("\nTotal count for each digit:\n");
    for (int i = 0; i < 10; ++i){
        printf("Digit %d occurs %d time%s\n", i, counts[i], counts[i] > 1 ? "s": "");
    }
}

int main (void){
    int x, y;
    printf("Enter the size of your array: ");
    scanf("%d %d", &x, &y);

    int a[x][y];
    int counts[10] = {0};

    read_row(x, y, a);
    compute_row_count(x, y, a, counts);
    print_total_count(counts);

    return 0;
}
