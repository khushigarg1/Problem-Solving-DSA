// #include <iostream>
// #include <iomanip>
// #include <vector>
// #include <cmath>
// #include <algorithm>

// using namespace std;

// struct Point
// {
//     double x, y;
// };

// void calculateFoldedCorners(int area, const vector<int> &foldingLine)
// {
//     double x1 = foldingLine[0], y1 = foldingLine[1];
//     double x2 = foldingLine[2], y2 = foldingLine[3];

//     vector<Point> corners;
//     corners.push_back({0.00, 0.00});
//     corners.push_back({0.00, static_cast<double>(area)});
//     corners.push_back({static_cast<double>(area), static_cast<double>(area)});
//     corners.push_back({static_cast<double>(area), 0.0});

//     cout << fixed << setprecision(2);

//     for (int i = 0; i < corners.size(); ++i)
//     {
//         double x = corners[i].x - x1;
//         double y = corners[i].y - y1;

//         double rotatedX = x * (x2 - x1) / (x2 * x2 + y2 * y2) - y * (y2 - y1) / (x2 * x2 + y2 * y2) + x1;
//         double rotatedY = x * (y2 - y1) / (x2 * x2 + y2 * y2) + y * (x2 - x1) / (x2 * x2 + y2 * y2) + y1;

//         cout << rotatedX << " " << rotatedY << endl;
//     }
// }

// int main()
// {
//     int area;
//     cin >> area;

//     vector<int> foldingLine(4);
//     for (int i = 0; i < 4; ++i)
//     {
//         cin >> foldingLine[i];
//     }

//     calculateFoldedCorners(area, foldingLine);

//     return 0;
// }
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point
{
    double x, y;
};

// Function to perform a 180-degree rotation of a square
void rotateSquare(double x1, double y1, double x2, double y2)
{
    // Calculate the midpoint of the square
    double midX = (x1 + x2) / 2.0;
    double midY = (y1 + y2) / 2.0;

    // Calculate the coordinates of the other two corners after rotation
    double newX1 = 2 * midX - x1;
    double newY1 = 2 * midY - y1;
    double newX2 = 2 * midX - x2;
    double newY2 = 2 * midY - y2;

    // Display the coordinates of the rotated square
    cout << fixed << setprecision(2);
    cout << newX1 << " " << newY1 << endl;
    cout << newX2 << " " << newY2 << endl;
}

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    rotateSquare(x1, y1, x2, y2);

    return 0;
}
