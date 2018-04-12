#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

    // passes ALL tests on that site
    // well, if you are reading this and know simpler way to do that - write me,
    // because I'm still sure that I am missing something I can simplify

    size_t n, m;
    ifstream fin;
    fin.open("input.txt");
    fin >> n >> m;
    vector<int> sums(n + 1);  // I use zero elem as a little kostyl'
    vector<int> max_in_col(m), min_in_row(n), i_max(m); // i_max keeps indexes of rows last increased sums
                                                          // (indexes are indexes of columns)
                                                          // yeah... just look there, may be you'll understand
    fill(max_in_col.begin(), max_in_col.end(), -1001);
    fill(min_in_row.begin(), min_in_row.end(), 1001);

    int a;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            fin >> a;

            if (a > max_in_col[j])
            {
                max_in_col[j] = a;
                sums[i_max[j]] = 0;
            }

            if (a < min_in_row[i])
            {
                min_in_row[i] = a;
                sums[i + 1] = 0;
            }

            if (a == max_in_col[j] && a == min_in_row[i])
            {
                i_max[j] = i + 1;
                sums[i + 1]++;
            }

        }
    }
    fin.close();

    int res = 0;
    for (auto sum : sums) res += sum;

    fstream fout;
    fout.open("output.txt", ios::out);
    fout << res;
    fout.close();

    return 0;
}

// Tests

//3 3
//0 0 0
//0 0 0
//0 0 0

//9


//3 3
//0 1 0
//1 0 1
//2 2 0

//0