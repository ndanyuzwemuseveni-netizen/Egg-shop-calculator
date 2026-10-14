#include <stdio.h>

int main() {
    int eggs_in_stock;
    int eggs_purchased;
    int price_per_egg;
    int amount_paid;
    
    int total_bill;
    int change;
    int remaining_stock;
    int complete_trays;
    int loose_eggs;
    
    printf("=== LOCAL EGG SHOP SALES CALCULATOR ===\n\n");
    printf("Enter number of eggs in stock: ");
    scanf("%d", &eggs_in_stock);
    
    printf("Enter number of eggs purchased: ");
    scanf("%d", &eggs_purchased);
    
    printf("Enter selling price per egg (UGX): ");
    scanf("%d", &price_per_egg);
    
    printf("Enter amount paid by customer (UGX): ");
    scanf("%d", &amount_paid);
    
    total_bill = eggs_purchased * price_per_egg;
    change = amount_paid - total_bill;
    complete_trays = eggs_purchased / 30;
    loose_eggs = eggs_purchased % 30;
    
    remaining_stock = eggs_in_stock;
    remaining_stock -= eggs_purchased;
    
    printf("\n");
    printf("========================================\n");
    printf("           EGG SHOP RECEIPT            \n");
    printf("========================================\n");
    printf("Eggs purchased:          %d\n", eggs_purchased);
    printf("Price per egg:           %d UGX\n", price_per_egg);
    printf("----------------------------------------\n");
    printf("TOTAL BILL:              %d UGX\n", total_bill);
    printf("Amount paid:             %d UGX\n", amount_paid);
    printf("Change:                  %d UGX\n", change);
    printf("========================================\n");
    printf("Purchase breakdown:\n");
    printf("  Complete trays (30):   %d\n", complete_trays);
    printf("  Loose eggs:            %d\n", loose_eggs);
    printf("========================================\n");
    printf("Stock before sale:       %d eggs\n", eggs_in_stock);
    printf("Stock after sale:        %d eggs\n", remaining_stock);
    printf("========================================\n");
    
    return 0;
}
