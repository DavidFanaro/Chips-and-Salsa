#include <iostream>
#include <iomanip>

using namespace std;

int getTotal(int array[], int elementCount)
{
    int i = 0;
    for (int j = 0; j < elementCount; j++)
    {
        i += array[j];
    }
    return i;
}
int getLargest(int array[], int elementCount)
{
    int i = 0;

    for (int j = 1; j < elementCount; j++)
    {
        if (array[j] > array[i])
            i = j;
    }
    return i;
}
int getSmallest(int array[], int elementCount)
{
    int i = 0;

    for (int j = 1; j < elementCount; j++)
    {
        if (array[j] < array[i])
            i = j;
    }
    return i;
}

int main(int argc, char const *argv[])
{
    const int arraySize = 5;
    int sales[arraySize];
    string name[arraySize] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};

    int totalJars;
    int highSales;
    int lowSales;

    for (int i = 0; i < arraySize; i++)
    {
        cout << "Jar sold last month of " << name[i] << ": ";
        cin >> sales[i];
        while (sales[i] < 0)
        {
            cout << "Jars sold must not be zero. Try Again.";
            cin >> sales[i];
        }
    }

    totalJars = getTotal(sales, arraySize);
    lowSales = getSmallest(sales, arraySize);
    highSales = getLargest(sales, arraySize);

    cout << endl
         << endl;
    cout << "     Salsa Sales Report " << endl << endl;
    cout << "Name              Jars Sold " << endl;
    cout << "____________________________" << endl;

    cout << name[0] << "                  " << sales[0] << endl;
    cout << name[1] << "                " << sales[1] << endl;
    cout << name[2] << "                 " << sales[2] << endl;
    cout << name[3] << "                   " << sales[3] << endl;
    cout << name[4] << "                 " << sales[4] << endl;

    cout << "\nTotal Sales:" << setw(15) << totalJars << endl;
    cout << "High Seller: " << name[highSales] << endl;
    cout << "Low Seller : " << name[lowSales] << endl;

    return 0;
}
