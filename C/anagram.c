/**
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/anagrams-651/
**/



#include <stdio.h>
#include <string.h>
int main()
{
	int count;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		char arr[10000];
		char arr1[10000];
		scanf("%s", arr);
		scanf("\n%s", arr1);
		int arrLen = strlen(arr);
		int arr1Len = strlen(arr1);
		int str[26] = {0};
		int str1[26] = {0};
		for (int j = 0 ; j < arrLen; j++) {
			str[arr[j] - 'a'] += 1;
		}
		for (int k = 0; k < arr1Len; k++) {
			str1[arr1[k] - 'a'] += 1;
		}
		int output = 0;
		for (int l = 0; l < 26; l++) {
			output += abs (str[l] - str1[l] ) ;
		}
		printf("\n%d", output);
	}
}