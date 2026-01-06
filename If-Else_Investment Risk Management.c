#include <stdio.h>

int main() {

    int age, income, risk;
    scanf("%d %d %d", &age, &income, &risk);
    
    if(((age > 50) && (income > 30000 && income <= 80000 && risk <= 2)) || ((income <= 30000) && (risk <=2) && age > 30)){
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    else if(((age >= 30 && age <= 50)  && (income <= 75000 && risk==2)) || ((age >=30 && age <=50) && (income > 75000 && risk <=2))){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    else if((age < 30) ||(age>=30 && age<=50 && income > 75000 && risk == 3) ||(age >50 && risk ==3 && income > 75000)){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
   
    return 0;
}