#include <iostream>
#include <math.h>

using namespace std;

class Massive {
private:
    unsigned int N;
    int *array;
public:
    Massive(unsigned int size) {
        N = size;
        array = new int[N - 1];

        srand(time(NULL));

        for (int i = 0; i < N; ++i) {
            array[i] = rand() % N;
        }
    }

    ~Massive() {
        delete[] array;
    }

    void print() {
        for (int i = 0; i < N; i++) {
            cout << array[i] << ' ';
        }
        cout << endl;
    }

    void sort() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int b = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = b;
                }
            }
        }


    }

    Massive &operator+(Massive &obj) {
        Massive *res = new Massive(this->N + obj.N);

        int i = 0;
        for (i; i < N; i++) {
            res->array[i] = array[i];
        }

        for (i; i < res->N; i++) {
            res->array[i] = obj.array[i - this->N];
        }

        return *res;
    }

    Massive &operator=(Massive &obj) {
        Massive *res = new Massive(obj.N + 1);
        this->N = obj.N;

        for (int i = 0; i < res->N; i++) {
            res->array[i] = obj.array[i];
            this->array[i] = obj.array[i];
        }

        return *res;

    }

    int Max_val() {
        int max = array[0];
        for (int i = 1; i < N; i++) {
            if (array[i] > max) {
                max = array[i];
            }
        }
        return max;
    }

    int Min_val() {
        int min = array[0];
        for (int i = 1; i < N; i++) {
            if (array[i] < min) {
                min = array[i];
            }
        }
        return min;

    }

    float Mid_val() {
        float mid = 1;
        for (int i = 0; i < N; i++) {
            mid = mid * array[i];
        }
        mid = pow(mid, (float)1 / N);

    }

};


int main() {
    Massive A(10);
    Massive B(12);
    A.print();
    B.print();
    Massive C = A + B;
    C.print();
    C.sort();
    C.print();
    cout << "Max val=" << C.Max_val() << endl;
    cout << "Min val=" << C.Min_val() << endl;
    cout << "Mid val=" << C.Mid_val() << endl;


    return 0;
}