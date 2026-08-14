class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        
        int dist1=0,dist2=0;
        int n=distance.size();

        for(int i=start;i!=destination;(i=(i+1)%(n))){
            dist1+=distance[i];
        }

        for(int i=destination;i!=start;(i=(i+1)%(n))){
            dist2+=distance[i];
        }

        return min(dist1,dist2);

        
    }
};