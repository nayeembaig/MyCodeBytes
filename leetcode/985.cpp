class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        int sum, Asize = A.size();
        vector <int> v;
       
        int val, index, qsize = queries.size();
        
        for(int i = 0; i < qsize; i++)
        {
            val = queries[i][0];
            index = queries[i][1];
            sum = 0;
            A[index] += val;
            
            for(int j = 0; j < Asize; j++)
            {
                if(A[j]%2==0)
                    sum += A[j];
            }
            
            v.push_back(sum);
        }
        return v;
    }
};