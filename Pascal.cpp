class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>triangle(numRows);

        for(int i=0 ; i<numRows ; i++){
            triangle[i].resize(i+1);
            triangle[i][0] = triangle[i][i] = 1;
            
            for(int j=1 ; j<i ; j++){
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
        return triangle;
    }
};

//look like this...

basic logic first and last is 1.
from j = 1 --> j<i.
then triangle[i][j] = triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];

[
 [1],
 [1, 1],
 [1, 2, 1],
 [1, 3, 3, 1],
 [1, 4, 6, 4, 1]
]
