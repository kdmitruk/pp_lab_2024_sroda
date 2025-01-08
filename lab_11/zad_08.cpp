#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void **chaotic_placement(void ***stairway, int chamber_count, int chamber_reach, int forbidden_chamber) {
    int chamber;
    do {
        chamber = rand() % chamber_count;
    } while (chamber == forbidden_chamber);
    int gate = rand() % (chamber_reach - 2) + 1;
    return stairway[chamber] + gate;
}

void **conjure_grim_prison(int *chamber_count, int *chamber_reach) {
    void ***stairway = new void**[*chamber_count];
    for(int i=0; i<*chamber_count; ++i) {
        void **chamber = new void*[*chamber_reach];
        std::fill(chamber, chamber + *chamber_reach, nullptr);
        stairway[i] = chamber;
    }

    for(int i=0; i<*chamber_count; ++i) {
        void **current_chamber = stairway[i];
        void **next_chamber = stairway[(i+1) % *chamber_count];
        next_chamber[0] = current_chamber;
        current_chamber[*chamber_reach - 1] = next_chamber;
    }

    void **escape = new void*[2];
    escape[0] = stairway;
    escape[1] = chamber_count;

    int origin_chamber = rand() % *chamber_count;

    void **final_gate = chaotic_placement(stairway, *chamber_count, *chamber_reach, origin_chamber);
    *final_gate = escape;

    for(int j=0; j < *chamber_count; ++j) {
        cout << stairway[j] << " --- ";
        for(int i=0; i < *chamber_reach; ++i)
            cout << setw(14) << stairway[j][i] << " ";
        cout << endl;
    }
    cout << stairway[origin_chamber];

    return stairway[origin_chamber];
}

void destroy_prison(void **origin) {
    int chamber_reach = 1;

    while(!origin[chamber_reach])
        chamber_reach++;

    void **current_chamber = origin;

    void **escape = nullptr;
    while(!escape) {
        for(int i=1; i<chamber_reach; ++i)
            if(current_chamber[i])
                escape = (void **)current_chamber[i];

        current_chamber = (void **)current_chamber[0];
    }

    void ***stairway = (void ***)escape[0];
    int *chamber_count = (int *)escape[1];

    for(int i=0; i<*chamber_count; ++i)
        delete[] stairway[i];

    delete[] stairway;
    delete[] escape;

}


int main()
{
    srand(time(0));
    int chamber_count = 5;
    int chamber_reach = 10;
    void **prison_chamber = conjure_grim_prison(&chamber_count, &chamber_reach);
    destroy_prison(prison_chamber);

    return 0;
}
