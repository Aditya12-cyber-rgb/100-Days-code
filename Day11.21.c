#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLossPercent;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        profitOrLossPercent = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.0f%%\n", profitOrLossPercent);
    } 
    else if (sellingPrice < costPrice) {
        profitOrLossPercent = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.0f%%\n", profitOrLossPercent);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
