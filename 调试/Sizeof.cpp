#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int x[10];
    int *p = x;
    cout << "sizeof x:" << sizeof x << endl;
    cout << "sizeof *x:" << sizeof *x << endl;
    cout << "sizeof p:" << sizeof p << endl;
    cout << "sizeof *p:" << sizeof *p << endl; // 只计算p所指的对象类型所占用的内存空间
    vector<int> v;
    cout << "sizeof vector:" << sizeof v << endl;
}
