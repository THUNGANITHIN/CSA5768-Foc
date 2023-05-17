 #include <stdio.h>

#define NUM_SALESPERSONS 10
#define NUM_DAYS 7

int main() {
   
    double sales[NUM_SALESPERSONS][NUM_DAYS];
    double daily_sales_total[NUM_DAYS] = {0};
    double weekly_sales_total = 0;

    
    for (int i = 0; i < NUM_SALESPERSONS; i++) {
        printf("Enter sales data for salesperson %d:\n", i+1);
        for (int j = 0; j < NUM_DAYS; j++) {
            printf("Day %d: ", j+1);
            scanf("%lf", &sales[i][j]);
            daily_sales_total[j] += sales[i][j];
            weekly_sales_total += sales[i][j];
        }
    }

  
    printf("\nAverage sales per salesperson for the week:\n");
    for (int i = 0; i < NUM_SALESPERSONS; i++) {
        double total_sales = 0;
        for (int j = 0; j < NUM_DAYS; j++) {
            total_sales += sales[i][j];
        }
        double average_sales = total_sales / (NUM_DAYS - 2);
        printf("Salesperson %d: $%.2f\n", i+1, average_sales);
    }

   
    printf("\nTotal sales for each day:\n");
    for (int i = 0; i < NUM_DAYS; i++) {
        printf("Day %d: $%.2f\n", i+1, daily_sales_total[i]);
    }
    printf("\nTotal sales for the week: $%.2f\n", weekly_sales_total);

    return 0;
}

