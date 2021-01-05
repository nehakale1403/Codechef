#include <iostream> 
#include <string> 
using namespace std; 
  
int main() 
{ 
    int t, len_str;
	cin>>t;
	for(int i=0; i<t; i++){
	    string str;
	    cin>>len_str;
	    getline(cin, str);
	    
	    for(int j=0; j<str.length(); j++){
	        cout<< str.at(j);
	    }
	  
	}
	return 0; 
}

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n=Integer.parseInt(br.readLine());
		while(n--!=0){
		    int size=Integer.parseInt(br.readLine());
		    String str=br.readLine();
		    
		    String s="";
		    String ans="";
		    for(int i=0;i<size;i=i+4){
		        if((i+4)==size)
		            s=str.substring(i);
		        else
		            s=str.substring(i,i+4);
		            
		       int start=0;
		       int mid=0;
		       
		      String arr="abcdefghijklmnop";
		      int end=arr.length();
		      String a="";
		      for(int j=0;j<s.length();j++){
		          
		          if(s.charAt(j)=='0'){
		              mid=(start+end)/2;
		              a=arr.substring(start,mid);
		              end=mid;
		          }
		          else{
		              mid=(start+end)/2;
		              if(end==16)
		                  a=arr.substring(mid);
		              else
		                  a=arr.substring(mid,end);
		              start=mid;
		          }
		      }
		      ans=ans+a;
		    }
		    System.out.println(ans);
		}
	}
}