#include <iostream>

using namespace std;

void calcVector(float result[], const float vec1[], const float vec2[]){
    result[0] = vec1[1] * vec2[2] - vec1[2] * vec2[1];
    result[1] = vec1[2] * vec2[0] - vec1[0] * vec2[2];
    result[2] = vec1[0] * vec2[1] - vec1[1] * vec2[0];
}

int main()
{
    float result[3];
    float vec1[3] = {1, 3, 2};
    float vec2[3] = {5, 3, 9};
    calcVector(result, vec1, vec2);
    for (int i = 0; i < 3; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
