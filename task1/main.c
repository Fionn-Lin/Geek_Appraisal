#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
    {
        double h = 0.001;
        double x = 0;
        double y[10000];
        double a;
        printf("请输入a=");
        scanf("%lf", &a);
        y[0] = a;
        for (int i = 1; i < 10000; i++) 
        {
            x = x + h;
            y[i] = y[i - 1] + -h * y[i - 1];
            printf("x=%.8lf     y=%.8lf\v", x, y[i]);
            double e = y[i - 1] - y[i];
            while (e <= 0.001 * h)
            {
                printf("定态丁真，鉴定为" "%.6lf", y[i]);
                return 0;
            }
        }


       
    }
	


