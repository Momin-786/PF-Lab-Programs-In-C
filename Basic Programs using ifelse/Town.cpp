#include <stdio.h>

int main() {
    int population = 80000;
    float percent_men = 52.0;
    float percent_literate = 48.0;
    float percent_literate_men = 35.0;
    
    float num_men = (percent_men/100) * population;
    float num_literate = (percent_literate/100) * population;
    float num_literate_men = (percent_literate_men/100) * population;
    
    float num_women = (100 - percent_men)/100 * population;
    float num_illiterate = population - num_literate;
    float num_illiterate_men = num_men - num_literate_men;
    float num_illiterate_women = num_women - (num_literate - num_literate_men);
    
    printf("Number of illiterate men: %.0f\n", num_illiterate_men);
    printf("Number of illiterate women: %.0f\n", num_illiterate_women);
    
    return 0;
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
