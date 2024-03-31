class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        int count=0;
        int s=flowerbed.size();
        if(s==1) return flowerbed[0]!=n;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0 && ((i==0 && flowerbed[i+1]!=1) || (i==s-1 && flowerbed[i-1]!=1 ))){
                count++;
                i++;
            }
            else if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]!=1) && (i==s-1 || flowerbed[i+1]!=1 )){
                flowerbed[i]==1;
                count++;
                i++;
            }
        }
        return count>=n;
    }
};