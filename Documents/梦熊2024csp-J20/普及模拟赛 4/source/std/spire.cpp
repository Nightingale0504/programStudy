#include<bits/stdc++.h>
using namespace std;
void solve() {
	long long n,x,k;
	scanf("%lld%lld%lld",&n,&x,&k);
	priority_queue<long long,vector<long long>,greater<long long> > pq;
	int ans=-1;
	for(int i=1; i<=n; i++) {
		long long in;
		scanf("%lld",&in);
		if(k) {
			k--;
			pq.push(in);
		} else if(pq.size() && pq.top()<in) {
			x-=pq.top();
			pq.pop();
			pq.push(in);
		} else {
			x-=in;
		}
		if(x<=0 && ans==-1) ans=i-1;
	}
	if(ans==-1) ans=n;
	printf("%d\n",ans);
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) solve();
	return 0;
}
//��ô�ж��ܷ��n������ȫ�����ɵ�
//̰��->����k���˺����������ߵ��˺�һ������ߵ�k��
//ʣ�µ��˺�֮�ͼ�����S�����S>=m��ô˵��������ȫ���ɵ�������˵������ȫ���ɵ� 
//�ж���һ����ʽ 
//O(nlogn)ʱ�临�Ӷ����ж��ܷ��n������ȫ���ɵ���һ�ַ�ʽ
//����->���Ż���������һ���ж�������
//ǰmid�ָ�����ȫ�������������һ��ʼ���ж��Ե��������Ƿ���У�O(n*logn*logn) 
//�������һ��(log) 
//������ɢ����Ȼ��Ͱ��  O(nlogn)

//�������ڶ��֣�ֱ���� O(nlogn)
//priority_queue���ȶ��� �� ����
//set������ 
//multiset���� 
//O(logn) ����һ��Ԫ��
//O(1)������С/���һ��Ԫ��
//O(1)����С��������Ԫ��ɾ����
 
 
