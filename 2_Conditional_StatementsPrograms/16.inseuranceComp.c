#include<stdio.h>
int main(){
    char health , location  , sex ;
    int age ;
    float premium_rate = 0;
    long max_policy_amount = 0;
    int insured = 0;

    printf("Enter health status (E for Excellent, P for Poor): ");
    scanf(" %c", &health); // Space before %c to consume whitespace

    printf("Enter age (25-35): ");
    scanf("%d", &age);

    printf("Enter location (C for City, V for Village): ");
    scanf(" %c", &location);

    printf("Enter sex (M for Male, F for Female): ");
    scanf(" %c", &sex);

    if (health == 'E' && age >= 25 && age <= 35 && location == 'C' && sex == 'M') {
        premium_rate = 4.0; // Rs. 4 per thousand
        max_policy_amount = 200000; // Rs. 2 lakhs
        insured = 1;
    }    else if (health == 'E' && age >= 25 && age <= 35 && location == 'C' && sex == 'F') {
        premium_rate = 3.0; // Rs. 3 per thousand
        max_policy_amount = 100000; // Rs. 1 lakh
        insured = 1;
    } else if (health == 'P' && age >= 25 && age <= 35 && location == 'V' && sex == 'M') {
        premium_rate = 6.0; // Rs. 6 per thousand
        max_policy_amount = 10000; // Rs. 10,000
        insured = 1;
    } else {
    
        insured = 0;
    }   if (insured) {
        printf("\n--- Insurance Eligibility --- \n");
        printf("Person should be insured.\n");
        printf("Premium Rate: Rs. %.1f per thousand\n", premium_rate);
        printf("Maximum Policy Amount: Rs. %ld\n", max_policy_amount);
    } else {
        printf("\n--- Insurance Eligibility --- \n");
        printf("Person is not insured.\n");
    }

    return 0;
}