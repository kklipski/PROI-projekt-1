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
    if(((newHeap>>1)==1)&&((newHeap>>2)==3)&&((newHeap>>3)==4)&&((newHeap>>4)==6)&&((newHeap>>5)==5)&&(newHeap.heapSize()==3)) return true;
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
    if(myHeap.heapSize()==3) return true;
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
    if(testAddingElement() == true)
    {
        cout<<"testAddingElement - OK!"<<endl;
    }
    else cout<<"testAddingElement - BAD!"<<endl;

    if(testRemovingElement() == true)
    {
        cout<<"testRemovingElement - OK!"<<endl;
    }
    else cout<<"testRemovingElement - BAD!"<<endl;

    if(testTakingElement() == true)
    {
        cout<<"testTakingElement - OK!"<<endl;
    }
    else cout<<"testTakingElement - BAD!"<<endl;

    if(testAddingHeaps() == true)
    {
        cout<<"testAddingHeaps - OK!"<<endl;
    }
    else cout<<"testAddingHeaps - BAD!"<<endl;

    if(testSubtractingHeaps() == true)
    {
        cout<<"testSubtractingHeaps - OK!"<<endl;
    }
    else cout<<"testSubtractingHeaps - BAD!"<<endl;

    if(testCopyingObject() == true)
    {
        cout<<"testCopyingObject - OK!"<<endl;
    }
    else cout<<"testCopyingObject - BAD!"<<endl;

    if(testHeapSize() == true)
    {
        cout<<"testHeapSize - OK!"<<endl;
    }
    else cout<<"testHeapSize - BAD!"<<endl;

    if(testComparingHeaps() == true)
    {
        cout<<"testComparingHeaps - OK!"<<endl;
    }
    else cout<<"testComparingHeaps - BAD!"<<endl;

    if(testElementBelongs() == true)
    {
        cout<<"testElementBelongs - OK!"<<endl;
    }
    else cout<<"testElementBelongs - BAD!"<<endl;

    if(testRemovingNode() == true)
    {
        cout<<"testRemovingNode - OK!"<<endl;
    }
    else cout<<"testRemovingNode - BAD!"<<endl;
    return 0;
}
