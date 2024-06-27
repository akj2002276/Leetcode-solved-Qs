class Solution {
    public int kthFactor(int n, int k) {
ArrayList<Integer> li=new ArrayList<>();

for(int i=1;i<=n;i++){
	if(n%i==0){
  		li.add(i);
  }
}
if(k>li.size()){
		return -1;
}
else{
		return li.get(k-1);
}
    }
}