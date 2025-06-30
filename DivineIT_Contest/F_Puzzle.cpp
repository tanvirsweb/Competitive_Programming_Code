// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<int> fence(n);
//     for (int &x : fence)
//     {
//         cin >> x;
//     }

//     int m;
//     cin >> m;
//     vector<int> orders(m);
//     for (int &x : orders)
//     {
//         cin >> x;
//     }

//     for (int color : orders)
//     {
//         int left = -1, right = -1;

//         for (int i = 0; i < n; ++i)
//         {
//             if (fence[i] == color)
//             {
//                 if (left == -1)
//                     left = i;
//                 right = i;
//             }
//         }
//         if (left != -1 && right != -1 && left != right)
//         {
//             for (int i = left; i <= right; ++i)
//                 fence[i] = color;
//         }
//     }

//     for (int x : fence)
//     {
//         cout << x << ' ';
//     }
//     cout << '\n';
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<int> fence(n);
//     for (int &x : fence)
//     {
//         cin >> x;
//     }

//     int m;
//     cin >> m;
//     vector<int> orders(m);
//     for (int &x : orders)
//     {
//         cin >> x;
//     }

//     for (int color : orders)
//     {
//         int left = -1, right = -1;

//         for (int i = 0; i < n; ++i)
//         {
//             if (fence[i] == color)
//             {
//                 if (left == -1)
//                     left = i;
//                 right = i;
//             }
//         }
//         if (left != -1 && right != -1 && left != right)
//         {
//             for (int i = left; i <= right; ++i)
//                 fence[i] = color;
//         }
//     }

//     for (int x : fence)
//     {
//         cout << x << ' ';
//     }
//     cout << '\n';
//     return 0;
// }