class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum=0;
        int rightsum=0;
        int maxsum=0;

        for(int i=0;i<k;i++){
            leftsum=leftsum + cardPoints[i];
            maxsum = leftsum; 
        }
        int r = cardPoints.size()-1;
        for(int j=k-1;j>=0;j--){
            leftsum = leftsum - cardPoints[j];
            rightsum = rightsum + cardPoints[r];
            r = r - 1;
            maxsum = max(maxsum, leftsum+rightsum);
        }
        return maxsum;
        
    }
};