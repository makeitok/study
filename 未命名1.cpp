#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main(void){
//	int p=0;
//	int ch=0;
//	printf("请输入密码>>>>>");
//	char password[20]={0};
//	scanf("%s",password);
//	//\n
//	while((ch=getchar())!='\n'){
//	}
//	printf("请确认（Y/N）");
//	p=getchar();
//	if(p=='Y') 
//	printf("确认成功"); 
//	else
//	printf("确认失败");
//	return 0;
//}
//int main(void){
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof (arr)/sizeof arr[0];
//	int right=sz-1;
//	int left =0;
//	int s=0;
//	printf("請輸入(1-10)所要查找下標的數字===");
//	scanf("%d",&s);
//	while(left<=right){
//		int mid=(right+left)/2;
//    if(arr[mid]<s)
//	{
//		left=mid+1;
//	}
//	else if(arr[mid]>s){
//		right=mid-1;		
//	}else{
//		printf("找到了，下標是%d\n",mid);
//		break;
//	}
//	}
//	if(left>right){
//		printf("找不到");
//	}
//	return 0;
//}
//int main(void){
//	char arr1[]="!!!!HEllo c primer plus!!!!";
//	char arr2[]="###########################";
//	//int sz=sizeof (arr1)/size of arr[0]-2;
//	int left=0;
//	int right=strlen(arr1)-1;
//	while(right-left>=0){
//    arr2[right]=arr1[right];
//	arr2[left]=arr1[left];
//	printf("%s\n",arr2);
//	left++;
//	right--;
//	Sleep(1000);
//	system("cls");	 
//	
//}
//	return 0;
//}
//void change(int* x,int* y){
//	int o;
//	o=*x;
//    *x=*y;
//	*y=o;	
//}
//int Max(int x,int y){
//	int max;
//	if (x>y)
//	max=x;
//	else
//	max=y;
//	return max;		
//}
////int ckmx(int a,int b){return a>b?a:b;}
//int main(){
//	int a=10;
//	int b=20;
//	change(&a,&b);
//	int max=Max(a,b);
//	printf("a=%d,b=%d，max is %d",a,b,max);
//	return 0;
//} 
//int main(void){
//	int i=0;
//	for(i=100;i<=200;i++){
//		int j;
//		for(j=2;i%j!=0;j++){
//			if (j==i-1){
//			printf("%d \n",i);
//		}
//		}	
//	}	
//	return 0;
//}
//求素数100-200 
//void print(int x){
//      if(x>9){
//      	print(x/10);
//	  }
//printf("%d\n",x%10);
//} 
//int main(void){
//	int X;
//	printf("输入要逐个数打印的数=="); 
//	scanf("%d",&X);
//	print(X); 
//	return 0;
//}
 //函数的递归
//int my_string__length(char*arr){
//// 	int i=0;
//// 	for(i=0;*arr!='\0';i++){
//// 		arr++;
////	 }
//// 	return i;
//// 	
// }
//int my_string__length(char*arr){
//	if(*arr!='\0'){
//		return 1+my_string__length(arr+1);
//	}
//	else{
//		return 0;
//	}	
//}
// int main(void){
// 	char arr[1]={0};
// 	printf("string is ");
// 	scanf("%s",arr);
// 	int len =my_string__length(arr);
// 	printf("%d\n",len);
// 	return 0;
// } 
//int facl(int n){
//	int i=1;
//	int ret=1;
//	for(i=1;i<=n;i++){
//		ret=ret*i;
//	}
//	return ret;
//}
//int facl(int n){
//	if (n!=0)
//	return n*facl(n-1);
//	else
//	return 1;
//}
//int main(void){
//	int n=0;
//	scanf("%d",&n);
//	int ret=facl(n);
//	printf("%d\n",ret);
//	return 0;
//}
//int fib(int n){
//	if(n<=2)
//	return 1;
//	else 
//	return fib(n-1)+fib(n-2);
//}
//重复计算次数更多，低效 
//fib那切数列 
//int fib(int x){
//	if (x<=2)
//	return 1;
//	else{
//	int i=3,a=1,b=1,c=0;
//	for(i=3;i<=x;i++){
//		c=a+b;
//		a=b;
//		b=c;	
//	}
//	return c;
//}
//} 
//int main(void){
//	int x=0;
//	int y=0;
//	scanf("%d",&y);
//	x=fib(y);
//	printf("fib is %d\n",x);	
//	return 0;
//}
//int main(void){
//	int a;
//	int b;
//	scanf("%d %d",&a,&b);
//	int sum=a+b;
//	printf("%d",sum);
//	return 0;
//} 
//int main(void){
//    int i;
//    scanf("%d",&i);
//    int a=1,b=1,sum=0;
//    for(a=1;a<=i;a++){
//        b=b*a;
//        sum=sum+b;
//    }
//    printf("%d",sum);
//    return 0;
//}
//冒泡排序
//int main(void){
//	int arr[10]={0,3,42,434,32,323,3234,1215,123,888};
//	printf("给定10个数字，进行升序排列： \n");
//    int sz=sizeof(arr)/sizeof(arr[0]);
//	  int q=0;
//	  for(int i=0;i<=sz-1;i++){
//	  for(int q=0;q<=sz-1-i;q++){
//	  //一轮 
//	  if(arr[q]>arr[q+1]){
//		int n=0;
//		n=arr[q+1];  
//		arr[q+1]=arr[q];
//		arr[q]=n;
//	    }
//		//一轮冒泡排序 
//	}
//}
////}
//	for(int i=0;i<=sz-1;i++){
//	printf("%d \n",arr[i]);
//    }
//    printf("%p\n",arr);
//    printf("%p\n",&arr);
//    printf("%d\n",*arr);
//return 0;
//} 
//#include<stdio.h>
//int main(void){
//    bool a=false;
//	int nums[5]={5,4,3,2,1};
//	int sz;
//   int j;
//   int i;
//   int b=0;
//   sz=sizeof(nums)/sizeof(nums[0]);
//   if(1){
//   for(i=1,j=0;nums[j]<=nums[j+1]&&j<=sz-2;j++){
//       
//       if(i==sz-1){
//       a=true;
//       b=1;
//       }
//       i++;
//   }
//   for(i=1,j=0;nums[j]>=nums[j+1]&&j<=sz-2;j++){
//       
//       if(i==sz-1){
//       a=true;
//       b=1; 
//       }
//         i++;
//   }
//   }
//   printf("%d ",b);
//   return a;
//}
//指針非法訪問函數臨時使用的地址 
int* test(){
	int a=10;
	return &a;
}
int main(){
	int*p=test();
	printf("%d",*p);
	return 0;
} 

































