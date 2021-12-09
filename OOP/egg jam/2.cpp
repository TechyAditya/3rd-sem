#include <iostream>
using namespace std;
class TwoD
{
public:
    float x_co, y_co;
    TwoD(float x, float y) : x_co(x), y_co(y) {}
    TwoD() {}
    friend TwoD operator+(TwoD A, TwoD B)
    {
        TwoD ret;
        ret.x_co = A.x_co + B.x_co;
        ret.y_co = A.y_co + B.y_co;
        return ret;
    }
};
int main()
{
    TwoD A(3, 4), B(5, 6);
    TwoD C;
    C = A + B;
    cout << C.x_co << "x " << C.y_co << "y";
    return 0;
}