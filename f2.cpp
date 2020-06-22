#include <bits/stdc++.h>

using namespace std;

double prefix( string exprsn ) 
{ 
    stack<double> Stack; 
  
    for (int j = exprsn.size() - 1; j >= 0; j--) 
	{ 
        
        if (exprsn[j] == ' ')
            continue;

        if (isdigit(exprsn[j])) 
            Stack.push(exprsn[j] - '0'); 
        else 
		{
        	
            double o1 = Stack.top(); 
            Stack.pop();
            
            double o2 = Stack.top(); 
            Stack.pop();
  
            switch (exprsn[j]) 
			{ 
            case '+': 
                Stack.push(o1 + o2); 
                break; 
            case '-': 
                Stack.push(o1 - o2); 
                break; 
            case '*': 
                Stack.push(o1 * o2); 
                break; 
            case '/': 
                Stack.push(o1 / o2); 
                break; 
                
            } 
            
        } 
    } 
  
    return Stack.top(); 
}

int main() {
	
    string s;
    
    while(getline(cin, s)) 
	{
        cout << prefix(s) << ' ';
    }
    
	cout << '\n';
	system("pause"); 
    return 0;
}
