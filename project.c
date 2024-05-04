#include<stdio.h>

void mToCm(){
    float inputValue, outputValue;
    printf("Enter value in meter: ");
    scanf("%f", &inputValue);
    outputValue = inputValue * 100;
    printf("Value in Centimeter is: %f", outputValue);
}
void kmToM(){
    float inputValue, outputValue;
    printf("Enter value in kilometer: ");
    scanf("%f", inputValue);
    outputValue = inputValue * 1000;
    printf("Value in Meter is: %f", outputValue);
}
void kgToGm() {
    float inputValue, outputValue;
    printf("Enter value in kilogram: ");
    scanf("%f", &inputValue);
    outputValue = inputValue * 1000;
    printf("Value in Gram is: %f", outputValue);
}
void pdToGm() {
    float inputValue, outputValue;
    printf("Enter value in pound: ");
    scanf("%f", &inputValue);
    outputValue = inputValue * 453.592;
    printf("Value in Gram is: %f", outputValue);
}
void cToF() {
    float inputValue, outputValue;
    printf("Enter value in celsious: ");
    scanf("%f", &inputValue);
    outputValue = (inputValue * 9/5) + 32;
    printf("Value in Fahrenheit is: %f", outputValue);    
}
void fToK() {
    float inputValue, outputValue;
    printf("Enter value in fahrenheit: ");
    scanf("%f", &inputValue);
    outputValue = (inputValue - 32) * 5/9 + 273.15;
    printf("Value in Kelvin is: %f", outputValue);     
}
void cToK() {
    float inputValue, outputValue;
    printf("Enter value in Celsious: ");
    scanf("%f", &inputValue);
    outputValue = inputValue - 273.15;
    printf("Value in Kelvin is: %f", outputValue);     
}
void other(){
    float inputValue, outputValue;
    char inputType[15], outputType[15];
    float relation;
    printf("Enter input type: ");
    scanf("%s", &inputType);
    printf("Enter value in %s: ", inputType);
    scanf("%f", &inputValue);
    printf("Enter output type: ");
    scanf("%s", &outputType);
    printf("Enter the relation between %s and %s:\n1 %s = _ %s ?\n", inputType, outputType, inputType, outputType);
    scanf("%f", &relation);
    outputValue = inputValue * relation;
    printf("Value in %s is: %f", outputType, outputValue);
}

int main() {
    int choice, choice2;
    printf("1. Length\n");
    printf("2. Weight\n");
    printf("3. Temperature\n");
    printf("4. Other\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("1. Meter to Centimeter\n");
            printf("2. Kilometer to Meter\n");
            printf("3. Other\n");
            printf("Enter your choice: ");
            scanf("%d", &choice2);
            switch(choice2) {
                case 1:
                    mToCm();
                    break;
                case 2:
                    kmToM();
                    break;
                case 3:
                    other();
                    break;
                default:
                    printf("Invalid Choice\n");
                    break;
            }
            break;
        case 2:
            printf("1. Kilogram to Gram\n");
            printf("2. Pound to Gram\n");
            printf("3. Other\n");
            printf("Enter your choice: ");
            scanf("%d", choice2);
            switch(choice2) {
                case 1:
                    kgToGm();
                    break;
                case 2:
                    pdToGm();
                    break;
                case 3:
                    other();
                    break;
                default:
                    printf("Invalid Choice\n");
                    break;
            }
            break;
        case 3:
            printf("1. Celsious to Fahrenheit\n");
            printf("2. Fahrenheit to Kelvin\n");
            printf("3. Kelvin to Celsious\n");
            printf("4. Other\n");
            scanf("%d", choice2);
            switch(choice2) {
                case 1:
                    cToF();
                    break;
                case 2:
                    fToK();
                    break;
                case 3:
                    cToK();
                    break;
                case 4:
                    other();
                    break;
                default:
                    printf("Invalid Choice\n");
                    break;
            }
            break;
        case 4:
            other();
            break;
    }
    return 0;
}