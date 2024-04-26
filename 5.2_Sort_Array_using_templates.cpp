//sort the array using templates
#include<iostream>
using namespace std;


template <class T>
void sort(T arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int T=5;
	int int_array[T];
	float float_array[T];
	cout<<"Entner integer array elements:";
	for (int i = 0; i < T; i++)
	{
		cin>>int_array[i];
	}
	cout<<"Entner floating array elements:";
	for (int i = 0; i < T; i++)
	{
		cin>>float_array[i];
	}
	sort(int_array,T);
	sort(float_array, T);
	cout<<"After sorting they are :\n\t";
	for (int i = 0; i < T; i++)
	{
		cout<<int_array[i]<<", ";
	}
	cout<<endl;
	for (int i = 0; i < T; i++)
	{
		cout<<float_array[i]<<", ";
	}
	return 0;
}
