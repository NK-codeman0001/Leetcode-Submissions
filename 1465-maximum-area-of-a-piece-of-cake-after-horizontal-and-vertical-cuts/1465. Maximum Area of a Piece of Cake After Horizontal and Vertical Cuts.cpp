class Solution {
public:
//     int maxh(vector <int> arrh,int h){
//         int mh=1;
//         int arr[h+1];
//         int len = arrh.size();
//         for(int i=0;i<=h;i++)
//             arr[i]=0;
//         for(int i=0;i<len;i++)
//             arr[arrh[i]]=1;
//         cout<<" jjjjj ";
//         for(int i=0;i<=h;i++)
//             cout<<arr[i]<<" ";
        
//         int gap=0;
//         int bit=0;
        
//         for(int i=0;i<=h;i++){
//               if(arr[i]&&bit) 
//                 gap++;
//             else
//             {
//                 gap=0;
//                 bit=!bit;
//             }
            
//             if(gap>mh)
//                  mh=gap;
//         }
//         cout<<" mh="<<mh;
//         return mh;
//     }
//     int maxv(vector <int> arrv,int w){
//         int mv=1;
//         int arr[w+1];
        
//         for(int i=0;i<=w;i++)
//             arr[i]=0;
//         int len = arrv.size();
//         for(int i=0;i<len;i++)
//             arr[arrv[i]]=1;
        
//         for(int i=0;i<=w;i++)
//             cout<<arr[i]<<" ";
        
//         int gap=0;
//         for(int i=0;i<=w;i++){
//             if(arr[i]==0) 
//                 gap++;
//             else
//                 gap=0;
            
//             if(gap>mv)
//                  mv=gap;
//         }
//         cout<<" mv="<<mv;
//         return mv;
//     }
    int gap(vector <int> arr){
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int maxg=0;
        for(int i=0;i<n-1;i++)
            if(maxg<arr[i+1]-arr[i])
                maxg=arr[i+1]-arr[i];
        return maxg;
    }
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        return gap(horizontalCuts) * gap(verticalCuts);
        //return maxv(verticalCuts,w)*maxh(horizontalCuts,h);
    }
};