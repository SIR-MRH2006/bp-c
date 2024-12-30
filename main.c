// #include <stdio.h>

// int calculateSalary(int salary){
//     int maliat;
//     if(salary<10000000){
//         printf("it dosent have any maliat");
//         return 0;
//     }else if(salary<20000000 && salary>10000000){
//         maliat = (salary*5/100);
//         return maliat;
//     }else if(salary > 20000000){
//         maliat = (salary*10/100);
//         return maliat;
//     }else{
//         printf("👍 \n");
//         return -1;
//     }
// }

// void main() {
//     int salary,maliat;
//     printf("please enter your price \n");
//     scanf("%d",&salary);
//     maliat = calculateSalary(salary);

//     if(maliat != -1){
//         printf("your salary is : %d \nyour maliat is : %d \nyour main salary is : %d",salary,maliat,salary-maliat);
//     }
// }



// tarkib
// #include <stdio.h>
// long long factorial(int n) {
//     long long result = 1;
//     for (int i = 1; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }

// long long combination(int b, int a) {
//     if (a > b) {
//         return 0;
//     }
//     return factorial(b) / (factorial(a) * factorial(b - a));
// }

// int main() {
//     int b, a;
//     printf("Enter value of b: ");
//     scanf("%d", &b);
//     printf("Enter value of a: ");
//     scanf("%d", &a);
//     long long result = combination(b, a);
//     printf("C(%d, %d) = %lld\n", b, a, result);
    
//     return 0;
// }


// squre
// #include <stdio.h>
// void zel(int k){
//     for(int i = 0;i<k;i++){
//         printf("*");
//     }
//     printf("\n");
// }
// void middle(int k){
//     printf("*");
//     for(int i = 0;i<(k-2);i++){
//         printf(" ");
//     }
//     printf("*");
//     printf("\n");
// }
// int main(){
//     printf("please enter (k) \n");
//     int k;
//     scanf("%d",&k);

//     for(int i = 1;i<=k;i++){
//         if(i==1){
//             zel(k);
//         }else if(i==k){
//             zel(k);
//         }else{
//             middle(k);
//         }
//     }
// }



#include <stdio.h>\

void drawSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // چک کردن اینکه آیا روی ضلع هستیم یا داخل مربع
            if (i == 0 ||  i == n - 1 || j == 0 || j == n - 1) {
                printf("* "); // مثلث برای اضلاع
            } else {
                printf("  "); // فضای خالی داخل مربع
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("please enter a number : ");
    scanf("%d", &n);

    if (n > 1) {
        drawSquare(n);
    } else {
        printf("reater than 1 the number should be g\n");
    }

    return 0;
}



// #include <stdio.h>
// int main() {
//     int a, b;
//     for (a = 0; a < 5; a++) {
//         for (b = 0; b < 5; b++) {
//             if (a + b < 5) {
//                 printf("(%d, %d)\n", a, b);
//             }
//         }
//     }
    
//     return 0;
// }




// tas
// #include <stdio.h>

// int main() {
//     int total = 0;
//     int favorable = 0;
//     for (int i = 1; i <= 6; i++) {
//         for (int j = 1; j <= 6; j++) {
//             total++; 
//             if (i + j < 5) {
//                 favorable++;
//             }
//         }
//     }
//     double probability = (double) (favorable / total);
//     printf("kole halat=> %d\n", total);
//     printf( "matlob=> %d \n", favorable);
//     printf("ehtemal inke sumation throw two tas kamtar as five bashe %.4f\n", probability);

//     return 0;
// }
