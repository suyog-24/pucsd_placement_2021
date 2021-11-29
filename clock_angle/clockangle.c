#include <stdio.h>
#include <math.h>
    
  int calcAngle(int h, int m) 
    { 
        if (h == 12) 
            h = 0; 
        if (m == 60)  
            m = 0; 
        int hour_angle = (int)(0.5 * (h*60 + m)); 
        int minute_angle = (int)(6*m);   

        int angle = abs(hour_angle - minute_angle); 
        int ang = 360-angle;     
        return (ang > angle) ? angle : ang;
    }     
  
  int main(void)

    {
       int h , m;
       printf("Enter Hour:");
       scanf("%d",&h);
       
       printf("Enter Minute:");
       scanf("%d ",&m);
       
    if (h <0 || m < 0 || h > 12 || m > 60) 
    {
       printf("\nWrong input..!"); 
    }
    else
    {
    printf("\nAngle between Hour and Minute hands %d",calcAngle(h, m));    
    }
    }
