#include <iostream>
#include <string.h>
using namespace std;
int max_digit(int n)
{
	int max, a;
	max=n%10;
	while(n>0)
	{
		if(max<n%10){
			max=n%10;
		}
			n=n/10;
	}
	return max;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* 上方C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
