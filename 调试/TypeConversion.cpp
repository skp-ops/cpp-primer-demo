#include <iostream>

using namespace std;

int main()
{
    long arr[2] = {2, 3};
    long *ptr = arr;
    // 数组可以隐式地转换为指向首个元素地址的指针
    // 但是遇到decltype & sizeof typeid 运算符时，不会发生类型转换
    // 可以看到下面的地址都不相同
    cout << "&arr = " << &arr << endl;
    cout << "&ptr = " << &ptr << endl;
    cout << "sizeof arr = " << sizeof arr << endl;
    cout << "sizeof ptr = " << sizeof ptr << endl;
    decltype(arr) array = {3, 4};
    cout << "array[0] = " << array[0] << endl;
    // 可以正常打印3，说明decltype里的arr没有被隐式地转换为指针
}