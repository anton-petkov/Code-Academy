
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    float temp;
    int height;
} peak;
int main()
{
    peak *vihrenPeak = (peak *)malloc(sizeof(peak));
    peak *vihrenLodge = (peak *)malloc(sizeof(peak));
    vihrenLodge->height = 1950;
    vihrenPeak->height = 2918;
    int choise;

    printf("Which temp do you know? press 1 for the peak press 2 for the lodge");
    scanf("%d", &choise);
    if (choise == 1)
    {
        printf("What is the temp of the peak?");
        scanf("%f", &vihrenPeak->temp);
    }
    else
    {
        printf("What is the temp of the lodge?");
        scanf("%f", &vihrenLodge->temp);
    }

    int difference = vihrenLodge->height - vihrenPeak->height;
    float tempdifference = (difference / 100) * 0.5;
    if (choise == 1)
    {
        printf("the temp on the peak is %g and at the lodge is %g", vihrenPeak->temp, vihrenPeak->temp - tempdifference);
    }
    else
    {
        printf("the temp on the lodge is %g and at the peak is %g", vihrenLodge->temp, vihrenLodge->temp + tempdifference);
    }
    free(vihrenLodge);
    free(vihrenPeak);
    return 0;
}
