#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int rdnum1, rdnum2, rdnum3, total = 0;

    srand(time(0));

    rdnum2 = rand() % 100;
    rdnum3 = rand() % 100;

    total = rdnum1 + rdnum2 + rdnum3;

    cout << rdnum1 << " " << rdnum2 << " " << rdnum3 << endl;

    cout << total << " " << total / 3 << endl;

    return 0;
}
