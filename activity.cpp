#include <iostream>
#include <algorithm>     
using namespace std;
// Structure represents an activity having start time and finish time. 
struct Activity 
{ 
    int start, finish; 
}; 
// This function is used for sorting activities according to finish time 
int SortProcess(Activity s1, Activity s2) 
{ 
    return (s1.finish< s2.finish); 
} 
/* 	Prints maximum number of activities that can
	be done by a single person or single machine at a time. */
void MaxActivities(Activity arr[], int n) 
{ 
    // Sort activities according to finish time 
	sort(arr, arr+n, SortProcess);
	cout<< "Following activities are selected \n"; 
    // Select the first activity
    int i = 0; 
	cout<< "(" <<arr[i].start<< ", " <<arr[i].finish << ")\n"; 
    // Consider the remaining activities from 1 to n-1 
    for (int j = 1; j < n; j++) 
    { 
    	// Select this activity if it has start time greater than or equal
    	// to the finish time of previously selected activity
      	if (arr[j].start>= arr[i].finish) 
      	{	 
			cout<< "(" <<arr[j].start<< ", "<<arr[j].finish << ") \n"; 
			i = j; 
      	} 
    } 
} 
// Driver program 
int main() 
{ 
	int N;
	cout<<"Enter the number of activities :";
    cin>>N;
	Activity arr[N];
	for(int i=0; i<=N-1; i++)
	{
		cout<<"Enter the start and end time of activity no "<<i+1<<" :\n";
		cin>>arr[i].start>>arr[i].finish;
    }
	MaxActivities(arr, N);
    return 0; 
}