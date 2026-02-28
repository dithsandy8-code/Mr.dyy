#include <stdio.h>
int calculateTotal(float price,int qyt) {
    float total;
    total = price * qyt;
    return total;

}
int main() {
    float price;
    int qyt;
    printf("Enter Price:");
    scanf("%f",&price);
    printf("Enter Quantity:");
    scanf("%d",&qyt);
    float result = calculateTotal(price,qyt);

    printf("Total = $%.2f\n",result);

    return 0;
}