//
//  main.c
//  Labwork 5
//
//  Created by Shubham Kansal on 28/3/20.
//  Copyright © 2020 Shubham Kansal. All rights reserved.
//

#include <stdio.h>

/*
float arithmetic(float x, float y);

int main (){
    float x=1.2323, y=6.56764;
    float result;
    
    result= arithmetic(x, y);
    printf("%f plus %f equals %f\n", x, y, result);
}

float arithmetic(float x, float y){
    return x+y;
}
    */
/*
float arithmetic(float x, float y, int operation);

int main (){
    float x=1.2323, y=6.56764, operation=0;
    float result;
    
    result= arithmetic(x, y, operation);
    printf("%f plus %f equals %f\n", x, y, result);
}

float arithmetic(float x, float y, int operation){
    switch(operation){
        case 0:
            return x+y;
        case 1:
            return x-y;
        case 2:
            return x*y;
        case 3:
            return x/y;
        default:
            printf("illegal operation %d\n", operation);
            return 0;
 }
}
    */
/*
int main(){
    const int N = 5;
    float data[N];
    float maximum=-1e30;
    int maxIndex = 0;
    int i;
    for(i=0; i<N-1; i++){
        if(maximum<data[i]){
            maximum= data[i];
            maxIndex=i;
        }
    }
    printf("The maximum value of %f, found at index %d", maximum, maxIndex);
}
    */
/*
int isPrime(int x);

int main(){
    int testNum;
    for(testNum=0; testNum < 100; testNum++){
        if(isPrime(testNum)){
            printf("%d is Prime\n", testNum);
        }
    }
}

int isPrime(int x){
    int count;
    if ( x < 2 ){
        return 0;
    }
    for(count=2; count<x; count++){
        if(x%count==0){
            return 0;
        }
    }
    return 1;
}
    */
/*
int main() {
    const int MAX = 100;
    char numbers[MAX+1];
    int index;
    int j, counter;
    
    for(index = 0; index <= MAX; index++) {
        numbers[index] = 1;
    }
    
    for(index = 2; index <= MAX; index++) {
        if(numbers[index]==1){
            for(counter=2; counter<MAX; counter++){
              for(j= counter*index; j<MAX+1; j+=index){
                numbers[j]=0;
              }
            }
        }
    }

    printf("The following numbers are prime:\n");
    for(index = 2; index <= MAX; index++) {
        if(numbers[index] == 1) {
        printf("%d\n", index);
        }
    }
    return 0;
}
    */
/*
int main(){
    float x[9] = {1,2,3,4,5,6,7,8,9};
    float variance, mean;
    float sum1=0, sum2=0;
    int n;
    
    for(n=0; n<9; n++){
        sum1 += x[n];
    }
    
    mean= sum1/n;
    
    for(n=0; n<9; n++){
        sum2 += (x[n] - mean)*(x[n] - mean);
    }
    
    variance = sum2/(n-1);
    
    printf("Mean: %f\nVariance: %f\n", mean, variance);
    
    return 0;
}
    */
/*
#include <math.h>

float f(float x);

int main() {
    int N = 5000;
    int k; // Loop counter
    float x1 = 0, x2 = 2;
    float dx = (x2 - x1) / N;
    float result;
 
    float sum = 0;
    for(k = 1; k < N; k++) {
        float x;
        x = x1 + k*dx;
        sum += f(x);
    }
    
    result = dx*(0.5*f(x1) + sum + 0.5*f(x2));
    printf("The area under the curve is %f\n", result);
}

float f(float x){
    return expf(x*x);
}
    */
/*
float f(float x);
float diff(float x, float h);

int main(){
    float h= 0.0001;
    printf("%f\n", diff(0, h));
    printf("%f\n", diff(1, h));
    printf("%f\n", diff(-1, h));
}

float diff(float x, float h){
    float d;
    d= x+h;
    return ((d*d + 2*d - 1)-f(x))/h;
}

float f(float x){
    return x*x + 2*x - 1;
}
    */
/*
unsigned int fib(void);

int main(){
    int n;
    
    for(n=1; n<10; n++){
        printf("%d %u\n", n, fib());
    }
}

unsigned int fib(void){
    static int xm1=0, xm2=1;
    int x;
    x= xm1 + xm2;
    xm2=xm1;
    xm1=x;
    return x;
}
    */
