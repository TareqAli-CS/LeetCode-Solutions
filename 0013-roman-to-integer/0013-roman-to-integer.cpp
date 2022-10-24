class Solution {
public:
    int romanToInt(string s) {
       int sum=0;
	char sy;
	int I=1,V=5,X=10,L=50,C=100,D=500,M=1000;
	
	for(int i=0;i<s.size();i++)
	{
		sy=s[i];
		if(sy=='I' && s[i+1]=='V' ||sy=='I'&&  s[i+1]=='X')
		{
			sum=sum-I;
		}
		
		else if(sy=='I' )
		{
			sum=sum+I;
		}
		
		
		else if(sy=='V')
	{
			sum=sum+V;
	}
		
		
		else if(sy=='X' && s[i+1]=='L' || sy=='X' && s[i+1]=='C')
		{
		
			sum=sum-X;
			
		}
		
		else if(sy=='X' )
		{
			sum=sum+X;
		}
		
		
		
		else if(sy=='L' )
		{
			
		
		sum=sum+L;
		}
		
		else if(sy=='C' && s[i+1]=='D' ||sy=='C'&& s[i+1]=='M')
		{
			
		
		sum=sum-C;
		}
		
		
	 	else if(sy=='C' )
	 	{
	 		
	 	
		sum=sum+C;
		}
		
		
		
		else if(sy=='D')
		{
			
		
		sum=sum+D;
		}
		
		
		
		else if(sy=='M' )
		{
		
			sum=sum+M;
		}
		
				
	}
        return sum;
    }
};