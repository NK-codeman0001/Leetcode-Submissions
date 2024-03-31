class Solution {
    int helper(int n){
        return 2*(n);
    }
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int k=capacity;
        int s=0;
        for(int i=0;i<plants.size();i++){
            if(k<plants[i]){
                s=helper(i+1)+s-1;
                k=capacity - plants[i]; 
            }
            else{
                k-=plants[i];
                s+=1;
            }
        }
        return s;
    }
};