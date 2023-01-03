
/*
class Solution {
public:
    int compress(vector<char>& chars) {
          chars.push_back('~');
              int n=chars.size();
        vector<char>ans;
        int total=1;     
	   for(int i=1;i<n;i++)
    {
        if(chars[i]==chars[i-1]) total++;
        else
        {
            if(total==1)ans.push_back(chars[i-1]),total=1;
        
        else{
            ans.push_back(chars[i-1]);
            string str_len=to_string(total);
            for(auto i:str_len)ans.push_back((char)i);
            total=1;
        }
       }
         
    }
        chars= ans;
    return ans.size();
    }
};

*/

/*

class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansindex=0;
        int n=chars.size();
        
        while(i<n)
        {
            int j=i+1;
            while(j<n&&chars[i]==chars[j])
            {
                j++;
            }
            chars[ansindex++]=chars[i];
            int count=j-1;
            if(count>1)
            {
                string cnt=to_string(count);
                for(char ch: cnt)
                {
                    chars[ansindex++]=ch;
                }
            }
            i=j;
        }
    return ansindex;
    }
};

*/