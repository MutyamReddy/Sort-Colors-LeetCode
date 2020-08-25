class Solution 
{
public:
    void sortColors(vector<int>& A)
    {
        int low=0;
        int mid=0;
        int high=A.size()-1;
        while(mid<=high)
        {
            switch(A[mid])
            {
                case 0:
                    swap(A[low++],A[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(A[mid],A[high--]);
                    break;
            }
        }
    }
};
