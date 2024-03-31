class Solution {
public:
    string categorizeBox(long long int length,long long int width,long long int height,long long int mass) {
        bool b =false,h=false;
        long long int vol = length*width*height, f9=1000000000,f4=10000;
        
        if(length>=f4 || width>=f4 || height>= f4 || vol>=f9) b=true;
        if(mass>=100) h=true;
        if(b&&h) return "Both";
        if(b && !h) return "Bulky";
        if(!b && h) return "Heavy";
        else return "Neither";
    }
};