#include "heap.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Heap::Heap()
{
    size=0;
}
Heap::~Heap()
{
    //dtor
}
int Heap::numberBelongs(int number)
{
    int help=1;
    while(help<=size)
    {
        if(number==tab[help])
        {
            return 1;
        }
        else help++;
    }
    return 0;
}
int Heap::heapSize()
{
    int height=(log(size)/log(2))+1;
    return height;
}
Heap Heap::operator+(Heap &myHeap)
{
    Heap temp;
    temp.size=size;
    for(int init=1;init<=size;init++)
    {
        temp.tab[init]=tab[init];
    }
    int help=1, help2=1, trigger=1;
    while(help<=myHeap.size)
    {
        while(help2<=size)
        {
            if(tab[help2]==myHeap.tab[help])
            {
                trigger=0;
                break;
            }
        }
        if(trigger==1) addNumber(myHeap.tab[help]);
        help++;
        help2=1;
        trigger=1;
    }
    Heap newHeap;
    newHeap.size=size;
    for(int init=1;init<=size;init++)
    {
        newHeap.tab[init]=tab[init];
    }
    size=temp.size;
    for(int init=1;init<=size;init++)
    {
        tab[init]=temp.tab[init];
    }
    return newHeap;
}
void Heap::operator--()
{
    size=0;
}
int Heap::operator==(Heap &myHeap)
{
    if(size!=myHeap.size) return 0;
    else
    {
        int help=1;
        while(help<=size)
        {
            if(tab[help]!=myHeap.tab[help]) return 0;
        }
        return 1;
    }
}
int Heap::operator=(Heap &myHeap)
{
    size=myHeap.size;
    for(int init=1;init<=size;init++)
    {
        tab[init]=myHeap.tab[init];
    }
    return 1;
}
int Heap::addNumber(int number)
{
    int check=1;
    while(check<=size)
    {
        if(tab[check]==number) return 0;
    }
    ++(size);
    tab[size]=number;
    int help=size, helpParent=0, temp=0;
    while(help>1)
    {
        helpParent=help/2;
        if(tab[help]<tab[helpParent])
        {
            temp=tab[helpParent];
            tab[helpParent]=tab[help];
            tab[help]=temp;
            help=helpParent;
        }
        else return 1;
    }
    return 1;
}
Heap Heap::operator-(Heap &myHeap)
{
    Heap newHeap;
    int help=1, help2=1;
    while(help<=size)
    {
        while(help2<=myHeap.size)
        {
            if(tab[help]==myHeap.tab[help2])
            {
                ++(newHeap.size);
                newHeap.tab[newHeap.size]=tab[help];
            }
        }
        help++;
        help2=1;
    }
    return newHeap;
}
int Heap::deleteNumber(int number)
{
    if(size==0) return 0;
    else
    {
        int temp=1;
        while(temp<=size)
        {
            if(tab[temp]==number)
            {
                if(temp==size)
                {
                    size--;
                    return 1;
                }
                else
                {
                    tab[temp]=tab[size];
                    --size;
                    int child=2*temp, help=0;
                    while((child+1)<=size)
                    {
                        if(tab[child]<tab[child+1])
                        {
                            if(tab[temp]>tab[child])
                            {
                                help=tab[temp];
                                tab[temp]=tab[child];
                                tab[child]=help;
                            }
                            else return 1;
                        }
                        else
                        {
                            if(tab[temp]>tab[child+1])
                            {
                                help=tab[temp];
                                tab[temp]=tab[child+1];
                                tab[child+1]=help;
                            }
                            else return 1;
                        }
                        temp=child;
                        child=2*temp;
                    }
                    if(child==size)
                    {
                        if(tab[child]<tab[temp])
                        {
                            help=tab[temp];
                            tab[temp]=tab[child];
                            tab[child]=help;
                        }
                    }
                    return 1;
                }
            }
            temp++;
        }
        return 0;
    }
}
Heap Heap::takeElement(int number)
{
    Heap newHeap;
    int check=1;
    while(check<=size)
    {
        if(tab[check]==number)
        {
            ++(newHeap.size);
            newHeap.tab[newHeap.size]=tab[check];
            if(check==size)
            {
                size--;
                return newHeap;
            }
            else
            {
                tab[check]=tab[size];
                --size;
                int child=2*check, help=0;
                while((child+1)<=size)
                {
                    if(tab[child]<tab[child+1])
                    {
                        if(tab[check]>tab[child])
                        {
                            help=tab[check];
                            tab[check]=tab[child];
                            tab[child]=help;
                        }
                        else return newHeap;
                    }
                    else
                    {
                        if(tab[check]>tab[child+1])
                        {
                            help=tab[check];
                            tab[check]=tab[child+1];
                            tab[child+1]=help;
                        }
                        else return newHeap;
                    }
                    check=child;
                    child=2*check;
                }
                if(child==size)
                {
                    if(tab[child]<tab[check])
                    {
                        help=tab[check];
                        tab[check]=tab[child];
                        tab[child]=help;
                    }
                }
                return newHeap;
            }
        }
    }
    return newHeap;
}
int Heap::deleteNode(int number)
{
    if(size==0) return 0;
    else
    {
        if((number>=1)&(number<=size))
        {
            if(number==size)
            {
                size--;
                return 1;
            }
            else
            {
                tab[number]=tab[size];
                --size;
                int child=2*number, help=0;
                while((child+1)<=size)
                {
                    if(tab[child]<tab[child+1])
                    {
                        if(tab[number]>tab[child])
                        {
                            help=tab[number];
                            tab[number]=tab[child];
                            tab[child]=help;
                        }
                        else return 1;
                    }
                    else
                    {
                        if(tab[number]>tab[child+1])
                        {
                            help=tab[number];
                            tab[number]=tab[child+1];
                            tab[child+1]=help;
                        }
                        else return 1;
                    }
                    number=child;
                    child=2*number;
                }
                if(child==size)
                {
                    if(tab[child]<tab[number])
                    {
                        help=tab[number];
                        tab[number]=tab[child];
                        tab[child]=help;
                    }
                }
                return 1;
            }
        }
        return 0;
    }
}
int Heap::operator>>(int number)
{
    return tab[number];
}

