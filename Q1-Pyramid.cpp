#include <iostream>

using namespace std;

class First
{
protected:
    int i;
    int j;

public:
    First()
    {
        i = 0;
        j = 0;

    }

};


class Second
{

private:
    int rows;

protected:
    int s;

public:
    Second()
    {
        s = 0;
        rows = 0;

    }

    void setRows(const int r)
    {
        rows = r;
    }

    int getRows() const
    {
        return rows;
    }

};


class Pyramid : public First, public Second
{

public:
    void showPyramid()
    {
        cout << endl << endl;
        int n;

        cout << "Enter Number of Rows in Pyramid : ";
        cin >> n;
        while (n <= 0)
        {
            cout << "Invalid Rows...!!"<<endl;
            cout << "Enter Number of Rows in Pyramid [a positive number] : ";
            cin >> n;
        }

        setRows(n);
        cout << endl;


        for (i = 1; i <= getRows(); i++)
        {
            for (s = i; s < getRows(); s++)
            {
                cout << " ";
            }
            for (j = 1; j <= (2 * i) - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

};


//Main Function
int main()
{
    Pyramid P;
    P.showPyramid();


    return 0;
}