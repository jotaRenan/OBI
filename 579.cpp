#include <bits/stdc++.h>
using namespace std;

main() {
    double h, m;

    while (true) {

        scanf("%lf:%lf", &h, &m);

        if ( h==0 && m==0) {
            break;
        }

        double angulo = abs( (11*m-60*h) ) / 2; // |(11m - 60h)| /2
        if (angulo >= 180) {
            angulo = 360 - angulo;
        }
        printf("%.3lf\n", angulo);
    }

}
