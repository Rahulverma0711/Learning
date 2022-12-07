#include <iostream>
#include <string>
#include <vector>
using namespace std;
 

#define CHAR_RANGE 128

string findLongestSubstring(string str, int n)
{
    
    vector<bool> window(CHAR_RANGE);
 
   
    int begin = 0, end = 0;
 
  
    for (int low = 0, high = 0; high < n; high++)
    {
       
        if (window[str[high]])
        {
          
            while (str[low] != str[high]) {
                window[str[low++]] = false;
            }
 
            low++;      
        }
        else {
           
            window[str[high]] = true;
 
            
            if (end - begin < high - low)
            {
                begin = low;
                end = high;
            }
        }
    }
 
  
    return str.substr(begin, end - begin + 1);
}
 
int main()
{
    string str = "abcbdbdsdfng";
    int n = str.length();
 
    string ans= findLongestSubstring(str, n);
	cout<<ans.length();
 
    return 0;
}