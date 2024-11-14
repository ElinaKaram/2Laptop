#include "Laptop.h"
#include <iostream>
using namespace std;

int main()
{
    CPU cpu("Intel", "i7-12700H");
    SSD ssd("Samsung", 512);
    VideoCard videoCard("NVIDIA", 6);
    RAM ram("Kingston", 16);
    Laptop laptop("Gaming Laptop", 1500.0, "Black", cpu, ssd, videoCard, ram);
    Laptop laptopCopy = laptop;

    cout << "Original Laptop:" << endl;
    laptop.displayInfo();

    cout << "\nCopied Laptop:" << endl;
    laptopCopy.displayInfo();

    cout << "\nTotal Laptops: " << Laptop::getLaptopCount() << endl;

    return 0;
}