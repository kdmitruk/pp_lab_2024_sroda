#include <iostream>
#include <cstring>

struct p {
    int age;
    char *name;
    p(int age, const char* name){
        this->age=age;
        this->name=new char[std::strlen(name)+1];
        strcpy(this->name, name);
    }
    // p(const p& p){
    //     age=p.age;
    //     if (p.name) {
    //         name = new char[strlen(p.name) + 1];
    //         strcpy(name, p.name);
    //     } else {
    //         name = nullptr;
    //     }
    // }
    void print(){
        std::cout<<name<<' '<<age<<std::endl;
    }
    ~p(){
        delete [] name;
    }
};


int main() {
    // Tworzenie obiektu statycznego
    p p1(25, "Alice");
    //std::cout << "Original p1: ";
    //p1.print();

    p p2 = p1;

    p1.age = 26;
    p1.name[0] = 'B';

    p1.print();
    p2.print();




/*
    // Tworzenie głębokiej kopii obiektu statycznego
    p p2 = p1;
    std::cout << "Copied p2: ";
    p2.print();

    // Tworzenie dynamicznego obiektu struktury p
    p* p3 = new p(30, "Bob");
    std::cout << "Original p3: ";
    p3->print();

    // Tworzenie głębokiej kopii dynamicznego obiektu
    p* p4 = new p(*p3);
    std::cout << "Copied p4: ";
    p4->print();

    // Usuwanie dynamicznych obiektów
    delete p3;
    delete p4;
*/
    return 0;
}
