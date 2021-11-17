#include <stdio.h> 
#include <stdbool.h>

int Reverseint(int num){
    int reverse = 0;
    while(num!=0) {
        reverse*=10;
        reverse+=num%10;
        num/=10;
    }
    return reverse;
    
    
}
// void SelfEval(int x, int y, int z) {
//     printf("----------------------------------------\n");
//     printf("Evaluate the following expressions:\n"); 
//     printf("1.) %d",10+23%(17-4*2)/(24-(7+15%2)));
//     printf("\n2.) %d",150-(-6+8*4-22%4)-(5-(15.2/2)));
//     printf("----------------------------------------\n");
//     printf("1.) \n%d",1+(x)/((1/0)+(1/0)));
//     printf("2.) \n%d", (x*y*z)/((x*x)+(y*y)+(y/(4/2-z)+z));
// }
double CurrencyConverter(double usd){
    return usd*51.75;
}
float AreaOfTri(int base, int height) {
    return (1.0/2.0)*(base*height);
}
float FahrenheitToCelsius(float fr) {
    return (5.0/9.0)*(fr-32);
}
void LeastMoney(int money) {
    int separate = money/5; 
    int ones = money%5;
    printf("The amount of 5: %d", separate);
    printf("\nThe amount of 1: %d", ones);

}
void DisplayEachDigits(int digit) {
    while(true) {
        
    }
}
 
int main () {
    int x = 80; 
    printf("%d", 1==1&&2);
    

  
    
    return 0;

}


//  double sales; 

// double commission = (sales - sales*0.10)*0.25;

// printf("%f",commission);


// double sales; 

// double commission = (sales - sales*10/100)*25/100;

// printf("%f",commission);

// double semiAnnualInterest = 600/0.10;

// printf("%f",semiAnnualInterest);

// float base,height; 

// float area = (1.0/2.0)*(base*height);

// printf("%f",area);

// double php,converted; 

// double valOfEuro = 57.25; 

// converted = valOfEuro*php; 

// printf("%f",converted);

// double money;
// int separate = money/5;
// int ones = money%5;
// printf("The amount of 5: %d", separate);
// printf("\nThe amount of 1: %d", ones);

// float fr; 

// float converted = (5.0/9.0)*(fr-32);
// printf("%f",converted);

// double amount,rate,interest; 

// interest = amount*rate; 

// printf("%f",interest);