class Solution {
public:
int maxArea(vector<int>& height) {
         int max = 0;int h1=0;int h2=0;int area= 0;int smallH = 0;int width = 0;int i = 0;int j = height.size()-1;
       while(i!=j) {
            h1= height.at(i);
            h2 = height.at(j);
            smallH = min(h1,h2);
            width = abs(i-j);
            area = smallH*width;
           if (area>max){
               max = area;
           }
           if (h1<h2){
               i++;
           }else{
               j--;
           }

        }
        return  max;

    }

};