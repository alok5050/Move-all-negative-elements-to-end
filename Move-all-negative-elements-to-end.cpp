class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> pos;
        vector<int> neg;
        
        for(int num : arr) {
            if(num >=0 )
               pos.push_back(num);
            else
               neg.push_back(num);
        }
        
        int index = 0;
        for(int num : pos)
           arr[index++] = num;
        
        for(int num: neg)
           arr[index++] = num;
    }
};
