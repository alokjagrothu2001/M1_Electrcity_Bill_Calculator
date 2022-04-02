#include "bill.h"
int main()
{
    int electricity_Units;
    int previous_Reading, current_Reading;
    float Sur_Charges, consumer_Charges, charge_per_Unit, power_Charges, recurring_Charges, electricity_duty_Charges;
    char class;
    double net_bill_Amount;
    //scanf("%d", &electricity_Units);
    printf("\t\t\t\t\t\tWelcome to Electricity Bill calculator\n\n\n");
    printf("Enter the Previous meter Readings\n");
    scanf("%d", &previous_Reading);
    printf("Enter the Current meter Readings\n");
    scanf("%d", &current_Reading);
    printf("Enter the recurring charges = 49 \n");
    scanf("%f", &recurring_Charges);
    printf("Enter the Duty charges = 39\n");
    scanf("%f", &electricity_duty_Charges);
    printf("Determine which class you are (A or B or C)\n");
    getchar();
    scanf("%c", &class);
    electricity_Units = current_Reading - previous_Reading;
    //printf("%d\n", electricity_Units);
    if (class == 'A')
    {
        if (electricity_Units > 0 || electricity_Units < 50)
        {
            charge_per_Unit = 1.44;

            power_Charges = electricity_Units * charge_per_Unit;
            consumer_Charges = 24;
            net_bill_Amount = power_Charges + recurring_Charges + consumer_Charges + electricity_duty_Charges;
            printf("%lf", net_bill_Amount);
        }
        else if (electricity_Units > 51 || electricity_Units < 75)
        {
            charge_per_Unit = 2.59;
            //Energy_charges = electricity_Units * per_unit_charge;
            consumer_Charges = 29;
            net_bill_Amount = power_Charges + recurring_Charges + consumer_Charges + electricity_duty_Charges;
            printf("%lf", net_bill_Amount);
        }
        else
            class = 'B';
    }

    else if (class == 'B')
    {
        if (electricity_Units > 0 || electricity_Units < 100)
        {
           charge_per_Unit = 2.59;
            power_Charges = electricity_Units * charge_per_Unit;
            consumer_Charges = 35;
            net_bill_Amount = power_Charges + recurring_Charges + consumer_Charges + electricity_duty_Charges;
            printf("%lf", net_bill_Amount);
        }
        else if (electricity_Units > 101 || electricity_Units < 200)
        {
            charge_per_Unit = 3.59;
           power_Charges = electricity_Units * charge_per_Unit;
            consumer_Charges = 44;
            net_bill_Amount = power_Charges + recurring_Charges + consumer_Charges + electricity_duty_Charges;
            printf("%lf", net_bill_Amount);
        }
        else if (electricity_Units > 201 || electricity_Units < 225)
        {
            charge_per_Unit = 6.89;
           power_Charges = electricity_Units * charge_per_Unit;
            consumer_Charges = 50;
            net_bill_Amount = power_Charges + recurring_Charges + consumer_Charges + electricity_duty_Charges;
            printf("%lf", net_bill_Amount);
        }
        else
            class = 'C';
    }

    else if (class == 'C')
    {
        if (electricity_Units > 0 || electricity_Units < 50)
        {
            charge_per_Unit = 2.64;
            power_Charges = electricity_Units * charge_per_Unit;
            consumer_Charges = 34;
           net_bill_Amount = power_Charges + recurring_Charges + consumer_Charges + electricity_duty_Charges;
            printf("%lf", net_bill_Amount);
        }
        else if (electricity_Units > 51 || electricity_Units < 100)
        {
            charge_per_Unit = 3.34;
            power_Charges = electricity_Units * charge_per_Unit;
            consumer_Charges = 39;
           net_bill_Amount = power_Charges + recurring_Charges + consumer_Charges + electricity_duty_Charges;
            printf("%lf", net_bill_Amount);
        }
        else if (electricity_Units > 101 || electricity_Units < 200)
        {
            charge_per_Unit = 5.39;
            power_Charges = electricity_Units * charge_per_Unit;
            consumer_Charges = 44;
            net_bill_Amount = power_Charges + recurring_Charges + consumer_Charges + electricity_duty_Charges;
            printf("%lf", net_bill_Amount);
        }
        else if (electricity_Units > 201 || electricity_Units < 300)
        {
            charge_per_Unit = 7.11;
            power_Charges = electricity_Units * charge_per_Unit;
            consumer_Charges = 50;
            net_bill_Amount = power_Charges + recurring_Charges + consumer_Charges + electricity_duty_Charges;
            printf("%lf", net_bill_Amount);
        }
        else if (electricity_Units > 301 || electricity_Units < 400)
        {
            charge_per_Unit = 7.96;
            power_Charges = electricity_Units * charge_per_Unit;
            consumer_Charges = 50;
            net_bill_Amount = power_Charges + recurring_Charges + consumer_Charges + electricity_duty_Charges;
            printf("%lf", net_bill_Amount);
        }
        else if (electricity_Units > 401 || electricity_Units < 500)
        {
            charge_per_Unit = 8.55;
            power_Charges = electricity_Units * charge_per_Unit;
            consumer_Charges = 54;
            net_bill_Amount = power_Charges + recurring_Charges + consumer_Charges + electricity_duty_Charges;
            printf("%lf", net_bill_Amount);
        }
        else
            charge_per_Unit = 9.96;
        power_Charges = electricity_Units * charge_per_Unit;
        consumer_Charges = 58;
        net_bill_Amount = power_Charges + recurring_Charges + consumer_Charges + electricity_duty_Charges;
        printf("%lf", net_bill_Amount);
    }
    else
        return 1;
    return 0;
}
