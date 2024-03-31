class Solution {
public:
    bool checkIfExist(vector<int>& a) {
         int i,n,f=0;
        n=a.size();
       unordered_map<int,int> m;
        for(i=0;i<n;i++)
            m[a[i]]++;
        for(i=0;i<n;i++)
        {
            if(m.find(0)!=m.end())
            {
                if(m[0]>1)
                {f=1;break;}
            }
        }
        m.erase(0);
        if(f==0)
        {
            for(i=0;i<n;i++)
            {
            if(m.find(2*a[i])!=m.end())
            {
                f=1;break;
            }
            }
        }
            if(f==1)
                return 1;
            else
                return 0;
    }
};