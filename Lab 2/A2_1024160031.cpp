#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&a,int x){
    int l=0,h=a.size()-1;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]==x)return m;
        else if(a[m]<x)l=m+1;
        else h=m-1;
    }
    return -1;
}

void bubbleSort(vector<int>&a){
    for(int i=0;i<a.size()-1;i++){
        for(int j=0;j<a.size()-i-1;j++){
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
        }
    }
}

int missingLinear(vector<int>&a,int n){
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(a[i]!=i+1)return i+1;
    }
    return n;
}

int missingBinary(vector<int>&a,int n){
    int l=0,h=n-2;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]==m+1)l=m+1;
        else h=m-1;
    }
    return l+1;
}

string concat(string a,string b){return a+b;}
string revStr(string s){reverse(s.begin(),s.end());return s;}
string delVowels(string s){
    string r="";
    for(char c:s)if(string("aeiouAEIOU").find(c)==string::npos)r+=c;
    return r;
}
void sortStrings(vector<string>&a){sort(a.begin(),a.end());}
char toLower(char c){if(c>='A'&&c<='Z')return c+32;return c;}

vector<int> countInversions(vector<int>&a){
    int c=0;
    for(int i=0;i<a.size();i++)for(int j=i+1;j<a.size();j++)if(a[i]>a[j])c++;
    return {c};
}

int distinctCount(vector<int>&a){
    set<int>s(a.begin(),a.end());
    return s.size();
}

int main(){
    vector<int>a={11,22,25,34,64,90};
    cout<<binarySearch(a,25)<<endl;
    vector<int>b={64,34,25,12,22,11,90};
    bubbleSort(b);
    for(int x:b)cout<<x<<" ";cout<<endl;
    vector<int>c={1,2,3,5};
    cout<<missingLinear(c,5)<<endl;
    cout<<missingBinary(c,5)<<endl;
    cout<<concat("hello","world")<<endl;
    cout<<revStr("tailor")<<endl;
    cout<<delVowels("tailoring")<<endl;
    vector<string>d={"cat","apple","ball"};
    sortStrings(d);for(auto&s:d)cout<<s<<" ";cout<<endl;
    cout<<toLower('H')<<endl;
    vector<int>e={2,4,1,3,5};
    cout<<countInversions(e)[0]<<endl;
    vector<int>f={1,2,2,3,4,4,5};
    cout<<distinctCount(f)<<endl;
}
