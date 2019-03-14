// check how the bits operation in arithmetic shift

#include <iostream>

using namespace std;

// function for printing binary number
void printBin(int num)
{
    // create a mask
    int mask = 1<<7; //10000000, 1往左移7位, 相當於1*2^7

    for (int i=0; i<8;++i)
    {
        //num 和mask有沒有=0, 如果等於0就印0, 不然就印1
        cout << (((num & mask) ==0)? 0:1);
        //每次都要check很麻煩，所以往右轉1
        mask >>=1;//mask = 01000000
    }
    cout << endl;
}

int main()
{
    printBin(64);
    printBin(7);
    return 0;
}
