#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ELETRIC_SHOWER_POWER = 3000;
    int ELETRIC_SHOWER_HOURS_PER_DAY = 1;
    int FREEZER_POWER = 200;
    int FREEZER_HOURS_PER_DAY = 24;
    int REFRIGERATOR_POWER = 250;
    int REFRIGERATOR_HOURS_PER_DAY = 24;
    int LIGHT_BULB_POWER = 120;
    int LIGHT_BULB_HOURS_PER_DAY = 5;
    float COST_PER_KWH = 0.30;
    float eletricShowerPowerMonthlyConsumption;
    float freezerPowerMonthlyConsumption;
    float refrigeratorPowerMonthlyConsumption;
    float lightBulbPowerMonthlyConsumption;
    float eletricShowerPowerMonthlyCost;
    float freezerPowerMonthlyCost;
    float refrigeratorPowerMonthlyCost;
    float lightBulbPowerMonthlyCost;
    float totalMonthlyCost;

    eletricShowerPowerMonthlyConsumption = ELETRIC_SHOWER_POWER * ELETRIC_SHOWER_HOURS_PER_DAY * 30 / 1000;
    freezerPowerMonthlyConsumption = FREEZER_POWER * FREEZER_HOURS_PER_DAY * 30 / 1000;
    refrigeratorPowerMonthlyConsumption = REFRIGERATOR_POWER * REFRIGERATOR_HOURS_PER_DAY * 30 / 1000;
    lightBulbPowerMonthlyConsumption = LIGHT_BULB_POWER * LIGHT_BULB_HOURS_PER_DAY * 30 / 1000;
    eletricShowerPowerMonthlyCost = eletricShowerPowerMonthlyConsumption * COST_PER_KWH;
    freezerPowerMonthlyCost = freezerPowerMonthlyConsumption * COST_PER_KWH;
    refrigeratorPowerMonthlyCost = refrigeratorPowerMonthlyConsumption * COST_PER_KWH;
    lightBulbPowerMonthlyCost = lightBulbPowerMonthlyConsumption * COST_PER_KWH;
    totalMonthlyCost = eletricShowerPowerMonthlyCost + freezerPowerMonthlyCost + refrigeratorPowerMonthlyCost + lightBulbPowerMonthlyCost;

    printf("Chuveiro Elétrico:\nConsumo de energia mensal: %.1f kW\nValor mensal: R$ %.2f\n\n", eletricShowerPowerMonthlyConsumption, eletricShowerPowerMonthlyCost);
    printf("Freezer:\nConsumo de energia mensal: %.1f kW\nValor mensal: R$ %.2f\n\n", freezerPowerMonthlyConsumption, freezerPowerMonthlyCost);
    printf("Geladeira:\nConsumo de energia mensal: %.1f kW\nValor mensal: R$ %.2f\n\n", refrigeratorPowerMonthlyConsumption, refrigeratorPowerMonthlyCost);
    printf("Lâmpada:\nConsumo de energia mensal: %.1f kW\nValor mensal: R$ %.2f\n\n", lightBulbPowerMonthlyConsumption, lightBulbPowerMonthlyCost);
    printf("Gasto total mensal de energia: R$ %.2f\n", totalMonthlyCost);

    return 0;
}
