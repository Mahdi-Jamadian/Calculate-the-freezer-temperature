#include <stdio.h>
#include <math.h>
/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */
int main() {
    printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
    printf(" Calculate the freezer temperature \n");
    printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");

    float hours,minute,sum_hours_minute; /* We define our variables to receive input */
    printf("Enter the number of hours the freezer is on : ");
    scanf("%f",&hours); /* We receive the number of hours the freezer is on */
    printf("\n Enter the number of minutes the freezer is on : ");
    scanf("%f",&minute); /* We receive the number of minutes the freezer is on */
    sum_hours_minute = (hours + (minute/60)); /* We convert minutes to do our calculations. */
    float centigrade = ((4*(powf(sum_hours_minute,2)))/(sum_hours_minute+2))-20;  /*Our formula for obtaining the freezer temperature*/
    printf("\n Currently the freezer temperature is  %.2f degrees Celsius.. ",centigrade); /* Print output for the user */

    return 0;
}
