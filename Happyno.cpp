Class Solution{
    public:
    set<int>st;
    // funtion for finding the number is happy or not:
    bool isHappy(int n) {
     long long rem = 0,sqr = 0;
     int a = n;
     if(n == 1) return true;
     // using while loop:
     while(n>0) 
     {
        rem = n%10;
        sqr = sqr + rem*rem;
        n = n/10;
     }
   if( st.count(a) == 1) return false;
   else{
    st.insert(a);
    return isHappy(sqr);
   }
   return false;
     }
};