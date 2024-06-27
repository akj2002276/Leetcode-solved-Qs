class Solution {
    public int kthFactor(int n, int k) {
 ArrayList<Integer> Li = new ArrayList<>();

for( int i = 1; i <= n; i++)
{
	if(n % i == 0)
  {
  	Li.add(i);
  }
}

if(k > Li.size())
{
	return -1;
}
else
{
	return Li.get(k-1);
}
    }
}