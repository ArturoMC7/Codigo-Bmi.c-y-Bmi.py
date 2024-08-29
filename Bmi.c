Modified code Bmi.c code to calculate the percentages and print them on screen.
// Include header file for prototypes of scanf and printf
#include <stdio.h>

// Prototype of calcBmi function
float calcBmi(float h,float w);

// Implementation of calcBmi function
float calcBmi(float h,float w){
    float bmi;

    bmi=w/((h/100.0)*(h/100.0));
    return bmi;
}

// Main function - entry point
int main(){
    // Local variable declaration
    float bmi;
    int np;

    printf("Enter the amount of people: ");
    scanf("%d",&np);

    float bmindex[np]; 
    float height[np];
    float weight[np];

    float underweight=0, normal=0, overweight=0, obese=0;

    for (int i=0; i<np; i++) {

    // Ask user for height in cms
    printf("Enter the height of the person %d (in meters): ", i+1);
    scanf("%f",&height[i]);

    // Ask user for weight in kgs
    printf("Enter the weight of the person %d (in kilograms): ", i+1);
    scanf("%f",&weight[i]);

    // Call calcBmi function
    bmi=calcBmi(height[i],weight[i]);
    bmindex[i]=bmi;
    
    // Print result
    printf("The body mass index of the person #%d is %f kg/m^2", i+1, bmi);
    
    //Compare the index with the BMI
    if (bmindex[i] < 18.5) {
        printf("\nThe person #%d is underweight.\n", i+1);
        underweight++;
       } else if (bmindex[i] < 24.9) {
        printf("\nThe person #%d is into their normal weight.\n", i+1);
        normal++;
    } else if (bmindex[i] < 29.9) {
        printf("\nThe person #%d is overweight.\n", i+1);
        overweight++;
    } else {
        printf("\nThe person #%d is obese.\n", i+1);
        obese++;
    }


}
        // Print the results
        float underp, normalp, overp, obesep;
        underp = underweight/np*100;
        normalp = normal/np*100;
        overp = overweight/np*100;
        obesep = obese/np*100;
        printf("\n\nThe results are:\n");
        printf("Underweight: %.2f%%\n", underp);
        printf("Normal weight: %.2f%%\n", normalp);
        printf("Overweight: %.2f%%\n", overp);
        printf("Obese: %.2f%%\n", obesep);

}
