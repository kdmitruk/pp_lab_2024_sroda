#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int comparator(const void *a, const void *b)
{
    const float *ia = (const float*)a;
    const float *ib = (const float*)b;
    // dla int
    // cout << *ia << " " << *ib << " " << *ia-*ib << endl;
    // return *ia-*ib;

    //dla float i double
    return *ia>*ib ? 1
                    : *ia==*ib ? 0
                    : -1;
}
int reverseComparator(const void *a, const void *b)
{
    return comparator(a, b)*(-1);
}

void c_solution() {
    float arr1[] = {1.2f, 1.3f, 1.11f, .5f};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    qsort(arr1, size, sizeof(arr1[0]), comparator);
    for_each(arr1, arr1+size, [](float x) {cout << x << endl;});
    cout << endl;
    qsort(arr1, size, sizeof(arr1[0]), reverseComparator);
    for_each(arr1, arr1+size, [](float x) {cout << x << endl;});
}

void cpp_solution() {
    float arr1[] = {1.2f, 1.3f, 1.11f, .5f};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    sort(arr1, arr1+size);
    for_each(arr1, arr1+size, [](float x) {cout << x << endl;});
    cout << endl;
    sort(arr1, arr1+size, [](float a, float b) {return a>b;});
    for_each(arr1, arr1+size, [](float x) {cout << x << endl;});
}

int main()
{
    c_solution();
    return 0;
}
