#include <stdio.h>

void show_array(int a[50],int n){
    int i = 0;
    printf("Start of array\n");
    while (i<=n) {
        printf("%d\n", a[i]);
        i++;
    }
    printf("End of array\n");

}

void show_2d_array(int a[50][50], int n, int m){
    int i = 0;
    int j;
    printf("Start of array\n");
    while (i<=n) {
        j = 0;
        while(j<=m){
            printf("%d ", a[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("End of array\n");

}

int main(){
    // //Napisati program kojim se ucitava matrica cijelih brojeva A, dimenzija MxN. 
    // //Program treba da odredi sumu elemenata iz nepranih vrsta kao i sumu elemenata na glavnoj matrici
    // int n, m, sum_odd = 0, sum_dig = 0, a[50][50];
    // printf("Enter number of rows: ");
    // scanf("%d", &n);
    // printf("Enter number of columns: ");
    // scanf("%d", &m);

    // for (int i = 0; i<=n-1; i++){
        
    //     for(int j = 0; j<=m-1; j++){
    //         scanf("%d", &a[i][j]);
    //         if(i%2!=0)
    //             sum_odd += a[i][j];
    //         if(i==j)
    //             sum_dig += a[i][j];
            
    //     }
    // }
    // show_2d_array(a, n-1, m-1);
    // printf("sum_odd: %d\nsum_dig: %d\n", sum_odd, sum_dig);
    
    // //Napisati program koji od korisnika trazi unos cijelih brojeva a i b i 
    // //koji zatim racuna sumu cijelih brojeva od a do b u kojima se cifra 5 pojavljuje vise od 2 puta
    // int a, b, n, sum = 0, count;

    // printf("Enter 2 numbers: \n");
    // scanf("%d%d", &a, &b);

    // while(a<=b){
    //     n = a;
    //     count = 0;
    //     while(n != 0 && count <= 2){
    //         if(n%10==5)
    //             count++;
    //         n /= 10;
    //     }
    //     if(count > 2)
    //         sum += a;
    //     a++;
    // }

    // printf("sum: %d\n", sum);

    return 0;
}