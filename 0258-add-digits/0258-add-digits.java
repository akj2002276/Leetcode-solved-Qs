class Solution {
    public int addDigits(int num) { 
    if(num<10)
    {
     return num;
    }
    while(num>0)
    {
        int sum=0;
       while(num>0)
       {
          int r=num%10;
          sum=sum+r;
          num=num/10;
       }
       if(sum<10)
       {
         return sum;
       }
       else
       {
         num=sum;
       }
    }
    return num;
  }
}