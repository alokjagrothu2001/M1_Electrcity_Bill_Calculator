#ifndef __BILL_H__
#define __BILL_H__
#include <stdio.h>

struct bill
{
    int electricity_Units;
    int previous_Reading;
    int current_Reading;
    float recurring_Charges;
    float electricity_duty_Charges;
    char class;
};

#endif