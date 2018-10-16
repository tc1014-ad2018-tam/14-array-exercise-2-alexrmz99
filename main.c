/*  This program has the purpose of reading n number of real values and then:
 * 1. Compute the sum of the given numbers
 * 2. Compute the average of the given numbers
 * 3. Display the smallest value of the array and the cell where it's stored
 * 4. Display the biggest value of the array and the cell where it's stored
 *
 *
 *  Alejandro Ramírez Michel
 *  A01412034
 */


#include <stdio.h>

    // ---- OPERACIONES ----- //
    //función suma
    int sum (int array[], int n) {
        int sum=0;
        for (int i=0; i<n; i++) {
            sum += array[i];
        }
        return sum;
    }

    //función promedio
    double avg (int array[], int n) {
        double sum = 0;
        for (int i=0; i<n; i++) {
            sum += array[i];
        }
        double avg = sum/n;
        return avg;
    }

    //función valor máximo y ubicación
    void max (int array[], int n) {
        int max = array[0];
        int ubi = 1;
        for (int i = 0; i < n; i++ ) {
            if (array[i] > max) {
                max = array[i];
                ubi = i+1;
            }
        }
        printf ("The maximum value of the numbers you gave me is %i, it is located in the cell %i", max, ubi);
    }

    //Function for minimum value of array
    void min (int array[] , int n) {
        int min = array[0];
        int ubi = 1;
        for (int i = 0; i < n; i++ ) {
            if (array[i] < min) {
                min = array[i];
                ubi = i+1;
            }
        }
        printf ("The minimum value of the numbers you gave me is %i, it is located in the cell %i", min, ubi);
    }


int main(void) {
    //declaro variables
    int n;          //"n" será la cantidad de números reales
    int i;
    int menu;

    //primero le pregunto al usuario el valor de n
    printf("How many real values do you want to work with? ");
    scanf("%i", &n);

    //ahora el n proporcionado por el usuario será el tamaño del array
    int array[n];

    //le pido los valores al usuario
    printf("Now give me the values you want, separate them with an enter: \n");
    for (i=0; i<n; i++) {
        scanf("%i", &array[i]);
    }

    //pregunto al usuario qué desea
    do {
    printf("\nHello user! I'm a multi-tasking program. What do you want me to do?\n1. Sum \n2. Average \n3. Maximum value \n4. Minimum value \n0. Exit\n");
    printf("\n");
    printf("Your option: ");
    scanf("%i", &menu);

    //pongo las opciones del menú
    switch (menu){
        case 1:
            printf("The sum of the values given in the array is %i", sum(array, i));
            break;
        case 2:
            printf("The average of the values given in the array is %i", avg(array,i));
            break;
        case 3:
            max(array, i);
            break;
        case 4:
            min(array, i);
            break;
        case 0: printf("Bye bye!\n");
            break;
        default: printf("Give me a valid option, not a headache!\n");
            break;
    }
    } while (menu != 0);


    return 0;
}