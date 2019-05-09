#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x1, x2, x3, y1, y2, y3;

    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;

    int min, max;
    min = x1;
    max = x1;

    if (x2 < min) {
        min = x2;
        if (x3 < min) { min = x3; }
    }

    if (x2 > max) {
        max = x2;
        if (x3 > max) { max = x3; }
    }


    float a = float(x1 - 2 * x2 + x3);
    float b = float(2 * (x2 - x1));
    float c;
    float d;

    for (int i = min; i <= max; i++) {

        if (a == 0) {
            float t = (i - x1) / (float) b;

            if (t >= 0 && t <= 1) {
                float y = (1 - t) * (1 - t) * y1 + 2 * (1 - t) * t * y2 + t * t * y3;
                cout << "x=" << i;
                cout << " y=" << y << endl;
            }

        } else {

            c = float(x1 - i);
            d = (float) (b * b - 4 * a * c);

            if (d >= 0) {
                float t1, t2;
                t1 = (-b - sqrt(d)) / (float) (2 * a);
                t2 = (-b + sqrt(d)) / (float) (2 * a);

                if (t1 >= 0 && t1 <= 1) {
                    float y = (1 - t1) * (1 - t1) * y1 + 2 * (1 - t1) * t1 * y2 + t1 * t1 * y3;
                    cout << "x=" << i;
                    cout << " y=" << y << endl;
                }
                if (t2 >= 0 && t2 <= 1) {
                    float y = (1 - t2) * (1 - t2) * y1 + 2 * (1 - t2) * t2 * y2 + t2 * t2 * y3;
                    cout << "x=" << i;
                    cout << " y=" << y << endl;
                }
            }
        }
    }
    return 0;
}