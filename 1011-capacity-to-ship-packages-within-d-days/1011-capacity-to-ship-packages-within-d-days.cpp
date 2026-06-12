class Solution {
public:
    int findDays(vector<int> &weights, int cap){
        int d = 1, load = 0;
        for(int i=0; i<weights.size(); i++){
            if(weights[i] + load > cap){
                d += 1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        //using binary search Answer
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(),0); //sum of array
        while(low<=high){
            int mid = (low+high)/2;
            int numberOfDays = findDays(weights,mid);
            if(numberOfDays <= days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};