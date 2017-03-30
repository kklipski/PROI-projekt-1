#ifndef HEAP_HPP
#define HEAP_HPP
#include <iostream>

using std::string;


class Heap{
    public:
        Heap();
        ~Heap();
        int numberBelongs(int number);
        int operator==(Heap &myHeap);
        int heapSize();
        void operator=(Heap &myHeap);           //kopiowanie obiektu
        Heap operator-(Heap &myHeap);
        Heap operator+(Heap &myHeap);
        void addNumber(int number);
        void deleteNumber(int number);
        void operator!();                       //usuwanie obiektu
        Heap takeElement(int number);
        void deleteNode(int number);
        int operator>>(int number);             //dostep do elementu
    private:
        int tab[5000];
        int size;
};

#endif // HEAP_HPP
