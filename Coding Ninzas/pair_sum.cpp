#include <iostream>
#include <algorithm>
using namespace std;

void merge(int *part1,int size1,int *part2,int size2,int *output,int n){
    int i=0;
    int j=0;
    int k=0; // Iterating variable for output array
    while (i<size1 && j<size2)
    {
        if (*(part1+i)<*(part2+j))
        {
            output[k++]=*(part1+(i++));
        }else{
            output[k++]=*(part2+(j++));
        }
    }
    while (i<size1)
    {
        output[k++]=part1[i++];
    }
    while (j<size2)
    {
        output[k++]=part2[j++];
    }
}
void mergeSort(int input[], int size){
	// Write your code here
    if (size==1)
    {
        return;
    }
    int *part1=new int[size/2];
    int size1=size/2;

    int *part2=new int[size-size/2];
    int size2=size-size/2;

    for (int i = 0; i < size1; i++)
    {
        *(part1+i)=input[i];
    }
    int k=0;
    for (int i = size1; i < size; i++)
    {
        *(part2+(k++))=input[i];
    }
    mergeSort(part1,size1);
    mergeSort(part2,size2);
    merge(part1,size1,part2,size2,input,size);            
}

bool checkAllSimilar(int *arr,int n){
	bool isTrue=false;
	for(int i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			isTrue=true;
			continue;
		}else{
			isTrue=false;
			break;
		}
	}
	return isTrue;

}

int pairSum(int *arr,int n,int num){
    sort(arr,arr+n);
    int startIndex=0;
    int endIndex=n-1;

    int numPairs=0;
    while(startIndex<endIndex){
        if (arr[startIndex]+arr[endIndex]<num)
        {
            startIndex++;
        }
        else if (arr[startIndex]+arr[endIndex]>num)
        {
            endIndex--;
        }        
        else{
            int elementAtStart=arr[startIndex];
            int elementAtEnd=arr[endIndex];

            if (elementAtStart == elementAtEnd)
            {
                int totalElementsFromStarttoEnd=(endIndex-startIndex)+1;
                numPairs+=(totalElementsFromStarttoEnd *(totalElementsFromStarttoEnd-1)/2);

                return numPairs;
            }
            
            int tempStartIndex=startIndex+1;
            int tempEndIndex=endIndex-1;
            while (tempStartIndex<=tempEndIndex && arr[tempStartIndex]==elementAtStart)
            {
                tempStartIndex+=1;
            }

             while (tempEndIndex>=tempStartIndex && arr[tempEndIndex]==elementAtEnd)
            {
                tempEndIndex-=1;
            }

            int totalElemetsFromStart=(tempStartIndex-startIndex);
            int totalElemntsFromEnd=(endIndex-tempEndIndex);
            numPairs+=(totalElemetsFromStart*totalElemntsFromEnd);
            startIndex=tempStartIndex;
            endIndex=tempEndIndex;
            
        }
        
    }
    return numPairs;
}



int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}