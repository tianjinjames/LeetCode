// C++ program to count number of substrings with 
// exactly k distinct characters in a given string 
#include<bits/stdc++.h> 
using namespace std; 

// Function to count number of substrings with exactly k unique characters 
int countkDist(string input, int k) 
{
    int res = 0;
    for(int i = 0; i < input.size(); i++){
        unordered_set<char> countSet;
        string temp;
        for(int j = i; j < input.size(); j++){
            countSet.insert(input[j]);
            temp += input[i] + "";
            if(countSet.size() == k)
                res++;
            if(countSet.size() > k)
                j = input.size();
        }
    }
    
    return res;
}

// Driver Program 
int main() 
{ 
	string str = "abcbaa"; 
	int k = 3; 
	cout << "Total substrings with exactly "
		<< k <<" distinct characters :"
		<< countkDist(str, k) << endl; 
	return 0; 
} 
