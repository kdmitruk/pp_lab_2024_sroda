#include <iostream>

using namespace std;

/*int main()
{
    int h1, h2, m1, m2;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    m1 += h1*60;
    m2 += h2*60;

    int r = abs(m2-m1);

    h1 = r/60;
    m1 = r-(h1*60);
    printf("%02d:%02d\n", h1, m1);
    return 0;
}*/
int main()
{
    int h1, m1, m2;
    scanf("%d:%d", &h1, &m1);
    m1 += h1*60;
    scanf("%d:%d", &h1, &m2);
    m2 += h1*60;
    m2 = abs(m2-m1);

    h1 = m2/60;
    m1 = m2-(h1*60);
    printf("%02d:%02d\n", h1, m1);
    return 0;
}
