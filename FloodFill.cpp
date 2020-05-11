//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/
class Solution {
public:
    void floodFill(vector<vector<int>>& image, int sr, int sc, int newColor, int color, int x, int y)
    {
        if (sr < 0 || sr >= x || sc < 0 || sc >= y)
            return ;
        if (newColor == color)
            return;
        if (image[sr][sc] != color)
            return;
        image[sr][sc] = newColor;
        floodFill(image, sr + 1, sc, newColor, color, x, y);
        floodFill(image, sr - 1, sc, newColor, color, x, y);
        floodFill(image, sr, sc + 1, newColor, color, x, y);
        floodFill(image, sr, sc - 1, newColor, color, x, y);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        floodFill(image, sr, sc, newColor, image[sr][sc], image.size(), image[0].size());
        return image;
    }
};