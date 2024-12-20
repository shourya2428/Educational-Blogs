#include <stdio.h>

int main() {
    float sales, commission;

    // Input sales amount
    printf("Enter the sales amount: ");
    scanf("%f", &sales);
    
    // Calculate commission based on sales amount
    if (sales < 5000) {
        commission = sales * 0.05; // 5% commission
    } else {
        commission = (sales * 0.08) + 250; // 8% commission + Rs.250
    }

    // Print the commission rounded to two decimal places
    printf("Commission: %.2f\n", commission);
    
    return 0;}