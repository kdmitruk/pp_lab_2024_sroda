#include <iostream>


using namespace std;

bool pom(float value, float min, float max)
{
    return (value>=min && value<max);
}

float* zad4(const float arr[], int size, float min, float max, int* n_out)
{
    *n_out = 0;
    int j = 0;
    for (int i=0; i<size; i++)
    {
        if (pom(arr[i], min, max))
        {
            (*n_out)++;
        }
    }
    float *result = new float[*n_out];
    for (int i=0; i<size; i++)
    {
        if (pom(arr[i], min, max))
        {
            result[j] = arr[i];
            j++;
        }
    }
    return result;
}

int main()
{
    const float arr[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    float min = 3;
    float max = 8;
    int n_out;
    float *result = zad4(arr, size, min, max, &n_out);
    for (int i=0; i<n_out; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
