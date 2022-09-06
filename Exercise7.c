#include <stdio.h>
#include <string.h>

struct Drivers
{
   char name[20];
   char drivingLicenseNo[34];
   char Route[32];
   int Kms;
};

int main()
{
    struct Drivers d1, d2, d3 ;
    printf("Input Details of Driver\n");
    printf("Name of the First Driver\n");
    scanf("%s", &d1.name);
    
    printf("DLno. of the First Driver\n");
    scanf("%s", &d1.drivingLicenseNo);

    printf("Route of the First Driver\n");
    scanf("%s", &d1.Route);

    printf("No. of Kms of the First Driver\n");
    scanf("%s", &d1.Kms);

    printf("Name of the Second Driver\n");
    scanf("%s", &d2.name);
    
    printf("DLNo. of the Second Driver\n");
    scanf("%s", &d2.drivingLicenseNo);

    printf("Route of the Second Driver\n");
    scanf("%s", &d2.Route);

    printf("No. of Kms of the Second Driver\n");
    scanf("%s", &d2.Kms);
  
     printf("Name of the Third Driver\n");
    scanf("%s", &d3.name);
    
    printf("DLNo. of the Third Driver\n");
    scanf("%s", &d3.drivingLicenseNo);

    printf("Route of the Third Driver\n");
    scanf("%s", &d3.Route);

    printf("No. of Kms of the Third Driver\n");
    scanf("%s", &d3.Kms);

    printf("Printing Info of drivers:\n");
    printf("For Driver No.1\nName is %s\n", d1.name);
    printf("DL number is %s\n", d1.drivingLicenseNo);
    printf("Route is %s\n", d1.Route);
    printf("Kms is %d\n \n", d1.Kms);

    printf("For Driver No.2\nName is %s\n", d2.name);
    printf("DL number is %s\n", d2.drivingLicenseNo);
    printf("Route is %s\n", d2.Route);  
    printf("Kms is %d\n \n", d2.Kms);

    printf("For Driver No.3\nName is %s\n", d3.name);
    printf("DL number is %s\n", d3.drivingLicenseNo);
    printf("Route is %s\n", d3.Route);
    printf("Kms is %d\n", d3.Kms);

    return 0;
}