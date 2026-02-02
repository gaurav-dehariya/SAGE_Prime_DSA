#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int max_rows = 2 * n - 1;

    for (int i = 1; i <= max_rows; i++)
    {
        int k;
        if (i <= n)
        {
            k = i;
        }
        else
        {
            k = 2 * n - i;
        }

        // Print left side
        int val = i;
        for (int j = 0; j < k; j++)
        {
            cout << val << " ";
            val = 2 * n - val;
        }

        // Print spaces
        for (int j = 0; j < (2 * n - 1 - 2 * k); j++)
        {
            cout << "  ";
        }

        // Print right side
        val = 2 * n - i;
        int right_count;
        if (i == n)
        {
            right_count = k - 1;
        }
        else
        {
            right_count = k;
        }
        for (int j = 0; j < right_count; j++)
        {
            cout << val << " ";
            val = 2 * n - val;
        }

        cout << endl;
    }
    return 0;
}