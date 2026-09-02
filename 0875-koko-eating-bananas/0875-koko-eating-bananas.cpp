class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans;

        while(low<=high)
        {
            int mid=(high+low)/2;
            long long hours=0;
            for(int pile:piles){
                hours+=ceil((double)pile/mid);
            }

            if(hours<=h)
            {
                high=mid-1;
            }

            else
            {
                low=mid+1;
            }

        }

        return low;
    }
};
/*class Solution {

    public:
    bool EatingSpeed(vector<int> piles,int n, int h){
        int i=0,c=0;
        while(i<piles.size()){
                 c += (piles[i]+n-1)/n;
             if(c>h)
            return false;

            
            i++;
        }

       

        return true;

    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int m = *std::max_element(piles.begin(), piles.end());
        int start=1,end=m,ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(EatingSpeed(piles,mid,h)){
            ans=mid;
            end=mid-1;}

            else
            start=mid+1;

        }

        return ans;
    }
};*/