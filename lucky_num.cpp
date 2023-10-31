#include<iostream>
#include<vector>
#include<map>
using namespace std;
int getnum(int a){
    int sum=0;
    while(a>0){
        sum+=a%10;
        a/=10;
    }
    return sum;
}

int main(){
    map<int,int>store_high;
    map<int,int>store_low;
    int sum=0;
    for(int i=1;i<10;i++){
        int a=getnum(i);
        if(store_high.count(a)==1){
            store_high[a]++;
        }
        else {
            store_high[a]=1;
        }
        if(store_low.count(a)==1){
            store_low[a]++;
        }
        else {
            store_low[a]=1;
        }
    }
    for(map<int,int>::iterator iter=store_high.begin(),iter1=store_low.begin();iter!=store_high.end();iter++,iter1++){
        sum+=iter->second*iter1->second;
    }
    store_high.clear();
    for(int i=10;i<100;i++){
        int a=getnum(i);
        if(store_high.count(a)==1){
            store_high[a]++;
        }
        else {
            store_high[a]=1;
        }
        if(store_low.count(a)==1){
            store_low[a]++;
        }
        else {
            store_low[a]=1;
        }
    }
    for(map<int,int>::iterator iter=store_high.begin(),iter1=store_low.begin();iter!=store_high.end();iter++,iter1++){
        sum+=iter->second*iter1->second;
    }
    store_high.clear();
    for(int i=100;i<1000;i++){
        int a=getnum(i);
        if(store_high.count(a)==1){
            store_high[a]++;
        }
        else {
            store_high[a]=1;
        }
        if(store_low.count(a)==1){
            store_low[a]++;
        }
        else {
            store_low[a]=1;
        }
    }
    for(map<int,int>::iterator iter=store_high.begin(),iter1=store_low.begin();iter!=store_high.end();iter++,iter1++){
        sum+=iter->second*iter1->second;
    }
    store_high.clear();
    for(int i=1000;i<10000;i++){
        int a=getnum(i);
        if(store_high.count(a)==1){
            store_high[a]++;
        }
        else {
            store_high[a]=1;
        }
        if(store_low.count(a)==1){
            store_low[a]++;
        }
        else {
            store_low[a]=1;
        }
    }
    for(map<int,int>::iterator iter=store_high.begin(),iter1=store_low.begin();iter!=store_high.end();iter++,iter1++){
        sum+=iter->second*iter1->second;
    }
    store_high.clear();
    printf("%d",sum);
    system("pause");
    return 0;
}