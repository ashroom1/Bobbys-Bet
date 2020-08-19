#include <stdio.h>
#include <math.h>

double fact(double n)
{
    double temp = 1;
    for (int i = (int)n; i > 0; i--)
        temp*=i;
    return temp;
}

double perm(double n, double r)
{
    return (fact(n)/fact(n-r));
}

int main(){

    double lines, R, S, X, Y, W, prob=0;
    scanf("%lf", &lines);
    for (int i = 0; i < lines; ++i){
        scanf("%lf %lf %lf %lf %lf", &R, &S, &X, &Y, &W);

            for (int j = X; j <= Y; ++j)
                prob += pow(((S+1-R)/S), j)*pow(((R-1)/S), Y-j)*(perm(Y,Y)/perm(j,j)/perm(Y-j,Y-j));

            if(W*prob > 1)
                puts("Yes");
            else
                puts("No");
            prob = 0;
    }
    return 0;
}
