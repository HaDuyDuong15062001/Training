#include <iostream>
#define MAX 200
using namespace std;

int matrix[MAX][MAX];
int count[MAX][2];
int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
int n, m, r, c, k, cnt;
int T, tc, ans;

int main()
{
    freopen("D:/Training/bai1_15082023/input.txt", "r", stdin);
    cin >> T;
    for (tc = 1; tc <= T; ++tc)
    {
        ans = 0, cnt = 0;
        cin >> n >> m >> k;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> matrix[i][j];
            }
        }
        // for (int i = 0; i < k; ++i)
        // {
        //     for (int j = 0; j < 2; ++j)
        //     {
        //         cin >> count[i][j];
        //     }
        // }
        while (cnt < k)
        {
            cin >> r >> c;
            // r = count[cnt][0];
            // c = count[cnt][1];
            matrix[r][c] = 0;
            for (int j = 0; j < 8; ++j)
            {
                if (r + dx[j] >= 0 && r + dx[j] < n && c + dy[j] >= 0 && c + dy[j] < m)
                {
                    matrix[r + dx[j]][c + dy[j]] = 0;
                }
            }

            if (cnt % 5 == 4 )
            {
                for (int i = 0; i < n; ++i)
                {
                    for (int j = 0; j < m; ++j)
                    {
                        if (matrix[i][j] != 0 && matrix[i][j] < 10)
                            matrix[i][j]++;
                        
                    }
                }
                for (int i = 0; i < n; ++i)
                {
                    for (int j = 0; j < m; ++j)
                    {
                        if (matrix[i][j] == 10)
                        {
                            for (int l = 0; l < 8; ++l)
                            {
                                int row = i + dx[l];
                                int col = j + dy[l];
                                if (l % 2 == 0 && row >= 0 && row < n && col >= 0 && col < m && matrix[row][col] == 0)
                                    matrix[row][col]++;
                            }
                        }
                    }
                }
            }
            cnt++;
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (matrix[i][j] != 0)
                    ans++;    
            }
           
        }
        cout << "#" << tc << " " << ans << endl;
    }
    return 0;
}