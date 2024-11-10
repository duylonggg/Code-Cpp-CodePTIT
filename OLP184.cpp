#include <cmath>
#include <iostream>

const long double epsilon = 1e-9;

int main() {
    long double X, Y, r;
    std::cin >> X >> Y >> r;
    long long count = 0;
    long long xMin = X - r;
    long long xMax = X + r;

    for (long long x = xMin; x <= xMax; ++x) {
        long double distX = fabs(x - X);
        
        if ((distX - r) <= epsilon) {
            long double distY = sqrt(r * r - distX * distX);
            long long yMin = Y - distY;
            long long yMax = Y + distY;

            while (yMin <= Y + distY && !((x - X) * (x - X) + (yMin - Y) * (yMin - Y) - r * r <= epsilon)) 
                ++yMin;

            while (yMax >= Y - distY && !((x - X) * (x - X) + (yMax - Y) * (yMax - Y) - r * r <= epsilon)) 
                --yMax;

            count += (yMax - yMin + 1);
        }
    }

    std::cout << count << std::endl;
    return 0;
}
