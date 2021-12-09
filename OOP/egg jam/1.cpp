#include <iostream>
using namespace std;
class parcel
{
private:
    int weight;

protected:
    int shipping_cost;

public:
    parcel(float w) : weight(w) {}
    parcel()
    {
        cout << "Enter weight: ";
        cin >> weight;
    }
    virtual void Cal_shopping()
    {
        shipping_cost = weight * 10;
    }
};

class Box : public parcel
{
private:
    int no_of_boxes;

public:
    Box()
    {
        int flag = 0;
        while (flag != 1)
        {
            cout << "Enter number of boxes: ";
            cin >> no_of_boxes;
            if (weight >= 30 and no_of_boxes < 2)
                cout << "Not enough boxes for 30+ kg, try again\n";
            else if (weight >= 50 and no_of_boxes < 5)
                cout << "Not enough boxes for 50+ kg, try again\n";
            else
                flag = 1;
        }
    }
    void Cal_shopping()
    {
        shipping_cost = weight * 10;
        if (no_of_boxes > 3)
            shipping_cost += 30;
    }
    void display()
    {
        cout << "Final shipping cost: " << shipping_cost << endl;
    }
};

int main()
{
    Box a;
    a.Cal_shopping();
    a.display();
    return 0;
}