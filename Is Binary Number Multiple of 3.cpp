class Solution{
public:  
    
int isDivisible(string s){
      int sum=0;
      for(int i=0;i<s.size();i++) {
          if(s[i]=='1') {sum*=2; sum++;}
          else {sum*=2;}
          sum%=3;
      }
      return (sum==0);
  }

};