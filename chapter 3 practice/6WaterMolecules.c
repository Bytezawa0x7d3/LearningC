#include <stdio.h>

void main(void)
{
    float h2o_mass = 3.0e-23;
    int h2o_mass_per_qt = 950;
    int qt_input;
    int total_mass;
    
    printf("Please enter volume of water in qt: ");
    scanf("%d", &qt_input);
    total_mass = h2o_mass_per_qt * qt_input;
    printf("Number of hydrogen dioxide molecule is: %f", total_mass / h2o_mass);
}