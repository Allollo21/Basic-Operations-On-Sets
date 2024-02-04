#include <iostream>
using namespace std;

int main()
{
    int n1, n2, choice;
    char another;
    bool flag = true;
    cout << "Enter Number Of Elements In Set (A): ";
    cin >> n1;
    cout << "Enter Number Of Elements In Set (B): ";
    cin >> n2;
    int A[n1], B[n2];

    for (int i = 0; i < n1; i++)
    {
        cout << "Enter The Value Of Element[" << i + 1 << "] in Set (A): ";
        cin >> A[i];
    }

    cout << endl;

    for (int i = 0; i < n2; i++)
    {
        cout << "Enter The Value Of Element[" << i + 1 << "] in Set (B): ";
        cin >> B[i];
    }

    do
    {
        cout << endl;
        cout << "Enter the Number of Your Operation:\n"
             << "[1]A U B\n"
             << "[2]B n A\n"
             << "[3]A - B\n"
             << "[4]B - A\n"
             << "--> ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << "A U B = {";

            for (int i = 0; i < n1; i++)
            {
                cout << A[i] << " ";
            }

            for (int i = 0; i < n2; i++)
            {
                flag = true;
                for (int j = 0; j < n1; j++)
                {
                    if (B[i] == A[j])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    cout << B[i] << " ";
                }
            }

            cout << "}";
            break;

        case 2:

            cout << "A n B = { ";

            for (int i = 0; i < n1; i++)
            {
                for (int j = 0; j < n2; j++)
                {
                    if (B[j] == A[i])
                    {
                        cout << A[i] << " ";
                    }
                }
            }

            cout << "}";
            break;

        case 3:

            cout << "A-B = {";

            for (int i = 0; i < n1; i++)
            {
                for (int j = 0; j < n2; j++)
                {
                    if (A[i] == B[j])
                    {
                        flag = false;
                        break;
                    }
                    else
                        flag = true;
                }
                if (flag)
                {
                    cout << A[i] << " ";
                }
            }

            cout << "}";
            break;

        case 4:

            cout << "B-A = {";

            for (int i = 0; i < n2; i++)
            {
                for (int j = 0; j < n1; j++)
                {
                    if (B[i] == A[j])
                    {
                        flag = false;
                        break;
                    }
                    else
                        flag = true;
                }
                if (flag)
                {
                    cout << B[i] << " ";
                }
            }

            cout << "}";
            break;
        }

        cout << endl;
        cout << "Another Operation? (Y/N) \n--> ";
        cin >> another;
    }
    while (another == 'y' || another == 'Y');
}
