#include "heap.hpp"
#include <iostream>
#include <cmath>

using namespace std;

bool testAddingElement()
{
    Heap myHeap;
    myHeap.addNumber(1);
    myHeap.addNumber(5);
    myHeap.addNumber(4);
    myHeap.addNumber(4);
    myHeap.addNumber(6);
    myHeap.addNumber(3);
    if(((myHeap>>1)==1)&&((myHeap>>2)==3)&&((myHeap>>3)==4)&&((myHeap>>4)==6)&&((myHeap>>5)==5)) return true;
    else return false;
}
bool testRemovingElement()
{
    Heap myHeap;
    myHeap.addNumber(1);
    myHeap.addNumber(5);
    myHeap.addNumber(4);
    myHeap.addNumber(4);
    myHeap.addNumber(6);
    myHeap.addNumber(3);
    myHeap.deleteNumber(3);
    if(((myHeap>>1)==1)&&((myHeap>>2)==5)&&((myHeap>>3)==4)&&((myHeap>>4)==6)) return true;
    else return false;
}
bool testTakingElement()
{
    Heap myHeap;
    myHeap.addNumber(1);
    myHeap.addNumber(5);
    myHeap.addNumber(4);
    myHeap.addNumber(4);
    myHeap.addNumber(6);
    myHeap.addNumber(3);
    Heap newHeap=myHeap.takeElement(1);
    if(((myHeap>>1)==3)&&((myHeap>>2)==5)&&((myHeap>>3)==4)&&((myHeap>>4)==6)&&((newHeap>>1)==1)) return true;
    else return false;
}
bool testAddingHeaps()
{
    Heap myHeap;
    myHeap.addNumber(1);
    myHeap.addNumber(5);
    myHeap.addNumber(4);
    myHeap.addNumber(4);
    myHeap.addNumber(6);
    myHeap.addNumber(3);
    Heap myHeap2;
    myHeap2.addNumber(9);
    myHeap2.addNumber(5);
    myHeap2.addNumber(2);
    myHeap2.addNumber(7);
    Heap newHeap=myHeap+myHeap2;
    if(((newHeap>>1)==1)&&((newHeap>>2)==3)&&((newHeap>>3)==2)&&((newHeap>>4)==6)&&((newHeap>>5)==5)&&((newHeap>>6)==4)&&((newHeap>>7)==7)&&((newHeap>>8)==9)) return true;
    else return false;
}
bool testSubtractingHeaps()
{
    Heap myHeap;
    myHeap.addNumber(1);
    myHeap.addNumber(5);
    myHeap.addNumber(4);
    myHeap.addNumber(4);
    myHeap.addNumber(6);
    myHeap.addNumber(3);
    Heap myHeap2;
    myHeap2.addNumber(9);
    myHeap2.addNumber(5);
    myHeap2.addNumber(2);
    myHeap2.addNumber(7);
    Heap newHeap=myHeap-myHeap2;
    if(((newHeap>>1)==5)) return true;
    else return false;
}
bool testCopyingObject()
{
    Heap myHeap;
    myHeap.addNumber(1);
    myHeap.addNumber(5);
    myHeap.addNumber(4);
    myHeap.addNumber(4);
    myHeap.addNumber(6);
    myHeap.addNumber(3);
    Heap newHeap;
    newHeap=myHeap;
    if(((newHeap>>1)==1)&&((newHeap>>2)==3)&&((newHeap>>3)==4)&&((newHeap>>4)==6)&&((newHeap>>5)==5)&&(newHeap.heapSize()==5)) return true;
    else return false;
}
bool testHeapSize()
{
    Heap myHeap;
    myHeap.addNumber(1);
    myHeap.addNumber(5);
    myHeap.addNumber(4);
    myHeap.addNumber(4);
    myHeap.addNumber(6);
    myHeap.addNumber(3);
    if(myHeap.heapSize()==5) return true;
    else return false;
}
bool testComparingHeaps()
{
    Heap myHeap;
    myHeap.addNumber(1);
    myHeap.addNumber(5);
    myHeap.addNumber(4);
    myHeap.addNumber(4);
    myHeap.addNumber(6);
    myHeap.addNumber(3);
    Heap myHeap2;
    myHeap2.addNumber(1);
    myHeap2.addNumber(5);
    myHeap2.addNumber(4);
    myHeap2.addNumber(6);
    myHeap2.addNumber(7);
    if(myHeap==myHeap2) return false;
    else return true;
}
bool testElementBelongs()
{
    Heap myHeap;
    myHeap.addNumber(1);
    myHeap.addNumber(5);
    myHeap.addNumber(4);
    myHeap.addNumber(4);
    myHeap.addNumber(6);
    myHeap.addNumber(3);
    if(myHeap.numberBelongs(4)) return true;
    else return false;
}
bool testRemovingObject()
{
    Heap myHeap;
    myHeap.addNumber(1);
    myHeap.addNumber(5);
    myHeap.addNumber(4);
    myHeap.addNumber(4);
    myHeap.addNumber(6);
    myHeap.addNumber(3);
    --myHeap;
    if(myHeap.heapSize()==0) return true;
    else return false;
}
bool testRemovingNode()
{
    Heap myHeap;
    myHeap.addNumber(1);
    myHeap.addNumber(5);
    myHeap.addNumber(4);
    myHeap.addNumber(4);
    myHeap.addNumber(6);
    myHeap.addNumber(3);
    myHeap.deleteNode(1);
    if(((myHeap>>1)==3)&&((myHeap>>2)==5)&&((myHeap>>3)==4)&&((myHeap>>4)==6)) return true;
    else return false;
}
int main()
{
    testAddingElement();
    testRemovingElement();
    testTakingElement();
    testAddingHeaps();
    testSubtractingHeaps();
    testCopyingObject();
    testHeapSize();
    testComparingHeaps();
    testElementBelongs();
    testRemovingObject();
    testRemovingNode();
    return 0;
}
