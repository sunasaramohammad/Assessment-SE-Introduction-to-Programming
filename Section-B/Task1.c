#include<stdio.h>
void main(){
    float percentage;
    char grade;

    printf("Enter your Percentage:");
    scanf("%f",&percentage);

    if(percentage>=90){
        grade='A';
        printf("Grade: %c - Excellent work!\n", grade);
    }
    else if(percentage>=75){
        grade='B';
        printf("Grade:%c - Good Work - Keep pushing.\n" , grade);
    }
    else if(percentage>=60){
        grade='C';
        printf("Grade:%c - Good effort!\n" , grade);
    }
    else if (percentage >= 45) {
        grade = 'D';
        printf("Grade: %c - Keep practising.\n", grade);
    } 
    else {
        grade = 'F';
        printf("Grade: %c - Work harder next time.\n", grade);
    }
}