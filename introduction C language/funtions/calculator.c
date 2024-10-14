
    // creating calculator with functions

    #include <stdio.h>

    // functions
    float sum(float n1, int n2);
    float sub(float n1, int n2);
    float div(float n1, int n2);
    float multi(float n1, int n2);

    int main(void)
    {

        // variables
        float number1, number2;

        // requesting values
        printf("\n| - enter two values: \n");
        scanf("%f%f", &number1, &number2);

        // performing mathematical operations with the values ​​provided
        printf("\n| - sum: %.1f\n", sum(number1, number2));
        printf("\n| - sub: %.1f\n", sub(number1, number2));
        printf("\n| - div: %.1f\n", div(number1, number2));
        printf("\n| - multi: %.1f\n", multi(number1, number2));

        return 0;
    }

    float sum(float n1, int n2)
    {
        return n1 + n2;
    }

    float sub(float n1, int n2)
    {
        return n1 - n2;
    }

    float div(float n1, int n2)
    {
        return n1 / n2;
    }

    float multi(float n1, int n2)
    {
        return n1 * n2;
    }
