#ifndef HEAP_HPP
#define HEAP_HPP
#include <iostream>
#define N 5000

using std::string;


class Heap{
    public:
        Heap();
        ~Heap();
        int numberBelongs(int number);
        int operator==(Heap &myHeap);
        int heapSize();
        int operator=(Heap &myHeap);            //kopiowanie obiektu
        Heap operator-(Heap &myHeap);
        Heap operator+(Heap &myHeap);
        int addNumber(int number);
        int deleteNumber(int number);
        void operator--();                      //usuwanie obiektu
        Heap takeElement(int number);
        int deleteNode(int number);
        int operator>>(int number);             //dostep do elementu
    private:
        int tab[N];
        int size;
};

#endif // HEAP_HPP
