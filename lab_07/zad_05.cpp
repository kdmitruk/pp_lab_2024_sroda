#include <iostream>
using namespace std;

#include <iostream>
bool isEven(int number){
    return !(number & 1);
}
int main() {
    std::cout<<isEven(1)<<std::endl;
    return 0;
}

