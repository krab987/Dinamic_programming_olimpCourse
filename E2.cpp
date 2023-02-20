#include <iostream>

using namespace std;

int main()
{
    unsigned int n = 22, zeros = 10;;
    int  res = -1;
    //cin >> n;

    for (int i = (n / 7); i >= 0; --i) {

        int N = n - 7 * i;

        if ((N % 4) == 0) {

            for (int j = 0; j < (N / 4); ++j) {
                cout << 4;
                /*if (j == 0)
                    res = 4;
                else {
                    res = res + 4 * zeros;
                    zeros = zeros * 10;
                }*/
            }
               
            for (int j = 0; j < i; ++j) {
                cout << 7;
                /*if (j == 0)
                    res = 7;
                else {
                    res = res + 7 * zeros;
                    zeros = zeros * 10;
                }*/
            }
            //cout << res;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
