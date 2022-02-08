#include <stdio.h>

#include <math.h>

float calculateCharges(float);

//Main function.

int main()

{

    float cust[3],charge[3],totc=0,toth=0;

    int i;

    //Prompt the user to enter the number of hours parked.

     printf("Enter the hours parked for 3 cars:\n");

     for(i=0;i<3;i++)

    {

          scanf("%f",&cust[i]);

          //Call the function calculateCharges().

          charge[i]=calculateCharges(cust[i]);

//Calculate the total number of hours of all cars parked.

        toth+=cust[i];

          //Calculate the total charge of all cars parked.

          totc+=charge[i];

    }

     printf("Car\tHours\tCharge\n");

     for(i=0;i<3;i++)

    {

          /*Print the charges for parking along with

          number of hours and serial number of th car. */

          printf("%d\t%0.1f\t%0.2f\n",i+1,cust[i],charge[i]);;

     }

     printf("Total\t%.1f\t%.2f\n",toth,totc);

}

float calculateCharges(float hours)

{

    float charge;

    if(hours>3)

    {

        if(hours>=19)

        {

              /*Assign 10 to the charge if the the number

              of hours is greater than or equal to 19.*/

              charge=10;

        }

        else

        {

              /*Calculate the charges if the number of

              hours is greater than 3 and less than 19.*/

               charge=2+ceil(hours-3)*0.5;

        }

    }

    else

    {

        /*Assign 2 to the charge if the the number

          of hours is less than or equal to 3.*/

          charge=2;

    }

    return charge;

}
