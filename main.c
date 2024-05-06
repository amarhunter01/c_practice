#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    char lastname[20];
    int age; 
} worker;

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

int pwd(int x, int n){
    if(n != 0){
        for(int i = 1; i<= n; i++)
            if(i != 1)
                x *= x;
                
        return x;

    }else
        return 1;
}

int checkString(char s[50], int s1_start, int s1_end, int s2_start, int s2_end){
    int s1, s2;
    if(s1_start == 0){
        s1 = s1_end - s1_start - 1;
    } else {
        s1 = s1_end - s1_start;
    }
    s2 = s2_end - s2_start;

    if( s1 == s2){
        for(int i = s1_start, j = s2_start; i<s1_end && j<s2_end && s[i]!='\n' && s[j]!= '\n'; i++,j++){
            if(s[i] != s[j]){
                return 1;
            }
        }
        return 0;
    } else{
        return 1;
    }
}

int isSentence(char s[50], int N){
    if(s[0]<'A' || s[0]>'Z' || s[N] != '.')
        return 0;
    for(int i = 1; i<N; i++){
        if( (s[i]<'a' || s[i]>'z') && s[i]!=' ')
            return 0;
    }
    return 1;

}

void binar(int, char *);

int pw(int, int);

void quon(char *, char);

void spoji(char *, char *);

int poredi(char *, char *);

int check_bra(int, int, int);

void sort_names(char (*)[20], int);

int isLessStr(char *, char *);

int* reduce_to_limit(int *, int);

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

    // //Hamg number
    // int n, x;
    // printf("Enter number:\n");
    // scanf("%d", &n);
    // lab1: x = n%2;
    // if(x==0){
    //     n /= 2;
    //     goto lab1;
    // }

    // lab2: x = n%3;
    // if(x==0){
    //     n /= 3;
    //     goto lab2;
    // }

    // lab3: x = n%5;
    // if(x==0){
    //     n /= 5;
    //     goto lab3;
    // }

    // if(n==1){
    //     printf("True\n");
    // }else{
    //     printf("False\n");
    // }

    // //beskonacni unos i ispis manjih brojeva u opadajucem redosljedu
    // int x;
    // while(1){
    //     printf("Enter 3-digit number:\n");
    //     scanf("%d", &x);
    //     if(99<x && x<1000)
    //         for(x; x>0; x--)
    //             printf("%d\n", x);
    //     else
    //         break;
    // }
    // printf("End\n");

    // //najveci broj od cifar unijetog trocifrenog broja
    // int n, d1, d2, d3, max = 0;
    // printf("Enter 3-digit number:\n");
    // scanf("%d", &n);
    // while(99>n || n>1000){
    //     printf("Please enter a 3-digit number:\n");
    //     scanf("%d", &n);
    // }
    // d1 = n/100;
    // d2 = (n%100)/10;
    // d3 = n%10;

    // if(d1>d2 && d1>d3)
    //     max += d1 * 100;
    // else 
    //     if((d1>d2 && d1<d3) || (d1<d2  && d1>d3))
    //         max += d1 * 10;
    //     else
    //         max += d1;
    
    // if(d2>d1 && d2>d3)
    //     max += d2 * 100;
    // else 
    //     if((d2>d1 && d2<d3) || (d2<d1  && d2>d3))
    //         max += d2 * 10;
    //     else
    //         max += d2;

    // if(d3>d1 && d3>d2)
    //     max += d3 * 100;
    // else 
    //     if((d3>d1 && d3<d2) || (d3<d1  && d3>d2))
    //         max += d3 * 10;
    //     else
    //         max += d3;
        
    // printf("Max number is: %d\n", max);

    // //chess attacked fields with hourse and biship
    // int h_x, h_y, b_x, b_y, count = 0, b_ax, b_ay;
    // printf("Enter x position of hourse:\n");
    // scanf("%d", &h_x);

    // printf("Enter y position of hourse:\n");
    // scanf("%d", &h_y);

    // printf("Enter x position of biship:\n");
    // scanf("%d", &b_x);

    // printf("Enter y position of biship:\n");
    // scanf("%d", &b_y);

    // if(h_x+2>0 && h_x+2<9 && h_y+1 > 0 && h_y+1 < 9 && (h_x+2 != b_x || h_y+1 != b_y))
    //     count++;
    // if(h_x+1>0 && h_x+1<9 && h_y+2 > 0 && h_y+2 < 9 && (h_x+1 != b_x || h_y+2 != b_y))
    //     count++;

    // if(h_x-1>0 && h_x-1<9 && h_y+2 > 0 && h_y+2 < 9 && (h_x-1 != b_x || h_y+2 != b_y))
    //     count++;
    // if(h_x-2>0 && h_x-2<9 && h_y+1 > 0 && h_y+1 < 9 && (h_x-2 != b_x || h_y+1 != b_y))
    //     count++;

    // if(h_x+2>0 && h_x+2<9 && h_y-1 > 0 && h_y-1 < 9 && (h_x+2 != b_x || h_y-1 != b_y))
    //     count++;
    // if(h_x+1>0 && h_x+1<9 && h_y-2 > 0 && h_y-2 < 9 && (h_x+1 != b_x || h_y-2 != b_y))
    //     count++;
    
    // if(h_x-2>0 && h_x-2<9 && h_y-1 > 0 && h_y-1 < 9 && (h_x-2 != b_x || h_y-1 != b_y))
    //     count++;
    // if(h_x-1>0 && h_x-1<9 && h_y-2 > 0 && h_y-2 < 9 && (h_x-1 != b_x || h_y-2 != b_y))
    //     count++;
    
    // b_ax = b_x + 1;
    // b_ay = b_y + 1;

    // while(b_ax > 0 && b_ay < 9 && b_ax < 9 && b_ay > 0 && ( b_ax != h_x || b_ay != h_y)){
    //     if( (h_x+2 != b_ax || h_y+1 != b_ay) && (h_x+1 != b_ax || h_y+2 != b_ay) &&
    //         (h_x-1 != b_ax || h_y+2 != b_ay) && (h_x-2 != b_ax || h_y+1 != b_ay) &&
    //         (h_x+2 != b_ax || h_y-1 != b_ay) && (h_x+1 != b_ax || h_y-2 != b_ay) &&
    //         (h_x-2 != b_ax || h_y-1 != b_ay) && (h_x-1 != b_ax || h_y-2 != b_ay)
    //     )
    //         count++;
    //     b_ax++;
    //     b_ay++;
    // }

    // b_ax = b_x + 1;
    // b_ay = b_y - 1;

    // while(b_ax > 0 && b_ay < 9 && b_ax < 9 && b_ay > 0 && ( b_ax != h_x || b_ay != h_y)){
    //     if( (h_x+2 != b_ax || h_y+1 != b_ay) && (h_x+1 != b_ax || h_y+2 != b_ay) &&
    //         (h_x-1 != b_ax || h_y+2 != b_ay) && (h_x-2 != b_ax || h_y+1 != b_ay) &&
    //         (h_x+2 != b_ax || h_y-1 != b_ay) && (h_x+1 != b_ax || h_y-2 != b_ay) &&
    //         (h_x-2 != b_ax || h_y-1 != b_ay) && (h_x-1 != b_ax || h_y-2 != b_ay)
    //     )
    //         count++;
    //     b_ax++;
    //     b_ay--;
    // }

    // b_ax = b_x - 1;
    // b_ay = b_y + 1;

    // while(b_ax > 0 && b_ay < 9 && b_ax < 9 && b_ay > 0 && ( b_ax != h_x || b_ay != h_y)){
    //     if( (h_x+2 != b_ax || h_y+1 != b_ay) && (h_x+1 != b_ax || h_y+2 != b_ay) &&
    //         (h_x-1 != b_ax || h_y+2 != b_ay) && (h_x-2 != b_ax || h_y+1 != b_ay) &&
    //         (h_x+2 != b_ax || h_y-1 != b_ay) && (h_x+1 != b_ax || h_y-2 != b_ay) &&
    //         (h_x-2 != b_ax || h_y-1 != b_ay) && (h_x-1 != b_ax || h_y-2 != b_ay)
    //     )
    //         count++;
    //     b_ax--;
    //     b_ay++;
    // }

    // b_ax = b_x - 1;
    // b_ay = b_y - 1;

    // while(b_ax > 0 && b_ay < 9 && b_ax < 9 && b_ay > 0 && ( b_ax != h_x || b_ay != h_y)){
    //     if( (h_x+2 != b_ax || h_y+1 != b_ay) && (h_x+1 != b_ax || h_y+2 != b_ay) &&
    //         (h_x-1 != b_ax || h_y+2 != b_ay) && (h_x-2 != b_ax || h_y+1 != b_ay) &&
    //         (h_x+2 != b_ax || h_y-1 != b_ay) && (h_x+1 != b_ax || h_y-2 != b_ay) &&
    //         (h_x-2 != b_ax || h_y-1 != b_ay) && (h_x-1 != b_ax || h_y-2 != b_ay)
    //     )
    //         count++;
    //     b_ax--;
    //     b_ay--;
    // }

    // printf("Number of attacked fields: %d\n", count);

    // //error in h(15)
    // char b[14];
    // int c1=0, c2=0, c4=0, c8=0;

    // for(int i = 0; i<15; i++){
    //     scanf("%c", &b[i]);
    // }

    // for(int i = 0; i<15; i++){
    //     if(b[i]=='1'){
    //         switch (i+1){
    //             case(3):{
    //                 c1++;
    //                 c2++;
    //                 break;
    //             }
    //             case(5):{
    //                 c1++;
    //                 c4++;
    //                 break;
    //             }
    //             case(6):{
    //                 c2++;
    //                 c4++;
    //                 break;
    //             }
    //             case(7):{
    //                 c1++;
    //                 c2++;
    //                 c4++;
    //                 break;
    //             }
    //             case(9):{
    //                 c1++;
    //                 c8++;
    //                 break;
    //             }
    //             case(10):{
    //                 c2++;
    //                 c8++;
    //                 break;
    //             }
    //             case(11):{
    //                 c1++;
    //                 c2++;
    //                 c8++;
    //                 break;
    //             }
    //             case(12):{
    //                 c4++;
    //                 c8++;
    //                 break;
    //             }
    //             case(13):{
    //                 c1++;
    //                 c4++;
    //                 c8++;
    //                 break;
    //             }
    //             case(14):{
    //                 c2++;
    //                 c4++;
    //                 c8++;
    //                 break;
    //             }
    //             case(15):{
    //                 c1++;
    //                 c2++;
    //                 c4++;
    //                 c8++;
    //                 break;
    //             }
    //         }
    //     }
    // }

    // printf("c1: %d\nc2: %d\nc4: %d\nc8: %d\n", c1, c2, c4, c8);

    // //recognize a number in string and turn it to integer and sum
    // long long int x;
    // int ind = 1;
    // int sum = 0;
    // char s[20];
    // printf("Enter string: ");
    // fgets(s, sizeof(s), stdin);
    // sscanf(s, "%s", s);
    // for(int i = 0; i<sizeof(s) && s[i]!='\0'; i++){
    //     if(s[i]>= '0' && s[i]<= '9'){
    //         ind = 0;
    //         x = 0;
    //         for(i; s[i]>= '0' && s[i]<= '9'; i++){
    //             int c = (int)s[i] - (int)'0';
    //             x += c;
    //             x *= 10;

    //         }
    //         x /= 10;
    //         sum += x;
    //     }   
    // }   


    // if(ind)
    //     printf("Number not found\n");
    // else
    //     printf("x: %llu\n", x);

    // printf("sum: %d\n", sum);

    // //Broj razlicitih rijeci u stringu
    // char s[50];
    // int I, diff = 0, limit[50];
    // fgets(s, sizeof(s), stdin);
    
    // limit[0] = 0;
    // for(int i = 0, j = 1; s[i]!='\n'; i++){
    //     if(s[i]==' '){
    //         limit[j++] = i + 1;
    //     }
    //     limit[j] = i + 1;
    //     I = j;
    // }
    
    // for(int i = 0; i < I; i++){
    //     for(int j = i+1; j<I; j++){
    //         if( checkString(s, limit[i], limit[i+1]-1, limit[j], limit[j+1]-1) == 1 ){
    //             diff++;
    //         }
    //     }
    // }

    // printf("%d", diff);
    
    // //check if string is sentence
    // char s[50];
    // int N;
    // fgets(s, sizeof(s) , stdin);

    // for(int i = 0; s[i]!= '\n'; i++){
    //     N=i;
    // }

    // if( isSentence(s, N) == 1)
    //     printf("True");
    // else
    //     printf("False");

    // //decimal to bin in string
    // int n;
    // char s[50];
    // printf("Enter number:\n");
    // scanf("%d", &n);

    // binar(n, s);
    
    // puts(s);

    // //remove c from 2 strings and add one to the other if the same after c removal
    // char s1[30], s2[30], c;

    // printf("Enter s1: ");
    // fgets(s1, sizeof(s1), stdin);
    // printf("Enter s1: ");
    // fgets(s2, sizeof(s1), stdin);

    // printf("Enter c: \n");
    // scanf("%c", &c);

    // sscanf(s1, "%s", s1);
    // sscanf(s2, "%s", s2);

    // quon(s1, c);
    // quon(s2, c);

    // puts(s1);
    // puts(s2);

    // if(poredi(s1, s2)){
    //     spoji(s1, s2);
    // }

    // puts(s1);

    //check for valid brackets
    // int n; 
    // printf("Enter n: \n");
    // scanf("%d", &n);

    // printf("Numbers of valid brackets: %d\n", check_bra(n, 0, 0));

    // //remove n number of digits in entered number
    // char s[50], max;
    // int n, max_i; 
    // printf("Enter number: ");
    // scanf("%s", s);
    // printf("How many digits should be returned? ");
    // scanf("%d", &n);
    // for(int i = 0; s[i+1]!= '\0' && n>0; i++){
    //     if(s[i]>s[i+1]){
    //         for(int j = i; s[j]!='\0'; j++){
    //             s[j] = s[j+1];
    //         }
    //         n--;
    //     }
    // }

    // while(n>0){
    //     max = s[0];
    //     max_i = 0;
    //     for(int i = 0; s[i]!='\0'; i++){
    //         if(s[i]>max){
    //             max_i = i;
    //             max = s[i];
    //         }
    //     }
    //     for(int i = max_i; s[i]!='\0'; i++){
    //         s[i] = s[i+1];
    //     }
    //     n--;
    // }

    // printf("%s", s);

    // //sort names
    // int n;
    // char names[100][20];
    // printf("Enter n: ");
    // scanf("%d", &n);
    // for(int i = 0; i<n; i++){
    //     scanf("%s", names[i]);
    // }

    // sort_names(names, n);

    // printf("\n_________________________\n");
    // for(int i = 0; i<n; i++){
    //     printf("%s\n", names[i]);
    // }
    // printf("_________________________\n");

    // //return array from function that has reudced numbers that are over limit
    // int *x, *y, n;
    // printf("Enter n: ");
    // scanf("%d", &n);
    // #include <stdlib.h>

    // x = (int *) malloc(n*sizeof(int));
    // if(x == NULL){
    //     printf("Error");
    //     exit(1);
    // }
    // printf("Enter array:\n");
    // for(int i = 0; i<n; i++){
    //     printf("Element [%d]: ", i);
    //     scanf("%d", &x[i]);
    // }
    // y = reduce_to_limit(x, n);

    // printf("y: ");
    // for(int i = 0; i<n; i++){
    //     printf("%d ", y[i]);
    // }

    // // lowercase letters in file
    // FILE *f;
    // char ch;
    // int count = 0;
    // f = fopen("./log.txt", "r");
    // if(f == NULL) {
    //     printf("Error");
    //     exit(1);
    // }
    // while( (ch = fgetc(f)) != EOF){
    //     if(ch>='a' && ch<='z'){
    //         count++;
    //     }
    // }
    // printf("count: %d", count);

    // // from txt to array of worker
    // int n = 100;
    // char line[n];
    // worker staff[20];
    // FILE *f = fopen("workers.txt", "r");
    // // with fscanf()
    // // for(int i = 0; fscanf(f, "%s %s %d", staff[i].name, staff[i].lastname, &staff[i].age) != EOF; i++){
    // //     printf("Worker %d:\nName: %s\nLastname: %s\nAge: %d\n", i+1, staff[i].name, staff[i].lastname, staff[i].age);
    // //     printf("--------------------------\n");
    // // }
    // // with fgets()
    // for(int i = 0; fgets(line, n, f) != NULL; i++ ){
    //     sscanf(line, "%s %s %d", staff[i].name, staff[i].lastname, &staff[i].age);
    //     printf("Worker %d:\nName: %s\nLastname: %s\nAge: %d\n", i+1, staff[i].name, staff[i].lastname, staff[i].age);
    //     printf("--------------------------\n");
    // }
    
    
    return 0;
}

int* reduce_to_limit(int *x, int n){
    int *y = (int *) malloc(n*sizeof(int)); 
    int limit = 5;
    for(int i = 0; i<n; i++){
        if(x[i]>limit)
            y[i] = limit;
        else 
            y[i] = x[i];
    }

    return y;
}

int isLessStr(char *s1, char *s2){
    int i;
    for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){
        if(s1[i]!=s2[i]){
            break;
        }
    }
    if (s2[i]<s1[i])
        return 1;
    return 0;
}

void sort_names(char (*names)[20], int n){
    char h[20];
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n; j++)
            if (isLessStr(names[i], names[j])){
                strcpy(h, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], h);
            }
    }
        
}

int pw(int x, int n){
    int p = 1;
    if(n>1)
        for(int i = 1; i<n; i++ ){
            p *= x;
        }
    else if(n==1)
        return x;

    return p;
}

void binar(int n, char *s){
    int j;
    char c;
    for(int i = 0; n>0; i++){
        s[i] = n%2 + '0';
        n /= 2;
        j = i;
    }

    s[j+1]='\0';

    for(int i = 0; i<j; i++, j-- ){
        c = s[i];
        s[i]=s[j];
        s[j] = c;
    }

}

void quon(char *s, char c){
    for( int i = 0; s[i]!='\n'; i++){
        if(s[i]==c)
            s[i] = ' ';
    }

    for( int i = 0; s[i]!= '\0'; i++){
        if(s[i]==' '){
            for(int j = i; s[j]!='\0'; j++){
                s[j] = s[j+1];

            }
        }
    }
}

void spoji(char *s1, char *s2){
    int I;
    for(I = 0; s1[I]!='\0'; I++){

    }

    for(int i = 0; s2[i]!='\0'; I++, i++){
        s1[I] = s2[i];
    }
    s1[I] = '\0';
}

int poredi(char *s1, char *s2){
    int i = 0;
    while(s1[i]!='\0' && s2[i]!='\0'){
        if(s1[i]!=s2[i])
            return 0;
        i++;
    }
    return 1;
}

int check_bra(int n, int r, int l){
    
    if(n>l){
        if(l>r)
            return 0+check_bra(n, r+1, l);
        else if(n!=0 && l == 0 && r == 0)
            return 0+check_bra(n, r, l+1);
        else if(l==r)
            return 1+check_bra(n, r, l+1);

    } else if(n==l && n != 0){
        if(l>r)
            return 0+check_bra(n, r+1, l);
        else if(l==r)
            return 1;
    } else if(n == 0)
        return 0;


    return 0;
}