#include <stdio.h>

int main() {
  float acc = 0; // Acceleration in meters per second squared
  float tme = 0; // Time of exposure to that acceleration
  float speed1 = 0;
  float speed2 = 0;
  float speed3 = 0;
  const long lightspeed = 299792458;

  printf("Enter acceleration(in m/s2): ");
  scanf("%f", &acc);
  printf("Enter time of exposure(in seconds): ");
  scanf("%f", &tme);

  speed1 = acc*tme;
  speed2 = (acc*tme)*3.6;
  speed3 = (acc*tme)*2.23694;

  if(speed1 >= lightspeed){
    printf("Invalid speed because it is greater or equal to light speed");
    return 0;
  }

  printf("\nSpeed in m/s: %f\n", speed1);
  printf("Speed in kmph: %f\n", speed2);
  printf("Speed in mph: %f\n", speed3);
  printf("Distance covered in meters: %f\n", 0.5*acc*(tme*tme));
  return 0;
}
